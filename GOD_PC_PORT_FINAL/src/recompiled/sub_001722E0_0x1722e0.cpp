#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001722E0
// Address: 0x1722e0 - 0x172458
void sub_001722E0_0x1722e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001722E0_0x1722e0");
#endif

    ctx->pc = 0x1722e0u;

    // 0x1722e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1722e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1722e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1722e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1722e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1722ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1722ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1722f0: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x1722f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1722f4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1722F4u;
    {
        const bool branch_taken_0x1722f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1722F4u;
            // 0x1722f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722f4) {
            ctx->pc = 0x172324u;
            goto label_172324;
        }
    }
    ctx->pc = 0x1722FCu;
    // 0x1722fc: 0x2630fff8  addiu       $s0, $s1, -0x8
    ctx->pc = 0x1722fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_172300:
    // 0x172300: 0x11800a  movz        $s0, $zero, $s1
    ctx->pc = 0x172300u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x172304: 0xc05c332  jal         func_170CC8
    ctx->pc = 0x172304u;
    SET_GPR_U32(ctx, 31, 0x17230Cu);
    ctx->pc = 0x172308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172304u;
            // 0x172308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170CC8u;
    if (runtime->hasFunction(0x170CC8u)) {
        auto targetFn = runtime->lookupFunction(0x170CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17230Cu; }
        if (ctx->pc != 0x17230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CC8_0x170cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17230Cu; }
        if (ctx->pc != 0x17230Cu) { return; }
    }
    ctx->pc = 0x17230Cu;
    // 0x17230c: 0xc05c22c  jal         func_1708B0
    ctx->pc = 0x17230Cu;
    SET_GPR_U32(ctx, 31, 0x172314u);
    ctx->pc = 0x172310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17230Cu;
            // 0x172310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B0u;
    if (runtime->hasFunction(0x1708B0u)) {
        auto targetFn = runtime->lookupFunction(0x1708B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172314u; }
        if (ctx->pc != 0x172314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B0_0x1708b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172314u; }
        if (ctx->pc != 0x172314u) { return; }
    }
    ctx->pc = 0x172314u;
    // 0x172314: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172318: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172318u;
    {
        const bool branch_taken_0x172318 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172318u;
            // 0x17231c: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172318) {
            ctx->pc = 0x172300u;
            runtime->cooperativeGuestYield();
            goto label_172300;
        }
    }
    ctx->pc = 0x172320u;
    // 0x172320: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x172320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172324:
    // 0x172324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17232c: 0x3e00008  jr          $ra
    ctx->pc = 0x17232Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17232Cu;
            // 0x172330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172300u: goto label_172300;
            case 0x172324u: goto label_172324;
            case 0x1723E0u: goto label_1723e0;
            case 0x1723F0u: goto label_1723f0;
            case 0x1723FCu: goto label_1723fc;
            case 0x172448u: goto label_172448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172334u;
    // 0x172334: 0x0  nop
    ctx->pc = 0x172334u;
    // NOP
    // 0x172338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17233c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x172340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17234c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17234cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172350: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x172354: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x172354u;
    SET_GPR_U32(ctx, 31, 0x17235Cu);
    ctx->pc = 0x172358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172354u;
            // 0x172358: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17235Cu; }
        if (ctx->pc != 0x17235Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17235Cu; }
        if (ctx->pc != 0x17235Cu) { return; }
    }
    ctx->pc = 0x17235Cu;
    // 0x17235c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172360: 0xc05c5c2  jal         func_171708
    ctx->pc = 0x172360u;
    SET_GPR_U32(ctx, 31, 0x172368u);
    ctx->pc = 0x172364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172360u;
            // 0x172364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171708u;
    if (runtime->hasFunction(0x171708u)) {
        auto targetFn = runtime->lookupFunction(0x171708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172368u; }
        if (ctx->pc != 0x172368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171708_0x171708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172368u; }
        if (ctx->pc != 0x172368u) { return; }
    }
    ctx->pc = 0x172368u;
    // 0x172368: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x172368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x17236c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17236cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172370: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x172370u;
    SET_GPR_U32(ctx, 31, 0x172378u);
    ctx->pc = 0x172374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172370u;
            // 0x172374: 0x8c647910  lw          $a0, 0x7910($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172378u; }
        if (ctx->pc != 0x172378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172378u; }
        if (ctx->pc != 0x172378u) { return; }
    }
    ctx->pc = 0x172378u;
    // 0x172378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x172378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17237c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17237cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x172380: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x172380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x172384: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x172384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x172388: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x172388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17238c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17238cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x172390: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x172390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x172394: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x172394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172398: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x172398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x17239c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17239cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1723a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1723a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1723a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1723a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1723a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1723ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1723ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1723B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1723ACu;
            // 0x1723b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172300u: goto label_172300;
            case 0x172324u: goto label_172324;
            case 0x1723E0u: goto label_1723e0;
            case 0x1723F0u: goto label_1723f0;
            case 0x1723FCu: goto label_1723fc;
            case 0x172448u: goto label_172448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1723B4u;
    // 0x1723b4: 0x0  nop
    ctx->pc = 0x1723b4u;
    // NOP
    // 0x1723b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1723bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1723bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1723c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1723c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1723c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1723c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723c8: 0x2483003c  addiu       $v1, $a0, 0x3C
    ctx->pc = 0x1723c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x1723cc: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x1723ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1723d0: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1723D0u;
    {
        const bool branch_taken_0x1723d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1723D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1723D0u;
            // 0x1723d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723d0) {
            ctx->pc = 0x1723FCu;
            goto label_1723fc;
        }
    }
    ctx->pc = 0x1723D8u;
    // 0x1723d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1723dc: 0x0  nop
    ctx->pc = 0x1723dcu;
    // NOP
label_1723e0:
    // 0x1723e0: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1723E0u;
    {
        const bool branch_taken_0x1723e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1723e0) {
            ctx->pc = 0x1723E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1723E0u;
            // 0x1723e4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1723F0u;
            goto label_1723f0;
        }
    }
    ctx->pc = 0x1723E8u;
    // 0x1723e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1723E8u;
    {
        const bool branch_taken_0x1723e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1723ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1723E8u;
            // 0x1723ec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1723e8) {
            ctx->pc = 0x1723FCu;
            goto label_1723fc;
        }
    }
    ctx->pc = 0x1723F0u;
label_1723f0:
    // 0x1723f0: 0x54a3fffb  bnel        $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1723F0u;
    {
        const bool branch_taken_0x1723f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1723f0) {
            ctx->pc = 0x1723F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1723F0u;
            // 0x1723f4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1723E0u;
            runtime->cooperativeGuestYield();
            goto label_1723e0;
        }
    }
    ctx->pc = 0x1723F8u;
    // 0x1723f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1723f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1723fc:
    // 0x1723fc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1723fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172400: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x172404: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x172404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x172408: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x172408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17240c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x17240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x172410: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x172410u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x172414: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172418: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x172418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17241c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17241cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x172420: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x172420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x172424: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x172424u;
    SET_GPR_U32(ctx, 31, 0x17242Cu);
    ctx->pc = 0x172428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172424u;
            // 0x172428: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17242Cu; }
        if (ctx->pc != 0x17242Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17242Cu; }
        if (ctx->pc != 0x17242Cu) { return; }
    }
    ctx->pc = 0x17242Cu;
    // 0x17242c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17242Cu;
    {
        const bool branch_taken_0x17242c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17242Cu;
            // 0x172430: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17242c) {
            ctx->pc = 0x172448u;
            goto label_172448;
        }
    }
    ctx->pc = 0x172434u;
    // 0x172434: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x172434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x172438: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x172438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17243c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x172440: 0x40f809  jalr        $v0
    ctx->pc = 0x172440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172448u);
        ctx->pc = 0x172444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172440u;
            // 0x172444: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x172448u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172300u: goto label_172300;
            case 0x172324u: goto label_172324;
            case 0x1723E0u: goto label_1723e0;
            case 0x1723F0u: goto label_1723f0;
            case 0x1723FCu: goto label_1723fc;
            case 0x172448u: goto label_172448;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172448u; }
            if (ctx->pc != 0x172448u) { return; }
        }
        }
    }
    ctx->pc = 0x172448u;
label_172448:
    // 0x172448: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17244c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17244cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172450: 0x3e00008  jr          $ra
    ctx->pc = 0x172450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172450u;
            // 0x172454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172300u: goto label_172300;
            case 0x172324u: goto label_172324;
            case 0x1723E0u: goto label_1723e0;
            case 0x1723F0u: goto label_1723f0;
            case 0x1723FCu: goto label_1723fc;
            case 0x172448u: goto label_172448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172458u;
}
