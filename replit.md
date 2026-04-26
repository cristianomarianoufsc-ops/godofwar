# God of War PC Port

Port estático do God of War (PS2) para PC usando o PS2Recomp.

---

## 🔴 REGRA OBRIGATÓRIA PARA TODO AGENTE 🔴

**Sempre que fizer qualquer progresso — fix aplicado, bug identificado, teste rodado, causa raiz descoberta — atualize OBRIGATORIAMENTE os dois arquivos:**

1. `replit.md` — estado técnico atual, causa raiz, fix aplicado, comando de teste
2. `HANDOFF_AGENT.md` — seção "ESTADO ATUAL" com data, o que mudou, próximos passos

**Não atualize só um. Os dois sempre, no mesmo commit.**
Se você terminar a sessão sem atualizar os dois, o próximo agente vai perder horas repetindo diagnóstico já feito.

---

## 🚨🚨 ARMADILHA CRÍTICA: DOIS DIRETÓRIOS `src/recompiled/` 🚨🚨

O projeto tem **DOIS diretórios paralelos** com os mesmos ~5626 `.cpp` recompilados:

| Caminho | Status | Para quê |
|---|---|---|
| `./GOD_PC_PORT_FINAL/src/recompiled/` | ✅ **USADO PELO BUILD** | É o que `GOD_PC_PORT_FINAL/CMakeLists.txt` linka via `file(GLOB_RECURSE ${PROJECT_SOURCE_DIR}/src/recompiled/*.cpp)` |
| `./src/recompiled/` | ⚠️ **IGNORADO PELO BUILD** | Provavelmente o destino do regen do `ps2_recomp` (`tools/regen_truncated.sh`). Edições feitas aqui **NÃO TÊM EFEITO**. |

**Os dois NÃO estão totalmente sincronizados.** O `GOD_PC_PORT_FINAL/...` tem patches manuais de fixes de boot (Bugs A/B/C, etc.) que o `./src/recompiled/` não tem.

**SE VOCÊ PRECISAR EDITAR UM ARQUIVO RECOMPILADO PARA INSTRUMENTAÇÃO OU FIX:**
1. Edite SEMPRE em `GOD_PC_PORT_FINAL/src/recompiled/<arquivo>.cpp`.
2. NUNCA edite só em `./src/recompiled/`, ou o build vai usar a versão antiga.
3. Idealmente espelhe a edição em ambos para evitar drift futuro.

Sessões anteriores (incluindo a 04-26 PARTE 1) editaram o arquivo errado e gastaram tempo com testes inconclusivos. Não repita.

---

## 🚨 OBRIGATÓRIO PARA QUALQUER AGENTE NOVO 🚨

**Antes de tocar em qualquer coisa neste projeto, faça nesta ordem:**

1. **Leia este `replit.md` inteiro** (memória + estado atual da depuração).
2. **Leia o `HANDOFF_AGENT.md` inteiro** — contém o contexto detalhado das
   sessões anteriores, estrutura do projeto, bugs conhecidos e raciocínio
   das decisões.
3. **Ao terminar qualquer mudança, ATUALIZE OS DOIS arquivos:**
   - `replit.md` — adicione/atualize a seção "Estado atual da depuração" com
     a data da sessão e o que descobriu/mudou.
   - `HANDOFF_AGENT.md` — adicione uma nova subseção "✅ ... — SESSÃO YYYY-MM-DD"
     descrevendo diagnóstico, fixes aplicados e próximos passos.

**Por quê:** este projeto teve várias sessões em sequência com agentes
diferentes. Sem leitura + atualização disciplinada dos 2 docs, cada agente
re-descobre os mesmos bugs e desperdiça créditos do usuário.

---

## Preferências do projeto

- **Idioma**: toda comunicação no chat **e títulos de commit/checkpoint
  gerados pelo Replit** devem ser em **português brasileiro**. Não usar
  inglês nos títulos automáticos de checkpoint.
- **Compilação**: feita exclusivamente no PC do usuário (Linux Mint).
  Ver "FLUXO DE TRABALHO" abaixo.
- **Narrativa por analogia (OBRIGATÓRIO para todo agente novo)**:
  o usuário pediu que o progresso seja explicado também via duas analogias.
  Atualize ambas a cada avanço significativo (mesmo commit em que atualizar
  `replit.md` + `HANDOFF_AGENT.md`). Ver seção "📖 ANALOGIAS DO PROJETO"
  abaixo. Estilo de narração padrão no chat = **espionagem/ação**.

---

## 📖 ANALOGIAS DO PROJETO (manter atualizadas a cada sessão)

O usuário não é engenheiro de baixo nível, então o progresso técnico
(boot stub, syscalls, MIPS, init chain, etc.) é traduzido para duas
analogias paralelas. **Toda sessão nova deve ATUALIZAR as duas analogias
no mesmo commit em que atualiza o resto da documentação**, indicando em
que ponto da analogia o projeto está agora.

### Analogia 1 — Construção de um carro

| Etapa do carro | Equivalente técnico | Status |
|---|---|---|
| Chassi, rodas, carroceria | Toolchain PS2Recomp + 5.626 .cpp gerados | ✅ pronto |
| Combustível e bateria | ELF carregado, BSS zerada, heap inicializada | ✅ pronto |
| Sistema de injeção (crt0 + init chain) | Fix 1 (sentinel) + Fix 4 (4o init `sub_00138D48`) | ✅ instalado |
| Chave de ignição apontando pro lugar certo | Fix 5 (entry `0x100008` → `0x2996b0`) | ✅ corrigido |
| Primeira partida do motor | Build com Fix 4+5: motor RONCOU (janela abriu, GS recebeu config, SIF init) | ✅ confirmado 2026-04-26 |
| Mangueira solta engasgou na 1ª marcha | Lista circular #2 em `0x2cbbb0` zerada → loop infinito em `sub_0013FAB8` | ✅ identificado |
| Apertou a braçadeira mas no local errado | Fix 6 instalado **depois** dos inits, não chegava a rodar (galinha-e-ovo) | ✅ identificado parte 3 |
| Reposicionou a braçadeira **antes** dos inits + chave de torque limite | Fix 1+6 movidos pra antes do init chain + trava de segurança no `sub_0013FAB8` | ✅ aplicado parte 3 |
| Motor pegou de novo, ronco contínuo, mas vazamento de óleo voltou após a 1ª aceleração | Sentinela `0x2cbbb0` é zerada DEPOIS da 1ª chamada do `13FAB8` (path de inserção corrompe estrutura) | ✅ identificado parte 4 |
| Limitador de RPM segurou o motor antes de fundir + carro andou mais 100m até sufocar no carburador | Trava de segurança disparou em 1M iter, jogo continuou até bater em loop de comandos vazios na unidade gráfica VIF1 | ✅ confirmado parte 4 |
| **Achar a junta que está vazando óleo** | **Investigar quem escreve 0 em `0x2cbbb0` (provável: `label_13fb08` ou `sub_0013DA10`)** | 🟡 **AGORA** |
| Carburador, transmissão, suspensão | Subsistemas: GS (gráficos), DMA, áudio, controle | 🔜 depois |
| Test drive | Jogo rodando até a primeira fase jogável | 🔜 longe |

### Analogia 2 — História de espionagem/ação (estilo de narração padrão)

| Cena | Equivalente técnico | Status |
|---|---|---|
| Recrutamento e pesquisa do alvo | Ghidra, exportar funções, gerar 5.629 .cpp | ✅ feito |
| Reconhecimento do prédio | Build compila, executável existe | ✅ feito |
| Entrada pela ventilação | Primeiros boots, identificou loop infinito | ✅ Fix 1 |
| Sabotagem descoberta na equipe | Fix 2 era um traidor (`a1=1` causava `free` todo frame) | ✅ revertido |
| Descobriu que arrombou a porta errada | `0x100008` era corredor de serviço, cofre real é `0x2996b0` | ✅ Fix 5 |
| **Cofre ABRIU** — agente entrou no escuro | Fix 4+5 confirmados: janela raylib abriu, `GsPutIMR`+`GsSetCrt`+`SifInit` rodaram | ✅ confirmado 2026-04-26 |
| 1º guarda interno apareceu (mesmo perfil de outro neutralizado) | Lista circular #2 (`0x2cbbb0`) zerada — bug irmão da do Fix 1 (`0x2cf090`), trava `sub_0013FAB8` | ✅ identificado |
| Tranquilizante foi colocado na arma errada | Fix 6 instalado **depois** dos inits, mas guarda aparece **durante** os inits — dose nunca chegou a ser disparada | ✅ identificado parte 3 |
| Reposicionou o tranquilizante na arma certa + colete à prova de loops | Fix 1+6 movidos pra antes do init chain + trava de 1M iterações no `sub_0013FAB8` | ✅ aplicado parte 3 |
| Tranquilizante funcionou no 1º guarda; mas um segundo guarda apareceu sabotando o sistema dentro do cofre — revertendo o trabalho do agente | 1ª chamada do `13FAB8` ok, mas algo zera `[0x2cbbb0]` depois dela; chamadas 2-4 já encontram a estrutura corrompida | ✅ identificado parte 4 |
| Colete de loops absorveu o impacto, agente continuou e chegou no salão de servidores (mas servidor estava em loop de tela vazia) | Trava de segurança disparou em 1M iter sem travar PC; jogo avançou até loop de 159 comandos vazios no VIF1 (unidade gráfica do PS2) | ✅ confirmado parte 4 |
| **Identificar quem é o sabotador interno (espião dobrado dentro da equipe?)** | **Investigar quem escreve 0 em `0x2cbbb0` (provável: `label_13fb08` ou `sub_0013DA10`)** | 🟡 **AGORA** |
| Próximos guardas internos previstos | VIF1/DMA com payloads válidos, `SetupThread`, restantes do init chain, INTC handlers | 🔜 ato 3 |
| Fuga com o alvo | Jogo rodando até a primeira fase jogável | 🔜 final |

### Como atualizar as analogias

Ao terminar qualquer sessão com progresso:
1. Mova as marcações `🟡 AGORA` para o ponto novo da jornada.
2. Marque ✅ o que foi concluído.
3. Se descobrir uma cena nova que não estava prevista (ex.: novo bug
   inesperado vira "trama paralela"), adicione uma linha à tabela.
4. Espelhe a mesma atualização em `HANDOFF_AGENT.md` na seção de analogias.

---

## ⚡ FLUXO DE TRABALHO (LEIA ANTES DE QUALQUER COISA)

**O Replit NÃO compila nem roda o jogo.** O ambiente Replit serve apenas como
"IDE remota + análise de código". A compilação e execução são feitas pelo
usuário no PC local dele (Linux Mint), que tem cópia idêntica do repositório
inclusive com o `data/part1.pak` (~4 GB) já presente.

### Por que esse fluxo

- Compilar 5.626 arquivos no Replit leva ~80 minutos (CPU compartilhada).
- No PC local com ccache populado, recompilação incremental leva segundos.
- O usuário tem display real, GPU, gamepad e GDB local disponíveis.
- O `.pak` de 4 GB já está no PC dele — não precisa baixar do Drive a cada
  ambiente novo.

### Ciclo padrão por iteração

1. Agente edita arquivos `.cpp`/`.h` no Replit e commita (checkpoint automático
   gera o commit).
2. Agente avisa o usuário: "faz `git pull` e roda `bash X.sh`".
3. Usuário no PC: `git pull origin main` → build → executa o jogo.
4. Usuário coleta logs (ver abaixo) e cola no chat.
5. Agente analisa e volta ao passo 1.

### Comandos no PC do usuário (Linux Mint)

Caminho do projeto local: `~/Documentos/GitHub/godofwar/`

> 🚨 **AGENTES, LEIAM ANTES DE SUGERIR QUALQUER COMANDO** 🚨
>
> - **O build completo JÁ FOI FEITO** no PC do usuário. A pasta `build/` está
>   populada com CMakeCache.txt, objetos `.o` e o executável `GodOfWarPCPort`.
> - **NUNCA mande o usuário apagar `build/`, rodar `instalar_linux_mint.sh`,
>   nem `bash build.sh`** a não ser que tenha certeza absoluta que é necessário
>   (mudança de CMakeLists, novo arquivo .cpp criado do zero, corrupção do
>   ccache). Esses comandos disparam recompilação dos 5.626 .cpp do jogo
>   (~80 minutos de CPU).
> - **Para qualquer mexida em código existente** (editar `.cpp` ou `.h` de
>   `src/recompiled/`, `src/main.cpp`, `register_functions.cpp`, runtime, etc),
>   use **`recompilar.sh`**. Ele roda `make -j$(nproc)` incremental, recompila
>   só o que mudou, e leva segundos a 1 minuto.
> - **Para mudanças só no runtime** (`PS2Recomp/ps2xRuntime/`), pode usar
>   `rebuild_runtime.sh`, que é ainda mais focado.
> - O `build.sh` original existe e serve, mas é redundante com `recompilar.sh`
>   pra mudanças incrementais — prefira sempre `recompilar.sh`.
>
> **Se aparecer "porcentagem" (`[X%] Building CXX object ...`) ao rodar
> `recompilar.sh`**: NÃO é regressão. Significa que algum build anterior
> foi **cancelado no meio** (Ctrl+C antes de chegar a 100%) e o `make`
> está terminando os `.o` que ficaram pendentes. Deixe rodar ATÉ O FIM
> uma única vez — depois disso, todas as próximas execuções serão
> realmente rápidas (segundos), porque o `build/` finalmente estará
> 100% completo. Esse problema acontece muito porque agentes anteriores
> mandam Ctrl+C sem perceber que `make` mantém estado parcial.

```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main

# CASO PADRÃO (99% das vezes) — mudou QUALQUER .cpp ou .h existente:
bash recompilar.sh                     # incremental, segundos a 1 min

# Caso restrito — mudou só PS2Recomp/ps2xRuntime/*.cpp:
bash rebuild_runtime.sh --run          # mais focado, segundos

# Rodar o jogo (atalho):
bash jogar.sh

# Rodar com log de rastreamento + captura completa pra mandar pro agente:
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt

# Rodar manualmente capturando stdout/stderr separados:
./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 \
    > saida_stdout.log 2> saida_stderr.log
```

### O que o usuário deve mandar quando reportar erro

Sempre estes 3 itens em uma única mensagem:

1. **`saida_stderr.log`** — onde caem os `[DBG ...]`, warnings e mensagens do
   runtime.
2. **`ps2_missing.log`** — gerado automaticamente quando o programa termina
   (Ctrl+C, SIGTERM ou crash). Lista stubs/syscalls/funções ausentes.
3. **Comportamento observado** em uma frase: "tela preta", "trava em N
   segundos", "logo Sony pisca e some", etc.

Com esses 3 itens o agente fecha a análise em 1 round-trip. Sem eles, perde-se
2-3 idas e voltas pedindo informação básica.

### ⚠️ Armadilha conhecida: CMake GLOB e arquivos .cpp novos

O `CMakeLists.txt` usa `file(GLOB_RECURSE ... CONFIGURE_DEPENDS)` para coletar
os 5.6k arquivos de `src/recompiled/`. **Sem `CONFIGURE_DEPENDS`** (versão
antiga), arquivos `.cpp` adicionados depois da primeira execução do `cmake`
NÃO entram no build, e o linker dá centenas de erros tipo
`undefined reference to entry_0xXXXXXX`.

**Sintoma**: `[100%] Built target gow_recompiled` seguido de muitos
`/usr/bin/ld: ... undefined reference to ...`.

**Conserto**: o `CMakeLists.txt` já tem `CONFIGURE_DEPENDS` agora. Se aparecer
de novo, mande o usuário rodar:
```bash
cd ~/Documentos/GitHub/godofwar/build
cmake ../GOD_PC_PORT_FINAL && make -j$(nproc)
```
Isso re-avalia o GLOB sem perder os `.o` já compilados.

### 🔬 Estado da investigação (boot loop / segfault)

#### 🆕 SESSÃO 2026-04-26 PARTE 4 — TRAVA DE SEGURANÇA VALIDADA + sabotador interno detectado

**Status:** PARTE 3 (Fix 1+6 reposicionados + trava de segurança) **CONFIRMADA
EM PRODUÇÃO**. Tudo funcionou. Mas o teste revelou um bug mais profundo:
algo está zerando a sentinela `[0x2cbbb0]` DEPOIS da 1ª chamada do `13FAB8`.

**Evidências do log do user (2026-04-26 PARTE 4, 388 linhas, log_fix6_part3.txt):**
- ✅ `[boot_stub] FIX 1: sentinel lista circular #1 inicializado em 0x2cf090` — antes dos inits
- ✅ `[boot_stub] FIX 6: sentinel lista circular #2 inicializado em 0x2cbbb0` — antes dos inits
- ✅ 1ª chamada `13FAB8`: `READ32(sentinel)=0x2cbbb0` (boa) → saiu rápido pela path "lista vazia"
- ✅ `13FCA8` retornou normalmente, `13FB48`, `182F68`, `182E88`, `140578` rodaram
- ❌ 2ª chamada `13FAB8` (`a0=0x416488`): `READ32(sentinel)=0x0` (zerada!)
- ❌ 3ª chamada `13FAB8` (`a0=0x416f48`): `READ32(sentinel)=0x0`
- ❌ 4ª chamada `13FAB8` (`a0=0x417a08`): `READ32(sentinel)=0x0` + `s1+4=0x2` → entrou em loop
- ✅ **Trava de segurança disparou em 1M iterações:**
  ```
  [13FAB8] !!! TRAVA DE SEGURANCA DISPARADA !!!
  [13FAB8] loop excedeu 1M iter — sentinela em 0x2cbbb0 nao inicializada?
  [13FAB8] *0x2cbbb0 = 0x0 (esperado: 0x2cbbb0 para lista vazia)
  [13FAB8] forcando saida via path 'lista vazia' (label_13fb08)
  ```
- ✅ PC do user **NÃO travou** — programa continuou e voltou pro prompt normalmente
- 🟡 Após a trava, jogo avançou até nova cena: 159 linhas seguidas de
  `[vif1:cmd] idx=N opcode=0x0 imm=0x0 num=0 irq=0` (VIF1 = Vector Interface
  Unit 1 do PS2, parte da pipeline gráfica). Comandos zerados sugerem
  buffer DMA sendo lido vazio em loop ou stream sem terminator.

**Diagnóstico do sabotador (Bug F):**

A 1ª chamada do `13FAB8` é a única em que sentinela=0x2cbbb0 (saúde inicial).
Ela pega o path "lista vazia" e executa `label_13fb08` → `label_13fb0c`,
que faz `jal sub_0013DA10` (provavelmente "alocar nó / inicializar block").
Depois disso a sentinela está zerada.

**Suspeitos:**
1. **`label_13fb08` no próprio `sub_0013FAB8`**: o código de inserção carrega
   `$v0 = 44 << 16 = 0x2c0000` e usa como base. Se um store offset cair em
   `0x2cbbb0`, sobrescreve a sentinela.
2. **`sub_0013DA10`**: chamada do path de inserção. Pode ser um alocador
   que escreve em região global e por engano atinge `0x2cbbb0`.
3. **Layout da BSS errado**: `0x2cbbb0` pode ser parte de uma estrutura
   maior que está sendo sobrescrita por outro init.

**Próxima investigação proposta (não aplicada ainda — aguardando user):**
- Ler o código do path `label_13fb08` em `sub_0013FAB8_0x13fab8.cpp`
- Ler `sub_0013DA10_0x13da10.cpp`
- Adicionar um WATCH em `[0x2cbbb0]` no runtime: log de toda WRITE32 nesse
  endereço, com PC + RA — isso identifica o autor da corrupção em segundos
- Possível terceira opção: ignorar a corrupção (a trava de segurança já
  resolve o sintoma) e pular pra investigar VIF1/DMA

---

#### SESSÃO 2026-04-26 PARTE 3 — Fix 6 reposicionado + trava de segurança no 13FAB8

**Problema descoberto após teste do user:** o Fix 6 (sentinela `0x2cbbb0`)
estava sintaticamente correto mas posicionado **depois** das chamadas dos
4 inits no `boot_stub`. Como `sub_00138D48` (4o init) não retorna —
ela cai no loop de `sub_0013FAB8` antes de retornar — o boot_stub nunca
chegava nas linhas que inicializam as sentinelas. Galinha-e-ovo.

**Confirmação no log do user (2026-04-26 PARTE 2):**
- ✅ `[boot_stub] init 0x138d48 (4o init, pre-main)` apareceu
- ❌ `[boot_stub] FIX 6: sentinel lista circular #2 inicializado` NÃO apareceu
- ❌ `[boot_stub] sentinel lista circular inicializado em 0x2cf090` (Fix 1) NÃO apareceu
- ❌ `[boot_stub] init concluido, entry=0x2996b0` NÃO apareceu
- 🔁 `[13FAB8] sentinel_addr=0x2cbbb0 READ32(sentinel)=0x0` — sentinela ainda zerada
- 🔁 Loop atingiu >6M iterações de novo

**User também reportou:** janela do raylib ficou "transparente, mostrando
codigo compilando atrás" — esperado, pois é o X11 não conseguindo redesenhar
a janela porque a thread principal está presa no loop.

**Fix aplicado (esta sessão):**

1. **`PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`**:
   - Movidos os blocos de Fix 1 (`0x2cf090`) e Fix 6 (`0x2cbbb0`) pra
     **antes** do `kInitChain[]` loop, logo depois de `[boot_stub] $gp configurado`.
   - Removidos os blocos antigos depois dos inits (substituídos por nota
     de referência cruzada).
   - Mensagem do Fix 1 mudou para `[boot_stub] FIX 1: ...` (consistência
     com o `[boot_stub] FIX 6: ...`).

2. **`GOD_PC_PORT_FINAL/src/recompiled/sub_0013FAB8_0x13fab8.cpp`**:
   - Trava de segurança no loop `label_13fae8`: se passar de 1.000.000
     iterações, loga aviso completo (incluindo valor atual de `*0x2cbbb0`)
     e força saída via `goto label_13fb08` (path "lista vazia").
   - Reseta o counter para não spammar nas próximas chamadas.
   - Objetivo: nunca mais travar o PC do user — qualquer loop infinito
     dessa função vira aviso visível em log em ~1 segundo.

**Comando para testar:**
```bash
git pull origin main && bash build.sh
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 \
  2>&1 | tee log_fix6_part3.txt
grep -E "FIX 1|FIX 6|13FAB8|init concluido|2996b0|frame:upload|nonBlack|ExitThread|TRAVA|SEGV|crash" log_fix6_part3.txt | head -150
```

**Sinais de sucesso:**
- `[boot_stub] FIX 1: sentinel lista circular #1 inicializado em 0x2cf090` ANTES dos inits
- `[boot_stub] FIX 6: sentinel lista circular #2 inicializado em 0x2cbbb0` ANTES dos inits
- `[13FAB8] sentinel_addr=0x2cbbb0 READ32(sentinel)=0x2cbbb0` (NÃO `0x0`!)
- Trace prossegue além do `13FAB8` → `13FCA8` → `182FF0`
- `[boot_stub] init concluido, entry=0x2996b0` aparece
- Janela do raylib não trava (responde a fechar/redimensionar)

---

#### SESSÃO 2026-04-26 PARTE 2 — Fix 6: lista circular #2 (`0x2cbbb0`) — APLICADO (mas mal posicionado, ver PARTE 3)

**Status:** boot AVANÇOU muito. Janela do raylib abre instantaneamente.
GS (Graphics Synthesizer) recebe configuração (`PS2 GsPutIMR: Setting IMR=0xff00`,
`PS2 GsSetCrt: interlaced=0, videoMode=0, frameMode=0`). SIF inicializa.
Trava em `sub_0013FAB8` por novo loop infinito numa SEGUNDA lista circular.

**Confirmação Fix 4 + Fix 5 (sessão anterior):**
- `[boot_stub] init 0x138d48 (4o init, pre-main)` — Fix 4 OK.
- `[138D48] ENTRADA a0=0x0 a1=0x2c7084` — argumentos corretos.
- `[138D48] JAL [1/11] -> 0x283770 NAO REGISTRADA - skip` — primeira de 4 JALs
  faltantes (1, 3, 4, 5 do init chain).
- Entry chegou em `0x2996b0` (Fix 5 OK), `entry_2996b0` chamou `func_2996a8`
  e `func_293840`, que iniciou a chain dos subsistemas.

**Diagnóstico Bug E (esta sessão):**

Função `sub_0013FAB8` (em `GOD_PC_PORT_FINAL/src/recompiled/sub_0013FAB8_0x13fab8.cpp`)
é uma BUSCA EM LISTA DUPLAMENTE ENCADEADA, não spin-wait por hardware:

```
- $a1 = 0x2D0000 (lui)
- $v0 = $a1 - 0x4450 = 0x2cbbb0  ← endereço do head (constante)
- $s0 = READ32(0x2cbbb0)         ← carrega head
- if (s0 == v0) goto insertion   ← lista vazia se head aponta pra si mesmo
- senão: percorre s0 = *s0       ← traversa a lista
```

No log do user: `READ32(0x2cbbb0) = 0` (BSS zerada, nunca inicializada).
Resultado: `s0=0`, comparação `0 == 0x2cbbb0` falsa → entra no loop com
current=0 → `s0 = *0 = 0` → loop infinito (>6.7M iterações observadas).

**Bug irmão do Fix 1**: mesmo padrão de sentinela não inicializada em
endereço diferente. Quem deveria inicializar essa lista é uma das funções
não-registradas no init chain (`0x283770`, `0x17acb8`, `0x138b10`, ou `0x1838d0`).

**Fix 6 aplicado em** `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`
(logo após Fix 1). Bloco novo inicializa:
```cpp
constexpr uint32_t SENTINEL_2 = 0x2cbbb0u;
mem[0] = SENTINEL_2;  // next = self
mem[1] = SENTINEL_2;  // prev = self
```

**Risco:** baixíssimo. Inicialização cosmética de lista vazia. Não muda
lógica de jogo. Reversível em 3 linhas.

**Comando para testar:**
```bash
git pull origin main && bash build.sh
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99 \
  2>&1 | tee log_fix6.txt
grep -E "FIX 6|13FAB8|frame:upload|ExitThread|SEGV|crash" log_fix6.txt | head -100
```

**Sinais de sucesso:**
- `[boot_stub] FIX 6: sentinel lista circular #2 inicializado em 0x2cbbb0`
- `[13FAB8] sentinel_addr=0x2cbbb0 READ32(sentinel)=0x2cbbb0` (NÃO `0x0`!)
- Loop não aparece mais (ou <10 iterações)
- Trace continua para depois de `13FAB8` → `13FCA8` → `182FF0`

**Próximo bloqueador previsto:**
- Mais funções do init chain (JALs 6-11/11 do `sub_00138D48`)
- Algum GS register ainda não emulado
- `func_293840` virando `ExitThread` se nenhuma tarefa for criada

---

#### SESSÃO 2026-04-26 (PARTE 1) — Fix 4 + Fix 5: crt0 disassembly + entry 0x2996b0

Ver `HANDOFF_AGENT.md` para detalhes completos do disassembly do crt0.
Resumo: o entry point estava errado (`0x100008` → `sub_001003C0` interno),
quando o crt0 real do PS2 faz `j 0x2996b0` depois de 4 inits. Fix 4
adicionou o 4º init (`sub_00138D48`), Fix 5 corrigiu o entry para `0x2996b0`.

---

#### 🆕 SESSÃO 2026-04-25 (E) — Bug D: loop infinito + stack overflow em func_100408 — FIXADO

**Status atual (após Bugs A/B/C/D corrigidos):**
- Bugs A/B/C corrigiram o crt0 truncado, o `$gp=0` e o boot stub.
- **Bug D** (esta sessão): `func_100408(a0=0)` com mundo nulo entrava em loop infinito varrendo lista duplamente ligada em `mem[0x20]` → RDRAM zerado = `mem[0x20]=0` ≠ sentinela `0x20` → iteração sem fim → cada iteração chamava `sub_00100E28` → JALR `0x35c920` (BSS, não registrado) → return prematuro sem epilogue → **stack leak +0x40/iter → SIGSEGV em ~8 segundos**.

**Fixes desta sessão (3 arquivos):**

1. **`PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`** (boot stub)
   - `std::memcpy(rdram + 0x20u, &sentinel, 4)` onde `sentinel = 0x20u` — cria lista vazia antes da cadeia de init.
   - BSS clear range corrigido: `0x2c7080 → 0x35d080` (era `0x95128`, errado).

2. **`GOD_PC_PORT_FINAL/src/recompiled/sub_00100E28_0x100e28.cpp`** (JALR guard)
   - `if (!runtime->hasFunction(jumpTarget))` → NOP + log warning; não retorna prematuramente.

3. **`GOD_PC_PORT_FINAL/src/recompiled/sub_00100408_0x100408.cpp`** (JALR guard + include)
   - Mesmo guard, mais `#include <cstdio>`.

**Próxima ação no PC:**
```bash
cd ~/Documentos/GitHub/godofwar
git pull origin main
bash recompilar.sh
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_bug_d.txt
tail -50 log_bug_d.txt
```

**Comportamento esperado:** sem loop, sem stack leak. Jogo avança até PC=0 (soft-loop) ou novo erro. Colar as últimas 50 linhas de `log_bug_d.txt` aqui para o próximo agente analisar.

**Próximo bloqueio provável:** PC=0 após `0x1003c0` retornar → recover-pc entra em soft-loop (sem crash). Para avançar: descobrir `main()` do jogo (último JAL do crt0 = `0x138cb0`). Verificar no Ghidra quem escreve em `0x32E854`.

---

#### Sessão 2026-04-25 (C) — crt0 OK, mas boot_stub sabotando

Após o regen do crt0 (sessão B abaixo) `tools/diagnose_crt0.py` no PC do
usuário reportou **OK** — todas as 9 instruções críticas presentes.
Mas o crash continua **idêntico** (`0x35c920` com `gp=0x0`).

**Investigação no log `log_pos_crt0.txt`**:
- Disassembly do ELF mostra que o crt0 SETA `$a0` SOZINHO via lui+addiu
  em 0x100148 + 0x10015c (`$a0 = 0x002cf070`), depois faz
  `daddu $gp, $a0, $zero` em 0x100170. **NÃO depende do kernel**.
- Mas `boot_stub` em `ps2_runtime.cpp:2384` faz coisas hostis ao crt0:
  - Roda `__libc_init`, `init libs` e `main()` ANTES do crt0, com `$gp=0`
  - Linha 2476 zera `$a0` antes de cada init
  - Restaura `pc=0x100008` mas com estado sujíssimo (BSS já mexido,
    SetupThread/Heap chamados, syscalls com handlers em endereços de IOP)
- O log mostra 4 syscalls 0x83 (LoadDmac) e 6 syscalls 0x5b com handlers
  em `0x80076000`/`0x80075000` (regiões IOP) caindo em fallback ANTES
  do crt0 rodar — alimentadas pelo boot_stub.

**Edits desta sessão** (`PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`):
1. **Boot_stub virou opt-in** (`PS2_BOOT_STUB=1` reativa). Default OFF
   agora que o crt0 está completo. Justificativa em comentário inline.
2. **`[BOOT#N]` log agora inclui `gp=0x...` e `a0=0x...`** pra diagnosticar
   se o crt0 está realmente setando esses regs.

**Próximo teste no PC**:
```bash
cd ~/Documentos/GitHub/godofwar && git pull && bash recompilar.sh
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_sem_bootstub.txt
```
Cenários esperados:
- **`gp=0x2cf070` aparece em algum BOOT#N** → crt0 funciona, e o crash
  passa a outro lugar. Progresso real.
- **`gp=0x0` em todos BOOT#N até crash em 0x35c920** → o tradutor do
  ps2_recomp gerou código inválido pra `daddu $gp, $a0, $zero`. Próximo
  passo: ler `entry_0x100008.cpp` e ver se a linha que traduz 0x100170
  realmente escreve em `r[28]`.

---

#### Sessão 2026-04-25 (B) — ROOT CAUSE IDENTIFICADO: crt0 truncado

**Causa raiz confirmada**: `src/recompiled/entry_0x100008.cpp` declara range
`0x100008 - 0x10008c` (132 bytes), mas o crt0 real do ELF vai até `0x100db8`
(3504 bytes). Faltam **843 instruções** críticas. O arquivo termina com um
"Patch: Jump to next entry point" hardcoded que pula direto pra `0x1001d0`,
saltando todo este código essencial:

| Endereço | O que está faltando |
|---|---|
| 0x10012c–0x100144 | **BSS clear loop** (zera 0x2c7080 → 0x35c1a8 — inclui `0x32E854`) |
| 0x100170 | **`daddu $gp, $a0, $zero`** → setup do `$gp = 0x002cf070` |
| 0x10017c | **`daddu $sp, $v0, $zero`** → setup do stack pointer |
| 0x100178, 0x100194 | Syscalls 60 e 61 (init de kernel) |
| 0x100198 | `jal 0x002994a0` — `__libc_init` |
| 0x1001a0 | `jal 0x00293ea0` — init libs |
| 0x1001a8 | **`jal 0x00138cb0` — chamada do `main()`** ← inicializaria `0x32E854` |

Isso explica perfeitamente o crash:
- `gp=0x0` no log do crash → setup do `$gp` foi pulado
- `0x32E854` zerado → `main()` nunca rodou (15 leitores no ELF, 0 escritores
  porque o escritor real está dentro de uma função de init que nunca é
  alcançada pelo crt0 atual)
- Boot cai em `sub_00100E28` que segue cadeia de ponteiros
  (`*0x32E854 → +0x20 → +0xA4`) e tropeça em valor lixo `0x35c920`

**Ferramenta nova**: `tools/diagnose_crt0.py` reporta o estado real do crt0
do usuário. Exit 0 = OK, exit 1 = falha (com lista de instruções faltando).

**Próximo passo**: usuário precisa rodar `uv run python tools/diagnose_crt0.py`
no PC dele pra confirmar se *na máquina dele* o crt0 já foi regenerado
(comportamento esperado se o `regen_truncated.sh --all` da rodada anterior
funcionou). Possíveis cenários:
- **Diagnóstico FALHA** (igual ao Replit) → crt0 ainda truncado; rodar
  `bash tools/regen_truncated.sh --all && bash recompilar.sh` outra vez.
- **Diagnóstico OK** mas crash continua → `.cpp` foi regenerado mas o
  tradutor do `ps2_recomp` está gerando código inválido para `daddu $gp,...`,
  ou o build incremental não recompilou o `.o` (rodar `touch
  src/recompiled/entry_0x100008.cpp && bash recompilar.sh`).

---

#### Sessão 2026-04-23 (HISTÓRICO)
Atualizado em 2026-04-23. Já chegamos a rodar o jogo (tela preta) e ele
crasha com SIGSEGV após ~2,4 s. Resumo dos achados:

**1. Loop principal está em `sub_00100E28`** com tudo zerado:
- Lê global em `0x32E854` (== 0)
- Chama função no endereço apontado pela global (== 0 → função 0)
- Chama `func_118110(0)` → retorna 0
- Chama `func_13DB18(0, 0)` → escreve em `[0]` → ⚠️ segfault provável

**2. NINGUÉM escreve na global `0x32E854`** em todo o código recompilado
(busca por literal). Pode ser indireto (`lui+sw`) ou simplesmente nunca
inicializado por falta de chamada do CRT0/inicializador. Watchpoint instalado
no runtime (`PS2_GLOBAL_WATCH_ADDR` em `ps2_runtime.h`) que loga com
`[watch:GLOBAL_0x32E854]` em stderr toda escrita nesse endereço. Se nada
aparecer, a global de fato nunca é inicializada e precisamos descobrir quem
deveria fazer isso (provavelmente algum stub do BIOS PS2).

**3. `func_0x10047C` chamada 8.192×/s (8k em 2.4s)** mas NÃO é função real —
é uma instrução interna de `sub_00100408` (linha 142 do .cpp gerado:
`daddu $a1, $s1, $zero`). O recompilador gerou um padrão estranho de
`ctx->pc = 0x10047C; return;` que o runtime trata como chamada externa.
Conserto definitivo seria no gerador (`PS2Recomp/ps2xRecomp/`), mas é
trabalho grande. Por ora, quando rodar normalmente, isso só polui logs.

**4. Arquivos instrumentados** (`fprintf(stderr, "[DBG ...]")` com limite de
40 chamadas via `std::atomic<int>`):
- `sub_00100E28_0x100e28.cpp` — entry, post-jalr, pre-call e exit
- `sub_00118110_0x118110.cpp` — entry e 2 exits
- `entry_13db18_0x13db28.cpp` — entry completo

**5. Próximo passo provável**: rodar de novo, verificar se o watchpoint da
global em `0x32E854` dispara. Se sim, achamos o inicializador. Se não,
precisamos implementar manualmente no `stub_hardware_init`
(`GOD_PC_PORT_FINAL/src/ps2_syscall_stubs.cpp`).

**6. Sessão 2026-04-25 — overlay loader ausente (`0x35c920`)**: depois de
adicionar `recover-pc` pra função desconhecida, o boot avança até
`func_100E28` chamar JALR pra `0x35c920`. Esse endereço **não existe no ELF
principal** (`mips_inspect.py` confirma: está em região `.bss` do segment
`memsz` mas fora do `filesz` carregado: `0x100000–0x2c7018` é file-backed,
`0x2c7018–0x35d080` é `.bss` zerado). Logo `0x35c920` é alvo de **overlay
`.DVP`** que devia ser carregado em runtime via DMA/IOP, mas o loader nunca
roda — provavelmente porque os syscalls 0x83 (LoadExecPS2 family), 0x5a/0x5b
caem em `[SyscallOverride:fallback]` no boot. Resultado: dispatcher entra em
loop infinito `100e28 → 35c920(unknown→recover) → 13db18 → 100e64(unknown→recover)`
até estourar a stack (`sp` desce ~256 KiB) e dar SIGSEGV. **Próximo passo**:
rodar `python3 tools/ps2_syscalls.py --report --log saida_stderr.log` pra
priorizar qual syscall é o overlay loader e implementá-lo.

**7. Detector de ciclo de PCs no dispatcher** (adicionado em
`ps2_runtime.cpp::dispatchLoop`): além do `samePcCount` antigo (que só pega
PC repetido idêntico), agora há um detector de **ciclos de 2..8 PCs
alternando** que:
- **Camada 1 (sempre ligada)**: a cada `PS2_LOOP_REPORT_AFTER` repetições do
  mesmo ciclo (**default 1000** — não 100k! O sistema de recovery em
  `defaultFunction` mata tudo após 8192 tentativas, então threshold alto
  nunca dispara em loops fatais), imprime em stderr
  `[dispatch:cycle-detected] len=N repeated=M pattern=0x... -> 0x... ra=... sp=... gp=...`
  seguido de `guestStackWalk=` (varre 4 KiB acima de `sp` listando palavras
  que sejam endereços de funções recompiladas válidas) e `dispatchHistory=`
  (últimas 64 PCs).
- **Camada 2 (opt-in)**: se `PS2_LOOP_BREAK_AFTER=N` for setado e o ciclo
  bater N repetições, chama `requestStop()` e encerra o runtime limpo (sem
  esperar `Ctrl+C` nem segfault). Default 0 = desligado, porque busy-wait
  legítimo (VBlank, semáforos, GS regs) bate facilmente em loops curtos
  e matar isso quebraria o jogo.
- **Dump de garantia na saída fatal**: o handler "Called unimplemented
  function" (em `defaultFunction`) chama `dumpLoopDetectorState("unimpl-fn", ...)`
  antes do `requestStop()`. Assim, mesmo se o threshold periódico não
  disparar (loops muito curtos morrem antes), o último estado conhecido
  do detector aparece logado como `[unimpl-fn:cycle-info] len=N repeated=M
  pattern=...` na linha de erro final. Não precisa setar env var pra ter
  esse dump — ele é automático em todo crash de função desconhecida.

Uso típico no PC do usuário:
```bash
# Diagnostico passivo (default — apenas loga):
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt

# Auto-stop quando ciclo repetir 1M vezes (encerra limpo):
PS2_LOOP_BREAK_AFTER=1000000 bash jogar.sh 2>&1 | tee log_teste.txt

# Reportar mais cedo (a cada 10k repeticoes em vez de 100k):
PS2_LOOP_REPORT_AFTER=10000 bash jogar.sh 2>&1 | tee log_teste.txt
```

### Regras pro agente Replit

- **NÃO rodar `bash build.sh` no Replit** — só desperdiça CPU.
- **NÃO iniciar o workflow `Start application`** — está intencionalmente
  configurado pra apenas imprimir uma mensagem de aviso.
- O workflow `Download part1.pak` também não precisa ser rodado (usuário já tem
  o arquivo local).
- Pode rodar análises estáticas, validação de sintaxe (`g++ -fsyntax-only`),
  ripgrep, leitura de arquivos. **Compilação completa, jamais.**

---

## 🛠️ INVENTÁRIO DE FERRAMENTAS EM `tools/` — LEIA ANTES DE PROPOR CRIAR QUALQUER COISA NOVA

> 🚨 **AGENTES**: a tabela abaixo é a fonte da verdade do que JÁ EXISTE no
> diretório `tools/`. Antes de sugerir "vou criar uma ferramenta que…",
> **bate o olho aqui primeiro**. Vários agentes anteriores perderam ciclos
> propondo ferramentas que já estavam prontas. Se a ferramenta existe mas
> nunca foi rodada, **rode-a**, não recrie.

| Arquivo | O que faz | Como invocar | Última saída relevante |
|---|---|---|---|
| `mips_inspect.py` | Desmonta MIPS R5900 do ELF; lista gaps; diagnostica buracos. | `python3 tools/mips_inspect.py 0xADDR` / `--list-gaps` / `--gap 0xADDR` | Já catalogou 30 maiores gaps. |
| `gap_discover.py` | Varre gaps reais entre funções recompiladas, detecta prólogos R5900, gera CSV `name,start,end,size` no formato Ghidra. | `python3 tools/gap_discover.py` → `tools/discovered_functions.csv` | 75 funções novas em `discovered_functions.csv`. |
| `map_truncated_functions.py` | Compara `// Address: 0xS-0xE` declarado nos `.cpp` vs. o `jr $ra` real no ELF. Lista todas as funções truncadas. | `python3 tools/map_truncated_functions.py` | Sessão 04-25: 1607 funções truncadas. |
| `fix_truncated.py` | Gera CSV de correção (`tools/truncation_fixes.csv`) com ranges expandidos pra reabilitar via ps2_recomp. Suporta `--only-entry` / `--reachable` (default) / `--all`. Carrega overrides manuais de `truncation_overrides.csv`. | Chamado por `regen_truncated.sh`; raramente standalone. | CSV cobrindo 1607 funções. |
| `regen_truncated.sh` | **Pipeline completo de 5 passos**: (1) gera CSV de fixes, (2) localiza `ps2_recomp`, (3) localiza TOML, (4) injeta `ghidra_output` no TOML (com `.bak`), (5) roda ps2_recomp e dá `touch` nos arquivos modificados pra forçar rebuild. | `bash tools/regen_truncated.sh [--only-entry\|--all\|--reachable]` | Last run (`--all`): 1607 funções estendidas, 4053 entries adicionais descobertas, 671 funções resliceadas, 1790 arquivos retocados. |
| `ps2_syscalls.py` | Tabela de ~80 syscalls do BIOS PS2 (EE) com criticidade. Modos: lookup por ID, lookup por endereço, listagem, e **`--report --log build/run.log`** que prioriza syscalls a implementar por (criticidade × frequência). | `python3 tools/ps2_syscalls.py --report --log build/run.log` | — |
| `reachable_after_boot.py` | BFS de alcançabilidade a partir de seeds (lê `tools/reachable_seeds.txt`), produz tier-report de funções alcançáveis. | `python3 tools/reachable_after_boot.py` | Hoje só tem 1 seed (`0x100008`). Adicionar root_func, VU0/VU1, dispatch de game state quando descobertos. |
| `find_writer_32E854.py` | Decodificador MIPS manual; varre PT_LOAD do ELF buscando quem **escreve/lê** em `0x32E854` (a flag que o crt0 espera). Idiomas: `lui+sw`. | `python3 tools/find_writer_32E854.py` | **Sessão 04-25 (rodado): 0 escritores, 15 leitores no ELF principal.** |
| `find_writer_v2.py` | Versão estendida do anterior: rastreia `lui+ori`, `lui+addiu`, `lui+daddiu/daddu` pra computar EA correto através de cadeias de instruções. | `python3 tools/find_writer_v2.py` | **0 escritores, 15 leitores** (confirma o anterior). |
| `find_writer_32E854_overlays.py` | Igual ao v2, mas escaneia **TODAS** as seções (incluindo overlays `.DVP` com addr=0). | `python3 tools/find_writer_32E854_overlays.py` | **0 escritores, 15 leitores** — overlays também não escrevem. |
| `diagnose_crt0.py` | **Diagnóstico cirúrgico do crt0**: lê o `.cpp` atual de `entry_0x100008` e arquivos adjacentes; verifica se as 9 instruções críticas do crt0 real (BSS clear, setup `$gp`/`$sp`, syscalls 60/61, `jal __libc_init`, `jal main`) foram traduzidas. Reporta em pt-BR claro o que está faltando e exit code 0=ok / 1=falha. | `uv run python tools/diagnose_crt0.py` | Sessão 04-25 (Replit): 5 críticas + 4 altas ausentes, Patch hack presente, range 132 bytes em vez de 3504. |
| `discovered_functions.csv` | CSV de funções descobertas pelo `gap_discover.py`. Formato Ghidra: `name,start,end,size`. | Consumido pelo `recompiler.toml` via `ghidra_output=`. | 75 entradas. |
| `truncation_fixes.csv` | CSV gerado pelo `fix_truncated.py`, injetado no TOML pelo `regen_truncated.sh`. **Não editar à mão** — é regenerado a cada run. | Auto. | Atual: 1607 fixes. |
| `truncation_overrides.csv` | **Edite à mão** — overrides manuais que vencem o auto-detect quando este erra (early-returns, sub-funções não-listadas). Formato: `name,start,end[,size]`. | Lido por `fix_truncated.py`. | 1 override (`entry,0x100008,0x100db8`). |
| `reachable_seeds.txt` | Lista de seeds (1 por linha, hex). | Lido por `reachable_after_boot.py`. | 1 seed (`0x100008`). |

**Categorias rápidas**:
- **Análise estática do ELF**: `mips_inspect`, `gap_discover`, `map_truncated_functions`, `find_writer_*`.
- **Pipeline de regen**: `fix_truncated` + `regen_truncated.sh` + os 3 CSVs.
- **Análise de runtime**: `ps2_syscalls.py --report` (lê o log do jogo).
- **Alcançabilidade**: `reachable_after_boot.py` + `reachable_seeds.txt`.

**Lacunas conhecidas (oportunidades pra novas ferramentas)**:
- ❌ Não existe scanner de IRX (`*.IRX`) buscando escritores de globals da EE — relevante porque 3 scripts já confirmaram 0 escritores de `0x32E854` no ELF principal, então a flag tem que vir de IRX/DMA. **Próxima tool útil**.
- ❌ Não existe parser do `ps2_missing.log` que adiciona automaticamente PCs travados como seeds em `reachable_seeds.txt`.
- ❌ Não existe detector de "boot loop" no runtime que avise quando a mesma função é chamada N vezes seguidas com argumentos idênticos.

## Visão Geral

Este projeto converte o executável original do PS2 (`SCUS_973.99`) para código C++ nativo usando recompilação estática. São 5.629 funções MIPS traduzidas para C++20, vinculadas ao `ps2xRuntime` que emula o hardware do PS2.

## Estrutura do Projeto

- `GOD_PC_PORT_FINAL/` — Workspace principal do port
  - `src/recompiled/` — 5.626 arquivos .cpp gerados (funções do jogo)
  - `src/main.cpp` — Ponto de entrada
  - `src/register_functions.cpp` — Mapeamento de endereços PS2 → funções C++
  - `src/ps2_syscall_stubs.cpp` — Stubs de syscalls do PS2
  - `data/` — Arquivos originais da ISO (SCUS_973.99, IRX, etc.)
  - `include/` — Headers das funções recompiladas
- `PS2Recomp/ps2xRuntime/` — Runtime que emula o hardware do PS2
  - `include/ps2_call_tracer.h` — Tracer de chamadas em tempo real
  - `src/lib/` — Implementação do runtime (GS, IOP, VU, áudio, memória)
- `instalar_linux_mint.sh` — Script de instalação automática para Linux Mint
- `jogar.sh` — Script para executar o jogo
- `build.sh` — Script de build completo (primeira vez, leva horas)
- `rebuild_runtime.sh` — Rebuild rápido só do runtime (segundos a minutos)

## Ferramentas de iteração rápida

O `CMakeLists.txt` foi separado em duas bibliotecas estáticas:
- `gow_recompiled` — os 5.626 .cpp gerados (build inicial lento, raramente muda)
- `ps2runtime` — o runtime do PS2 (muda bastante durante depuração)

Combinado com **ccache** (cache de compilação automático), isso permite:
- Mexer no runtime e recompilar em segundos via `bash rebuild_runtime.sh`
- Rebuilds completos depois do primeiro também ficam muito mais rápidos
- Cache do ccache configurado em 5GB (`ccache -s` mostra estatísticas)

Use `bash rebuild_runtime.sh --run` para recompilar e já executar o jogo.

## Relatório de funções/syscalls/stubs ausentes

O runtime registra automaticamente tudo que o jogo chama mas ainda não está
implementado: stubs (`TODO_NAMED`), syscalls com ID desconhecido e funções
sem endereço registrado.

Quando o programa termina (normal, Ctrl+C ou SIGTERM), grava o relatório em:
- `./ps2_missing.log` por padrão
- ou no caminho indicado por `PS2_MISSING_LOG=...`

Conteúdo do relatório (ordenado pelos mais chamados):
- Tipo (STUB / SYSCALL / FUNCTION)
- Quantas vezes foi chamado
- Quando ocorreu a primeira chamada (ms)
- PC do primeiro chamador, RA, e args (a0..a3)

Use esse relatório para **priorizar** o que implementar primeiro:
provavelmente poucos itens cobrem 90% das chamadas.

Arquivos: `PS2Recomp/ps2xRuntime/include/ps2_missing_report.h`
e `PS2Recomp/ps2xRuntime/src/lib/ps2_missing_report.cpp`.

## Roadmap de ferramentas (para próximos agentes)

A estratégia do projeto é construir ferramentas que aceleram o trabalho de
fundo (debug, implementação de stubs, etc). Cada ferramenta entregue fica
para sempre no repositório. Ordem planejada:

### Já entregues
1. ✅ **Build incremental rápido** — ccache + bibliotecas estáticas separadas
   + `rebuild_runtime.sh`. Corta ciclo de iteração de horas para segundos.
2. ✅ **Relatório de funções ausentes** — `ps2_missing_report` (acima).
   Gera `./ps2_missing.log` priorizado por contagem de chamadas.
3. ✅ **Inspetor MIPS do ELF** — `tools/mips_inspect.py`.
   Lê o ELF (`SCUS_973.99`), desmonta MIPS little-endian, e diagnostica
   automaticamente buracos (gaps) entre funções recompiladas.
   Requer: `sudo apt install python3-capstone`.
   - `python3 tools/mips_inspect.py 0x10047c` — desmonta a partir do endereço
   - `python3 tools/mips_inspect.py --gap 0x10047c` — identifica o gap que
     contém o endereço e diagnostica se é padding ou código real
   - `python3 tools/mips_inspect.py --list-gaps` — lista os 30 maiores gaps
     do recompilador (priorização sistêmica em vez de bug-by-bug).
   - **Setup automático:** `setup_linux.sh` na raiz do projeto recria todo
     o ambiente (apt deps, raylib 5.5, ccache, pipx, gdown, git config) em
     qualquer Mint/Ubuntu novo. `bash setup_linux.sh`.

5. ✅ **Descobridor de gaps** — `tools/gap_discover.py`. Varre o ELF nos gaps
   reais (usando `// Address: 0xX - 0xY` dos .cpp existentes), detecta
   prólogos R5900 (`addiu/daddiu $sp,$sp,-X`), refina o final via último
   `jr $ra`, e gera CSV no formato `loadGhidraFunctionMap` (`name,start,end,size`).
   Resultado: 75 funções novas (~18KB) em `tools/discovered_functions.csv`.
   Para usar de verdade exige rodar o PS2Recomp com TOML referenciando
   `ghidra_output = "tools/discovered_functions.csv"` (binário externo).

6. ✅ **Stub de syscall BIOS no dispatcher** — Em `lookupFunction` (runtime),
   qualquer endereço `< 0x00100000` (faixa do BIOS PS2) agora retorna um
   stub leve que zera `$v0` e devolve controle SEM mexer em `ctx->pc`,
   evitando o loop "function not found 0x10047c" que ocorria quando uma
   vtable expunha um vetor de syscall (ex: 0x80004 = SetGsCrt).
   - Diagnóstico: o caller recompilado (sub_00100408) faz
     `if (ctx->pc != 0x10047C) return;` após o `jalr`. A recuperação antiga
     setava `ctx->pc = stack-recovered`, fazia o caller retornar, e o
     dispatcher ficava preso tentando despachar 0x10047c (mid-function).
   - Stub novo: deixa o caller continuar normalmente após o `jalr`, como
     se o syscall tivesse sido chamado e retornado 0.
   - Cada endereço novo loga uma vez `[lookup:bios-stub] addr=0x...
     syscallId=N` e é registrado em `ps2_missing_report` para auditoria.
   - Arquivo: `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` (lookupFunction).

7. ✅ **Decodificador de syscalls do BIOS PS2** — `tools/ps2_syscalls.py`.
   Tabela canônica de ~80 syscalls do EE (ResetEE, SetGsCrt, CreateThread,
   WaitSema, SifSetDma, etc.) com nome, categoria e criticidade (1-5).
   Modos:
   - `python3 tools/ps2_syscalls.py 0x44` — decodifica syscall #68 = WaitSema
   - `python3 tools/ps2_syscalls.py --addr 0x80004` — endereço -> syscall
   - `python3 tools/ps2_syscalls.py --list` — lista completa de referência
   - `python3 tools/ps2_syscalls.py --report --log build/run.log` — lê log
     do jogo, conta cada `[lookup:bios-stub] syscallId=N`, e ordena por
     criticidade × frequência. Diz EXATAMENTE qual syscall implementar
     primeiro pra destravar o boot.
   - Para gerar log: `bash build.sh 2>&1 | tee build/run.log`.

8. ✅ **Live PC no `[run:tick]`** — `m_debugPc/Ra/Sp` só é atualizado no
   topo do `dispatchLoop`. Se uma `fn()` recompilada entra em loop C++
   infinito (callee profundo), esses valores ficam **stale** mostrando
   "pc=0x1003c0" para sempre, mascarando o real ponto de travamento.
   Agora o tick também loga `livePc=0x... liveRa=0x... liveSp=0x...` lidos
   diretamente de `m_cpuContext` (race benigna, x86 garante load atômico
   de uint32 alinhado). Compare `livePc` entre ticks consecutivos para
   identificar busy loops.
   - Arquivo: `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` no `run:tick`.

9. ✅ **Thin archive para `libgow_recompiled.a`** — sobrescreve as regras
   globais `CMAKE_CXX_ARCHIVE_CREATE/APPEND/FINISH` no topo do
   `GOD_PC_PORT_FINAL/CMakeLists.txt` pra invocar `ar qcsT`. O `.a` deixa
   de copiar os 5.6k `.o` internamente e vira uma lista de referências aos
   arquivos em disco. Resultado:
   - `.a` cai de ~3 GB para ~5-10 MB.
   - Etapa do `ar` (que antes levava 10-15 min e travava em "Linking CXX
     static library") agora termina em **segundos**.
   - Elimina o erro `"impossível copiar libgow_recompiled.a; razão: Sucesso"`
     que ocorria quando o disco enchia durante o pico do `ar` (errno=0 em
     `rename()` por ENOSPC mascarado).
   - Funciona normalmente com `-Wl,--whole-archive` no link final.
   - **Limitação**: o `.a` thin só funciona quando os `.o` continuam no
     mesmo caminho do `build/`. Se mover o `build/` sem os `.o`, o `.a`
     fica inútil — mas isso nunca é o caso normal.
   - **NÃO USAR `STATIC_LIBRARY_OPTIONS "rcsT"`** no target — o CMake passa
     esse valor como argumento posicional do `ar` em vez de injetar como
     flags, fazendo `ar` interpretar `rcsT` como nome de arquivo e abortar
     com `"rcsT: Arquivo ou diretório inexistente"`. A forma correta é
     sobrescrever as variáveis globais `CMAKE_CXX_ARCHIVE_*`.
   - Arquivo: `GOD_PC_PORT_FINAL/CMakeLists.txt`.

## Estado atual da depuração (sessão de 2026-04-23) — PARCIALMENTE SUPERADA

> ⚠️ **VER SEÇÃO 2026-04-24 ABAIXO** — investigação seguinte refinou esse
> diagnóstico. O loop real **NÃO** está em `sub_00100E28` (que é linear),
> e sim no **caller** dela: `sub_00100408`. A causa raiz também foi
> identificada (boot incompleto em `entry_0x100008`).

**Boot avança até:** janela abre, raylib + audio init OK, ELF carrega,
`Starting execution at address 0x100008`, dispatcha `BOOT#1 pc=0x100008`
e `BOOT#2 pc=0x1003c0`. Stub BIOS dispara **uma vez** para `0x80004`
(`syscallId=1` = ResetEE). Frame uploads rodam (`nonBlack=0`, tudo preto).

**LOOP INFINITO LOCALIZADO (após instrumentação livePc):**

Com `livePc` lendo direto de `m_cpuContext.pc`, capturamos os ticks reais:
- tick 1200: `livePc=0x13d980 liveRa=0x13d954 liveSp=0x1fffde0`
- tick 1320: `livePc=0x13dc90 liveRa=0x13da58 liveSp=0x1fffdc0`
- tick 1440: `livePc=0x118168 liveRa=0x100e7c liveSp=0x1fffeb0`
- tick 1560: `livePc=0x118168 liveRa=0x100e7c liveSp=0x1fffeb0` ← idêntico
- tick 1680: `livePc=0x13dcc4 liveRa=0x13da58 liveSp=0x1fffdc0`

Programa oscila entre 2 hot spots → confirma loop. `dbgPc=0x1003c0` é
stale só porque a `fn()` raiz nunca retornou.

**Loops identificados (não-infinitos individualmente):**
- `sub_00118110_0x118110.cpp` label_118168: loop `while (a1 < 15)` que
  inicializa tabela de 15 elementos (zera fields 0x48, 0x84, 0xC0).
  Termina em 15 iterações — **não é o problema**.
- `sub_0013DC78_0x13dc78.cpp` ~0x13dc90: função "format/process",
  começa com `sltiu $v0, $s1, 4` — loop de processamento curto.

**O LOOP REAL está no caller `sub_00100E28_0x100e28.cpp`:**
```cpp
loop:                                  // ~0x100e28
    init_table_15_elements();          // sub_00118110 (liveRa=0x100e7c
                                       //   = PC após jal func_118110)
    process_something();               // sub_0013DB18 → sub_0013DC78
    if (flag_que_nunca_muda)
        goto loop;
```
Confirmado por `liveRa=0x100e7c` = exatamente a instrução depois do
`jal func_118110` em `sub_00100E28` (linhas 110-130 de
`sub_00100E28_0x100e28.cpp`).

**Próxima ação concreta para o agente que continuar:**
1. Ler `sub_00100E28_0x100e28.cpp` inteiro (193 linhas) e identificar
   a condição de saída do `goto loop` externo. Procure por `lw` de algum
   endereço RDRAM seguido de `beqz/bnez` que controla o loop.
2. Esse `lw` lê uma flag/contador num endereço fixo (ex: 0x01Exxxxx
   da área de sound/sema/IRQ). Identificar o endereço e qual subsistema.
3. Possíveis culpados:
   - **Semáforo PS2** que `WaitSema` deveria sinalizar (ver tabela #7,
     `ps2_syscalls.py`).
   - **Flag de DMA/VIF/GIF** completion que nosso `m_memory` não está
     setando após upload de frame.
   - **IRQ counter** (`vsync` IRQ que conta frames — se nunca avança,
     o jogo espera pra sempre).
4. Implementar em `ps2_runtime.cpp` o setamento da flag/incremento do
   contador toda vez que o evento real ocorrer (ex: cada `gsWriteCount`
   incremento dispara vsync IRQ counter no RDRAM).

**Ferramenta #8 sugerida (não implementada):** localizador automático
"PC range → função recompilada" — dado um `livePc`, lê os headers
`// Address: 0xX - 0xY` dos `.cpp` e identifica a função e contexto C++
(labels, gotos, while loops) próximo. Cortaria 5min por iteração de debug.

## Estado atual da depuração (sessão de 2026-04-24) — DIAGNÓSTICO DEFINITIVO

**Build OK pela primeira vez:** thin archive funcionou, build incremental + link
em ~30s, executável roda, janela 640x448 abre, raylib/audio/OpenGL OK, ELF
carrega. Tela preta + loop infinito imediato.

**LOCALIZAÇÃO CORRETA DO LOOP — refinamento da sessão anterior:**

A análise de 2026-04-23 estava errada em um ponto: `sub_00100E28` foi marcada
como tendo loop interno, mas na verdade ela é LINEAR (entra, faz vtable call,
chama `func_118110`, chama `func_13DB18`, retorna). O `liveRa=0x100e7c` é
apenas o post-call address da última `jal` interna.

O LOOP REAL está em **`sub_00100408_0x100408.cpp`** — o **caller único** de
`sub_00100E28` e a primeira função chamada por `sub_001003C0` (BOOT#2).

Estrutura de `sub_00100408` (iterador de linked list circular):
```pseudo
sub_00100408($a0):                    # $a0 = root_struct
    sentinel = $a0 + 0x20
    first = [sentinel]
    if (first == sentinel) return     # lista vazia, sai

label_100438:                         # cabeça do loop
    current = sp[4]
    next = [current]                  # current->next
    [current->prev->next] = next      # remove current da lista
    [next->prev] = current->prev
    [current+0] = 0; [current+4] = 0  # limpa current

    vtable_call([current+0x5C]->[+0xC])
    func_100E28($a0, $s1, current)    # <-- isso fica logando no terminal

    if (sp[4] != sentinel) {
        cooperativeYield()
        goto label_100438
    }
    return
```

**Causa raiz: `$a0` chega em `sub_00100408` zerado.** Como tudo é zero:
- `sentinel = 0 + 0x20 = 0x20`
- `[0x20] = 0` (RDRAM zerada)
- `0 != 0x20` → **entra no loop**
- `current = 0`, leituras de `[0+offset]` retornam 0
- vtable call em `0` cai no `if (jumpTarget == 0u) skip` (não crasha)
- `func_100E28(0, 0, 0)` é chamada (o que aparece no log)
- `sp[4] = [current=0] = 0`. `0 != 0x20` → **loop eterno sem progresso**

Não há SEGFAULT porque cada acesso a `[0+offset]` retorna 0 silenciosamente
em vez de quebrar.

**Por que `$a0` chega zerado: `entry_0x100008.cpp` tem 2 bugs documentados.**

O entry point do ELF (`entry_0x100008`) faz APENAS:
1. Zera todos os GPRs (32 registradores) e hi/lo — comportamento de boot
2. **PULA** o range 0x10008c → 0x1003c0 (~830 bytes) com `ctx->pc = 0x1003c0u;`
3. Restaura SP manualmente para `PS2_RAM_SIZE - 0x10`
4. Deixa GP = 0
5. Não inicializa `$a0` (passado pra `sub_001003C0` → `sub_00100408`)

Os comentários no próprio arquivo já admitem (Bug A + Bug B do
`HANDOFF_AGENT.md`):
- **Bug A**: o recompilador não gerou funções no range 0x10008c-0x1003c0,
  então o entry pula direto pra `sub_001003C0`. Esse buraco normalmente
  contém o "crt0" do PS2 que:
  - Configura GP corretamente (do `_gp` do ELF)
  - Aloca a estrutura raiz (heap manager, scene graph root, etc)
  - Passa o ponteiro dela em `$a0` antes de chamar `_main` (=`sub_001003C0`)
- **Bug B**: SP é restaurado mas GP fica em 0 — qualquer acesso a global via
  GP-relative (ex: `lw $X, offset($gp)`) lê do início do RDRAM em vez do
  segmento de dados real.

**Provável solução:** investigar o ELF cru no range 0x10008c-0x1003c0 e
verificar se realmente são dados (padding/jump table) ou código MIPS válido
que o PS2Recomp pulou por bug. Comando útil:
```bash
mipsel-linux-gnu-objdump -d --start-address=0x10008c --stop-address=0x1003c0 \
    GOD_PC_PORT_FINAL/data/SCUS_973.99 2>/dev/null | head -80
```
Ou usar `capstone` (já instalado via `uv`) para desassemblar manualmente lendo
os bytes do segmento ELF carregado em RDRAM.

**Confirmações cruciais (todas via `rg` no `src/recompiled/`):**
- `0x32E854` (global lido pela vtable em `sub_00100E28`) é **APENAS LIDO**,
  nunca escrito por nenhuma função recompilada. Provavelmente é setado
  por código no buraco 0x10008c-0x1003c0 ou via dados estáticos no ELF
  que deveriam ter sido carregados mas não foram.
- Único caller de `sub_00100E28`: `sub_00100408` (confirmado por grep
  `0x100E28u|sub_00100E28` filtrando register_functions e o próprio arquivo).
- `entry_100db8_0x100e28.cpp` é função SEPARADA (vai de 0x100db8 a 0x100e27),
  faz padrão idêntico ao `sub_00100E28` mas chama `func_13DA10` (init) em
  vez de `func_13DB18` (process). É a função que DEVERIA inicializar o
  global `0x32E854` mas nunca é chamada (não tem callers no código
  recompilado — só aparece em `sub_00100EA8` por proximidade de endereço).

**ACHADO DEFINITIVO (via `tools/mips_inspect.py 0x10008c 0x1003c0`):**

O "buraco" 0x10008c-0x1003c0 É CÓDIGO MIPS VÁLIDO — é o **crt0 do PS2**
inteiro que o PS2Recomp não recompilou. Conteúdo:

1. **0x10008c-0x100118** — zera todos os 32 registradores FPU (`$f0-$f31`),
   `sync 0x10`, `ctc1 zero, $31`. Continuação direta do init de GPRs do
   `entry_0x100008`.

2. **0x10011c-0x100144** — **BSS clear loop**: zera RDRAM de `0x002c7080`
   até `0x0035c1a8` (~580 KB). **O global `0x32E854` está dentro dessa faixa
   e seria zerado aqui** (RDRAM já começa zerada no nosso runtime, então OK).

3. **0x100148-0x100196** — setup de threading via syscalls PS2:
   - `syscall 0x3c` (SetupThread) com `a0=0x002cf070, a1=0x01ff8000,
     a2=0x00008000, a3=0x002c7080, t0=0x000101d8` — define heap, stack, BSS.
   - `syscall 0x3d` (SetupHeap) com `a0=0x0035c1a8` (BSS end), `a1=0`.

4. **0x100198-0x1001cb** — 4 jal/j críticos:
   - `jal 0x2994a0` → ✅ recompilada (`sub_002994A0_0x2994a0.cpp`)
   - `jal 0x293ea0` → ❌ **NÃO RECOMPILADA** (provavelmente C++ ctors / `_init`)
   - `jal 0x138cb0` → ✅ recompilada (`sub_00138CB0_0x138cb0.cpp`)
   - `jal 0x138d48` → ✅ recompilada (`sub_00138D48_0x138d48.cpp`),
     com `a0 = [0x002c7080]` (lê primeiro elemento do BSS)
   - **`j 0x2996b0`** → ❌ **NÃO RECOMPILADA** — esse é o `_main` REAL
     do jogo (`sub_001003C0` é só uma função utility, não `_main`).

5. **0x100200-0x1003c0** — função utility separada (~448 bytes) com
   prólogo `addiu $sp, -0x90`. Chama `0x100ea8`, `0x239210`, `0x175780`,
   `0x2391e8`, `0x175740`, `0x239200`, `0x239208`. Tem loop interno.

**Conclusão:** o nosso `entry_0x100008` ignora o crt0 INTEIRO e jumpa direto
pra `sub_001003C0` (que NÃO é `_main`). Por isso `$a0` chega em 0 — quem
deveria setar `$a0` é o `j 0x2996b0` no fim do crt0, e quem alocaria a
estrutura raiz seria provavelmente `sub_002994A0` ou a missing `0x293ea0`
(C++ ctors).

**Próxima ação concreta (ordem):**

1. **Investigar por que o PS2Recomp pulou essas funções** — provavelmente
   o `.toml` config tem ranges marcados como dados. Procurar ranges que
   incluam `0x10008c-0x1003c0`, `0x2996b0`, `0x293ea0` no config do
   PS2Recomp (geralmente `god_of_war.toml` ou similar).

2. **Re-rodar PS2Recomp** com config corrigido para gerar `entry_0x100008`
   completo (com BSS clear, syscalls, jals e tail jump pra 0x2996b0) +
   `sub_002996B0` + `sub_00293EA0`. Isso resolve a causa raiz sem hacks.

3. **Solução tática alternativa (se #2 for demorado):** editar
   `entry_0x100008.cpp` à mão para emular o crt0:
   - Pular FPU init (nosso runtime já zera FPRs)
   - Pular BSS clear (RDRAM já zerada)
   - Stub das syscalls 0x3c/0x3d (registrar como no-op no `ps2_syscalls.cpp`)
   - Chamar `sub_002994A0`, depois `sub_00138CB0`, depois `sub_00138D48`
     com `$a0 = [0x002c7080]` e `$a1 = 0x002c7084`
   - **Bloqueado por:** `sub_002996B0` (e `sub_00293EA0`) precisam ser
     recompiladas antes — sem `_main`, não há jogo. Logo, #2 é prerequisito.

4. **Bug B (GP zerado) continua pendente** — depois que `_main` rodar,
   muitas funções vão acessar globais via `lw $X, offset($gp)`. Precisa
   ler `e_entry` e o symbol `_gp` do ELF header, ou inferir `_gp` como
   `bss_start + 0x7ff0` (convenção MIPS PIC) — provavelmente
   `0x002cf070` (que aparece como `a0` da syscall 0x3c acima).

## Estado atual da depuração (sessão de 2026-04-25, agente 6) — BUG v0=0 ENCONTRADO E CORRIGIDO

### Bug crítico confirmado (log de 190.200 chamadas)

**Root cause do polling infinito:**
O stub anterior fazia `setReturnS32(ctx, 0)` → `v0=0`. O jogo interpreta `v0=0` como "módulo IOP ainda não pronto" e fica em polling infinito (janela abre mas permanece preta, game loop nunca chamado).

O "JALR nop" original **DEIXAVA `v0=0x00080004`** (o próprio endereço carregado pelo `lw` antes do JALR, inalterado). O jogo usava esse valor non-zero como "handle do objeto IOP". Com isso, a chamada seguinte via `[v0+0x114] = rdram[0x80118]` tinha um valor não-zero e o game loop rodava.

**Evidência no log:**
```
[STUB 0x00080004] #1 ... v0_in=0x00080004   ← v0 estava 0x00080004 antes do stub alterar
[STUB 0x00080004] #190000 ... (190.000 chamadas, jogo nunca saiu do polling)
[run] window close requested, breaking out of loop   ← usuário fechou manualmente
```

### Correção implementada nesta sessão

**`GOD_PC_PORT_FINAL/src/ps2_syscall_stubs.cpp`** — stub reescrito com dois modos via env var:

```
PS2_IOP_MODE=0 (padrão): NÃO altera v0 (deixa 0x00080004 — igual ao nop antigo)
                          → game loop roda como antes ✓
PS2_IOP_MODE=1          : retorna FAKE_OBJ=0x00380000 (objeto com [+0x114]=1)
                          → módulo sempre "pronto", skipa func_118110 desde iter 1
```

**Objeto fake pré-inicializado** (sempre, independente do modo):
- `rdram[0x380000 + 0x114] = 1` — flag "módulo pronto"
- `rdram[0x380000 + 0x048] = 0x0035c770` — campo usado por `func_13DB18` via `[v0+0x48]`

**Log agora menos verboso**: primeiras 5 chamadas + 1 a cada 50.000 (antes era a cada 50, causando log de 8071 linhas para apenas 190k chamadas).

### Argumentos confirmados (100% estáveis ao longo de 190.200 chamadas)
```
a0 = 0x0000006c  (108) — ID/tipo do módulo IOP
a1 = 0x00000002         — sub-operação "query status"
a2 = 0x0035ca3c ou 0   — ponteiro de contexto (só na 1ª chamada do ciclo)
a3 = 0x00000004         — flags/tamanho
ra = 0x0010047c         — instrução seguinte ao JALR em sub_00100408
```

### Próximos testes no PC local

**Teste A — restaura game loop (modo padrão):**
```bash
git pull origin main
bash recompilar.sh
PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_modo0.txt
```
Aguardar ~10s. Deve ver a janela abrindo/fechando como antes (game loop ativo).
Depois filtrar:
```bash
grep "STUB 0x00080004\|frame:upload\|global@0x32E854" log_modo0.txt | head -30
```

**Teste B — módulo sempre pronto (PS2_IOP_MODE=1):**
```bash
PS2_IOP_MODE=1 PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_modo1.txt
```
Aguardar ~10s. Fechar a janela. Verificar:
```bash
grep "STUB 0x00080004\|frame:upload\|global@0x32E854\|func_118110\|func_13DB18" log_modo1.txt | head -50
```
**O que queremos ver:** Se `global@0x32E854` muda de 0, ou se `[frame:upload]` aparece — significa que saímos do polling loop.

---

## Estado atual da depuração (sessão de 2026-04-25, agente 4) — GAME LOOP VIVO + VARREDURA ELF

### Resultados dos testes com PS2_FORCE_A0 (log fornecido pelo usuário)

**Baseline (a0=0):** como esperado — main vira no-op, crash imediato, janela fecha e nunca reabre.

**PS2_FORCE_A0=0x2cf070:** ✅ **MAIOR PROGRESSO ATÉ HOJE**
- `func_238860` (game loop principal) **está executando de verdade**
- Janela Raylib **abre**, fica preta, fecha, **reabre sozinha** — em loop até Ctrl+C
- Isso confirma que o game loop roda e o loop de objetos relança o ciclo
- `[0x2cf070+0x18] = 0` → main não chama `func_131288`, vai direto pra `func_238860`

### Bloqueador atual: `JALR 0x00080004`

```
[DBG 100408] JALR alvo nao registrado 0x00080004 -> nop
```

- Loop de objetos em `sub_00100408` (0x100474): `jalr $v0` onde `$v0 = [obj+0x5c+0xC] = 0x00080004`
- `0x00080004` está **abaixo do range ELF** (0x100000+) — não é código recompilado
- `varredura_a0.py` confirma: não existe em nenhum lugar do ELF como dado estático
- É populado em runtime pelo boot PS2 real (IOP/kernel EE), que pulamos com Bug A/B/C fix
- `global@0x32E854` permanece 0 mesmo após 40+ iterações do loop
- Guard Bug D transforma o JALR em nop — loop continua mas sem progredir estado

### Ferramenta criada: `varredura_a0.py`

Script Python na raiz que analisa o ELF em RAM virtual (32 MB) e:
- Varre toda memória procurando candidatos onde `[addr+0x18]` aponta pra código válido
- Investiga `0x00080004` (confirmado: não está no ELF, é runtime do boot PS2)
- Disassembla a cadeia do JALR em `sub_00100408` com capstone

Top 5 candidatos encontrados (onde `[a0+0x18]` é código válido):
| Rank | PS2_FORCE_A0 | [+0x18] handler | Score |
|------|-------------|-----------------|-------|
| 1 | `0x00100de0` | `0x00111080` | 15 |
| 2 | `0x00100dec` | `0x00111080` | 15 |
| 3 | `0x00100e58` | `0x00111080` | 15 |
| 4 | `0x00101cd8` | `0x00149180` | 15 |
| 5 | `0x00101ff8` | `0x00121940` | 15 |

### Próximos passos

**[A] CURTO — Stub para 0x00080004** em `game_overrides.cpp`:
- Logar `$a0, $a1, $ra` na entrada → revelar o que o jogo espera
- Retornar normalmente → não crash

**[B] MÉDIO — Testar candidatos de $a0** com handler válido:
```bash
PS2_FORCE_A0=0x00100de0 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_100de0.txt
PS2_FORCE_A0=0x00100dec PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_100dec.txt
PS2_FORCE_A0=0x00101cd8 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_101cd8.txt
```
Com `[a0+0x18]` != 0, main chamará `func_131288` antes do game loop — pode inicializar
`global@0x32E854` e destravar o `jalr_target`.

**[C] LONGO — Rastrear `sub_0029AA88`** pra descobrir quem chama main com $a0 correto.

---

## Estado atual da depuração (sessão de 2026-04-26 PARTE 4) — HIPÓTESE a0=0 CONFIRMADA + KNOB PS2_FORCE_A0

**Resultado do teste da PARTE 3 (log_main_a0_v3.txt):**

```
[main:enter] sub_001003C0 a0=0x00000000 ra=0x00000000 sp=0x01fffff0
[EXIT#2] from=0x1003c0 -> pc=0x0 ra=0x0 ...
[dispatch:pc-zero] from=0x1003c0 ...
```

✅ **HIPÓTESE 100% CONFIRMADA.** main entra com `a0=0`, executa
`s0=a0; jal sub_00100408; lw a0,0x18(s0); beql a0,zero,...` → `[0+0x18]`
lê BSS zerado → branch toma → main vira no-op → retorna pra `ra=0` →
dispatch mata. `ExitThread` nunca é chamado. Tela preta explicada.

**Análise do disasm de main (`sub_001003C0`):**

```mips
0x1003c0  addiu $sp, $sp, -0x20     ; aloca frame
0x1003c4  sq    $s0, 0x10($sp)
0x1003c8  sd    $ra, 0x0($sp)
0x1003cc  jal   func_100408         ; chama com $a0 ORIGINAL
0x1003d0  daddu $s0, $a0, $zero     ; (delay slot) salva ponteiro em s0
0x1003d4  lw    $a0, 0x18($s0)      ; *** lê palavra em [a0+0x18] ***
0x1003d8  beql  $a0, $zero, ...     ; se zero, pula tudo
0x1003e0  jal   func_131288         ; senao, chama 131288(handler, struct)
0x1003e4  daddu $a1, $s0, $zero     ; (delay slot) a1 = struct
```

`$a0` na entrada de `main` **não é argc** — é um **ponteiro pra struct
de boot args** estilo PS2 SDK, com:
- `[a0+0x18]` = ponteiro pra função/handler (se 0, nada acontece)
- `[a0+0x20]` lido por `sub_00100408` (campo de estado)
- `[a0+0x24]` lido também

`sub_00100408` faz `daddu s2,a0,0; lw v1,0x20(s2); ...` — também trata
como ponteiro pra struct.

**Análise do crt0 pulado (`entry_2996b0`):**

```mips
0x2996b0  addiu $sp,-0x20; sd s0; sd ra
0x2996bc  jal   func_2996A8           ; -> j func_29AA48 (init de TLB/mem)
0x2996c0  daddu $s0, $a0, $zero       ; preserva a0
0x2996c4  daddu $a0, $s0, $zero       ; restaura a0
0x2996d0  j     func_293840           ; tail-call ExitThread
```

Confirmado: o crt0 **não chama main**. Faz init e tail-calls ExitThread.
Quem chama main é outro lugar (provavelmente uma das funções de init
em loop em `sub_0029AA88`, ainda não rastreado). Isso significa que
restaurar o crt0 (Opção B) sozinho não resolve — main continuaria sem
ser chamada do jeito certo.

**Fixes aplicados nesta parte:**

1. `GOD_PC_PORT_FINAL/src/recompiled/entry_0x100008.cpp`: nova env var
   `PS2_FORCE_A0=<hex>` que, se definida e não-zero, sobrescreve `$a0`
   antes de pular pra main. Default = 0 (no-op, mantém boot estável).
2. `GOD_PC_PORT_FINAL/src/recompiled/sub_00100408_0x100408.cpp`:
   instrumentação `[sub_00100408:enter]` que loga `a0` e `[a0+0x00..0x24]`
   na entrada. Silenciável via `PS2_NO_BOOT_TRACE=1`.

**Próximo passo (testes a fazer no PC local):**

```bash
git pull origin main
bash recompilar.sh

# Teste 1 (baseline com instrumentação nova): default a0=0
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_baseline.txt

# Teste 2: apontar pra _gp / BSS area (chute educado)
PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_gp.txt

# Teste 3: apontar pro topo do data segment (logo após code)
PS2_FORCE_A0=0x35d100 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_data.txt

# Teste 4: apontar pra stack da thread aux (que o boot_stub criou)
PS2_FORCE_A0=0x326b40 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_a0_stack.txt
```

Em cada um, mandar grep de `[main:enter]`, `[sub_00100408:enter]`,
`[dispatch:pc-zero]` e últimas 50 linhas. O importante é ver se algum
valor de `a0` faz `[a0+0x18]` ler non-zero → main passa do `beql` →
chama `func_131288` → vemos novo trace.

---

## Estado atual da depuração (sessão de 2026-04-26 PARTE 2) — BUG DO recompilar.sh

**Fix crítico no `recompilar.sh`:** descobrimos que `git pull` preserva o
mtime do commit. Se o `.o` no `build/` local for mais recente que o `.cpp`
baixado, `make` **pula a recompilação silenciosamente**. Isso fez o teste
da PARTE 1 (abaixo) ser **inconclusivo**: a instrumentação `[main:enter]`
foi adicionada em `sub_001003C0_0x1003c0.cpp` mas o `.o` antigo continuou
sendo linkado.

**Solução aplicada:** `recompilar.sh` agora roda
`git diff --name-only HEAD~5 HEAD` no início, e faz `touch` em todos os
`.cpp/.h/.hpp/.inl/.c` alterados nos últimos 5 commits. Isso garante que
qualquer arquivo vindo de `git pull` recente seja reavaliado pelo `make`.

O `[syscall:ExitThread]` apareceu zero vezes no log, mas isso pode ter sido
recompilado corretamente (via `ps2_syscalls.cpp` que inclui o `.inl`). Pode
significar que `ExitThread` realmente NÃO está sendo chamado e o programa
sai por outro motivo (ex: `ctx->pc=0` no fim de uma função sem `ra` válido,
o que casa com o `[dispatch:pc-zero]` do log).

**Próximo passo (refazer o teste corretamente):**
```bash
git pull origin main
bash recompilar.sh    # agora vai forcar touch automatico
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_main_a0_v2.txt
```
Mandar últimas 100 linhas + greps `[main:enter]` e `[syscall:ExitThread]`.

---

## Estado atual da depuração (sessão de 2026-04-26 PARTE 1) — CADEIA DE BOOT MAPEADA

**Diagnóstico definitivo do "tela preta + game thread morre cedo":**

A boot sequence completa foi rastreada nesta sessão. O jogo **NÃO está em loop**;
está saindo limpo via `ExitThread` (syscall 4) porque o `crt0`/`__libc_init`
chama tail-call `Exit` ao retornar.

**Cadeia mapeada (lendo arquivos recompilados):**

```
entry_0x100008          (zera todos os 32 GPRs)
  └→ entry_1001d0       (j 0x2996B0 — vai pro crt0)
      └→ entry_2996b0   (jal 2996A8; <work>; j 0x293840 = ExitThread!)
          └→ entry_2996a8 (j 0x29AA48)
              └→ FUN_0029aa48
                  ├ syscall 0x7F = GetMemorySize
                  └ se 32MB: chama sub_0029AA88 (init de TLB Wired)
                              └ loop: chama 2996B0(a0=1) p/ cada região TLB
```

**Observações-chave da análise:**

1. `entry_293840_0x293900` é uma **TABELA DE WRAPPERS DE SYSCALL**. Cada
   entrada de 12 bytes = `addiu $v1,$zero,N; syscall 0; jr $ra`. O slot 0
   (em `0x293840`) é syscall **N=4** = `Exit`/`ExitThread` no nosso runtime
   (`PS2Recomp/ps2xRuntime/src/lib/ps2_syscalls.cpp:60`).

2. `entry_2996b0` é o **`__libc_init`** do PS2 SDK. SEMPRE termina com
   `j 0x293840` = SEMPRE mata a thread. Convenção UNIX: programa exita
   quando `__libc_init` retorna.

3. O **`main()` real do God of War** está em `sub_001003C0_0x1003c0`
   (range 0x1003c0–0x100408). É chamado em algum lugar dessa cadeia
   (provavelmente via `sub_0029AA88`), mas com **`$a0=0`**.

4. Quando `main(a0=0)` roda, o `beql $a0, $zero` em `0x1003D8` toma o
   branch e pula direto pra `label_1003ec` → `jal func_238860(a0=0,a1=0)`
   → essa também tem `andi $a1,1; beqz` que retorna early → main retorna
   imediatamente sem fazer nada útil.

### Instrumentação de log adicionada (2 arquivos):

| Arquivo | O que loga | Pra quê |
|---|---|---|
| `src/recompiled/sub_001003C0_0x1003c0.cpp` | `[main:enter] a0=… ra=… sp=…` em toda chamada de main | Confirmar quantas vezes main é chamada e se SEMPRE com `a0=0` |
| `PS2Recomp/ps2xRuntime/src/lib/syscalls/ps2_syscalls_thread.inl::ExitThread` | `[syscall:ExitThread] tid=… ra=… sp=…` | Identificar quem pediu pra sair (esperado: `ra` perto de `0x29AB04`) |

Para silenciar o trace de main: `PS2_NO_MAIN_TRACE=1 bash jogar.sh`.

### Próxima ação (usuário tem que rodar localmente):

```bash
git pull origin main
bash recompilar.sh                                # 30s, 2 .cpp mudaram
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_main_a0.txt
# Mandar pro agente:
#  - últimas 100 linhas do log
#  - grep '[main:enter]' log_main_a0.txt
#  - grep '[syscall:ExitThread]' log_main_a0.txt
```

Com isso vamos confirmar a hipótese e aí investigar o caller real
de `0x1003c0` (provavelmente dentro de `sub_0029AA88` ou em outra
função da cadeia init que ainda não foi auditada).

---

## Estado atual da depuração (sessão de 2026-04-25)

**Toolchain de regen agora funcional end-to-end.** A sessão entregou três
peças que destravaram o ciclo de iteração:

1. **`tools/fix_truncated.py` + `tools/regen_truncated.sh`** — produzem o
   CSV `ghidra_output` com ranges corrigidos e regeram os `.cpp` afetados
   via ps2_recomp em ~30s, sem precisar de rebuild de 80min. Suporta
   `--only-entry` (só crt0), reachable-from-seeds (default) e `--all`.

2. **Pin do ELFIO no `PS2Recomp/ps2xRecomp/CMakeLists.txt`** corrigido
   pra `Release_3.12` (commit `8ae6cec5d60495822ecd57d736f66149da9b1830`).
   O pin antigo `7d30a22f...` foi GC'd upstream e o submódulo não
   buildava mais. `regen_truncated.sh` agora monta o ps2_recomp via
   `cmake -S PS2Recomp/ps2xRecomp` (skip raylib 408MiB) com `--build-recomp`.

3. **Touch automático no fim do regen** — sem isso, o `recompilar.sh`
   (que faz `make` em `build/`) decide se recompila pelo mtime, e o
   ps2_recomp pode reescrever arquivos preservando mtime → make não
   recompila → binário antigo continua rodando. O passo `git diff
   --name-only src/recompiled/ | xargs -r touch` força o rebuild real.

### Resultado funcional pós-regen + touch

Boot avançou substancialmente do estado de 2026-04-24:

| Etapa | Antes (04-24) | Agora (04-25) |
|---|---|---|
| crt0 escapa init de FPRs/BSS | Não | Sim (ps2_recomp expandiu entry para 324 linhas, descobriu 4077 entries adicionais) |
| Thread principal criada | Não (`activeThreads=0`) | Sim (`activeThreads=1`) |
| SP da thread ≠ default | Não (sempre `0x1fffff0`) | Sim (`liveSp=0x1fffe00..0x1fffe40`) |
| `dispfb1`/`display1` setados | 0 | `dispfb1=0x1400`, `display1=0x1bf27f00000000` |
| Loop principal roda muitos ticks | Não | Sim (1200+ ticks com `livePc` oscilando) |
| Framebuffer renderiza pixels | Não | **Não** — `nonBlack=0` em todas as 60+ amostras |

### NOVA causa raiz identificada — gap 0x1001d0 → 0x100db8

O `[DBG 100E28]` **continua em loop infinito** (40+ iterações com a0/a1/a2
zerados, mesmo padrão de antes). O log mostra os `[run:tick]` amostrando
PCs dentro de `func_13DB18`/`func_118110` — são as funções que o crt0
chama EM LOOP, não a main thread real.

A **prova definitiva** veio do `ps2_missing.log`:
```
FUNCTION 8192 calls   1462ms   func_0x10047C  ← chamada 8192x em 2.4s !!!
FUNCTION    1 call             func_0x80004
```

`func_0x10047C` **não existe no binário recompilado**. Ela cai no gap
**0x1001d0 → 0x100db8** que nenhum entry cobre:

| Endereço | Status |
|---|---|
| `0x100008` → `0x1001d0` | `entry_0x100008.cpp` (range corrigido na sessão 04-25) |
| `0x1001d0` → `0x100db8` | **VAZIO** ← 3KB de código não recompilado, contém `0x10047C` |
| `0x100db8` → `0x100e28` | `entry_100db8_0x100e28.cpp` |

O auto-detect do `scan_function` para no primeiro `jr $ra` que encontra
(`0x1001d0`), mas tem código vivo depois — provavelmente early-return ou
sub-função sem header reconhecido. O ps2_recomp tem mecanismo de
discovery ("Discovered N additional entry point(s)") que fatia o range
em sub-entries automaticamente, **se** o range total cobrir o código.

### Solução implementada (entregue, aguardando user testar)

Novo arquivo de overrides manuais: **`tools/truncation_overrides.csv`**
populado com:
```
entry,0x100008,0x100db8
```

E `tools/fix_truncated.py` agora carrega esse CSV automaticamente
(função `load_overrides`), aplicando os ends forçados após o auto-detect.

**Próxima ação do usuário:**
```bash
cd ~/Documentos/GitHub/godofwar && \
git pull && \
bash tools/regen_truncated.sh --only-entry && \
bash recompilar.sh && \
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste.txt
```

Esperado no log:
- Output do regen: `entry  end 0x10008c → 0x100db8  (+876 ins) [HACK ATIVO]`
- ps2_recomp: "Discovered NN additional entry point(s)" — vai fatiar o gap
- Vários novos `entry_xxxxxx_0xXXXXXX.cpp` no `src/recompiled/`,
  incluindo um cobrindo `0x10047C`
- Log do jogo: `[DBG 100E28]` deve aparecer **MUITO menos** (ou só 1-2
  vezes, não 40+) e `livePc` deve sair do range 0x118110/0x13DB18
- `ps2_missing.log` não deve mais ter `func_0x10047C` no topo

### Atualização — `--all` aplicado (log_teste2.txt, sessão 04-25 tarde)

O usuário rodou `bash tools/regen_truncated.sh --all && bash recompilar.sh`,
estendendo as **1607 funções truncadas** (não só o entry). ps2_recomp processou,
descobriu **4053 entries adicionais**, resliceou **671 funções**, e retocou
**1790 arquivos**. Compilação OK.

> ⚠️ O log mostra `Error during output generation: No entry function name
> available for registration` — é **falso alarme**. O `register_functions.cpp`
> ficou íntegro (5642 linhas) e o `entry 0x100008` está registrado normalmente
> na linha 9. O erro é de uma sub-entry resliceada, não do registro principal.

**Avanço observado** vs. `--only-entry`:

| Métrica | `--only-entry` | `--all` |
|---|---|---|
| Ticks até user fechar janela | 120 (~2s) | 7560 (~2 min) |
| `livePc` | Fixo em `0x13d644` | Varia: `0x1878e4`, `0x187880`, `0x13de18`, `0x13da58` |
| `[DBG 100E28]` loop | 40+ idêntico | Continua idêntico |
| `nonBlack` em frames | 0 (todos pretos) | 0 (todos pretos) |
| DMA/GIF/VIF/sound | 0 | 0 |

**Conclusão**: `--all` desbloqueou execução por código novo (livePc se move
por 4 endereços diferentes), mas **não saiu do loop crt0**. A flag
`0x32E854` continua zero → branch `branch_taken=0` → boot trava no mesmo
lugar, só roda mais voltas.

### Causa raiz refinada — `0x32E854` é escrita por algo FORA do ELF principal

Os **3 scripts** `find_writer_32E854.py`, `find_writer_v2.py` e
`find_writer_32E854_overlays.py` foram rodados (sessão 04-25, agente
Replit) sobre `GOD_PC_PORT_FINAL/data/SCUS_973.99` e os 3 confirmam:

> **0 escritores, 15 leitores** em `0x32E854` no ELF principal,
> incluindo overlays `.DVP`.

Os 15 leitores estão distribuídos por:
```
0x100DD0  → entry_100db8_0x100e28.cpp
0x100E48  → (gap não-coberto pelo recompiler)
0x10183C  → (gap não-coberto pelo recompiler)
0x108AA0  → FUN_001067a8_0x1067a8.cpp
0x108B18  → FUN_001067a8_0x1067a8.cpp
0x10A9C4  → FUN_0010a978_0x10a978.cpp
0x11137C  → FUN_00111328_0x111328.cpp
0x117C98  → FUN_00117a50_0x117a50.cpp  (← 0x118110 é a função em loop!)
0x117D30  → FUN_00117a50_0x117a50.cpp
0x141F2C  → FUN_00141b78_0x141b78.cpp
0x153214  → FUN_00152e28_0x152e28.cpp
0x157AFC  → FUN_00157680_0x157680.cpp
0x15892C  → FUN_00157680_0x157680.cpp
0x158EE8  → FUN_00157680_0x157680.cpp
0x159390  → FUN_00157680_0x157680.cpp
```

Todos usam o padrão `lui $vN, 0x33` + `lw $vM, -0x17ac($vN)` → `0x32E854`.
Nenhum usa `sw` no mesmo endereço. Logo, **estender mais funções truncadas
não vai resolver esse loop**.

**Hipóteses ranqueadas pra quem escreve `0x32E854`**:

1. 🥇 **Módulos IRX no IOP** (`989NOMID.IRX`, `DBCMAN.IRX`, `LIBSD.IRX`,
   `MC2_S1.IRX`, `SIO2MAN.IRX`, etc. em `GOD_PC_PORT_FINAL/data/`).
   IRXs rodam no IOP e escrevem na memória da EE via DMA do SIF. O runtime
   do projeto **não emula IRX-on-IOP** — então qualquer flag que dependa
   de IRX inicializar nunca é setada.
2. 🥈 **Inicialização do EE-kernel/crt0** que foi pulada na recompilação
   (handlers de exceção, init de threads, init do SIF).
3. 🥉 **Os 2 gaps em readers** (`0x100E48` e `0x10183C` não estão
   cobertos por nenhum `.cpp` do `src/recompiled/`) — improvável, mas
   verificar com `tools/mips_inspect.py --gap 0x100E48`.

### 🎯 CAUSA RAIZ DEFINITIVA — patch automático esconde init do EE-kernel

A hipótese-IRX foi **descartada após inspeção direta do disassembly cru
da região escondida pelo patch** (`mips_inspect.py inspect 0x10008c
0x1001d0`, sessão 04-25 noite). A região escondida (81 instruções,
324 bytes) é a **continuação do crt0 PS2** e contém:

| Offset | O que faz |
|---|---|
| `0x100090-0x10010c` | Zera **todos os 32 registradores FPU** (`mtc1 $zero, $fX`) |
| `0x100114` | `sync 0x10` — barreira de memória |
| `0x100118` | `ctc1 $zero, $31` — zera control reg FPU |
| `0x10011c-0x100144` | **Loop de zerar BSS** (de `0x2c7080` até `0x35c1a8`, ~600 KB) |
| `0x100174-0x100178` | `addiu $v1,$zero,0x3c` + `syscall` → **SYSCALL #0x3c = `RFU060_SetupThread`** |
| `0x100190-0x100194` | `addiu $v1,$zero,0x3d` + `syscall` → **SYSCALL #0x3d = `RFU061_SetupHeap`** |
| `0x100198` | `jal 0x2994a0` (init runtime/wsg) |
| `0x1001a0` | `jal 0x293ea0` (init libc) |
| `0x1001a8` | `jal 0x138cb0` (init libc/atexit) |
| `0x1001b0` | `38000042` — instrução COP0 `ei` (enable interrupts) |
| `0x1001c0` | `jal 0x138d48` (init libc/atexit pt.2) |
| `0x1001c8` | `j 0x2996b0` (pula pro main wrapper) |

**Por que o patch é injetado**: o ps2_recomp tropeça em **5 instruções
EE custom** marcadas como `.byte` pelo capstone:
- `0x10008c: 00001904`
- `0x100110: 18000146`
- `0x100170: 2de08000` (provável `daddu $sp, $a0, $zero`)
- `0x10017c: 2de84000` (provável `daddu $sp, $v0, $zero`)
- `0x1001b0: 38000042` (`ei`)

Quando o ps2_recomp não decodifica essas instruções, ele aborta a função
e o sistema injeta automaticamente o "Patch: Jump to next entry point",
que **pula 81 instruções essenciais** — incluindo os 2 syscalls de
inicialização da main thread e do heap.

**Por que isso explica tudo**:

1. `0x32E854` (a flag em loop) está **dentro do range de BSS**
   (`0x2c7080 ≤ 0x32E854 ≤ 0x35c1a8`) — não é variável especial, é
   variável global comum.
2. Sem **SetupThread** + **SetupHeap**, qualquer init de runtime/libc
   chamado depois (`0x2994a0`, `0x293ea0`, `0x138cb0`, `0x138d48`) que
   dependa de thread context ou alocação heap falha em silêncio.
3. **O setter de `0x32E854` está em algum lugar dentro dessa cadeia
   de 4 JAL** (cada uma é pequena com 1 filho — precisa descer mais),
   e nunca é executado.

A hipótese "IRX no IOP" estava errada — **não tem nada de IRX
envolvido**. É puro EE-kernel sendo bypassado pelo patch defensivo.

### Próximas ações (ordem de prioridade)

A. **🥇 ✅ IMPLEMENTADO + CONFIRMADO EM RUNTIME** (sessão 04-25 noite).
   Stub C++ inserido em
   `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` dentro do `run()`,
   logo após `initializeGuestKernelState`. Faz manualmente o que o
   patch automático pula:
   1. `memset(rdram + 0x2c7080, 0, 0x95128)` — zera BSS.
   2. Prepara `$a0..$t0` e chama `ps2_syscalls::SetupThread`
      (gp=0x2cf070, stack=0x1ff8000, ssize=0x8000, args=0x2c7080,
      root=0x1001d8). Copia o SP retornado pra `$r29`.
   3. Prepara `$a0=0x35c1a8`, `$a1=0` e chama `ps2_syscalls::SetupHeap`.
   4. Loop sobre `{0x2994a0, 0x293ea0, 0x138cb0, 0x138d48}`:
      `lookupFunction(addr)` + chama dentro de `GuestExecutionScope`
      com `$ra=0` (sentinela). Se `lookupFunction` falhar (caso
      `0x138d48` que não tem entry registrada), loga aviso e pula.
   5. Restaura `pc=0x100008` pro dispatchLoop começar normal.

   Saída esperada nos logs ao rodar:
   ```
   [boot_stub] init 0x2994a0
   [boot_stub] init 0x293ea0
   [boot_stub] init 0x138cb0
   [boot_stub] AVISO: init 0x138d48 nao registrado, pulando
   [boot_stub] init concluido, dispatchLoop a seguir
   ```

   Como testar: `git pull` + `bash recompilar.sh` + rodar. Sucesso =
   `[DBG 100E28]` aparece poucas vezes (não 40+), `livePc` sai do
   range `0x118110/0x13DB18`, e idealmente algum dos 15 readers de
   `0x32E854` finalmente vê valor != 0.

   **RESULTADO REAL OBSERVADO** (`resumo_1777092942516.pdf`): boot
   destravou completamente. `[DBG 100E28]` desapareceu. Apareceram
   coisas que NUNCA tinham acontecido antes:
   - 3 `CreateSema`, 1 `CreateThread id=2 entry=0x2947c8`.
   - Múltiplos `[Syscall83:override]` (FindAddress da SCE) — kernel
     PS2 trabalhando.
   - Watcher disparou: `[watch:GLOBAL_0x32E854] WRITE32 value=0x0
     pc=0x17a3d0 ra=0x17a928` — endereço foi tocado (escreveu 0,
     mas é primeira escrita real).
   - `PS2 GsPutIMR: Setting IMR=0xff00` + `PS2 GsSetCrt: ...` —
     **inicialização REAL do GS** (gráfico). Antes nem chegava perto.
   - Crash com `Morto` (SIGSEGV/SIGKILL) **logo depois** de GsSetCrt.
     Nova fronteira de boot.

   PS: `0x138d48` ESTAVA registrada (eu errei a previsão). E ela
   chama 11 sub-funções, várias marcadas como "NAO REGISTRADA - skip"
   (instrumentação injetada antes pelo usuário/agente).

   **REVISÃO POSTERIOR** (`Pasted-...1777126039981.txt`, GDB
   backtrace): `0x138d48` faz busy-wait via `cooperativeGuestYield`
   esperando evento que nunca chega no contexto pré-dispatchLoop.
   Stack do crash:
   ```
   sub_0013FAB8 (loop) -> sub_0013FCA8 -> entry_182ff0
     -> sub_0017A910 -> sub_00138D48 -> PS2Runtime::run
   ```
   **REMOVIDA do `kInitChain`** do stub. Agora só chamamos as 3
   primeiras (`0x2994a0`, `0x293ea0`, `0x138cb0`). A 4ª deve ser
   chamada naturalmente pelo fluxo do crt0 depois que o dispatchLoop
   estiver vivo (`j 0x2996B0` -> main wrapper -> ela).

   **Lição genérica**: funções que dependem de scheduler de threads
   (busy-wait, semáforos, VSync) NÃO podem ser chamadas no stub
   pré-dispatchLoop. Se uma init futura travar igual, remover dela.

A-OLD. **(plano original mantido pra histórico)** Stub C++ no runtime
   chamando manualmente o init pulado.

B. **🥈 Ensinar o ps2_recomp a decodificar as 5 instruções EE custom**
   (`0x10008c`, `0x100110`, `0x100170`, `0x10017c`, `0x1001b0`). Mais
   correto a longo prazo, mas exige mexer no source C++ do ps2_recomp.
   As 3 instruções "óbvias" são: `daddu` (×2) e `ei` (COP0).

C. **🥉 Verificar se as syscalls `0x3c`/`0x3d` estão implementadas no
   `ps2_syscalls.cpp` do runtime** — se não, implementar como stub que
   pelo menos seta as flags de thread/heap. Sem isso o caminho A não
   funciona.

D. **Diagnóstico de fundo**: descer a cadeia das 4 JAL pra mapear
   exatamente qual chama o setter de `0x32E854`. Útil pra confirmar
   após o caminho A funcionar.

### 🚨 BUG ARQUITETURAL DESCOBERTO — `--all` era no-op silencioso

**Sintoma**: log `Pasted-...1777128212950.txt` mostra loop fechado
`100e28→35c920→13db18→100e64` repetido 12.284 vezes. Disasm aponta que a
**thread principal criada por CreateThread (entry `0x2947c8`)** é uma
função de 216 bytes / 54 instruções no ELF, mas o `.cpp` recompilado
(`FUN_002947c8_0x2947c8.cpp`) tem **só 1 instrução / 4 bytes** — o
`addiu $sp, $sp, -0x80` do prologue, sem `jr $ra`. A thread cria, executa
o prologue, e o runtime cai em PC inválido.

**Auditoria global** (varredura dos 5626 .cpp + ELF original):
**1296 funções estão truncadas** (size ≤ 8 bytes / só prologue). 23% do
código recompilado é stub vazio. As maiores recuperam 4000, 2560, 2448
bytes de código.

**Causa raiz definitiva** — `IsAutoGeneratedName` em `elf_parser.cpp`:

```cpp
// linha 27
bool IsAutoGeneratedName(const std::string &name) {
    return name.rfind("sub_", 0) == 0 ||
           name.rfind("FUN_", 0) == 0 ||
           name.rfind("LAB_", 0) == 0 ||
           name.rfind("DAT_", 0) == 0;
}

// linha 605 — carregamento do ghidra_output (CSV de fixes)
if (extra.start == 0 || extra.end <= extra.start ||
    extra.name.empty() || IsAutoGeneratedName(extra.name))
    continue;   // ← descarta a entrada!
```

O `fix_truncated.py` emitia entradas com nome herdado do header
(`FUN_002947c8,0x2947c8,0x2948a0,216`). O ps2_recomp REJEITAVA todas
no carregamento por causa do prefixo `FUN_`. Por isso `--all` parecia
"estender 1607 funções" no relatório do script, mas o CSV chegava
zerado no recompilador — **0 das 1607 fixes aplicadas no estado real
em disco**. Os 4053 entries adicionais descobertos pelo ps2_recomp
vinham do mecanismo nativo de discovery, não do nosso CSV.

**Fix aplicado** em `tools/fix_truncated.py`: nova função `csv_safe_name`
renomeia automaticamente qualquer entrada com prefixo auto pra
`truncfix_0x{addr:x}` (que NÃO é filtrado por `IsAutoGeneratedName`).
Patch nas duas linhas que escrevem rows (merge + scope_set).

**Validação**: rerodando `python3 tools/fix_truncated.py --all -o /tmp/x.csv`,
a entrada do `0x2947c8` agora sai como
`truncfix_0x2947c8,0x2947c8,0x2948a0,216` e passa o filtro.

**Próxima ação do usuário** (bloqueia tudo o resto):
```bash
cd ~/Documentos/GitHub/godofwar && \
git pull && \
bash tools/regen_truncated.sh --all && \
bash recompilar.sh && \
PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_teste3.txt
```

Esperado:
- ps2_recomp deve agora aceitar 1612 ranges corrigidos do CSV (antes: 0).
- `src/recompiled/FUN_002947c8_0x2947c8.cpp` deve ir de 25 linhas pra
  ~250 linhas (54 instruções traduzidas).
- O loop `100e28→35c920→13db18→100e64` deve sumir, porque a thread
  principal agora terá corpo real.
- Provavelmente novos crashes em pontos diferentes (boa notícia — boot
  avançando). Mandar log completo.

### Próximas (ordem sugerida)

4. ⏳ **Diff de execução vs PCSX2**
   - Problema: encontrar bugs sutis onde o nosso runtime diverge do
     comportamento real do PS2.
   - Como: ativar trace de PC no PCSX2 com mesmo ELF, comparar com nosso
     trace (`/tmp/ps2_trace.log` via `PS2_TRACE=1`). Onde divergem = bug.
   - Custo: maior (precisa configurar PCSX2 com tracing). Fazer só se os
     bugs ficarem realmente difíceis.

5. ⏳ **Visualizador/parser do trace de execução**
   - Problema: o `/tmp/ps2_trace.log` cresce muito rápido e fica ilegível.
   - Como: script Python que identifica hot spots, loops infinitos,
     padrões de chamada, e gera um resumo legível.

6. ⏳ **Auto-implementação de stubs por padrão**
   - Quando: depois de implementar manualmente uns 5-10 stubs, vai aparecer
     padrão (ex: muitos só precisam retornar 0, outros copiam estruturas).
   - Como: meta-script que gera implementações a partir de templates.

### Estratégia geral

- **Sempre rode a ferramenta #2 (relatório) antes de decidir a próxima ferramenta.**
  Os dados reais do que o jogo chama devem guiar prioridades, não suposições.
- **Cada bug fixado deve gerar pelo menos uma melhoria de ferramenta**
  se for um bug que pode se repetir em outros pontos.
- **Não prometa rodar o jogo completo** — o objetivo realista é progresso
  mensurável (avançar mais frames, abrir o menu, carregar uma fase).
- **Honestidade com o usuário** sobre limitações é prioridade
  (ver seção 10 do `HANDOFF_AGENT.md`).

## Como Rodar no Linux Mint

1. Faça o clone/pull do repositório
2. Copie o arquivo `part1.pak` para `GOD_PC_PORT_FINAL/data/` (não está no git por ser 4.3 GB)
3. Execute: `bash instalar_linux_mint.sh`
4. Após o build, execute: `bash jogar.sh`

## Arquivo part1.pak

O arquivo `part1.pak` (4.3 GB) está excluído do git pelo `.gitignore`.
Você precisa tê-lo localmente e copiá-lo para `GOD_PC_PORT_FINAL/data/part1.pak`.

## Depuração com Tracer

Ativar o log de chamadas de função em tempo real:
```bash
PS2_TRACE=1 ./build/GodOfWarPCPort GOD_PC_PORT_FINAL/data/SCUS_973.99
```
O log é salvo em `/tmp/ps2_trace.log` com: sequência, timestamp, PC, RA, SP.

## Dependências

- CMake 3.20+
- GCC/G++ com suporte a C++20
- Raylib 5.x
- SSE4.1 / POPCNT (CPU x86_64 moderna)

## Stack Tecnológica

- **Linguagem:** C++20
- **Gráficos/Janela:** Raylib 5.x
- **Build:** CMake
- **Recompilador:** PS2Recomp (MIPS R5900 → C++)
- **Runtime:** ps2xRuntime (emulação de memória PS2, GS, IOP, VU0/VU1, áudio)

---

## Estado atual da depuração (sessão de 2026-04-25, agente Replit) — SENTINEL FIX

### Diagnóstico dos Testes A e B (logs fornecidos pelo Cris)

**Teste A (PS2_IOP_MODE=0, PS2_FORCE_A0=0x2cf070):**
- Janela preta abriu → boa notícia
- Loop infinito com 2.2 milhões de chamadas ao STUB 0x00080004
- `jalr_target=00000000` em 100% das iterações de `sub_00100E28`
- `global@0x32E854=00000000` permanece 0 para sempre

**Teste B (PS2_IOP_MODE=1):** "Permissão negada" — binário sem bit de execução após o pull
  - Fix imediato no terminal: `chmod +x build/GodOfWarPCPort`

### Root Cause identificada nesta sessão

O código em `sub_00100408` usa uma lista circular com sentinel:
```
sentinel_addr = a0 + 0x20 = 0x2cf070 + 0x20 = 0x2cf090
first = rdram[0x2cf090]
if (first == 0x2cf090) → lista vazia → retorna imediatamente ✓
else                    → entra no loop com current = first
```

O problema: `rdram[0x2cf090] = 0` (nunca inicializado). Com `0 ≠ 0x2cf090`,
o código entra no loop com `current = 0` (ponteiro nulo). Daí:
- `vtable = rdram[0 + 0x5C] = 0`
- `jalr_target = rdram[0 + 0xA4] = 0`
- JALR para endereço 0 → nop → `s0=0` → loop infinito

Isso também explica porque `global@0x32E854` é irrelevante: o jalr interno
de `sub_00100E28` lê `rdram[global@0x32E854 + 0x20 + 0xA4]`, que como
`global=0` → lê `rdram[0xA4] = 0` → target = 0. Problema derivado, não raiz.

### Fix aplicado

Em `PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`, após a cadeia kInitChain
e antes de `m_cpuContext.pc = 0x100008u`, adicionado:

```cpp
constexpr uint32_t SENTINEL = 0x2cf090u; // a0 + 0x20
uint32_t* mem = reinterpret_cast<uint32_t*>(rdram + SENTINEL);
mem[0] = SENTINEL; // next = self → lista vazia
mem[1] = SENTINEL; // prev = self
```

**Efeito esperado:** `sub_00100408` verifica `[0x2cf090] == 0x2cf090` → TRUE
→ branch para `label_1004a0` → retorna imediatamente SEM entrar no loop.
Então `sub_001003C0` prossegue para `func_238860` (game loop) com `[a0+0x18]=0`.

### Comando para testar (no terminal do Cris)

```bash
git pull origin main
bash rebuild_runtime.sh
PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_sentinel_fix.txt
```

Logs esperados de sucesso:
```
[boot_stub] sentinel lista circular inicializado em 0x2cf090 -> lista vazia...
[sub_00100408:enter] a0=0x002cf070 [a0+0x20]=0x002cf090 ...
```

### Fix 2 — a1=0 impedia o game loop (CONFIRMADO FUNCIONANDO)

`sub_001003C0` hardcodava `a1=0` no delay slot MIPS → `func_238860` pulava `func_13D668`.
Fix: `SET_GPR_U64(ctx, 5, 1u)` em `sub_001003C0_0x1003c0.cpp`.
Resultado: trace confirmou `0x238860 → 0x13d668 → 0x13db98 → 0x13e1c0`.

### Fix 3 — sub_001003C0 precisa loopar (APLICADO, AGUARDA TESTE)

`func_238860` é uma chamada única, não um loop. No PS2 real, a thread `0x2947c8`
(truncada) a chamaria em loop infinito via BIOS scheduler. Fix: após retorno de
`func_238860`, `cooperativeGuestYield()` + restaura a0=s0 + `goto label_1003ec`.

Arquivo: `GOD_PC_PORT_FINAL/src/recompiled/sub_001003C0_0x1003c0.cpp`

Comando de teste:
```bash
git pull origin main && bash rebuild_runtime.sh
PS2_FORCE_A0=0x2cf070 PS2_TRACE=1 bash jogar.sh 2>&1 | tee log_gameloop.txt
python3 tools/analisa_log.py log_gameloop.txt --diff log_bootloop_fix.txt
```
E AUSÊNCIA de `[DBG 100E28]` — o loop não deve mais aparecer.
Se `func_238860` for chamada, esperamos ver logs de GS/frame ou novas
linhas de boot nunca vistas antes.
