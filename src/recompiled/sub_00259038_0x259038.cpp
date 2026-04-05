#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259038
// Address: 0x259038 - 0x259100
void sub_00259038_0x259038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259038_0x259038");
#endif

    ctx->pc = 0x259038u;

    // 0x259038: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x259038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x25903c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25903cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259040: 0x24422cd8  addiu       $v0, $v0, 0x2CD8
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x259044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259048: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x259048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25904c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25904Cu;
    {
        const bool branch_taken_0x25904c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x259050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25904Cu;
            // 0x259050: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25904c) {
            ctx->pc = 0x25905Cu;
            goto label_25905c;
        }
    }
    ctx->pc = 0x259054u;
    // 0x259054: 0xc098cb4  jal         func_2632D0
    ctx->pc = 0x259054u;
    SET_GPR_U32(ctx, 31, 0x25905Cu);
    ctx->pc = 0x2632D0u;
    if (runtime->hasFunction(0x2632D0u)) {
        auto targetFn = runtime->lookupFunction(0x2632D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25905Cu; }
        if (ctx->pc != 0x25905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002632D0_0x2632d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25905Cu; }
        if (ctx->pc != 0x25905Cu) { return; }
    }
    ctx->pc = 0x25905Cu;
label_25905c:
    // 0x25905c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259060: 0x3e00008  jr          $ra
    ctx->pc = 0x259060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259060u;
            // 0x259064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25905Cu: goto label_25905c;
            case 0x25908Cu: goto label_25908c;
            case 0x2590CCu: goto label_2590cc;
            case 0x2590E8u: goto label_2590e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259068u;
    // 0x259068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25906c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x259070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259074: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x259078: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x259078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25907c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25907Cu;
    {
        const bool branch_taken_0x25907c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x259080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25907Cu;
            // 0x259080: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25907c) {
            ctx->pc = 0x25908Cu;
            goto label_25908c;
        }
    }
    ctx->pc = 0x259084u;
    // 0x259084: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x259084u;
    SET_GPR_U32(ctx, 31, 0x25908Cu);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25908Cu; }
        if (ctx->pc != 0x25908Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25908Cu; }
        if (ctx->pc != 0x25908Cu) { return; }
    }
    ctx->pc = 0x25908Cu;
label_25908c:
    // 0x25908c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259090: 0x3e00008  jr          $ra
    ctx->pc = 0x259090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259090u;
            // 0x259094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25905Cu: goto label_25905c;
            case 0x25908Cu: goto label_25908c;
            case 0x2590CCu: goto label_2590cc;
            case 0x2590E8u: goto label_2590e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x259098u;
    // 0x259098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25909c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x25909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2590a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2590a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2590a4: 0x24422ca8  addiu       $v0, $v0, 0x2CA8
    ctx->pc = 0x2590a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11432));
    // 0x2590a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2590a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2590ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2590acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2590b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2590b4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2590b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2590b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2590b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2590bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2590BCu;
    {
        const bool branch_taken_0x2590bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2590BCu;
            // 0x2590c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590bc) {
            ctx->pc = 0x2590CCu;
            goto label_2590cc;
        }
    }
    ctx->pc = 0x2590C4u;
    // 0x2590c4: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x2590C4u;
    SET_GPR_U32(ctx, 31, 0x2590CCu);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590CCu; }
        if (ctx->pc != 0x2590CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590CCu; }
        if (ctx->pc != 0x2590CCu) { return; }
    }
    ctx->pc = 0x2590CCu;
label_2590cc:
    // 0x2590cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2590ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2590d0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2590d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2590d4: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x2590d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2590D8u;
    {
        const bool branch_taken_0x2590d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2590D8u;
            // 0x2590dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590d8) {
            ctx->pc = 0x2590E8u;
            goto label_2590e8;
        }
    }
    ctx->pc = 0x2590E0u;
    // 0x2590e0: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x2590E0u;
    SET_GPR_U32(ctx, 31, 0x2590E8u);
    ctx->pc = 0x2590E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2590E0u;
            // 0x2590e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590E8u; }
        if (ctx->pc != 0x2590E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590E8u; }
        if (ctx->pc != 0x2590E8u) { return; }
    }
    ctx->pc = 0x2590E8u;
label_2590e8:
    // 0x2590e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2590e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2590ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2590ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2590f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2590f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2590f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2590F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2590F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2590F4u;
            // 0x2590f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25905Cu: goto label_25905c;
            case 0x25908Cu: goto label_25908c;
            case 0x2590CCu: goto label_2590cc;
            case 0x2590E8u: goto label_2590e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2590FCu;
    // 0x2590fc: 0x0  nop
    ctx->pc = 0x2590fcu;
    // NOP
}
