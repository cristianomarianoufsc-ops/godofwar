#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7290
// Address: 0x1f7290 - 0x1f73a0
void sub_001F7290_0x1f7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7290_0x1f7290");
#endif

    ctx->pc = 0x1f7290u;

    // 0x1f7290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f7294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7298: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f729c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f72a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f72a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72a4: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x1f72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x1f72a8: 0x860300dc  lh          $v1, 0xDC($s0)
    ctx->pc = 0x1f72a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1f72ac: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1f72acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1f72b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F72B0u;
    {
        const bool branch_taken_0x1f72b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F72B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72B0u;
            // 0x1f72b4: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72b0) {
            ctx->pc = 0x1F72C0u;
            goto label_1f72c0;
        }
    }
    ctx->pc = 0x1F72B8u;
    // 0x1f72b8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f72bc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1f72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1f72c0:
    // 0x1f72c0: 0xa60000dc  sh          $zero, 0xDC($s0)
    ctx->pc = 0x1f72c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f72c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f72c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f72cc: 0x0  nop
    ctx->pc = 0x1f72ccu;
    // NOP
label_1f72d0:
    // 0x1f72d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f72d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f72d8: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x1f72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x1f72dc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1f72dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f72e0: 0x0  nop
    ctx->pc = 0x1f72e0u;
    // NOP
    // 0x1f72e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F72E4u;
    {
        const bool branch_taken_0x1f72e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F72E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72E4u;
            // 0x1f72e8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72e4) {
            ctx->pc = 0x1F72D0u;
            runtime->cooperativeGuestYield();
            goto label_1f72d0;
        }
    }
    ctx->pc = 0x1F72ECu;
    // 0x1f72ec: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1f72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1f72f0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1f72f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1f72f4: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1f72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1f72f8: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x1f72f8u;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x1f72fc: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1f72fcu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1f7300: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1f7300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f7304: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x1f7304u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x1f7308: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1f7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f730c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7310: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1f7310u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1f7314: 0xfa020050  sqc2        $vf2, 0x50($s0)
    ctx->pc = 0x1f7314u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7318: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f731c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1f731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7324: 0xf8630030  sqc2        $vf3, 0x30($v1)
    ctx->pc = 0x1f7324u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f7328: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x1f7328u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f732c: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x1f732cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7330: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1f7330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1f7334: 0xa60200e2  sh          $v0, 0xE2($s0)
    ctx->pc = 0x1f7334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 226), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7338: 0xa60200de  sh          $v0, 0xDE($s0)
    ctx->pc = 0x1f7338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 222), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f733c: 0xc07dce8  jal         func_1F73A0
    ctx->pc = 0x1F733Cu;
    SET_GPR_U32(ctx, 31, 0x1F7344u);
    ctx->pc = 0x1F7340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F733Cu;
            // 0x1f7340: 0xa60200e0  sh          $v0, 0xE0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73A0u;
    if (runtime->hasFunction(0x1F73A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7344u; }
        if (ctx->pc != 0x1F7344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f73a0_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7344u; }
        if (ctx->pc != 0x1F7344u) { return; }
    }
    ctx->pc = 0x1F7344u;
    // 0x1f7344: 0xc07dd50  jal         func_1F7540
    ctx->pc = 0x1F7344u;
    SET_GPR_U32(ctx, 31, 0x1F734Cu);
    ctx->pc = 0x1F7348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7344u;
            // 0x1f7348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7540u;
    if (runtime->hasFunction(0x1F7540u)) {
        auto targetFn = runtime->lookupFunction(0x1F7540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F734Cu; }
        if (ctx->pc != 0x1F734Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7540_0x1f7540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F734Cu; }
        if (ctx->pc != 0x1F734Cu) { return; }
    }
    ctx->pc = 0x1F734Cu;
    // 0x1f734c: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1f734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f7350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7354: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1f7354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1f7358: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f7358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f735c: 0xc0402de  jal         func_100B78
    ctx->pc = 0x1F735Cu;
    SET_GPR_U32(ctx, 31, 0x1F7364u);
    ctx->pc = 0x1F7360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F735Cu;
            // 0x1f7360: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B78u;
    if (runtime->hasFunction(0x100B78u)) {
        auto targetFn = runtime->lookupFunction(0x100B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7364u; }
        if (ctx->pc != 0x1F7364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100B78_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7364u; }
        if (ctx->pc != 0x1F7364u) { return; }
    }
    ctx->pc = 0x1F7364u;
    // 0x1f7364: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f7364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f7368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f736c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F736Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F736Cu;
            // 0x1f7370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F72C0u: goto label_1f72c0;
            case 0x1F72D0u: goto label_1f72d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7374u;
    // 0x1f7374: 0x0  nop
    ctx->pc = 0x1f7374u;
    // NOP
    // 0x1f7378: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7378u;
            // 0x1f737c: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F72C0u: goto label_1f72c0;
            case 0x1F72D0u: goto label_1f72d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7380u;
    // 0x1f7380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7388: 0xc07d956  jal         func_1F6558
    ctx->pc = 0x1F7388u;
    SET_GPR_U32(ctx, 31, 0x1F7390u);
    ctx->pc = 0x1F6558u;
    if (runtime->hasFunction(0x1F6558u)) {
        auto targetFn = runtime->lookupFunction(0x1F6558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7390u; }
        if (ctx->pc != 0x1F7390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6558_0x1f6558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7390u; }
        if (ctx->pc != 0x1F7390u) { return; }
    }
    ctx->pc = 0x1F7390u;
    // 0x1f7390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7394: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7394u;
            // 0x1f7398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F72C0u: goto label_1f72c0;
            case 0x1F72D0u: goto label_1f72d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F739Cu;
    // 0x1f739c: 0x0  nop
    ctx->pc = 0x1f739cu;
    // NOP
}
