#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DC78
// Address: 0x13dc78 - 0x13de28
void sub_0013DC78_0x13dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DC78_0x13dc78");
#endif

    ctx->pc = 0x13dc78u;

    // PASSO 12 — Inicializa sentinela da fila de prioridade circular
    // sub_0013DC78 gerencia uma lista encadeada circular com sentinela:
    //   s2->next (s2+4) deve apontar para s2 mesmo quando a lista está vazia.
    // Na PS2 real, o IOP inicializa esses structs antes do EE usar.
    // No port sem IOP, s2+4 contém lixo de memória → loop infinito via cooperativeGuestYield.
    // Fix: se READ32(s2+4) != s2, forçamos o sentinela circular (next=self, prev=self).
    {
        uint32_t _p12_s2 = GPR_U32(ctx, 4); // a0 = s2 (ponteiro do struct pool)
        if (_p12_s2 != 0) {
            uint32_t _p12_next = READ32(ADD32(_p12_s2, 4));
            if (_p12_next != _p12_s2) {
                std::cerr << "[PASSO 12] sub_0013DC78: s2=0x" << std::hex << _p12_s2
                          << " s2->next=0x" << _p12_next
                          << " (lixo/nao-sentinela) — inicializando lista vazia (next=prev=self)\n" << std::dec;
                WRITE32(ADD32(_p12_s2, 4), _p12_s2); // next = self (lista vazia)
                WRITE32(ADD32(_p12_s2, 8), _p12_s2); // prev = self (lista vazia)
            } else {
                std::cerr << "[PASSO 12] sub_0013DC78: s2=0x" << std::hex << _p12_s2
                          << " sentinela ja OK (next=self)\n" << std::dec;
            }
        } else {
            std::cerr << "[PASSO 12] sub_0013DC78: s2=null (func_13E090 retornou 0 — pool cheio?)\n";
        }
    }

    // 0x13dc78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13dc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13dc7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13dc80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13dc84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13dc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13dc8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13dc8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13dc94: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x13dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13dc98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DC98u;
    {
        const bool branch_taken_0x13dc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC98u;
            // 0x13dc9c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc98) {
            ctx->pc = 0x13DCB0u;
            goto label_13dcb0;
        }
    }
    ctx->pc = 0x13DCA0u;
    // 0x13dca0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x13dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x13dca4: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x13dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x13dca8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x13DCA8u;
    SET_GPR_U32(ctx, 31, 0x13DCB0u);
    ctx->pc = 0x13DCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCA8u;
            // 0x13dcac: 0x24a516a8  addiu       $a1, $a1, 0x16A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DCB0u; }
        if (ctx->pc != 0x13DCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DCB0u; }
        if (ctx->pc != 0x13DCB0u) { return; }
    }
    ctx->pc = 0x13DCB0u;
label_13dcb0:
    // 0x13dcb0: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x13dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x13dcb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13dcb8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x13dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13dcbc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13dcc0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13dcc4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x13dcc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13dcc8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x13dcc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13dccc: 0x1112004e  beq         $t0, $s2, . + 4 + (0x4E << 2)
    ctx->pc = 0x13DCCCu;
    {
        const bool branch_taken_0x13dccc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x13DCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCCCu;
            // 0x13dcd0: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dccc) {
            ctx->pc = 0x13DE08u;
            goto label_13de08;
        }
    }
    ctx->pc = 0x13DCD4u;
    // 0x13dcd4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_13dcd8:
    // 0x13dcd8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x13dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x13dcdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13dcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13dce0: 0x435824  and         $t3, $v0, $v1
    ctx->pc = 0x13dce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13dce4: 0x165102b  sltu        $v0, $t3, $a1
    ctx->pc = 0x13dce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13dce8: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x13DCE8u;
    {
        const bool branch_taken_0x13dce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dce8) {
            ctx->pc = 0x13DCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCE8u;
            // 0x13dcec: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DE00u;
            goto label_13de00;
        }
    }
    ctx->pc = 0x13DCF0u;
    // 0x13dcf0: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x13dcf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13dcf4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13DCF4u;
    {
        const bool branch_taken_0x13dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCF4u;
            // 0x13dcf8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcf4) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DCFCu;
    // 0x13dcfc: 0x25020004  addiu       $v0, $t0, 0x4
    ctx->pc = 0x13dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x13dd00: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DD00u;
    {
        const bool branch_taken_0x13dd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd00) {
            ctx->pc = 0x13DD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD00u;
            // 0x13dd04: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DD08u;
            goto label_13dd08;
        }
    }
    ctx->pc = 0x13DD08u;
label_13dd08:
    // 0x13dd08: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13dd08u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13dd0c: 0x1010  mfhi        $v0
    ctx->pc = 0x13dd0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13dd10: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x13dd10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd14: 0x11400005  beqz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DD14u;
    {
        const bool branch_taken_0x13dd14 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD14u;
            // 0x13dd18: 0xaa4821  addu        $t1, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd14) {
            ctx->pc = 0x13DD2Cu;
            goto label_13dd2c;
        }
    }
    ctx->pc = 0x13DD1Cu;
    // 0x13dd1c: 0x20a1023  subu        $v0, $s0, $t2
    ctx->pc = 0x13dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x13dd20: 0x25082  srl         $t2, $v0, 2
    ctx->pc = 0x13dd20u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13dd24: 0x0  nop
    ctx->pc = 0x13dd24u;
    // NOP
label_13dd28:
    // 0x13dd28: 0xaa4821  addu        $t1, $a1, $t2
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_13dd2c:
    // 0x13dd2c: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x13dd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x13dd30: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x13DD30u;
    {
        const bool branch_taken_0x13dd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd30) {
            ctx->pc = 0x13DD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD30u;
            // 0x13dd34: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DE00u;
            goto label_13de00;
        }
    }
    ctx->pc = 0x13DD38u;
    // 0x13dd38: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x13dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x13dd3c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x13dd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13dd40: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x13DD40u;
    {
        const bool branch_taken_0x13dd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd40) {
            ctx->pc = 0x13DD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD40u;
            // 0x13dd44: 0x8d050008  lw          $a1, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DDB8u;
            goto label_13ddb8;
        }
    }
    ctx->pc = 0x13DD48u;
    // 0x13dd48: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x13dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x13dd4c: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x13dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13dd50: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x13dd50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x13dd54: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x13dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13dd58: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x13dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x13dd5c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x13dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x13dd60: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x13dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x13dd64: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x13dd68: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x13dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x13dd6c: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x13dd6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x13dd70: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x13dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x13dd74: 0xa2e40  sll         $a1, $t2, 25
    ctx->pc = 0x13dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 25));
    // 0x13dd78: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x13dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x13dd7c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x13dd7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13dd80: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x13dd84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dd88: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x13dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x13dd8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13dd8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13dd90: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x13dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13dd94: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13dd98: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x13dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x13dd9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13dda0: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x13dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
    // 0x13dda4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x13dda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x13dda8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13ddac: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x13ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x13ddb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13DDB0u;
    {
        const bool branch_taken_0x13ddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDB0u;
            // 0x13ddb4: 0xac82fffc  sw          $v0, -0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddb0) {
            ctx->pc = 0x13DDF8u;
            goto label_13ddf8;
        }
    }
    ctx->pc = 0x13DDB8u;
label_13ddb8:
    // 0x13ddb8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x13ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13ddbc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x13ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x13ddc0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13ddc4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x13ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x13ddc8: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x13ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x13ddcc: 0xa2640  sll         $a0, $t2, 25
    ctx->pc = 0x13ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 25));
    // 0x13ddd0: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x13ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x13ddd4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x13ddd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13ddd8: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x13ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x13dddc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x13dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x13dde0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x13dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x13dde4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x13dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13dde8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13ddec: 0xac64fffc  sw          $a0, -0x4($v1)
    ctx->pc = 0x13ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
    // 0x13ddf0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13ddf4: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x13ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_13ddf8:
    // 0x13ddf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13DDF8u;
    {
        const bool branch_taken_0x13ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDF8u;
            // 0x13ddfc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddf8) {
            ctx->pc = 0x13DE0Cu;
            goto label_13de0c;
        }
    }
    ctx->pc = 0x13DE00u;
label_13de00:
    // 0x13de00: 0x5512ffb5  bnel        $t0, $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x13DE00u;
    {
        const bool branch_taken_0x13de00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 18));
        if (branch_taken_0x13de00) {
            ctx->pc = 0x13DE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE00u;
            // 0x13de04: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCD8u;
            runtime->cooperativeGuestYield();
            goto label_13dcd8;
        }
    }
    ctx->pc = 0x13DE08u;
label_13de08:
    // 0x13de08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13de08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13de0c:
    // 0x13de0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13de0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13de10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13de10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13de14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13de14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13de18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13de18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13de1c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE1Cu;
            // 0x13de20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DCB0u: goto label_13dcb0;
            case 0x13DCD8u: goto label_13dcd8;
            case 0x13DD08u: goto label_13dd08;
            case 0x13DD28u: goto label_13dd28;
            case 0x13DD2Cu: goto label_13dd2c;
            case 0x13DDB8u: goto label_13ddb8;
            case 0x13DDF8u: goto label_13ddf8;
            case 0x13DE00u: goto label_13de00;
            case 0x13DE08u: goto label_13de08;
            case 0x13DE0Cu: goto label_13de0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DE24u;
    // 0x13de24: 0x0  nop
    ctx->pc = 0x13de24u;
    // NOP
}
