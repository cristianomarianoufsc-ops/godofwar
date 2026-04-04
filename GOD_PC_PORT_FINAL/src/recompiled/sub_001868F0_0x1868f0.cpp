#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001868F0
// Address: 0x1868f0 - 0x1869c8
void sub_001868F0_0x1868f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001868F0_0x1868f0");
#endif

    ctx->pc = 0x1868f0u;

label_1868f0:
    // 0x1868f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1868f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1868f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1868f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1868f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1868fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1868fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x186900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186904: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x186904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x186908: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x186908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18690c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x186910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186914: 0xc05d6b6  jal         func_175AD8
    ctx->pc = 0x186914u;
    SET_GPR_U32(ctx, 31, 0x18691Cu);
    ctx->pc = 0x186918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186914u;
            // 0x186918: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AD8u;
    if (runtime->hasFunction(0x175AD8u)) {
        auto targetFn = runtime->lookupFunction(0x175AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18691Cu; }
        if (ctx->pc != 0x18691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AD8_0x175ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18691Cu; }
        if (ctx->pc != 0x18691Cu) { return; }
    }
    ctx->pc = 0x18691Cu;
    // 0x18691c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x18691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x186920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186924: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186928: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x186928u;
    {
        const bool branch_taken_0x186928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186928u;
            // 0x18692c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186928) {
            ctx->pc = 0x1869A4u;
            goto label_1869a4;
        }
    }
    ctx->pc = 0x186930u;
    // 0x186930: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x186930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x186934: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x186934u;
    {
        const bool branch_taken_0x186934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186934u;
            // 0x186938: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186934) {
            ctx->pc = 0x18697Cu;
            goto label_18697c;
        }
    }
    ctx->pc = 0x18693Cu;
    // 0x18693c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x18693cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_186940:
    // 0x186940: 0x26340050  addiu       $s4, $s1, 0x50
    ctx->pc = 0x186940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x186944: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x186944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x186948: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x186948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18694c: 0xc061a3c  jal         func_1868F0
    ctx->pc = 0x18694Cu;
    SET_GPR_U32(ctx, 31, 0x186954u);
    ctx->pc = 0x186950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18694Cu;
            // 0x186950: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1868F0u;
    runtime->cooperativeGuestYield();
    goto label_1868f0;
    ctx->pc = 0x186954u;
label_186954:
    // 0x186954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186958: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x186958u;
    {
        const bool branch_taken_0x186958 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186958u;
            // 0x18695c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186958) {
            ctx->pc = 0x1869A0u;
            goto label_1869a0;
        }
    }
    ctx->pc = 0x186960u;
    // 0x186960: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x186960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x186964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186964u;
    {
        const bool branch_taken_0x186964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186964u;
            // 0x186968: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186964) {
            ctx->pc = 0x18697Cu;
            goto label_18697c;
        }
    }
    ctx->pc = 0x18696Cu;
    // 0x18696c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x18696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x186970: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186974: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x186974u;
    {
        const bool branch_taken_0x186974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186974u;
            // 0x186978: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186974) {
            ctx->pc = 0x186940u;
            runtime->cooperativeGuestYield();
            goto label_186940;
        }
    }
    ctx->pc = 0x18697Cu;
label_18697c:
    // 0x18697c: 0xc05d652  jal         func_175948
    ctx->pc = 0x18697Cu;
    SET_GPR_U32(ctx, 31, 0x186984u);
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186984u; }
        if (ctx->pc != 0x186984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186984u; }
        if (ctx->pc != 0x186984u) { return; }
    }
    ctx->pc = 0x186984u;
    // 0x186984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186988: 0xc05d6b6  jal         func_175AD8
    ctx->pc = 0x186988u;
    SET_GPR_U32(ctx, 31, 0x186990u);
    ctx->pc = 0x18698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186988u;
            // 0x18698c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AD8u;
    if (runtime->hasFunction(0x175AD8u)) {
        auto targetFn = runtime->lookupFunction(0x175AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186990u; }
        if (ctx->pc != 0x186990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AD8_0x175ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186990u; }
        if (ctx->pc != 0x186990u) { return; }
    }
    ctx->pc = 0x186990u;
    // 0x186990: 0xc05d652  jal         func_175948
    ctx->pc = 0x186990u;
    SET_GPR_U32(ctx, 31, 0x186998u);
    ctx->pc = 0x186994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186990u;
            // 0x186994: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175948u;
    if (runtime->hasFunction(0x175948u)) {
        auto targetFn = runtime->lookupFunction(0x175948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186998u; }
        if (ctx->pc != 0x186998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175948_0x175958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186998u; }
        if (ctx->pc != 0x186998u) { return; }
    }
    ctx->pc = 0x186998u;
    // 0x186998: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18699c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x18699cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1869a0:
    // 0x1869a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1869a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1869a4:
    // 0x1869a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1869a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1869a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1869a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1869ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1869acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1869b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1869b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1869b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1869b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1869b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1869b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1869bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1869BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1869C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1869BCu;
            // 0x1869c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1868F0u: goto label_1868f0;
            case 0x186940u: goto label_186940;
            case 0x186954u: goto label_186954;
            case 0x18697Cu: goto label_18697c;
            case 0x1869A0u: goto label_1869a0;
            case 0x1869A4u: goto label_1869a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1869C4u;
    // 0x1869c4: 0x0  nop
    ctx->pc = 0x1869c4u;
    // NOP
}
