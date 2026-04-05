#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_141350
// Address: 0x141350 - 0x1413e8
void entry_141350_0x1413e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_141350_0x1413e8");
#endif

    ctx->pc = 0x141350u;

    // 0x141350: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x141350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141354: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x141354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141358: 0x3123000f  andi        $v1, $t1, 0xF
    ctx->pc = 0x141358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x14135c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x141360: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x141360u;
    {
        const bool branch_taken_0x141360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x141364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141360u;
            // 0x141364: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141360) {
            ctx->pc = 0x14138Cu;
            goto label_14138c;
        }
    }
    ctx->pc = 0x141368u;
    // 0x141368: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x141368u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x14136c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x14136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_141370:
    // 0x141370: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x141374: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x141374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x141378: 0x0  nop
    ctx->pc = 0x141378u;
    // NOP
    // 0x14137c: 0x0  nop
    ctx->pc = 0x14137cu;
    // NOP
    // 0x141380: 0x0  nop
    ctx->pc = 0x141380u;
    // NOP
    // 0x141384: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141384u;
    {
        const bool branch_taken_0x141384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x141384) {
            ctx->pc = 0x141388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141384u;
            // 0x141388: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141370u;
            runtime->cooperativeGuestYield();
            goto label_141370;
        }
    }
    ctx->pc = 0x14138Cu;
label_14138c:
    // 0x14138c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x14138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x141390: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x141394: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x141394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x141398: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x141398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x14139c: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x14139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1413a0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1413a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1413a4: 0x8d460134  lw          $a2, 0x134($t2)
    ctx->pc = 0x1413a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 308)));
    // 0x1413a8: 0x8d440140  lw          $a0, 0x140($t2)
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 320)));
    // 0x1413ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1413b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1413b4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1413b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1413b8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1413b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1413bc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1413bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1413c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1413c4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1413c8: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1413cc: 0x1221023  subu        $v0, $t1, $v0
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1413d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1413d4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1413d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1413d8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1413dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1413e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1413E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1413E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1413E0u;
            // 0x1413e4: 0x1221021  addu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141370u: goto label_141370;
            case 0x14138Cu: goto label_14138c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1413E8u;
}
