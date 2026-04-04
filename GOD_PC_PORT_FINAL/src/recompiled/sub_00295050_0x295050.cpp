#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295050
// Address: 0x295050 - 0x295120
void sub_00295050_0x295050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295050_0x295050");
#endif

    ctx->pc = 0x295050u;

    // 0x295050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x295054: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x295054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295058: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x295058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29505c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29505cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295060: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x295060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x295064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x295068: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x295068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29506c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x295070: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295074: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x295074u;
    {
        const bool branch_taken_0x295074 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x295078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295074u;
            // 0x295078: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295074) {
            ctx->pc = 0x2950FCu;
            goto label_2950fc;
        }
    }
    ctx->pc = 0x29507Cu;
    // 0x29507c: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x29507cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x295080: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x295080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x295084: 0x0  nop
    ctx->pc = 0x295084u;
    // NOP
label_295088:
    // 0x295088: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29508c: 0x8c4474a8  lw          $a0, 0x74A8($v0)
    ctx->pc = 0x29508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29864)));
    // 0x295090: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x295094: 0x0  nop
    ctx->pc = 0x295094u;
    // NOP
label_295098:
    // 0x295098: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29509c: 0x0  nop
    ctx->pc = 0x29509cu;
    // NOP
    // 0x2950a0: 0x0  nop
    ctx->pc = 0x2950a0u;
    // NOP
    // 0x2950a4: 0x0  nop
    ctx->pc = 0x2950a4u;
    // NOP
    // 0x2950a8: 0x0  nop
    ctx->pc = 0x2950a8u;
    // NOP
    // 0x2950ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2950ACu;
    {
        const bool branch_taken_0x2950ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2950ac) {
            ctx->pc = 0x295098u;
            runtime->cooperativeGuestYield();
            goto label_295098;
        }
    }
    ctx->pc = 0x2950B4u;
    // 0x2950b4: 0x26657490  addiu       $a1, $s3, 0x7490
    ctx->pc = 0x2950b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 29840));
    // 0x2950b8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2950b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2950bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2950bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2950c0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2950c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2950c4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2950c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2950c8: 0xc0a5340  jal         func_294D00
    ctx->pc = 0x2950C8u;
    SET_GPR_U32(ctx, 31, 0x2950D0u);
    ctx->pc = 0x2950CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2950C8u;
            // 0x2950cc: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294D00u;
    if (runtime->hasFunction(0x294D00u)) {
        auto targetFn = runtime->lookupFunction(0x294D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2950D0u; }
        if (ctx->pc != 0x2950D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294d00_0x294d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2950D0u; }
        if (ctx->pc != 0x2950D0u) { return; }
    }
    ctx->pc = 0x2950D0u;
    // 0x2950d0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2950d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2950d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2950d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2950d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2950D8u;
    {
        const bool branch_taken_0x2950d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2950DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950D8u;
            // 0x2950dc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950d8) {
            ctx->pc = 0x2950E8u;
            goto label_2950e8;
        }
    }
    ctx->pc = 0x2950E0u;
    // 0x2950e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2950E0u;
    {
        const bool branch_taken_0x2950e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2950E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950E0u;
            // 0x2950e4: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950e0) {
            ctx->pc = 0x2950F0u;
            goto label_2950f0;
        }
    }
    ctx->pc = 0x2950E8u;
label_2950e8:
    // 0x2950e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2950E8u;
    {
        const bool branch_taken_0x2950e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950E8u;
            // 0x2950ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950e8) {
            ctx->pc = 0x295100u;
            goto label_295100;
        }
    }
    ctx->pc = 0x2950F0u;
label_2950f0:
    // 0x2950f0: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2950f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2950f4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2950F4u;
    {
        const bool branch_taken_0x2950f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2950F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950F4u;
            // 0x2950f8: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950f4) {
            ctx->pc = 0x295088u;
            runtime->cooperativeGuestYield();
            goto label_295088;
        }
    }
    ctx->pc = 0x2950FCu;
label_2950fc:
    // 0x2950fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2950fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_295100:
    // 0x295100: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x295100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295104: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x295104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295108: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x295108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29510c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29510cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295110: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x295110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295118: 0x3e00008  jr          $ra
    ctx->pc = 0x295118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295118u;
            // 0x29511c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295088u: goto label_295088;
            case 0x295098u: goto label_295098;
            case 0x2950E8u: goto label_2950e8;
            case 0x2950F0u: goto label_2950f0;
            case 0x2950FCu: goto label_2950fc;
            case 0x295100u: goto label_295100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295120u;
}
