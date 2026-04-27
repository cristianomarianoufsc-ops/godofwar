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

**Carro (até PARTE 9):** chassi/combustível/injeção/chave de ignição prontos;
motor deu 1ª partida (Fix 4+5); engasgou (lista circular #2); braçadeira +
limitador (parte 3); sensor de vazamento (parte 4); PARTE 5: bomba de óleo
bombeando AR ZERO; PARTE 6: sensor #3 + válvula; **PARTE 7: bomba
aftermarket — Bug F resolvido**; **PARTE 8: sensor de injeção rebobinado —
Bug G resolvido (VBlank tick #1..#300 confirmado no dinamômetro do Agente
Cris, log_part9 baseline)**. 🆕 **PARTE 9 PLANO A APLICADA: motorista
ficou apertando o botão da chave inglesa pneumática (syscalls 0x79/0x7A/0x7B/0x7D)
esperando luz verde acender — botão estava DESLIGADO da fonte (4 cases
faltando no switch do runtime). Mecânico ligou os 4 botões e configurou
pra responderem "tudo OK" (retorno -1 = 0xFFFFFFFF, qualquer máscara bit
do retorno produz != 0). Custo no PC: rebuild_runtime ~30s.** Depois:
test drive (VIF1/DMA com payloads válidos, GS, áudio, controle).

**Espionagem (até PARTE 9):** recrutamento, recon, entrada (Fix 5), cofre
ABERTO (Fix 4+5), 1º guarda (`0x2cbbb0`), tranquilizante + colete (parte 3);
câmera escondida (parte 4); PARTE 5: sabotador `13FAB8` flagrado; PARTE 6:
câmera #3 + Kevlar; **PARTE 7: agente duplo no almoxarifado — Bug F
resolvido**; **PARTE 8: agente de tráfego no cruzamento — Bug G resolvido
(720 piscadas confirmadas no dossiê do Agente Cris)**. 🆕 **PARTE 9 PLANO A
APLICADA: a próxima sala tinha 4 portas com leitor biométrico (syscalls
0x79/0x7A/0x7B/0x7D). Os leitores estavam OFFLINE — o switchboard central
(`ps2_syscalls.cpp`) não tinha entrada pra eles, e o handler default
respondia "ACESSO NEGADO" (retorno 0). O agente principal ficou martelando
o leitor da porta 0x7A 130.000 vezes em 12 segundos, esperando luz verde
no bit 17. Plantamos um operador no switchboard que reconhece os 4
leitores e responde "TODOS OS BITS OK" pra qualquer pergunta (`setReturnS32(ctx, -1)`).
Loga só a 1ª chamada de cada um pra rastreabilidade. Aguardando próximo
dossiê do Agente Cris.** Depois: fuga com o alvo (subsistemas gráficos
reais, VIF1/DMA com payload, áudio, gamepad).

> Estilo de narração padrão = **espionagem/ação**. Three camadas: 🕵️
> espionagem → 🚗 carro → 🔧 técnico. Veja PROTOCOLO DE COMUNICAÇÃO acima.

---

## 🟢 ESTADO ATUAL — LEIA ISTO PRIMEIRO (atualizado 2026-04-27 PARTE 8 — handler INTC VBlank stub APLICADO, aguardando teste)

### Status: 🟢 PARTE 8 PLANO A APLICADO — stub do handler INTC VBlank `0x00182F28` registrado, build incremental ok, AGUARDANDO dossiê de campo do Agente Cris

**🎯 Resumo do que foi feito nesta sessão (2026-04-27 PARTE 8):**

| Item | Resultado |
|---|---|
| Investigação prévia (15 min, sem custo pro PC) | ✅ Mapeou anatomia COMPLETA do handler + mecanismo VSync do runtime + razão técnica do PS2Recomp ter perdido o entry |
| Stub aplicado em `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` (após o stub PARTE 7) | ✅ `gow_intc_handler_0x182f28` + `runtime.registerFunction(0x00182F28u, ...)` em `apply_god_of_war_overrides` |
| Replica fiel das 3 escritas do MIPS original | ✅ toggle `[0x29C7D8]^=1`, `[0x29C7D4]+=1`, `[0x334F58]+=1` |
| Documentação | ✅ `replit.md` (analogias atualizadas, biblioteca de bugs Bug G atualizada, nova seção "PARTE 8" no histórico com TODAS as descobertas técnicas) + `HANDOFF_AGENT.md` (este arquivo) |
| Build no Replit | ⏸️ Não tentado — compilação roda só no PC do Agente Cris |
| Teste no PC | ⏸️ AGUARDANDO Agente Cris executar o comando abaixo |

### 🔬 Anatomia do handler que o stub replica (transcrita do disassembly em `sub_00182EE8.cpp` linhas 134-196):

```mips
0x182f28: lui   $v1, 0x2A
0x182f2c: lui   $a0, 0x2A
0x182f30: lw    $v0, -0x3828($v1)        ; lê [0x29C7D8] (flag VBlank)
0x182f34: lui   $a1, 0x33
0x182f38: xori  $v0, $v0, 0x1
0x182f3c: sw    $v0, -0x3828($v1)        ; [0x29C7D8] ^= 1   ← FLAG VBLANK
0x182f40: lw    $v0, -0x382C($a0)        ; lê [0x29C7D4] (frame counter)
0x182f44: addiu $v0, $v0, 0x1
0x182f48: sw    $v0, -0x382C($a0)        ; [0x29C7D4] += 1   ← FRAME COUNTER PRINCIPAL
0x182f4c: lw    $v0, 0x4F58($a1)         ; lê [0x334F58] (counter alt)
0x182f50: addiu $v0, $v0, 0x1
0x182f54: sw    $v0, 0x4F58($a1)         ; [0x334F58] += 1   ← CONTADOR SECUNDÁRIO
0x182f58: sync                            ; barreira (no-op no host)
0x182f5c: ei                              ; enable interrupts (no-op aqui)
0x182f60: jr    $ra                       ; return
```

### 🧠 LIÇÕES TÉCNICAS DA INVESTIGAÇÃO (não esquecer — vão se repetir)

1. **Por que o PS2Recomp perdeu o entry de `0x182f28`:** o detector de funções tem 2 modos — (a) descoberta via JAL direto (b) entrada na tabela do ELF. Quando um handler vem APÓS um `jr $ra` dentro de outra função, é marcado como "fall-through morto". `0x182f24` é o `jr $ra` de `sub_00182EE8`, então `0x182f28..0x182f60` ficou inacessível via `runtime.lookupFunction()` mesmo estando transcrito.
2. **Padrão suspeito:** as 4 funções "NÃO REGISTRADA" do init pre-main (`0x283770`, `0x17acb8`, `0x138b10`, `0x1838d0`) provavelmente sofrem da mesma doença. Quando virar problema, **primeiro** procurar essas instruções dentro de outros `sub_*.cpp` — a chance de já estarem transcritas é alta.
3. **Mecanismo VSync do runtime já está completo** em `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_interrupt.inl`:
   - `g_vsync_tick_counter` (linha 23): contador atômico do RUNTIME (60 Hz, `kVblankPeriod = 16667 µs`)
   - `interruptWorkerMain` (linha 274): worker thread que dispara VBlank
   - `dispatchIntcHandlersForCause` (linha 77): chama handlers INTC; se `runtime->hasFunction(handler)` é false, loga `[INTC:skip]` (linha 121)
   - `signalVSyncFlag` (linha 251): escreve em `[flagAddr]`/`[tickAddr]` registrados pelo guest via syscall `SetVSyncFlag`. **NÃO toca os 3 contadores do JOGO** — esse era o elo perdido.
   - `AddIntcHandler` syscall (linha 431): jogo registra handler INTC.
   - **Padrão pra próximo handler INTC fantasma:** registrar via `runtime.registerFunction(addr, stub)` dentro de `apply_god_of_war_overrides`. Não precisa mexer em `AddIntcHandler` syscall — o jogo já registra o endereço, basta o runtime achar a função.

### 📋 Comando pro Agente Cris testar a PARTE 8

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash rebuild_runtime.sh                # incremental ~30s (só relinka ps2runtime + GodOfWarPCPort)
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 2>&1 | tee log_part8.txt
grep -E "stub PARTE 8|stub:0x182f28|INTC:skip|vif1:cmd|13FAB8|entry_182ff0|alloc #" log_part8.txt | head -200
wc -l log_part8.txt
```

### 🎯 Cenários esperados no log_part8.txt

| Cenário | Sinais | Próxima ação |
|---|---|---|
| **A — Vitória total (esperado)** | `[game_overrides] God of War: stub PARTE 8 PLANO A registrado em 0x00182F28` aparece + `[stub:0x182f28] PARTE 8 PLANO A: VBlank tick #N` aparece N vezes (1, 2, 3, 4, 60, 120, ...) + `[INTC:skip] cause=2 handler=0x182f28` SUMIU + jogo avança PRA ALÉM do `sub_0021ff60` (próximo travamento exposto) | Decifrar próximo travamento. PARTE 9 = atacar Bug H (provável próxima função fantasma ou subsistema VIF1/DMA/GS faltando) |
| **B — Stub dispara mas sub_0021ff60 ainda trava** | `[stub:0x182f28] tick #N` aparece, mas `sub_0021ff60` continua em loop | Precisamos de MAIS contadores. Investigar com watchpoint nos endereços lidos pelo `sub_0021ff60` (a função tem `lui $a0, 0x2A` + `lw $v0, -0x382C($a0)` em vários pontos — ela TAMBÉM lê `[0x29C7D4]`). Possível handler real toca outros endereços que disassembly não mostrou |
| **C — Stub não dispara** | `[INTC:skip] cause=2 handler=0x182f28` continua aparecendo | Build não pegou a nova função. Verificar se `[game_overrides] God of War: stub PARTE 8 PLANO A registrado` aparece no início do log. Se NÃO aparece → `rebuild_runtime.sh` não relinkou direito; rodar `bash recompilar.sh` cheio |
| **D — Crash novo (SEGV ou ASAN)** | Stub dispara, mas surge crash logo depois | Provável: tocar um dos 3 endereços é prematuro (BSS não inicializada). Solução: condicionar primeira escrita ao `g_gowVblankTickCount > 0` ou aguardar `signalVSyncFlag` ter `flagAddr != 0` |

### 📂 Arquivos modificados nesta sessão
- `PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp` — adicionado `gow_intc_handler_0x182f28` + registro em `apply_god_of_war_overrides`
- `replit.md` — analogias 1+2 atualizadas (linhas 139-140, 164-165), Bug G atualizado na biblioteca (linha ~621), nova seção "PARTE 8" no histórico
- `HANDOFF_AGENT.md` (este arquivo) — bloco ESTADO ATUAL reescrito + resumo de analogias atualizado

### 🟡 Plano contingencial — se Cenário A falhar

| Falha | Backup |
|---|---|
| Cenário B (stub dispara mas trava) | Adicionar instrumentação dentro do stub que monitora os PCs do `sub_0021ff60` que estão em loop. Comparar com offsets `lui 0x2A`/`lui 0x33` da função |
| Cenário C (stub não registra) | Forçar `cmake` re-glob: `cd build && cmake ../GOD_PC_PORT_FINAL && make -j$(nproc)` |
| Cenário D (crash) | Wrappar escritas em `if (READ32(addr) != 0)` ou em "só escrever após primeiro tick" |
| Tudo falha | Escalar pra Opção B8 (disassemblar bytes do ELF + reescrever função em C++ regenerando via PS2Recomp). Custo: ~80min build |

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
| **G** | **Handler de interrupção apontado mas não recompilado → polling infinito** | Programa entra em loop após boot avançado (sem crash) | INTC mapeia handler pra um endereço guest que não está nos `.cpp` recompilados. Loop eterno de `[INTC:skip] cause=N handler=0x... → sem função recompilada` intercalado com `[vif1:cmd]` | (em discussão PARTE 7) Stub C++ pro handler em `game_overrides.cpp` OU adicionar a função à lista de recompilação OU registrá-la manualmente |
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
