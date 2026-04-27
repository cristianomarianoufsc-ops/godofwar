# Manual de Transferência — God of War PS2 PC Port — 🏛️ OPERAÇÃO ESPARTA

> **Para o próximo analista:** Este documento contém TUDO que você precisa saber para continuar a Operação Esparta. Leia até o fim antes de tocar em qualquer código. O Agente Cris (usuário) fala português brasileiro — responda nele.

---

## 🎬 PROTOCOLO DE COMUNICAÇÃO — OPERAÇÃO ESPARTA 🎬

Toda conversa com o Agente Cris segue **linguagem narrativa de espionagem/ação**.
A versão completa do protocolo (cast, regras de tom, três camadas de explicação)
está em `replit.md` — fonte da verdade. **Resumo obrigatório aqui:**

| Papel | Quem é |
|---|---|
| **Agente Cris** | O usuário (cristiano), operador de campo no PC Linux Mint |
| **Analistas** | Vocês, agentes de IA na sala de controle |
| **Sabotadores** | Bugs, funções que travam, BSS não-inicializada |
| **Vigias / sentinelas** | Estruturas globais que marcam fim-de-lista (`0x2cbbb0`, `0x2cf090`, `0x32E854`) |
| **Almoxarifado** | Alocadores (`sub_0013DA10` etc) |
| **Câmeras escondidas** | Watchpoints (`ps2CheckGlobalWatch*` em `ps2_runtime.h`) |
| **Cofre / 6000 portas** | Imagem do executável recompilado (~6000 funções `sub_XXXXXX.cpp`) |

**Regra de ouro:** ao explicar um achado novo, sempre as três camadas
nesta ordem: 🕵️ espionagem → 🚗 carro → 🔧 técnico (código puro).
Tom: relatório de inteligência calmo, não Hollywood.

---

## 🔴 REGRA OBRIGATÓRIA — LEIA ANTES DE QUALQUER COISA 🔴

**A cada progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE:**

1. `replit.md` — estado técnico atual, causa raiz, fix aplicado, comando de teste
2. `HANDOFF_AGENT.md` (este arquivo) — seção "ESTADO ATUAL" com data, o que mudou, próximos passos

**Os dois sempre. No mesmo commit. Sem exceção.**
Se você terminar a sessão sem atualizar os dois, o próximo agente vai perder horas repetindo diagnóstico já feito. Isso desperdiça os créditos do usuário.

---

## 📖 ANALOGIAS — atualize a cada sessão (estilo de chat = espionagem/ação)

O usuário pediu duas analogias paralelas pra acompanhar o progresso sem
precisar entender MIPS/syscalls/boot stub. **Tabela completa fica em
`replit.md` na seção "📖 ANALOGIAS DO PROJETO" — fonte da verdade.**
Aqui só o resumo do ponto atual; mantenha sincronizado.

**Carro (até PARTE 10):** chassi/combustível/injeção/chave de ignição prontos;
motor deu 1ª partida (Fix 4+5); engasgou (lista circular #2); braçadeira +
limitador (parte 3); sensor de vazamento (parte 4); PARTE 5: bomba de óleo
bombeando AR ZERO; PARTE 6: sensor #3 + válvula; **PARTE 7: bomba
aftermarket — Bug F resolvido**; **PARTE 8: sensor de injeção rebobinado —
Bug G resolvido (VBlank tick #1..#300, log_part9 baseline)**; **PARTE 9:
mecânico ligou os 4 botões pneumáticos da chave inglesa à fonte central —
Bug H resolvido (stub disparou 1x, Unknown syscallId=0x7a sumiu de 40k+
hits/12s pra 0, VBlank #960 = +220% vs PARTE 8, log_part9b 2026-04-27)**.
🆕 **PARTE 10 PLANO A APLICADA: o caminhão de carga entre cofre EE e
cofre IOP (SIF DMA) tentou sair 8x e a embreagem não pegou — câmera só
mostrava "tentativa falhou". Mecânico instalou um sensor diagnóstico no
acoplamento que vai gravar EXATAMENTE qual válvula travou + endereço de
origem/destino/tamanho/tipo. Não muda comportamento — só ouvinte. Próxima
rodada de teste vai expor causa raiz pro fix definitivo (PARTE 10 PLANO
B). Custo no PC: rebuild_runtime ~30s.** Depois: test drive (VIF1/DMA com
payloads válidos, GS, áudio, controle).

**Espionagem (até PARTE 10):** recrutamento, recon, entrada (Fix 5), cofre
ABERTO (Fix 4+5), 1º guarda (`0x2cbbb0`), tranquilizante + colete (parte 3);
câmera escondida (parte 4); PARTE 5: sabotador `13FAB8` flagrado; PARTE 6:
câmera #3 + Kevlar; **PARTE 7: agente duplo no almoxarifado — Bug F
resolvido**; **PARTE 8: agente de tráfego no cruzamento — Bug G resolvido
(720 piscadas)**; **PARTE 9: operador no switchboard das 4 portas
biométricas — Bug H resolvido (agente atravessou a sala na 1ª biometria,
criou 7 crachás auxiliares, chegou no portão de carga do SIF a 16s)**.
🆕 **PARTE 10 PLANO A APLICADA: o portão de carga do SIF (Sub-system
Interface entre cofres EE e IOP) tem o sensor de despacho rejeitando
silenciosamente — agente tentou despachar 8 caminhões e nenhum saiu, mas
a câmera só mostrava "tentativa falhou", não dizia QUAL válvula nem PRA
ONDE o caminhão queria ir. Mecânico do portão instalou um sensor
diagnóstico passivo (`sceSifSetDma` instrumentado) que vai gravar
EXATAMENTE qual ifguard rejeitou (`entryAddr_fora_da_RAM` /
`size_maior_que_RAM` / `canCopyGuestByteRange_rejeitou_dest_ou_src` /
`copyGuestByteRange_falhou_durante_copia`) + endereços src/dest/size/attr
completos + RA/PC do caller. Limita a 8 combinações únicas pra não
inundar. Aguardando próximo dossiê.** Depois: fuga com o alvo
(subsistemas gráficos reais, VIF1/DMA com payload, áudio, gamepad).

> Estilo de narração padrão = **espionagem/ação**. Three camadas: 🕵️
> espionagem → 🚗 carro → 🔧 técnico. Veja PROTOCOLO DE COMUNICAÇÃO acima.

---

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-04-27 PARTE 10 PLANO A CONFIRMADO — causa raiz do Bug I revelada, aguardando decisão do Agente Cris entre B1/B2/B3)

### Status: ✅ PARTE 10 PLANO A CONFIRMADO em produção (log_part10.txt 437 linhas, cancelado em VBlank #1680/28s) — câmera capturou `xfer.dest=0xffffffff` em todas as 8 falhas, `motivo='canCopyGuestByteRange_rejeitou_dest_ou_src'`. AGUARDANDO decisão entre PARTE 10 PLANO B1/B2/B3.

**🎯 Achado glorioso da câmera PARTE 10 PLANO A (linhas 379-432 do log_part10.txt):**

```
[PARTE 10 PLANO A] sceSifSetDma falhou —
  dmat=0x1fffed0 count=0x1
  idxFail=0 motivo='canCopyGuestByteRange_rejeitou_dest_ou_src'
  xfer.src=0x327880  xfer.dest=0xffffffff  xfer.size=0x14  xfer.attr=0x44
  ra=0x2969ac  pc=0x293fe4
```

E o padrão repetitivo subsequente (a cada ~5-10s):
```
xfer.src=0x20327ac0 (= 0x327ac0 + 0x20000000 = mirror KSEG1 da mesma RAM)
xfer.dest=0xffffffff
xfer.size=0x40  xfer.attr=0x44
```

**Causa raiz forte:** `xfer.dest = 0xffffffff` (sentinela U32 "-1") **NÃO é endereço de RAM** (não é IOP `0xBC...`, não é KSEG0 `0x80...`, não é scratchpad `0x70...`). É o padrão **"stage transfer" do SIF RPC** — o EE manda o pacote sem destino fixo, o IOP decodifica o header (tipicamente `RPC_BIND`/`RPC_CALL`/`RPC_END`) e decide onde gravar. O runtime atual não implementa esse modo — só valida endereço cru via `canCopyGuestByteRange` que (corretamente) rejeita `0xffffffff`.

**Estado do jogo no momento do cancelamento:**
- VBlank tick #1680 = 28 segundos rodando
- 17 semáforos criados (`CreateSema id=4..17`)
- `sceSifSetDma failed` repetindo a cada poucos segundos
- **Sem crash, sem deadlock — só loop estável de retry no canal SIF**
- Cancelamento foi OK: programa não ia descobrir nada novo, só ia continuar repetindo

**🎯 Resumo do que foi feito nesta sessão (2026-04-27 PARTE 10):**

| Item | Resultado |
|---|---|
| **PARTE 9 confirmada em produção** (log_part9b do Agente Cris, 612 linhas) | ✅ `[stub PARTE 9] syscall 0x7a primeira chamada -- retornando -1` apareceu na linha 393, `Unknown syscallId=0x7a` SUMIU (40k+ hits/12s → 0), VBlank avançou pra #960 (16s @ 60Hz, +220% vs PARTE 8), 7 novos `CreateSema id=4..10` criados, jogo entrou em território novo. **Bug H DEFINITIVAMENTE RESOLVIDO** |
| **Bug I (suspeito) detectado no log_part9b** | ✅ `sceSifSetDma failed dmat=0x1fffed0 count=0x1` repete 8x sem revelar QUAL validação falha. Função existe em `ps2_stubs_misc.inl:3261-3338`, valida descritor 16B (src/dest/size/attr) via 4 ifs (`!entry`, `size>RAM`, `canCopyGuestByteRange`, `copyGuestByteRange`) mas log não diz qual rejeitou nem mostra os endereços que o jogo mandou |
| **PARTE 10 PLANO A aplicada** em `PS2Recomp/ps2xRuntime/src/lib/stubs/ps2_stubs_misc.inl:3264-3398` | ✅ Variáveis `failIndex` (1..4) + `failReason` (string identificando ifguard) + `failXfer` (struct `Ps2SifDmaTransfer` completa) preenchidas no ponto da falha. Log detalhado via `static std::mutex` + `static std::unordered_set<uint64_t>` chaveado em `(uint64_t(dest)<<32) ^ uint32_t(src)`, máx 8 combinações únicas pra evitar inundar. Log antigo "sceSifSetDma failed dmat= count=" preservado pra contagem total |
| **Garantia de "não muda comportamento"** | ✅ Instrumentação é puramente OUVINTE: nenhum return modificado, nenhum if invertido, nenhum side-effect novo no caminho de sucesso. Quem passava continua passando, quem falhava continua falhando — a única diferença é que agora a câmera grava o motivo |
| Includes confirmados disponíveis | ✅ `<mutex>`, `<unordered_set>`, `<iostream>` já presentes via top-level `ps2_stubs.cpp` (que `#include`s os `.inl`) |
| Documentação | ✅ `replit.md` (Bug I na biblioteca de bugs A-J, analogias 1+2 atualizadas, Bug H marcado ✅ CONFIRMADO) + `HANDOFF_AGENT.md` (este arquivo) |
| Build no Replit | ⏸️ Não tentado — compilação roda só no PC do Agente Cris |
| Teste no PC | ⏸️ AGUARDANDO Agente Cris executar `rebuild_runtime.sh` (~30s) |

### 🔬 Anatomia do bug + da fix

**O que aparece no log_part9b atual** (sintoma cego):
```
sceSifSetDma failed dmat=0x1fffed0 count=0x1   ← 8x seguidas, nada mais
```

**O que a função fazia em silêncio** (`ps2_stubs_misc.inl:3261-3338`, ANTES da PARTE 10):
```cpp
sceSifSetDma(dmat, count) {
  for (i = 0; i < count; i++) {
    Ps2SifDmaTransfer xfer = leDescritor16B(dmat + i*16);  // src/dest/size/attr
    void* entry = getConstMemPtr(xfer.dest);                   // if 1
    if (!entry) return 0;
    if (xfer.size > RAM_TOTAL) return 0;                       // if 2
    if (!canCopyGuestByteRange(xfer.dest, xfer.src, xfer.size)) return 0;  // if 3
    if (!copyGuestByteRange(xfer.dest, xfer.src, xfer.size)) return 0;     // if 4
  }
  return id;
}
```

**O que a função faz AGORA com PARTE 10 PLANO A**:
```cpp
sceSifSetDma(dmat, count) {
  uint32_t failIndex = 0;
  const char* failReason = "";
  Ps2SifDmaTransfer failXfer{};
  for (i = 0; i < count; i++) {
    Ps2SifDmaTransfer xfer = leDescritor16B(...);
    void* entry = getConstMemPtr(xfer.dest);
    if (!entry)                                       { failIndex=1; failReason="entryAddr_fora_da_RAM"; failXfer=xfer; goto fail; }
    if (xfer.size > RAM_TOTAL)                        { failIndex=2; failReason="size_maior_que_RAM"; failXfer=xfer; goto fail; }
    if (!canCopyGuestByteRange(...))                  { failIndex=3; failReason="canCopyGuestByteRange_rejeitou_dest_ou_src"; failXfer=xfer; goto fail; }
    if (!copyGuestByteRange(...))                     { failIndex=4; failReason="copyGuestByteRange_falhou_durante_copia"; failXfer=xfer; goto fail; }
  }
  return id;
fail:
  // log antigo preservado
  std::cerr << "sceSifSetDma failed dmat=0x" << dmat << " count=0x" << count << "\n";
  // log novo PARTE 10 (mutex + unordered_set, máx 8 únicos)
  uint64_t key = (uint64_t(failXfer.dest) << 32) ^ uint32_t(failXfer.src);
  std::lock_guard<std::mutex> lk(s_sifDmaFailMutex);
  if (s_sifDmaFailKeys.size() < 8 && s_sifDmaFailKeys.insert(key).second) {
    std::cerr << "[PARTE 10 PLANO A] sceSifSetDma falhou — idxFail=" << failIndex
              << " motivo='" << failReason << "'"
              << " xfer.src=0x" << std::hex << failXfer.src
              << " xfer.dest=0x" << failXfer.dest
              << " xfer.size=0x" << failXfer.size
              << " xfer.attr=0x" << failXfer.attr
              << " ra=0x" << GPR_U32(ctx, 31)
              << " pc=0x" << ctx.pc << "\n";
  }
  return 0;
}
```

### 🧠 LIÇÕES TÉCNICAS DA INVESTIGAÇÃO (não esquecer — vão se repetir)

1. **Stubs SIF do runtime PS2 são ESTRITOS por padrão** — qualquer endereço fora dos 32 MB de RAM EE (IOP RAM, scratchpad EE, kernel space) é rejeitado silenciosamente. Provável que o jogo passe `xfer.dest` apontando pra IOP (0xBC000000+ ou 0x1Cxxxxxx) — nesse caso o stub PARTE 10 PLANO B vai precisar relaxar a validação ou implementar mapping IOP↔EE.
2. **Padrão "instrumentação antes do fix"** — quando uma falha é repetitiva mas o log não revela causa, NUNCA chutar o fix. Adicionar log primeiro, rodar 1 teste, depois decidir o fix. Custo: 1 ciclo de rebuild_runtime.sh (~30s) — mas economiza 1 ciclo de fix-errado + outro de revert.
3. **Mutex + `unordered_set` pra deduplicar logs em multithread** — o runtime tem worker threads VBlank/IOP/etc. Sem o mutex, 8 threads podem entrar no log simultaneamente e gerar saída entrelaçada. Sem o set, o log infla pra 100k+ linhas. Padrão `s_unknownCounts` da TODO já estabelecido — replicar.
4. **`Ps2SifDmaTransfer` no runtime tem layout 16B fixo** (linha 2615-2622): `uint32_t src; uint32_t dest; uint32_t size; uint32_t attr;`. Ordem importa pra debug — `src` é EE/IOP origem, `dest` é EE/IOP destino, `attr` carrega flags de modo (chain/normal/IRQ).

### 📋 Comando pro Agente Cris testar a PARTE 10

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash rebuild_runtime.sh                # incremental ~30s
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_part10.txt
grep -E "PARTE 10 PLANO A|sceSifSetDma|stub PARTE 9|stub:0x182f28|Unknown syscallId|VBlank tick #" log_part10.txt | head -200
wc -l log_part10.txt
```

### 🎯 Cenários esperados no log_part10.txt — **resultado real:**

| Cenário | Sinais | Próxima ação | Aconteceu? |
|---|---|---|---|
| **A — Câmera capturou** | `[PARTE 10 PLANO A] sceSifSetDma falhou — idxFail=N motivo='X' xfer.src=0x... xfer.dest=0x...` aparece 1-8x | Decifrar PARTE 10 PLANO B | ✅ **SIM** — linhas 379-432 |
| **B — Câmera silenciosa, sintoma sumiu** | — | Procurar próximo travamento | ❌ não |
| **C — Câmera silenciosa, sintoma persiste** | — | Build não pegou | ❌ não |
| **D — Inunda log mesmo com unordered_set** | — | Aumentar limite | ❌ não — só 2 chaves únicas, deduplicação funcionou |
| **E — Crash novo** | — | Investigar | ❌ não — sem crash, loop estável |

### 🟢 PARTE 10 PLANO B — opções na mesa (aguardando decisão do Agente Cris)

A câmera revelou que `xfer.dest = 0xffffffff` em todas as falhas, com `motivo='canCopyGuestByteRange_rejeitou_dest_ou_src'` (if 3 do stub). Nenhum dos endereços previstos no plano contingencial original (IOP `0xBC...`, scratchpad `0x70...`, KSEG0 `0x80...`) — é o **valor sentinela "-1"**, padrão do **SIF RPC stage transfer**: o EE manda o pacote sem destino fixo e o IOP decide pelo header (`RPC_BIND`/`RPC_CALL`/`RPC_END`).

| Opção | O que faz | Custo no PC | Risco | Quando escolher |
|---|---|---|---|---|
| **B1 — Stub permissivo** | Quando `dest==0xffffffff`, aceitar o pacote, registrar no log e retornar sucesso fake (não copia nada). Jogo continua, IOP nunca recebe | `rebuild_runtime` ~30s, ~15 linhas | Baixo. Se jogo pollar IOP esperando ACK, trava em outro lugar — **bom**, isso revela o próximo bug | Quando queremos avançar rápido pra mapear próximo travamento |
| **B2 — Implementar SIF RPC stage** | Decodificar header SIF do pacote, alocar buffer interno, copiar `src→buffer`, simular ACK do IOP corretamente | `rebuild_runtime` ~30s + 200-400 linhas novas | Médio. Exige decifrar protocolo SIF Sony (RPC_BIND/CALL/END, semáforos IOP-side) | Quando confirmamos que B1 trava cedo demais e jogo realmente precisa do IOP funcional |
| **B3 — Instrumentação extra (dump do pacote)** | Antes do log de falha, ler os 0x14 ou 0x40 bytes em `xfer.src` e dumpar em hex no stderr. Confirma se header começa com `0x80000000+rpc_id` (RPC_BIND) ou outro padrão | `rebuild_runtime` ~30s, ~10 linhas | Zero. Só observação | **PRIMEIRO** — confirma se B1 ou B2 é o caminho certo. Recomendação da central |

**Plano recomendado:** **B3 → analisar log_part10b → decidir entre B1 (atalho) ou B2 (correto).**

#### Esqueleto do PARTE 10 PLANO B3 (se Agente Cris aprovar)

Editar `PS2Recomp/ps2xRuntime/src/lib/stubs/ps2_stubs_misc.inl` dentro do bloco `if (shouldLogDetail)` (linha ~3359), adicionar **antes do `std::endl`**:

```cpp
// PARTE 10 PLANO B3 — dump dos primeiros bytes do pacote em xfer.src
// pra revelar se header é SIF RPC (RPC_BIND/CALL/END) ou outra coisa.
const uint8_t *srcPtr = getConstMemPtr(rdram, failXfer.src);
if (srcPtr && failXfer.size > 0) {
    const uint32_t dumpBytes = std::min<uint32_t>(failXfer.size, 64u);
    std::cerr << "  [PARTE 10 PLANO B3] xfer.src dump (primeiros "
              << std::dec << dumpBytes << " bytes):\n  ";
    for (uint32_t k = 0; k < dumpBytes; ++k) {
        std::cerr << std::hex << std::setw(2) << std::setfill('0')
                  << static_cast<unsigned>(srcPtr[k]);
        if ((k & 3) == 3) std::cerr << " ";
        if ((k & 15) == 15 && k+1 < dumpBytes) std::cerr << "\n  ";
    }
    std::cerr << std::setfill(' ') << std::dec << std::endl;
}
```

Requer adicionar `#include <iomanip>` no topo do arquivo (provavelmente já existe via outros includes — verificar).

### 📂 Arquivos modificados nesta sessão
- `PS2Recomp/ps2xRuntime/src/lib/stubs/ps2_stubs_misc.inl:3264-3398` — instrumentação cirúrgica de `sceSifSetDma` (PARTE 10 PLANO A)
- `replit.md` — Bug I marcado ✅ CONFIRMADO com causa raiz revelada (linhas 144, 173, 737), analogias 1+2 atualizadas
- `HANDOFF_AGENT.md` (este arquivo) — ESTADO ATUAL reescrito com achado da câmera + tabela PARTE 10 PLANO B (B1/B2/B3) com esqueleto de código pronto pra B3

---

## 📜 HISTÓRICO PARTE 9 — Família syscalls SIF poll 0x79/0x7A/0x7B/0x7D (Bug H RESOLVIDO)

**Status final:** 🟢 CONFIRMADO em produção (log_part9b do Agente Cris, 612 linhas, 2026-04-27).

**O que foi feito:** 4 cases novos no switch de `dispatchNumericSyscall` em `PS2Recomp/ps2xRuntime/src/lib/ps2_syscalls.cpp:321-363`:
- `case 0x79`/`case 0x7A`/`case 0x7B`/`case 0x7D` → `setReturnS32(ctx, -1)` + log 1ª chamada via `static std::mutex` + `static std::unordered_set<uint8_t>` (padrão `s_unknownCounts` da TODO).
- Retorno `-1` = `0xFFFFFFFF` em U32: qualquer máscara bit-a-bit do retorno produz != 0, destrava qualquer poll do tipo `and $v0,$v0,$sN; beqz $v0,-0x4`.

**Por que funcionou:** caller `entry_296518:0x296710` esperava bit 17 (`$s0 = 0x20000`). `0xFFFFFFFF & 0x20000 = 0x20000 ≠ 0` → `beqz $v0` falso → loop quebra na 1ª iteração.

**Confirmação no log_part9b:**
- Linha 393: `[stub PARTE 9] syscall 0x7a primeira chamada -- retornando -1` apareceu UMA vez.
- `Unknown syscallId=0x7a hits=...` SUMIU (era 40k+ em 12s no baseline).
- VBlank tick avançou de #300 (PARTE 8) pra #960 (PARTE 9) — **+220% mais frames executados**.
- 7 novos `CreateSema id=4..10` criados depois da liberação do poll.

**Lições mantidas pra próximas partes:**
1. Atalho universal pra spinloop bit-mask: `setReturnS32(ctx, -1)`.
2. Convenção PS2 "wrapper de 1 instrução" (`addiu $v1,N; syscall; jr $ra`) revela ID exato pelo nome do `entry_*.cpp` — não confiar só no `pc` do log.
3. Cuidado: `pc` no log de syscall = endereço APÓS o `syscall`, não o do `syscall` em si (delay-slot).
4. Família 0x79-0x7D fica num corredor de SIF entre `sceSifSetDChain` (0x78) e `GetMemorySize` (0x7F) — provavelmente `sceSif*Stat`/`sceSif*Reg` variants. Documentação Sony escassa.

---

## 📜 HISTÓRICO PARTE 8 — Handler INTC VBlank stub (Bug G RESOLVIDO)

**Status final:** 🟢 CONFIRMADO em produção (log_part9 baseline do Agente Cris, 7.882.220 linhas). VBlank tick #1..#300 (5s @ 60Hz), `[INTC:skip]` sumiu, `[vif1:cmd]` apareceu com IRQ no idx=20.

**O que foi feito:** stub C++ `gow_intc_handler_0x182f28` em `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` registrado via `runtime.registerFunction(0x00182F28u, ...)` em `apply_god_of_war_overrides`. Replica fiel das 8 instruções MIPS perdidas pelo detector PS2Recomp (estavam em `sub_00182EE8.cpp` linhas 134-196, mas após `jr $ra` em 0x182f20 → marcado como código morto).

**MIPS replicado:**
```mips
0x182f28: lui $v1,0x2A; lui $a0,0x2A
0x182f30: lw $v0,-0x3828($v1)            ; lê [0x29C7D8]
0x182f34: lui $a1,0x33
0x182f38: xori $v0,$v0,0x1
0x182f3c: sw $v0,-0x3828($v1)            ; [0x29C7D8] ^= 1
0x182f40: lw $v0,-0x382C($a0); addiu; sw ; [0x29C7D4] += 1
0x182f4c: lw $v0,0x4F58($a1); addiu; sw  ; [0x334F58] += 1
0x182f58: sync; ei; jr $ra
```

**Lições mantidas pra próximas partes:**
1. Detector PS2Recomp tem 2 modos (JAL direto / tabela ELF). Funções após `jr $ra` em outra função ficam órfãs.
2. As 4 funções "NÃO REGISTRADA" do init pre-main (`0x283770`, `0x17acb8`, `0x138b10`, `0x1838d0`) provavelmente sofrem da mesma doença.
3. Mecanismo VSync do runtime já existia em `ps2_syscalls_interrupt.inl` (`g_vsync_tick_counter`, `interruptWorkerMain`, `dispatchIntcHandlersForCause`, `signalVSyncFlag`, `AddIntcHandler` syscall). Padrão pra próximo handler INTC fantasma: `runtime.registerFunction(addr, stub)` em `apply_god_of_war_overrides`.

---

## 📜 HISTÓRICO PARTE 6 — Câmera #3 + Blindagem (mantido para referência)

**🎯 Decisão da PARTE 6:** Agente Cris escolheu Opção 2+3 combinada (recomendação do analista da PARTE 5). Câmera escondida #3 + blindagem defensiva num único build incremental.

**O que foi aplicado nesta sessão (2026-04-26 PARTE 6):**

**1. Câmera #3 instalada — `PS2Recomp/ps2xRuntime/include/ps2_runtime.h`:**
- `PS2_GLOBAL_WATCH_3_ADDR = 0x002C7910u` (4 bytes do ponteiro do pool)
- Função `ps2CheckGlobalWatch3(...)` espelha o padrão das câmeras #1 e #2
- Hook em `ps2TraceGuestWrite` chama o vigia novo logo depois dos #1 e #2
- Marcador especial `<<< POOL INICIALIZADO!` quando alguém escreve valor não-zero

**2. Blindagem aplicada — `GOD_PC_PORT_FINAL/src/recompiled/sub_0013FAB8_0x13fab8.cpp`:**
- Logo após `sub_0013DA10_0x13da10(...)` retornar (PC alvo `0x13fb14`):
  - Se `GPR_U32(ctx, 2) == 0u` (`$v0 == 0`):
    - Loga até 16 disparos: `[13FAB8] BLINDAGEM PARTE 6: ...`
    - Executa epílogo manual (lq $s0,sp+32; lq $s1,sp+16; ld $ra,sp+0; addiu sp,sp,0x30)
    - `ctx->pc = $ra; return;`
- **Resultado:** stores em `[0x2cbbb4]` (PC `0x13fb24`) e `[0x2cbbb0]` (PC `0x13fb3c`) NUNCA executam quando o pool está vazio. Sentinela do Fix 6 fica intacta.

**Mirror não atualizado:** `./src/recompiled/sub_0013FAB8_0x13fab8.cpp` está com drift de ~41 linhas em relação à versão do build (faltava a TRAVA da PARTE 3). Espelhar só essa edição agravaria o drift sem benefício (CMake ignora esse path). Próximo agente: regenerar o mirror inteiro a partir do `GOD_PC_PORT_FINAL/...` ou apagar.

### Comando para o Agente Cris testar a PARTE 6

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash recompilar.sh   # incremental — só ps2_runtime.h e sub_0013FAB8 mudaram, ~30s a 1 min
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_part6.txt
grep -E "watch:POOL_0x2c7910|BLINDAGEM PARTE 6|watch:SENTINEL_0x2cbbb0|TRAVA|13FAB8|FIX 1|FIX 6|init concluido" log_part6.txt | head -150
wc -l log_part6.txt
```

### Cenários esperados no log da PARTE 6

| Cenário | Sinais no log | Próxima ação (PARTE 7) |
|---|---|---|
| **A — Câmera flagrou init no pool** | `[watch:POOL_0x2c7910] #1 ... pc=0x???????? <<< POOL INICIALIZADO!` aparece **antes** de `BLINDAGEM` | Abrir `sub_<pc>.cpp`, descobrir por que esse init não estava sendo chamado, registrar no chain do boot stub |
| **B — Câmera silenciosa + blindagem disparou** | Nenhum `[watch:POOL_0x2c7910]`, mas `[13FAB8] BLINDAGEM PARTE 6: ... count=N` aparece | `[0x2c7910]` realmente nunca é inicializado pelo código recompilado. Aplicar Opção 1 (stub C++ no `sub_0013DA10` em `game_overrides.cpp`) |
| **C — Câmera flagrou + blindagem ainda disparou** | Watch loga init MAS chamadas iniciais do `13FAB8` recebem `$v0=0` | Race condition / ordem do init chain errada. Investigar se o init precisa rodar antes de `0x2996b0` |
| **D — Tudo silencioso, jogo avança** | Nem watch nem blindagem disparam, jogo passa do loop VIF1 | Algo mudou no fluxo. Ler log inteiro pra ver onde travou |

**Cenário mais provável: B** (câmera silenciosa + blindagem disparando). Confirmaria PARTE 5 e aponta direto pra Opção 1 como Plano A da PARTE 7.

**Importante:** com a blindagem ativa, `[watch:SENTINEL_0x2cbbb0]` NÃO deve mais aparecer com `<<< CORRUPCAO PARA ZERO!`. Se aparecer, há um terceiro sabotador que ainda não conhecemos.

---

## 🟡 ESTADO PARTE 5 (mantido para histórico)

### Status: câmera flagrou o sabotador — `sub_0013DA10` retorna `$v0=0`, e `sub_0013FAB8` propaga esse 0 destruindo a sentinela

**🎯 ACHADO PARTE 5 (log_watch_part5.txt do Agente Cris, 2026-04-26):**

```
[watch:SENTINEL_0x2cbbb0] #1 op=WRITE32 addr=0x2cbbb4 size=4 value=0x0 pc=0x13fb24 ra=0x13fb14
[watch:SENTINEL_0x2cbbb0] #2 op=WRITE32 addr=0x2cbbb0 size=4 value=0x0 pc=0x13fb3c ra=0x13fde0  <<< CORRUPCAO PARA ZERO!
```

**Decifrando** (linhas 162–222 de `GOD_PC_PORT_FINAL/src/recompiled/sub_0013FAB8_0x13fab8.cpp`):

O path `label_13fb0c` (inserir 1º elemento na lista vazia) faz:
1. `jal func_13DA10` — pede um nó novo pro alocador
2. **Alocador retorna `$v0 = 0`** (porque o pool em `[0x2c7910]` está vazio/não-inicializado)
3. Os stores em `$v0+offset` viram escritas inofensivas em `[0x000+offset]`
4. **MAS**: `sw $v0, 0x4($s0)` no PC `0x13fb24` escreve `0` em `[0x2cbbb4]` (sentinela.prev)
5. **E**: `sw $v0, 0x0($v1)` no PC `0x13fb3c` escreve `0` em `[0x2cbbb0]` (sentinela.next, porque `$v1` foi carregado de `head.prev` que era `0x2cbbb0` graças ao Fix 6)
6. Sentinela morre. Próximas chamadas do `13FAB8` caem no loop infinito.

**Causa raiz definitiva:** `sub_0013DA10` é um alocador real, mas depende de
`$a0` = ponteiro pra estrutura de pool (vinda de `*0x2c7910`, uma global em
BSS). Como `*0x2c7910 = 0` (BSS não inicializada), o alocador lê de endereço
inválido (`lw $v0, 0x10($s0)` com `$s0=0`) e devolve 0. Quem inicializa
`[0x2c7910]` provavelmente é um dos 4 JALs **NÃO REGISTRADOS** detectados
na PARTE 3: `0x283770`, `0x17acb8`, `0x138b10`, `0x1838d0`.

### 🔄 OPÇÕES PARA PARTE 6 (aguardando decisão do Agente Cris)

**Opção 1 — Stub C++ pra `sub_0013DA10` (rápido, ~5 linhas, curativo):**
- Em `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp`, override que
  devolve `malloc(0x10)` zerado. Resolve sintoma imediato.
- Risco: leaks se o jogo reciclar nós depois.

**Opção 2 — Achar quem deveria inicializar `[0x2c7910]` (causa raiz):**
- Adicionar 3ª câmera (`PS2_GLOBAL_WATCH_3_ADDR = 0x002C7910u`) e testar
  de novo. Se ninguém escrever, o init é um dos 4 JALs perdidos.
- Custo: 1 build longo (~80min) + 1 teste do Agente Cris.

**Opção 3 — Blindar `label_13fb0c` no `sub_0013FAB8` (curativo no chamador):**
- Editar o `.cpp` recompilado pra checar `if ($v0 == 0) return;` depois
  do `jal 13DA10`. Mais rápido que Opção 1 mas só protege esse caller.

**Recomendação do analista:** Opção 2 primeiro (instala 3ª câmera, espera
1 build e 1 teste). Se não pegar autor, cair pra Opção 1 como fallback.

### Comando pra Agente Cris testar a PARTE 6 (após decisão)

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash build.sh
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_part6.txt
grep -E "watch:|FIX|13FAB8|TRAVA|CORRUPCAO" log_part6.txt | head -100
wc -l log_part6.txt
```

---

## 📚 BIBLIOTECA DE BUGS CONHECIDOS (consultar ANTES de investigar bug novo)

| # | Família | Sintoma típico | Causa raiz | Fix |
|---|---|---|---|---|
| **A** | crt0 truncado | Boot trava antes do main | `crt0` recompilado com instruções faltando | Disassembly + reescrita |
| **B** | Boot stub sabotando | Boot pula main | `boot_stub` com JAL pra alvo errado | Trocar alvo do JAL |
| **C** | `$v0=0` retorno | SEGV/comportamento errado | Recompilação setando `$v0` errado | Override do retorno |
| **D** | Loop+stack overflow | PC trava, RAM cresce | Recursão sem base case em `func_100408` | Trava de iter + override |
| **1, 6** | Sentinela não-inicializada | Loop infinito em função que percorre lista | `head.next/prev = 0` em vez de apontar pra si | Fix 1/6: escrever `head=head.next=head.prev` no boot_stub ANTES dos inits |
| **F** | Alocador retorna 0 → corrompe consumidor | Bug 1/6 reaparece depois do fix | Alocador (ex: `13DA10`) lê pool vazio, devolve 0; consumidor escreve em `[0+offset]` que cai em região crítica | ✅ PARTE 6 mitigado: blindagem `if ($v0==0) abort` no consumidor (sintoma controlado, jogo avança). Fix definitivo (PARTE 7+) = stub C++ no alocador em `game_overrides.cpp` |
| **G** | Handler de interrupção apontado mas não recompilado → polling infinito | Programa entra em loop após boot avançado (sem crash) | INTC mapeia handler pra endereço guest que está num `.cpp` recompilado mas órfão (após `jr $ra` em outra função, marcado como código morto pelo detector PS2Recomp) | ✅ **PARTE 8 RESOLVIDO**: `runtime.registerFunction(addr, stub_C++)` em `game_overrides.cpp` replicando as escritas globais do handler original |
| **H** | **Família de syscalls SIF poll faltando no switch → spinloop bit-mask** | Loop infinito sem crash, log explode com `Unknown syscallId=0xN hits=...` (10k-130k em segundos) | Switch `dispatchNumericSyscall` em `ps2_syscalls.cpp` tinha buracos em 0x79/0x7A/0x7B/0x7D entre `sceSifSetDChain` (0x78) e `GetMemorySize` (0x7F). Caller faz `jal wrapper; and $v0,$v0,$sN; beqz $v0,-0x4` → poll de bit que nunca acende com retorno default 0 | ✅ **PARTE 9 RESOLVIDO** (confirmado log_part9b 2026-04-27): 4 cases novos no switch retornando `-1` (= `0xFFFFFFFF`, destrava qualquer máscara bit) + log 1ª chamada. Stub disparou 1x, `Unknown syscallId=0x7a` SUMIU (40k+ hits/12s → 0), VBlank #960 |
| **I** | **Stub SIF DMA EE↔IOP rejeita silenciosamente sem dizer qual validação falhou** | `sceSifSetDma failed dmat=0xN count=0xM` repete 8+ vezes em segundos (não trava o jogo, mas impede transferência EE↔IOP de continuar) | Stub `sceSifSetDma` em `ps2_stubs_misc.inl:3261` valida descritor 16B (src/dest/size/attr) via 4 ifs (`!entry`, `size>RAM`, `canCopyGuestByteRange`, `copyGuestByteRange`). Em falha, retorna 0 sem dizer QUAL if rejeitou nem QUAIS endereços o jogo mandou. Provável causa: `xfer.src` ou `xfer.dest` aponta pra IOP/scratchpad/kernel (fora dos 32 MB de RAM EE) | 🟡 **PARTE 10 PLANO A APLICADO** (instrumentação): variáveis `failIndex`/`failReason`/`failXfer` + log mutex+`unordered_set` chaveado em `(dest<<32)^src`, máx 8 únicos. Comportamento mantido. PARTE 10 PLANO B no próximo round (provável: relaxar validação para ranges IOP) |
| **2-5** | Inits do crt0 não rodados | Várias estruturas vazias após boot | Boot stub não chama todos 4 inits do crt0 | `kInitChain[]` no boot_stub |

**Padrão dominante:** bugs **1, 6 e F** são todos da mesma família —
"**estrutura global em BSS que depende de inicializador não-recompilado**".
Quando aparecer um 7º caso parecido, suspeitar dessa família primeiro.

---

## 🟡 ESTADO PARTE 4.5 (mantido para histórico)

### Status: câmera escondida instalada (Opção A escolhida pelo Agente Cris)

**O que o teste real provou (log_fix6_part3.txt, 388 linhas):**
- ✅ `[boot_stub] FIX 1: ...` e `[boot_stub] FIX 6: ...` apareceram ANTES dos inits
- ✅ 1ª chamada `13FAB8`: `READ32(sentinel)=0x2cbbb0` → saiu rápido (path "lista vazia")
- ✅ `13FCA8`, `13FB48`, `182F68`, `182E88`, `140578` rodaram pela primeira vez
- ✅ Trava de segurança disparou em 1M iter, PC do user NÃO travou:
  ```
  [13FAB8] !!! TRAVA DE SEGURANCA DISPARADA !!!
  [13FAB8] *0x2cbbb0 = 0x0 (esperado: 0x2cbbb0 para lista vazia)
  [13FAB8] forcando saida via path 'lista vazia' (label_13fb08)
  ```
- ✅ Programa terminou normalmente (volta pro prompt)
- 🟡 Após trava, jogo avançou e travou em loop de **159 `[vif1:cmd]` vazios**
  (VIF1 = pipeline gráfica do PS2 lendo DMA stream zerada)

**Bug F descoberto:** algo zera `[0x2cbbb0]` DEPOIS da 1ª chamada bem-sucedida
do `13FAB8`. As chamadas 2ª, 3ª e 4ª já encontram a sentinela em `0x0`.

| # | a0 | sentinela | s1+4 | resultado |
|---|---|---|---|---|
| 1 | 0x4159c8 | 0x2cbbb0 ✓ | 0x1 | OK (insere via label_13fb08) |
| 2 | 0x416488 | 0x0 ❌ | 0x1 | sai sem loop (sorte) |
| 3 | 0x416f48 | 0x0 ❌ | 0x0 | sai sem loop (sorte) |
| 4 | 0x417a08 | 0x0 ❌ | 0x2 | LOOP → trava disparou em 1M |

**Suspeitos do sabotador:**
1. `label_13fb08` (path de inserção do próprio `13FAB8`) — carrega `$v0=0x2c0000`
   e usa como base; algum store offset pode cair em `0x2cbbb0`
2. `sub_0013DA10` (chamada por `label_13fb0c`) — alocador suspeito
3. Layout de BSS errado — `0x2cbbb0` faz parte de struct maior sobrescrita

### 🆕 PARTE 4.5 — Opção A APLICADA (câmera escondida instalada)

**O que mudou em `PS2Recomp/ps2xRuntime/include/ps2_runtime.h`:**
- Constante nova `PS2_GLOBAL_WATCH_2_ADDR = 0x002CBBB0u` (8 bytes vigiados)
- Função `ps2CheckGlobalWatch2(...)` espelha o vigia já existente do `0x32E854`
- Hook em `ps2TraceGuestWrite` chama o vigia novo logo após o antigo
- Até 256 logs por execução, com marcador `<<< CORRUPCAO PARA ZERO!`
  quando alguém escreve zero no endereço exato da sentinela

**Formato do log esperado:**
```
[watch:SENTINEL_0x2cbbb0] #N op=WRITE32 addr=0x2cbbb0 size=4 value=0x0 pc=0x???????? ra=0x????????  <<< CORRUPCAO PARA ZERO!
```

**Opção B (VIF1/DMA) e Opção C (INTC handlers) continuam disponíveis** caso
a câmera não pegue ninguém em flagrante (o que indicaria que a corrupção
vem de uma rota não rastreada — DMA, fastmem ou stub C++).

### Comando para testar a PARTE 4.5

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash build.sh
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_watch_part5.txt
grep "watch:SENTINEL" log_watch_part5.txt
grep -E "FIX|13FAB8|TRAVA|CORRUPCAO" log_watch_part5.txt | head -100
wc -l log_watch_part5.txt
```

A linha com `<<< CORRUPCAO PARA ZERO!` revela `pc=...` do escritor. Esse
PC é o crachá do espião — abre `sub_<pc>.cpp` correspondente e a gente
entende o que ele acha que está fazendo.

---

## 🔴 ESTADO PARTE 3 (mantido para histórico)

### Status: Fix 6 reposicionado para ANTES dos inits + trava de segurança em sub_0013FAB8

**O que aconteceu na PARTE 2 (sessão anterior):** Fix 6 (sentinela `0x2cbbb0`)
foi aplicado mas no lugar errado — DEPOIS das chamadas dos 4 inits do
boot stub. Como `sub_00138D48` (4º init) entra em loop dentro de
`sub_0013FAB8` antes de retornar, o boot_stub nunca chegava nas linhas que
inicializam as sentinelas. Galinha-e-ovo. **Log do user provou:**
- ❌ Mensagem `[boot_stub] FIX 6: sentinel lista circular #2 inicializado` NÃO apareceu
- ❌ Mensagem `[boot_stub] sentinel lista circular inicializado em 0x2cf090` (Fix 1) NÃO apareceu
- ❌ Mensagem `[boot_stub] init concluido, entry=0x2996b0` NÃO apareceu
- 🔁 `[13FAB8] READ32(sentinel)=0x0` — sentinela ainda zerada
- 🔁 Loop atingiu 6M iterações de novo

**Sinais bons da PARTE 2 que continuam válidos:**
- ✅ Fix 4 funcionou: `[boot_stub] init 0x138d48 (4o init, pre-main)` rodou
- ✅ Fix 5 funcionou: entry chegou em `0x2996b0` (via 138D48 inteiro)
- ✅ GS recebeu config: `GsPutIMR` + `GsSetCrt`
- ✅ SIF inicializou: `SifCheckInit → SifInit`
- ✅ Janela raylib abre (640x448, OpenGL 4.2 Mesa Intel HD 4000)

### Mudanças PARTE 3 (esta sessão)

**1. `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`**
- Fix 1 (sentinela `0x2cf090`) e Fix 6 (sentinela `0x2cbbb0`) **MOVIDOS** pra
  ANTES do `kInitChain[]`, logo depois de `[boot_stub] $gp configurado`.
- Mensagens padronizadas: `[boot_stub] FIX 1: ...` e `[boot_stub] FIX 6: ...`.
- Blocos antigos depois dos inits removidos (substituídos por nota explicando
  que foram movidos).

**2. `GOD_PC_PORT_FINAL/src/recompiled/sub_0013FAB8_0x13fab8.cpp`**
- Trava de segurança no loop `label_13fae8`: se passar de **1.000.000 iterações**,
  loga aviso completo (incluindo valor atual de `*0x2cbbb0`) e força saída via
  `goto label_13fb08` (path "lista vazia"). Reseta o counter para não spammar.
- **Objetivo:** nunca mais travar o PC do user. Loops infinitos viram aviso
  visível em ~1 segundo em vez de freeze de minutos.

### Comando para testar PARTE 3

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash build.sh   # incremental, ~1 min (2 arquivos mudaram)
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_fix6_part3.txt
```

**Filtrar antes de mandar:**
```bash
grep -E "FIX 1|FIX 6|13FAB8|init concluido|2996b0|frame:upload|nonBlack|ExitThread|TRAVA|SEGV|crash" log_fix6_part3.txt | head -150
wc -l log_fix6_part3.txt
```

**Sinais de sucesso esperados na PARTE 3:**
- `[boot_stub] FIX 1: sentinel lista circular #1 inicializado em 0x2cf090` ANTES dos inits
- `[boot_stub] FIX 6: sentinel lista circular #2 inicializado em 0x2cbbb0` ANTES dos inits
- `[13FAB8] sentinel_addr=0x2cbbb0 READ32(sentinel)=0x2cbbb0` (não `0x0`!)
- Loop NÃO aparece (ou aparece <10 iterações)
- `[boot_stub] init concluido, entry=0x2996b0 (real game main)` aparece
- Janela do raylib responsiva (não trava, fecha quando user clica X)
- Trace prossegue além de `13FAB8` → `13FCA8` → `182FF0`

**Cenários alternativos:**
- Se a TRAVA DE SEGURANÇA disparar (`[13FAB8] !!! TRAVA DE SEGURANCA DISPARADA !!!`),
  significa que a sentinela está sendo zerada DEPOIS do Fix 6 por algum codepath
  (provavelmente algum init que escreve em BSS). Investigar quem escreve em `0x2cbbb0`.
- Se nenhum loop aparecer mas o jogo travar em outro lugar, é o "próximo guarda
  interno" — análise normal continua.

**Possíveis próximos bloqueadores:**
- Mais funções do init chain de `sub_00138D48` (JALs 6-11/11)
- `func_2996a8` ou `func_293840` (entry_2996b0 chama essas duas)
- `func_293840` virando `ExitThread` se nenhuma tarefa for criada
- Algum GS register não emulado
- Algum SIF callback faltando
- `SetupThread` (syscall 0x3c) ou `SetupHeap` (0x3d) não implementados

---

## 🔴 ESTADO ANTERIOR (mantido para histórico) — sessão crt0-disassembly

### Status: BOOT REESCRITO — entry point corrigido para 0x2996b0 (real main do jogo)

**Três correções aplicadas nesta sessão:**

#### Fix 2 REVERTIDO (Fix 2 estava ERRADO)
`sub_001003C0_0x1003c0.cpp` linha ~129: `SET_GPR_U64(ctx, 5, 1u)` volta para `SET_GPR_U64(ctx, 5, 0u)`.

**Por que Fix 2 era errado:** com `a1=1`, `func_238860` chamava `free(struct_root=0x2cf070)` todo frame. Com `a1=0`, ela retorna imediatamente (noop). O MIPS original passa `a1=0`.

#### Fix 4 — Init chain completa: sub_00138D48 adicionado
`PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` — boot stub agora chama `sub_00138D48` (0x138d48) após os 3 inits existentes. Esta é a 4ª função de init chamada pelo crt0 real (em 0x1001c0).

Argumentos corretos: `a0=0` (rdram[0x2c7080]=BSS=0), `a1=0x2c7084` (igual ao crt0).

#### Fix 5 — Entry point corrigido: 0x100008 → 0x2996b0
`ps2_runtime.cpp` — após a init chain, `m_cpuContext.pc` é setado para `0x2996b0` em vez de `0x100008`. **0x2996b0 é o real main do jogo**, confirmado pelo disassembly do crt0.

A0 passado para 0x2996b0 = valor de retorno de sub_00138D48 (v0/r2 após a chamada).

---

## 🔬 DIAGNÓSTICO DO CRT0 — DESCOBERTA DEFINITIVA (2026-04-26)

### O crt0 original (gap 0x10008c-0x1003bf) dissassemblado

O crt0 no gap do ELF foi dissassemblado com sucesso em Python (little-endian PS2 MIPS). A sequência real é:

```
0x10008c-0x100118: ctc1 (init FPU registers)
0x10011c-0x100140: loop zerando BSS (0x2c7080 → 0x35c1a8)
0x100148-0x100178: SetupThread syscall(0x3c):
    a0 = 0x2cf070  (_gp = struct root da thread)
    a1 = 0x1FF8000 (stack top)
    a2 = 0x8000    (stack size)
    a3 = 0x2c7080  (BSS start)
    t0 = 0x1001d8
0x100180-0x100194: SetupHeap syscall(0x3d):
    a0 = 0x35c1a8  (heap start)
0x100198: jal 0x2994a0  [1o init — NOSSO boot stub já faz]
0x1001a0: jal 0x293ea0  [2o init — NOSSO boot stub já faz]
0x1001a8: jal 0x138cb0  [3o init — NOSSO boot stub já faz]
0x1001c0: jal 0x138d48  [4o init — FIX 4, agora adicionado]
0x1001c8: j   0x2996b0  ← REAL MAIN DO JOGO [FIX 5, agora correto]
           com a0 = retorno de 0x138d48
```

**Antes do Fix 5:** nosso boot stub setava `pc = 0x100008` → `entry_0x100008` → saltava para `0x1003c0` (sub_001003C0), que é uma função INTERNA do scheduler, não o main do jogo.

**O gap também contém (0x100200-0x1003bc):** uma função secundária chamada de dentro do 4o init ou do game loop. Ela inicializa a struct de contexto com muitos campos, incluindo `sw $zero, 0x18($s3)` — confirma que rdram[0x2cf088] começa em 0 e é populado depois.

### Por que `rdram[0x2cf088]=0` não era o root cause

Era um SINTOMA. O root cause era que sub_001003C0 não é o main do jogo — é uma função interna de scheduler chamada pelo main via 0x2996b0 → func_293840. Com o Fix 5 (entry 0x2996b0), o boot segue o caminho correto e o jogo inicializa a struct normalmente.

### Funções-chave no caminho real

```
0x2996b0 = entry_2996b0_0x2996e0   [REAL GAME MAIN — agora é o entry]
  → jal 0x2996a8 (func_2996a8)
  → j   0x293840 (func_293840 = ExitThread se nenhuma tarefa criada)

0x138d48 = sub_00138D48_0x138d48   [4o init, 11 JAL internos]
  → jal 0x283770  [1/11]
  → jal 0x17aa88  [2/11]
  → jal 0x17acb8  [3/11]
  → jal 0x138b10  [4/11]
  → jal 0x1838d0  [5/11]
  → ... mais 6 JALs
  → retorna handle em v0
```

### PS2_FORCE_A0 — ainda válido ou não?

Com Fix 5, `entry_0x100008` NÃO É MAIS CHAMADO no path normal. O boot stub vai direto para 0x2996b0. A env var `PS2_FORCE_A0` fica como fallback caso `entry_0x100008` seja chamado de algum lugar inesperado, mas não é mais necessária para o boot normal.

---

## Histórico de Fixes (em ordem cronológica)

### Fix 1 — Sentinel da lista circular (CONFIRMADO FUNCIONANDO)
`rdram[0x2cf090]` = 0 → loop infinito em `sub_00100408`.
**Fix:** `ps2_runtime.cpp` boot stub: `rdram[0x2cf090] = rdram[0x2cf094] = 0x2cf090`.
**Ainda válido:** sim, mantido no boot stub.

### Fix 2 — a1=1 em func_238860 (FIX ERRADO — REVERTIDO)
Forçar `a1=1` fazia `free(struct_root=0x2cf070)` todo frame.
**Status:** REVERTIDO para `a1=0` (comportamento original MIPS).

### Fix 3 — Loop em sub_001003C0 (MANTIDO, LEGADO)
`cooperativeGuestYield() + goto label_1003ec` para manter janela aberta.
Com Fix 5, sub_001003C0 não é mais o entry principal — este fix é um fallback seguro.

### Fix 4 — sub_00138D48 no init chain (NOVO — 2026-04-26)
Adicionado ao boot stub com a0=0, a1=0x2c7084.

### Fix 5 — Entry point 0x100008 → 0x2996b0 (NOVO — 2026-04-26)
**A mudança mais importante.** Boot stub agora termina setando `pc=0x2996b0`.

---

## Comando para testar os novos fixes

```bash
# No Replit: workflow "Start application" já está rodando (build.sh)
# Para testar manualmente após o build:
PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_fix5.txt

# Procurar no log:
grep -E "boot_stub|138d48|2996b0|138D48|JAL|frame:upload|nonBlack" log_fix5.txt | head -50
```

**Sinais de sucesso com Fix 5:**
- `[boot_stub] init 0x138d48 (4o init, pre-main)` → 4o init rodou
- `[138D48] ENTRADA a0=0x00000000` → sub_00138D48 recebeu a0=0 correto
- `[138D48] JAL [1/11] -> 0x283770` → inits internos chamados
- `[boot_stub] entry=0x2996b0 (real game main)` → entry correto
- `[frame:upload]` com `nonBlack>0` → **ALGO FOI RENDERIZADO!**

**Se o jogo entrar em ExitThread imediatamente:**
`entry_2996b0` chama `func_293840` que pode ser ExitThread se nenhuma tarefa foi criada.
Fix: verificar o que `func_2996a8` e `func_293840` fazem — talvez precisem de subsistemas extras.

**Se `sub_00138D48` crashar (um dos 11 JALs não registrado):**
Verificar qual JAL falhou no log `[138D48] JAL [X/11] ... NAO REGISTRADA`.
Pode ser necessário adicionar stub para essa função.

---

## Estrutura do projeto

```
/home/runner/workspace/
├── PS2Recomp/
│   └── ps2xRuntime/src/lib/
│       └── ps2_runtime.cpp         ⭐ CRÍTICO: boot stub + dispatchLoop
│
├── GOD_PC_PORT_FINAL/
│   ├── data/
│   │   ├── SCUS_973.99             ELF PS2 (God of War NTSC-U)
│   │   └── part1.pak               4GB (dados do jogo, NÃO no git)
│   └── src/recompiled/             ⭐ EDITAR AQUI (não em ./src/recompiled/)
│       ├── sub_001003C0_0x1003c0.cpp  scheduler interno (Fix 2 revertido + Fix 3)
│       ├── entry_0x100008.cpp         PS2_FORCE_A0 fallback (ainda ativo)
│       ├── sub_00138D48_0x138d48.cpp  4o init (tem logging interno [138D48])
│       ├── entry_2996b0_0x2996e0.cpp  REAL GAME MAIN (novo entry point)
│       └── entry_131288_0x131300.cpp  func_131288: game engine update
│
├── build/GodOfWarPCPort            Executável final
├── build.sh                        Build incremental (safe para recompilar)
├── rebuild_runtime.sh              Build rápido só do runtime (~30s)
└── tools/analisa_log.py            Análise de logs com --diff
```

**ARMADILHA:** Há DOIS `src/recompiled/`:
- `GOD_PC_PORT_FINAL/src/recompiled/` → **USADO PELO BUILD** ← edite AQUI
- `./src/recompiled/` → **IGNORADO** pelo CMakeLists.txt

---

## Contexto do projeto

**Objetivo:** Rodar God of War (PS2, NTSC-U) nativamente no PC via recompilação estática MIPS→C++ (PS2Recomp + Raylib). Sem emulador.

**Hardware do usuário:** Linux Mint, Intel HD 4000, OpenGL 4.2.

**Por que é difícil:** PS2 tem arquitetura muito mais complexa que N64 (EE + VU0/VU1 + GS + IOP + DMA). Nenhum port estático de PS2 existe publicamente — este projeto está na fronteira da engenharia reversa.

**Descobertas de disassembly:**
- O ELF carrega em 0x100000, filesz=0x1c7018, memsz=0x25d080
- BSS vai de 0x2c7018 (ou 0x2c7080) até 0x35d080
- `_gp` = 0x2cf070 (global pointer, struct root da thread principal)
- Dispatch table em 0x32EC58 (BSS — zerada no boot, precisa ser preenchida pelos inits)
- O crt0 real chama SetupThread(0x2cf070,...) e SetupHeap(0x35c1a8,...)

**SetupThread syscall (0x3c)** — NÃO implementado ainda em ps2_syscalls.cpp. Por isso a struct em 0x2cf070 pode não estar totalmente inicializada como o real PS2 BIOS faria. Este pode ser o próximo bloqueador.

---

## Próximos passos prioritários

1. **🔴 Testar Fix 4 + Fix 5** — ver se o jogo avança além da tela preta
2. **🔴 Verificar func_293840** — se o jogo entrar em ExitThread: `entry_293840_0x293900.cpp` pode estar sendo tratado como syscall Exit em vez do game loop real
3. **🟡 Implementar SetupThread (syscall 0x3c)** em ps2_syscalls.cpp — inicializa struct em 0x2cf070 como o BIOS real faria
4. **🟡 Implementar SetupHeap (syscall 0x3d)** — inicializa heap em 0x35c1a8
5. **🟢 Investigar sub_00138D48 JALs** — se algum dos 11 JALs crashar, adicionar stub
