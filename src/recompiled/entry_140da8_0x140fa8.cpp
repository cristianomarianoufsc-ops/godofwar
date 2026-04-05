#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_140da8
// Address: 0x140da8 - 0x140fa8
void entry_140da8_0x140fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_140da8_0x140fa8");
#endif

    ctx->pc = 0x140da8u;

    // 0x140da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x140dac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x140db0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x140db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x140db4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140db8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x140db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x140dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x140dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140dc4: 0xc0540d0  jal         func_150340
    ctx->pc = 0x140DC4u;
    SET_GPR_U32(ctx, 31, 0x140DCCu);
    ctx->pc = 0x140DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140DC4u;
            // 0x140dc8: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150340u;
    if (runtime->hasFunction(0x150340u)) {
        auto targetFn = runtime->lookupFunction(0x150340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DCCu; }
        if (ctx->pc != 0x140DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150340_0x150340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DCCu; }
        if (ctx->pc != 0x140DCCu) { return; }
    }
    ctx->pc = 0x140DCCu;
    // 0x140dcc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x140dccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x140dd0: 0xfa2100e0  sqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x140dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x140dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140dd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x140dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x140ddc: 0xa2230147  sb          $v1, 0x147($s1)
    ctx->pc = 0x140ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 327), (uint8_t)GPR_U32(ctx, 3));
    // 0x140de0: 0xa2220145  sb          $v0, 0x145($s1)
    ctx->pc = 0x140de0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 325), (uint8_t)GPR_U32(ctx, 2));
    // 0x140de4: 0xa2200146  sb          $zero, 0x146($s1)
    ctx->pc = 0x140de4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 326), (uint8_t)GPR_U32(ctx, 0));
    // 0x140de8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x140dec: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x140decu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x140df0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x140DF0u;
    SET_GPR_U32(ctx, 31, 0x140DF8u);
    ctx->pc = 0x140DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140DF0u;
            // 0x140df4: 0x2028018  mult        $s0, $s0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF8u; }
        if (ctx->pc != 0x140DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140DF8u; }
        if (ctx->pc != 0x140DF8u) { return; }
    }
    ctx->pc = 0x140DF8u;
    // 0x140df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140dfc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x140e00: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x140E00u;
    SET_GPR_U32(ctx, 31, 0x140E08u);
    ctx->pc = 0x140E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E00u;
            // 0x140e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E08u; }
        if (ctx->pc != 0x140E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E08u; }
        if (ctx->pc != 0x140E08u) { return; }
    }
    ctx->pc = 0x140E08u;
    // 0x140e08: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x140e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x140e0c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x140e10: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x140e14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140e18: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x140e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x140e1c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x140e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x140e20: 0xae240120  sw          $a0, 0x120($s1)
    ctx->pc = 0x140e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 4));
    // 0x140e24: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x140e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x140e28: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x140e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x140e2c: 0x24c60034  addiu       $a2, $a2, 0x34
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
    // 0x140e30: 0xae240130  sw          $a0, 0x130($s1)
    ctx->pc = 0x140e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 4));
    // 0x140e34: 0xae24012c  sw          $a0, 0x12C($s1)
    ctx->pc = 0x140e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 4));
    // 0x140e38: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x140e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x140e3c: 0xae240128  sw          $a0, 0x128($s1)
    ctx->pc = 0x140e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 4));
    // 0x140e40: 0xae240124  sw          $a0, 0x124($s1)
    ctx->pc = 0x140e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 4));
    // 0x140e44: 0xae220140  sw          $v0, 0x140($s1)
    ctx->pc = 0x140e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
    // 0x140e48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x140e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140e4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x140e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x140e50: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x140e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x140e54: 0xae230138  sw          $v1, 0x138($s1)
    ctx->pc = 0x140e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 3));
    // 0x140e58: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140e5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x140e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x140e60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x140E60u;
    {
        const bool branch_taken_0x140e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E60u;
            // 0x140e64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e60) {
            ctx->pc = 0x140E70u;
            goto label_140e70;
        }
    }
    ctx->pc = 0x140E68u;
    // 0x140e68: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x140e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x140e6c: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x140e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_140e70:
    // 0x140e70: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140e74: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x140e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x140e78: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x140E78u;
    {
        const bool branch_taken_0x140e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e78) {
            ctx->pc = 0x140E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140E78u;
            // 0x140e7c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140EA8u;
            goto label_140ea8;
        }
    }
    ctx->pc = 0x140E80u;
    // 0x140e80: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x140e84: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x140e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x140e88: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x140e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x140e8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140e90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140e94: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x140e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x140e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x140e9c: 0xae230128  sw          $v1, 0x128($s1)
    ctx->pc = 0x140e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 3));
    // 0x140ea0: 0xae240120  sw          $a0, 0x120($s1)
    ctx->pc = 0x140ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 4));
    // 0x140ea4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_140ea8:
    // 0x140ea8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x140ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x140eac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x140EACu;
    {
        const bool branch_taken_0x140eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140eac) {
            ctx->pc = 0x140EE4u;
            goto label_140ee4;
        }
    }
    ctx->pc = 0x140EB4u;
    // 0x140eb4: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x140eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x140eb8: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x140eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x140ebc: 0x8e25012c  lw          $a1, 0x12C($s1)
    ctx->pc = 0x140ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x140ec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140ec4: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x140ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x140ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x140ecc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x140ed0: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x140ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x140ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140ed8: 0xae240128  sw          $a0, 0x128($s1)
    ctx->pc = 0x140ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 4));
    // 0x140edc: 0xae25012c  sw          $a1, 0x12C($s1)
    ctx->pc = 0x140edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 5));
    // 0x140ee0: 0xae230120  sw          $v1, 0x120($s1)
    ctx->pc = 0x140ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 3));
label_140ee4:
    // 0x140ee4: 0xc05043a  jal         func_1410E8
    ctx->pc = 0x140EE4u;
    SET_GPR_U32(ctx, 31, 0x140EECu);
    ctx->pc = 0x140EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140EE4u;
            // 0x140ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1410E8u;
    if (runtime->hasFunction(0x1410E8u)) {
        auto targetFn = runtime->lookupFunction(0x1410E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EECu; }
        if (ctx->pc != 0x140EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1410e8_0x1411b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140EECu; }
        if (ctx->pc != 0x140EECu) { return; }
    }
    ctx->pc = 0x140EECu;
    // 0x140eec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140ef0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140ef4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140EF4u;
    {
        const bool branch_taken_0x140ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ef4) {
            ctx->pc = 0x140F08u;
            goto label_140f08;
        }
    }
    ctx->pc = 0x140EFCu;
    // 0x140efc: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x140efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x140f00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140F00u;
    {
        const bool branch_taken_0x140f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F00u;
            // 0x140f04: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f00) {
            ctx->pc = 0x140F88u;
            goto label_140f88;
        }
    }
    ctx->pc = 0x140F08u;
label_140f08:
    // 0x140f08: 0xc05046e  jal         func_1411B8
    ctx->pc = 0x140F08u;
    SET_GPR_U32(ctx, 31, 0x140F10u);
    ctx->pc = 0x140F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F08u;
            // 0x140f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411B8u;
    if (runtime->hasFunction(0x1411B8u)) {
        auto targetFn = runtime->lookupFunction(0x1411B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F10u; }
        if (ctx->pc != 0x140F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001411B8_0x1411b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F10u; }
        if (ctx->pc != 0x140F10u) { return; }
    }
    ctx->pc = 0x140F10u;
    // 0x140f10: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x140f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x140f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f18: 0xc0505da  jal         func_141768
    ctx->pc = 0x140F18u;
    SET_GPR_U32(ctx, 31, 0x140F20u);
    ctx->pc = 0x140F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F18u;
            // 0x140f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141768u;
    if (runtime->hasFunction(0x141768u)) {
        auto targetFn = runtime->lookupFunction(0x141768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F20u; }
        if (ctx->pc != 0x140F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141768_0x141768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F20u; }
        if (ctx->pc != 0x140F20u) { return; }
    }
    ctx->pc = 0x140F20u;
    // 0x140f20: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x140f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140f24: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x140f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x140f28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x140F28u;
    {
        const bool branch_taken_0x140f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F28u;
            // 0x140f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f28) {
            ctx->pc = 0x140F70u;
            goto label_140f70;
        }
    }
    ctx->pc = 0x140F30u;
    // 0x140f30: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x140f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x140f34: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x140f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x140f38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x140F38u;
    {
        const bool branch_taken_0x140f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F38u;
            // 0x140f3c: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f38) {
            ctx->pc = 0x140F88u;
            goto label_140f88;
        }
    }
    ctx->pc = 0x140F40u;
label_140f40:
    // 0x140f40: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x140f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x140f44: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x140f48: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x140f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x140f4c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x140f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x140f50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x140f54: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x140f54u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140f58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140f60: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x140F60u;
    {
        const bool branch_taken_0x140f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F60u;
            // 0x140f64: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f60) {
            ctx->pc = 0x140F40u;
            runtime->cooperativeGuestYield();
            goto label_140f40;
        }
    }
    ctx->pc = 0x140F68u;
    // 0x140f68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x140F68u;
    {
        const bool branch_taken_0x140f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F68u;
            // 0x140f6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f68) {
            ctx->pc = 0x140F8Cu;
            goto label_140f8c;
        }
    }
    ctx->pc = 0x140F70u;
label_140f70:
    // 0x140f70: 0xc05046e  jal         func_1411B8
    ctx->pc = 0x140F70u;
    SET_GPR_U32(ctx, 31, 0x140F78u);
    ctx->pc = 0x140F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F70u;
            // 0x140f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411B8u;
    if (runtime->hasFunction(0x1411B8u)) {
        auto targetFn = runtime->lookupFunction(0x1411B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F78u; }
        if (ctx->pc != 0x140F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001411B8_0x1411b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F78u; }
        if (ctx->pc != 0x140F78u) { return; }
    }
    ctx->pc = 0x140F78u;
    // 0x140f78: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x140f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x140f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f80: 0xc0505da  jal         func_141768
    ctx->pc = 0x140F80u;
    SET_GPR_U32(ctx, 31, 0x140F88u);
    ctx->pc = 0x140F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140F80u;
            // 0x140f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141768u;
    if (runtime->hasFunction(0x141768u)) {
        auto targetFn = runtime->lookupFunction(0x141768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F88u; }
        if (ctx->pc != 0x140F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141768_0x141768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F88u; }
        if (ctx->pc != 0x140F88u) { return; }
    }
    ctx->pc = 0x140F88u;
label_140f88:
    // 0x140f88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x140f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140f8c:
    // 0x140f8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x140f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140f90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140f94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x140f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x140F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F9Cu;
            // 0x140fa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140E70u: goto label_140e70;
            case 0x140EA8u: goto label_140ea8;
            case 0x140EE4u: goto label_140ee4;
            case 0x140F08u: goto label_140f08;
            case 0x140F40u: goto label_140f40;
            case 0x140F70u: goto label_140f70;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140FA4u;
    // 0x140fa4: 0x0  nop
    ctx->pc = 0x140fa4u;
    // NOP
}
