#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D638
// Address: 0x28d638 - 0x28d6d8
void sub_0028D638_0x28d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D638_0x28d638");
#endif

    ctx->pc = 0x28d638u;

    // 0x28d638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28d638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28d63c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x28d63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d640: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x28d640u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x28d644: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D644u;
    {
        const bool branch_taken_0x28d644 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D644u;
            // 0x28d648: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d644) {
            ctx->pc = 0x28D658u;
            goto label_28d658;
        }
    }
    ctx->pc = 0x28D64Cu;
    // 0x28d64c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x28d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28d650: 0x38c2000a  xori        $v0, $a2, 0xA
    ctx->pc = 0x28d650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
    // 0x28d654: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x28d654u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_28d658:
    // 0x28d658: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28d658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28d65c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d660: 0x244b4600  addiu       $t3, $v0, 0x4600
    ctx->pc = 0x28d660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 17920));
    // 0x28d664: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28d664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d668: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x28d668u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28d66c: 0x0  nop
    ctx->pc = 0x28d66cu;
    // NOP
label_28d670:
    // 0x28d670: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D670u;
    {
        const bool branch_taken_0x28d670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x28d670) {
            ctx->pc = 0x28D674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D670u;
            // 0x28d674: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D678u;
            goto label_28d678;
        }
    }
    ctx->pc = 0x28D678u;
label_28d678:
    // 0x28d678: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x28d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x28d67c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x28d680: 0x1810  mfhi        $v1
    ctx->pc = 0x28d680u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28d684: 0x2012  mflo        $a0
    ctx->pc = 0x28d684u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x28d688: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x28d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x28d68c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28d68cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d690: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x28d690u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d694: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28D694u;
    {
        const bool branch_taken_0x28d694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x28d694) {
            ctx->pc = 0x28D698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D694u;
            // 0x28d698: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D69Cu;
            goto label_28d69c;
        }
    }
    ctx->pc = 0x28D69Cu;
label_28d69c:
    // 0x28d69c: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x28D69Cu;
    {
        const bool branch_taken_0x28d69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d69c) {
            ctx->pc = 0x28D6A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D69Cu;
            // 0x28d6a0: 0x86001b  divu        $zero, $a0, $a2 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D670u;
            runtime->cooperativeGuestYield();
            goto label_28d670;
        }
    }
    ctx->pc = 0x28D6A4u;
    // 0x28d6a4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D6A4u;
    {
        const bool branch_taken_0x28d6a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D6A4u;
            // 0x28d6a8: 0x1271821  addu        $v1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6a4) {
            ctx->pc = 0x28D6B8u;
            goto label_28d6b8;
        }
    }
    ctx->pc = 0x28D6ACu;
    // 0x28d6ac: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28d6b0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x28d6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d6b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28d6b8:
    // 0x28d6b8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x28d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x28d6bc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x28d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d6c0: 0xc0a3570  jal         func_28D5C0
    ctx->pc = 0x28D6C0u;
    SET_GPR_U32(ctx, 31, 0x28D6C8u);
    ctx->pc = 0x28D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D6C0u;
            // 0x28d6c4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D5C0u;
    if (runtime->hasFunction(0x28D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x28D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6C8u; }
        if (ctx->pc != 0x28D6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0028d5c0_0x28d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6C8u; }
        if (ctx->pc != 0x28D6C8u) { return; }
    }
    ctx->pc = 0x28D6C8u;
    // 0x28d6c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x28D6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D6CCu;
            // 0x28d6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D658u: goto label_28d658;
            case 0x28D670u: goto label_28d670;
            case 0x28D678u: goto label_28d678;
            case 0x28D69Cu: goto label_28d69c;
            case 0x28D6B8u: goto label_28d6b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D6D4u;
    // 0x28d6d4: 0x0  nop
    ctx->pc = 0x28d6d4u;
    // NOP
}
