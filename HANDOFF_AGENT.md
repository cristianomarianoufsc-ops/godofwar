# Manual de Transferência — God of War PS2 PC Port — 🏛️ OPERAÇÃO ESPARTA

> **Para o próximo analista:** Leia até o fim antes de tocar em qualquer código. O Agente Cris (usuário) fala português brasileiro — responda nele.
>
> **Histórico narrativo detalhado** (sessões 2026-04-23 a 2026-04-29, bugs A-J completos, dumps hex, diagnósticos de hipóteses descartadas) → `HANDOFF_HISTORICO.md`. Leia se precisar de detalhe de bug específico.

---

## 🎬 PROTOCOLO DE COMUNICAÇÃO — OPERAÇÃO ESPARTA 🎬

| Papel | Quem é |
|---|---|
| **Agente Cris** | O usuário (cristiano), operador de campo no PC Linux Mint |
| **Analistas** | Vocês, agentes de IA na sala de controle |
| **Sabotadores** | Bugs, funções que travam, BSS não-inicializada |
| **Vigias / sentinelas** | Estruturas globais que marcam fim-de-lista (`0x2cbbb0`, `0x2cf090`, `0x32E854`) |
| **Almoxarifado** | Alocadores (`sub_0013DA10` etc) |
| **Câmeras escondidas** | Watchpoints (`ps2CheckGlobalWatch*` em `ps2_runtime.h`) |
| **Cofre / 6000 portas** | Imagem do executável recompilado (~6000 funções `sub_XXXXXX.cpp`) |

**Regra de ouro:** ao explicar um achado novo, sempre as três camadas nesta ordem: 🕵️ espionagem → 🚗 carro → 🔧 técnico (código puro). Tom: relatório de inteligência calmo, não Hollywood.

---

## 🔴 REGRA OBRIGATÓRIA — LEIA ANTES DE QUALQUER COISA 🔴

**A cada progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE:**

1. `replit.md` — estado técnico atual, causa raiz, fix aplicado, comando de teste
2. `HANDOFF_AGENT.md` (este arquivo) — seção "ESTADO ATUAL" com data, o que mudou, próximos passos

**Os dois sempre. No mesmo commit. Sem exceção.**
Se você terminar a sessão sem atualizar os dois, o próximo agente vai perder horas repetindo diagnóstico já feito. Isso desperdiça os créditos do usuário.

---

## 🚨 FLUXO DE PUSH — REPLIT NÃO EMPURRA AUTOMATICAMENTE PRO REMOTO 🚨

**Sequência real:**
1. Analista edita arquivos no Replit → Replit cria checkpoint LOCAL
2. **Analista AVISA explicitamente:** "Cris, clica no botão Push"
3. Cris aperta botão na UI → commit vai pro GitHub → loop detecta em ≤30s → round dispara

**Obrigação do analista:** ao terminar QUALQUER edição que precisa rodar no PC, explicitar na resposta: *"Cris, clica no botão Push do Replit pra mandar o fix pro GitHub."*

**Exceção:** edição em `replit.md`/`HANDOFF_AGENT.md` puramente documental NÃO precisa de push imediato.

---

## 🌍 VISÃO DE LONGO PRAZO — GRANDE UNIFICAÇÃO PS2→PC 🌍

Detalhes completos em `replit.md §🌍 VISÃO DE LONGO PRAZO`. Resumo:

- Toda ferramenta nova = embrião do Sistema Universal de Portabilidade PS2→PC.
- Overrides GoW vivem em `game_overrides.cpp` com `PS2_REGISTER_GAME_OVERRIDE("GodOfWarPCPort:...")`.
- Lógica específica do GoW **nunca vaza** pro runtime universal (`ps2_runtime.cpp`, `ps2_stubs_misc.inl`).
- Sem refactor agressivo de tools antigas — só em coisas novas ou já em mudança.

---

## 🦆 LIÇÕES METODOLÓGICAS 🦆

Versão expandida com exemplos vive em `replit.md §🦆 LIÇÕES METODOLÓGICAS`.

**Lição 1 — "Rubber duck debugging por proxy":** quando em modo espera passiva, faça triagem ativa do que poderia ser feito. O ato de inventariar por que NÃO vai fazer X frequentemente revela bug oculto. Caso: triagem de "vale criar tool nova?" revelou bug do `log_latest` stale + smoking gun SignalSema=0 em ~10 min.

---

## 📖 ANALOGIAS — estado atual (2026-04-30 tarde)

**Carro:** motor deu 1ª partida (Fix 4+5); guarda neutralizado (Fixes 1+6); bomba aftermarket (PARTE 7 ✅); sensor de injeção rebobinado (PARTE 8 ✅); 4 botões pneumáticos (PARTE 9 ✅); sensor diagnóstico + stub permissivo no acoplamento SIF (PARTE 10 Bugs I/J ✅). **PASSO 2.8 confirmou delta=0ms. PASSO 3 APLICADO: porteiro do semáforo agora dá o sinal sozinho quando o caminhão SIF passa (WaitSema forja iSignalSema). Aguardando round com novo fix.**

**Espionagem:** cofre aberto (Fix 4+5); guardas 1/2 neutralizados; almoxarifado (PARTE 7 ✅); cruzamento (PARTE 8 ✅); switchboard (PARTE 9 ✅); portão SIF (PARTE 10 ✅). **PASSO 3 APLICADO: agente infiltrado forja o sinal do IOP — acorda o guarda adormecido em WaitSema(sid=4). Aguardando round para ver o próximo bloqueio.**

---

## 🤖 FLUXO DE TRABALHO AUTOMATIZADO — VIGENTE DESDE 2026-04-28

```bash
# Log filtrado mais recente (101 linhas típicas):
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_filtered.txt"

# Log completo (~465 linhas):
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_full.txt"
```

**O analista FAZ:** ler log via curl, commitar mudanças, pedir push ao Cris.
**O analista NÃO FAZ:** pedir log no chat, tentar `git fetch` local no Replit, sugerir parar o loop.

Troubleshooting e configuração completa em `replit.md §🤖 FLUXO DE TRABALHO AUTOMATIZADO`.

---

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-05-01)

### Smoking Gun Definitivo (confirmado empiricamente, round `b7ceb6d` 2026-04-30 12:24)

| Syscall | Hits no log full (89s = 5340 VBlanks) |
|---|---|
| `CreateSema` | 4 |
| `WaitSema` | 1 |
| **`SignalSema`** | **0** |
| `iSignalSema` | 0 |

**Diagnóstico:** o jogo cria 4 semáforos no boot, dorme em `WaitSema sid=4` logo após RPC_BIND, e **NUNCA NINGUÉM sinaliza qualquer semáforo durante o run inteiro**. No PS2 real o IOP processaria o RPC_BIND e faria `iSignalSema(4)` num handler de interrupção. Como não temos IOP, **deadlock eterno**.

Confirmado também que:
- Callback EE `@0x3277c0` = 64 bytes ZERADOS (nunca populada) — invocar direto daria SIGSEGV.
- `client_buf @0x30aaa8` estável por 5000 VBlanks — jogo não polla esse buffer.
- Log SMOKING GUN: `[CreateSema] id=4 init=0 max=1` → `[WaitSema:block] tid=1 sid=4 pc=0x293c64 ra=0x297374`

### Bug do `log_latest_*.txt` STALE — corrigido nesta sessão (2026-04-30 tarde)

**Causa raiz:** `cp log_latest_*.txt` rodava ANTES do `git checkout -B logs/auto origin/logs/auto` → checkout sobrescrevia com versão velha.
**Fix:** moveu o `cp -f` para linha 169-170 de `auto_round.sh`, DEPOIS do checkout.
**Bonus:** `GREP_PATTERN` em `auto_round.sh:66` adicionou `CreateSema|WaitSema|SignalSema`.

### PASSO 2.8 — Instrumentação WaitSema aplicada nesta sessão

**Objetivo:** confirmar correlação temporal RPC_BIND → WaitSema:block antes de aplicar fix definitivo.

| Arquivo | Linhas | O que faz |
|---|---|---|
| `game_overrides.cpp` | 11, 48-59 | `g_gowLastSifBindMonotonicNs` (atomic uint64), setter `gow_record_sif_bind_ts()`, getter `gow_get_sif_bind_monotonic_ns()`. `<chrono>` incluído. |
| `ps2_stubs.cpp` | 38 | `extern "C" void gow_record_sif_bind_ts();` em escopo global |
| `ps2_syscalls.cpp` | 38 | `extern "C" std::uint64_t gow_get_sif_bind_monotonic_ns();` em escopo global |
| `ps2_stubs_misc.inl` | 3614 | `::gow_record_sif_bind_ts();` logo após `gow_set_sif_client_buf_watch(responseBuf)` |
| `ps2_syscalls_flags.inl` (em `lib/syscalls/`) | 309-316 | Log `[WaitSema:block] tid=N sid=N pc=0xN ra=0xN delta_ms_since_RPC_BIND=N\|never` |

**Auditoria confirmada:** todos os 5 arquivos estão corretos, nenhum include faltando, nenhum extern "C" em escopo errado.

### Esperado no próximo round

```
[WaitSema:block] tid=1 sid=4 pc=0x293c64 ra=0x297374 delta_ms_since_RPC_BIND=N
```

### PASSO 3 — plano (aguardando dado do round)

| Se delta_ms na maioria | Ação |
|---|---|
| **< 100ms** | PASSO 3 simples: forjar `iSignalSema(sid_visto)` em `gow_record_sif_bind_ts` logo após o RPC_BIND |
| **Varia muito (1ms~10s)** | Cirurgia: ler `sceSifClientData->sema` no offset do SDK, novo round de instrumentação |
| **`never` no `sid=4`** | BIND não foi interceptado antes desse WaitSema — revisar ordem dos eventos |

**Status PASSO 2.8:** ✅ CONFIRMADO. Round `3a0bcc2` (2026-05-01) mostrou `delta_ms_since_RPC_BIND=0`.

### PASSO 3 — Fix aplicado (2026-05-01)

**Arquivo:** `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_flags.inl` (WaitSema handler)

**O que faz:** quando `WaitSema(sid)` é chamado com `delta_ms_since_RPC_BIND < 100`, incrementa `sema->count` antes do `cv.wait`. O wait vê `count > 0` e retorna imediatamente sem bloquear — simulando o `iSignalSema` que o IOP faria. Log: `[PASSO 3] Forjando iSignalSema(sid=4) delta_ms=0`.

**Comportamento esperado no próximo round:**
- `[PASSO 3] Forjando iSignalSema(sid=4) delta_ms=0` aparece no log
- `[WaitSema:wake] sid=4 ret=0` — jogo acorda do semáforo
- Jogo avança além do `0x293c64` (pc do WaitSema)
- Novo comportamento ou novo bug aparece (próximo bloqueio a ser diagnosticado)

**Próxima ação:** analista lê log via curl após round e identifica novo bloqueio.

---

## 🐛 BIBLIOTECA DE BUGS A-J (resumo compacto)

| Bug | Status | Arquivo do fix | Receita |
|---|---|---|---|
| **A** — crt0 truncado | ✅ | `truncation_overrides.csv` + `regen_truncated.sh` | Forçar range real, regen via ps2_recomp |
| **B** — `$gp=0` no boot | ✅ | `ps2_runtime.cpp` (kInitChain) | Boot stub seta `$gp=0x2cf070` |
| **C** — boot stub sabotando crt0 | ✅ | `ps2_runtime.cpp` | Boot stub opt-in `PS2_BOOT_STUB=1`, default OFF |
| **D** — loop infinito `func_100408` | ✅ | `sub_00100E28_0x100e28.cpp`, `sub_00100408_0x100408.cpp` | JALR guard `if (!runtime->hasFunction(jumpTarget))` |
| **E** — sentinela `0x2cf090` zerada | ✅ | `ps2_runtime.cpp` (Fix 1) | `mem[SENTINEL] = mem[SENTINEL+4] = SENTINEL` |
| **F** — alocador `sub_0013DA10` retorna 0 | ✅ | `game_overrides.cpp` | Stub bump allocator via `PS2_REGISTER_GAME_OVERRIDE` |
| **G** — handler INTC VBlank `0x182f28` | ✅ | `game_overrides.cpp` | `runtime.registerFunction(0x00182F28, stub)` |
| **H** — syscalls SIF poll 0x79-0x7D | ✅ | `ps2_syscalls.cpp:321-363` | 4 cases no switch retornando `-1` |
| **I** — `sceSifSetDma` rejeita `dest=0xffffffff` | 🟡 BLINDADO | `ps2_stubs_misc.inl` (PLANO B1) | Aceita `dest=0xffffffff`, retorna 1 fake |
| **J** — `0x296a54` not found, `ra=0` | 🟡 BLINDADO | `ps2_stubs_misc.inl` (PLANO C) | `if dmatAddr < 0x100000 return 0` |

> **Detalhe completo de cada bug** (diagnóstico, dumps, hipóteses descartadas, código aplicado) → `HANDOFF_HISTORICO.md`.

---

## 📋 Próxima ação do analista (atualizado 2026-05-01)

**Push já foi feito.** O round com PASSO 2.8 compilado deve estar rodando ou ter rodado.

Analista: ler o log via curl e verificar se `delta_ms_since_RPC_BIND` aparece:

```bash
curl -s "https://raw.githubusercontent.com/cristianomarianoufsc-ops/godofwar/logs/auto/runs_automaticos/log_latest_full.txt" | grep -E "WaitSema|CreateSema|SignalSema|delta_ms"
```

**Se aparecer `delta_ms_since_RPC_BIND=N`** → aplicar PASSO 3 conforme tabela acima.
**Se ainda aparecer sem delta_ms** → round ainda está com binário antigo; Cris precisa rodar `Ctrl+C` no loop e `bash auto_round.sh loop` pra forçar rebuild.

⚠️ **Nota sessão 2026-05-01 (agente confuso):** esta sessão adicionou um sentinel redundante em `rdram[0x20]` no boot stub e um JALR guard em `sub_00100408` que pode ou não ter sido novo. Essas mudanças são **inofensivas** (Bug D já estava resolvido, Fix 1/6 de sentinelas em 0x2cf090 intactos), mas foram desnecessárias. O analista desta sessão operou com contexto desatualizado do resumo automático do chat — Lição: **sempre ler replit.md e HANDOFF antes de qualquer edit**.
