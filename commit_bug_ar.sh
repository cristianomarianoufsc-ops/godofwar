#!/bin/bash
# commit_bug_ar.sh — Commita e faz push do fix do Bug AR
# Rodar do Terminal 2 (NAO fechar o loop auto_round.sh!)
set -e

git add \
  PS2Recomp/ps2xRuntime/src/lib/game_overrides.cpp \
  replit.md \
  HANDOFF_AGENT.md

git commit -m "Bug AR corrigido: PASSO 32 salva/restaura \$sp — epilogo sub_0017A940 le \$ra correto

- Sub_0021C788 tem prolog addiu \$sp,-0x50; quando faz early-return (jalr capturado
  por PASSO 30/31), nao restaura \$sp — deixa stack deslocado -80 bytes.
- PASSO 32 wrapper so restaurava \$ra+ctx->pc, nao \$sp.
- Com \$sp errado, epilogo de sub_0017A940 faz 'ld \$ra, 0(\$sp)' em endereco errado
  => jumpTarget = lixo != 0x138dc0 => sub_00138D48 pula JAL[10/11] e JAL[11/11].
- Fix: wrapper salva saved_sp=GPR_U32(ctx,29) antes de chamar sub_0021C788
  e restaura SET_GPR_U32(ctx,29,saved_sp) apos — frame de sub_0017A940 intacto.
- Esperado: [138D48] JAL [9/11] retornou pc=0x138dc0 (1a vez!),
  PASSO 13 (sub_0017AA18), PASSO 28 (sub_0017A9B0 render thread), nonBlack>0."

bash git_push.sh
