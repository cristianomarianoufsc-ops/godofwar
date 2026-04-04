#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125D08
// Address: 0x125d08 - 0x1261d0
void sub_00125D08_0x125d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125D08_0x125d08");
#endif

    ctx->pc = 0x125d08u;

    // 0x125d08: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x125d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x125d0c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x125d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x125d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d14: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x125d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x125d18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x125d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x125d1c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x125d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x125d20: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x125d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x125d24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x125d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x125d28: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x125d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x125d2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x125d30: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x125d34: 0xc05e996  jal         func_17A658
    ctx->pc = 0x125D34u;
    SET_GPR_U32(ctx, 31, 0x125D3Cu);
    ctx->pc = 0x125D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D34u;
            // 0x125d38: 0x248414d0  addiu       $a0, $a0, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D3Cu; }
        if (ctx->pc != 0x125D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D3Cu; }
        if (ctx->pc != 0x125D3Cu) { return; }
    }
    ctx->pc = 0x125D3Cu;
    // 0x125d3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x125d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d40: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x125d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125d44: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x125d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125d4c: 0x2683e848  addiu       $v1, $s4, -0x17B8
    ctx->pc = 0x125d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x125d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x125d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125d5c: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x125d5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x125d60: 0x26b6bde0  addiu       $s6, $s5, -0x4220
    ctx->pc = 0x125d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950368));
    // 0x125d64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x125d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x125d68: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x125d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x125d6c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x125d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x125d70: 0x40f809  jalr        $v0
    ctx->pc = 0x125D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125D78u);
        ctx->pc = 0x125D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125D70u;
            // 0x125d74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125D78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125E78u: goto label_125e78;
            case 0x125F30u: goto label_125f30;
            case 0x125FE8u: goto label_125fe8;
            case 0x1260A0u: goto label_1260a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125D78u; }
            if (ctx->pc != 0x125D78u) { return; }
        }
        }
    }
    ctx->pc = 0x125D78u;
    // 0x125d78: 0xc04f824  jal         func_13E090
    ctx->pc = 0x125D78u;
    SET_GPR_U32(ctx, 31, 0x125D80u);
    ctx->pc = 0x125D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D78u;
            // 0x125d7c: 0x3c13002c  lui         $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D80u; }
        if (ctx->pc != 0x125D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D80u; }
        if (ctx->pc != 0x125D80u) { return; }
    }
    ctx->pc = 0x125D80u;
    // 0x125d80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d84: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x125d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x125d88: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x125D88u;
    SET_GPR_U32(ctx, 31, 0x125D90u);
    ctx->pc = 0x125D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125D88u;
            // 0x125d8c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D90u; }
        if (ctx->pc != 0x125D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125D90u; }
        if (ctx->pc != 0x125D90u) { return; }
    }
    ctx->pc = 0x125D90u;
    // 0x125d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d94: 0x8e2403ac  lw          $a0, 0x3AC($s1)
    ctx->pc = 0x125d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x125d98: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x125d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125da0: 0x2442c4e8  addiu       $v0, $v0, -0x3B18
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952168));
    // 0x125da4: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x125da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x125da8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x125da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x125dac: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x125dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x125db0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x125db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x125db4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x125db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x125db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125dbc: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x125dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x125dc0: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x125dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x125dc4: 0xc08fbf2  jal         func_23EFC8
    ctx->pc = 0x125DC4u;
    SET_GPR_U32(ctx, 31, 0x125DCCu);
    ctx->pc = 0x125DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DC4u;
            // 0x125dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EFC8u;
    if (runtime->hasFunction(0x23EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x23EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DCCu; }
        if (ctx->pc != 0x125DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23efc8_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DCCu; }
        if (ctx->pc != 0x125DCCu) { return; }
    }
    ctx->pc = 0x125DCCu;
    // 0x125dcc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x125dccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x125dd0: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x125dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125dd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x125dd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125ddc: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x125ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125de0: 0xfa410080  sqc2        $vf1, 0x80($s2)
    ctx->pc = 0x125de0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125de4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x125de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x125de8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x125de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x125dec: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x125decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x125df0: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x125df0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x125df4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x125df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x125df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x125df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125dfc: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x125dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x125e00: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x125e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x125e04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125e08: 0x3c01bec0  lui         $at, 0xBEC0
    ctx->pc = 0x125e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48832 << 16));
    // 0x125e0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x125e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x125e10: 0x3c013ec0  lui         $at, 0x3EC0
    ctx->pc = 0x125e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16064 << 16));
    // 0x125e14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x125e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x125e18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x125e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x125e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125e20: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x125e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x125e24: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x125e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x125e28: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x125e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x125e2c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x125e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x125e30: 0xe6020060  swc1        $f2, 0x60($s0)
    ctx->pc = 0x125e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x125e34: 0xe6030070  swc1        $f3, 0x70($s0)
    ctx->pc = 0x125e34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x125e38: 0xe6040074  swc1        $f4, 0x74($s0)
    ctx->pc = 0x125e38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x125e3c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x125e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x125e40: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x125e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x125e44: 0xe6020064  swc1        $f2, 0x64($s0)
    ctx->pc = 0x125e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x125e48: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x125e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x125e4c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x125e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x125e50: 0xe6030078  swc1        $f3, 0x78($s0)
    ctx->pc = 0x125e50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x125e54: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x125E54u;
    SET_GPR_U32(ctx, 31, 0x125E5Cu);
    ctx->pc = 0x125E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E54u;
            // 0x125e58: 0xe604007c  swc1        $f4, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E5Cu; }
        if (ctx->pc != 0x125E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125E5Cu; }
        if (ctx->pc != 0x125E5Cu) { return; }
    }
    ctx->pc = 0x125E5Cu;
    // 0x125e5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e64: 0x2662fd30  addiu       $v0, $s3, -0x2D0
    ctx->pc = 0x125e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966576));
    // 0x125e68: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x125e6c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x125e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x125e70: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x125e70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e74: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x125e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_125e78:
    // 0x125e78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125e7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x125e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x125e80: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x125e80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x125e84: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x125e88: 0x0  nop
    ctx->pc = 0x125e88u;
    // NOP
    // 0x125e8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125E8Cu;
    {
        const bool branch_taken_0x125e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E8Cu;
            // 0x125e90: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e8c) {
            ctx->pc = 0x125E78u;
            runtime->cooperativeGuestYield();
            goto label_125e78;
        }
    }
    ctx->pc = 0x125E94u;
    // 0x125e94: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x125e94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x125e98: 0x3c11002c  lui         $s1, 0x2C
    ctx->pc = 0x125e98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)44 << 16));
    // 0x125e9c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x125E9Cu;
    SET_GPR_U32(ctx, 31, 0x125EA4u);
    ctx->pc = 0x125EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125E9Cu;
            // 0x125ea0: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EA4u; }
        if (ctx->pc != 0x125EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EA4u; }
        if (ctx->pc != 0x125EA4u) { return; }
    }
    ctx->pc = 0x125EA4u;
    // 0x125ea4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x125ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125eac: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x125EACu;
    SET_GPR_U32(ctx, 31, 0x125EB4u);
    ctx->pc = 0x125EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125EACu;
            // 0x125eb0: 0x24054380  addiu       $a1, $zero, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EB4u; }
        if (ctx->pc != 0x125EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EB4u; }
        if (ctx->pc != 0x125EB4u) { return; }
    }
    ctx->pc = 0x125EB4u;
    // 0x125eb4: 0x24434380  addiu       $v1, $v0, 0x4380
    ctx->pc = 0x125eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x125eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ebc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125ec0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x125ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x125ec4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x125ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x125ec8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x125ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x125ecc: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x125ECCu;
    SET_GPR_U32(ctx, 31, 0x125ED4u);
    ctx->pc = 0x125ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125ECCu;
            // 0x125ed0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125ED4u; }
        if (ctx->pc != 0x125ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125ED4u; }
        if (ctx->pc != 0x125ED4u) { return; }
    }
    ctx->pc = 0x125ED4u;
    // 0x125ed4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x125ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125ed8: 0x2623fd10  addiu       $v1, $s1, -0x2F0
    ctx->pc = 0x125ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966544));
    // 0x125edc: 0x24050870  addiu       $a1, $zero, 0x870
    ctx->pc = 0x125edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x125ee0: 0xae500060  sw          $s0, 0x60($s2)
    ctx->pc = 0x125ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
    // 0x125ee4: 0x244621c0  addiu       $a2, $v0, 0x21C0
    ctx->pc = 0x125ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8640));
    // 0x125ee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125eec: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x125eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x125ef0: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x125ef4: 0xae050660  sw          $a1, 0x660($s0)
    ctx->pc = 0x125ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 5));
    // 0x125ef8: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x125ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x125efc: 0xae070664  sw          $a3, 0x664($s0)
    ctx->pc = 0x125efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 7));
    // 0x125f00: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x125f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x125f04: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x125f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x125f08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x125f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x125f0c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x125F0Cu;
    SET_GPR_U32(ctx, 31, 0x125F14u);
    ctx->pc = 0x125F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F0Cu;
            // 0x125f10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F14u; }
        if (ctx->pc != 0x125F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F14u; }
        if (ctx->pc != 0x125F14u) { return; }
    }
    ctx->pc = 0x125F14u;
    // 0x125f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f1c: 0x2662fd30  addiu       $v0, $s3, -0x2D0
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966576));
    // 0x125f20: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x125f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x125f24: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x125f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x125f28: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x125f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f2c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x125f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_125f30:
    // 0x125f30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125f34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x125f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x125f38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x125f38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x125f3c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x125f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x125f40: 0x0  nop
    ctx->pc = 0x125f40u;
    // NOP
    // 0x125f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125F44u;
    {
        const bool branch_taken_0x125f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F44u;
            // 0x125f48: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f44) {
            ctx->pc = 0x125F30u;
            runtime->cooperativeGuestYield();
            goto label_125f30;
        }
    }
    ctx->pc = 0x125F4Cu;
    // 0x125f4c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x125f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x125f50: 0xc04f824  jal         func_13E090
    ctx->pc = 0x125F50u;
    SET_GPR_U32(ctx, 31, 0x125F58u);
    ctx->pc = 0x125F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F50u;
            // 0x125f54: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F58u; }
        if (ctx->pc != 0x125F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F58u; }
        if (ctx->pc != 0x125F58u) { return; }
    }
    ctx->pc = 0x125F58u;
    // 0x125f58: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x125f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x125f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f60: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x125F60u;
    SET_GPR_U32(ctx, 31, 0x125F68u);
    ctx->pc = 0x125F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F60u;
            // 0x125f64: 0x24054080  addiu       $a1, $zero, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F68u; }
        if (ctx->pc != 0x125F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F68u; }
        if (ctx->pc != 0x125F68u) { return; }
    }
    ctx->pc = 0x125F68u;
    // 0x125f68: 0x24434080  addiu       $v1, $v0, 0x4080
    ctx->pc = 0x125f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x125f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x125f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125f74: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x125f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x125f78: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x125f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x125f7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x125f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x125f80: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x125F80u;
    SET_GPR_U32(ctx, 31, 0x125F88u);
    ctx->pc = 0x125F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F80u;
            // 0x125f84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F88u; }
        if (ctx->pc != 0x125F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F88u; }
        if (ctx->pc != 0x125F88u) { return; }
    }
    ctx->pc = 0x125F88u;
    // 0x125f88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x125f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x125f8c: 0x2623fd10  addiu       $v1, $s1, -0x2F0
    ctx->pc = 0x125f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966544));
    // 0x125f90: 0x24050810  addiu       $a1, $zero, 0x810
    ctx->pc = 0x125f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x125f94: 0xae500064  sw          $s0, 0x64($s2)
    ctx->pc = 0x125f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 16));
    // 0x125f98: 0x24462040  addiu       $a2, $v0, 0x2040
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8256));
    // 0x125f9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125fa0: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x125fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x125fa4: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x125fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x125fa8: 0xae050660  sw          $a1, 0x660($s0)
    ctx->pc = 0x125fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 5));
    // 0x125fac: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x125facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x125fb0: 0xae070664  sw          $a3, 0x664($s0)
    ctx->pc = 0x125fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 7));
    // 0x125fb4: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x125fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x125fb8: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x125fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x125fbc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x125fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x125fc0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x125FC0u;
    SET_GPR_U32(ctx, 31, 0x125FC8u);
    ctx->pc = 0x125FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FC0u;
            // 0x125fc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FC8u; }
        if (ctx->pc != 0x125FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FC8u; }
        if (ctx->pc != 0x125FC8u) { return; }
    }
    ctx->pc = 0x125FC8u;
    // 0x125fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fd0: 0x2662fd30  addiu       $v0, $s3, -0x2D0
    ctx->pc = 0x125fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966576));
    // 0x125fd4: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x125fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x125fd8: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x125fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x125fdc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x125fdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fe0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x125fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x125fe4: 0x0  nop
    ctx->pc = 0x125fe4u;
    // NOP
label_125fe8:
    // 0x125fe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125fec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x125ff0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x125ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x125ff4: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x125ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x125ff8: 0x0  nop
    ctx->pc = 0x125ff8u;
    // NOP
    // 0x125ffc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125FFCu;
    {
        const bool branch_taken_0x125ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FFCu;
            // 0x126000: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ffc) {
            ctx->pc = 0x125FE8u;
            runtime->cooperativeGuestYield();
            goto label_125fe8;
        }
    }
    ctx->pc = 0x126004u;
    // 0x126004: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x126004u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x126008: 0xc04f824  jal         func_13E090
    ctx->pc = 0x126008u;
    SET_GPR_U32(ctx, 31, 0x126010u);
    ctx->pc = 0x12600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126008u;
            // 0x12600c: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126010u; }
        if (ctx->pc != 0x126010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126010u; }
        if (ctx->pc != 0x126010u) { return; }
    }
    ctx->pc = 0x126010u;
    // 0x126010: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x126014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126018: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x126018u;
    SET_GPR_U32(ctx, 31, 0x126020u);
    ctx->pc = 0x12601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126018u;
            // 0x12601c: 0x24050780  addiu       $a1, $zero, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126020u; }
        if (ctx->pc != 0x126020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126020u; }
        if (ctx->pc != 0x126020u) { return; }
    }
    ctx->pc = 0x126020u;
    // 0x126020: 0x24430780  addiu       $v1, $v0, 0x780
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x126024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126028: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x126028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12602c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12602cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x126030: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x126030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x126034: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x126034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x126038: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x126038u;
    SET_GPR_U32(ctx, 31, 0x126040u);
    ctx->pc = 0x12603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126038u;
            // 0x12603c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126040u; }
        if (ctx->pc != 0x126040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126040u; }
        if (ctx->pc != 0x126040u) { return; }
    }
    ctx->pc = 0x126040u;
    // 0x126040: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x126040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126044: 0x2623fd10  addiu       $v1, $s1, -0x2F0
    ctx->pc = 0x126044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966544));
    // 0x126048: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x126048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x12604c: 0xae500068  sw          $s0, 0x68($s2)
    ctx->pc = 0x12604cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 16));
    // 0x126050: 0x244603c0  addiu       $a2, $v0, 0x3C0
    ctx->pc = 0x126050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x126054: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126058: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x126058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x12605c: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x12605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x126060: 0xae050660  sw          $a1, 0x660($s0)
    ctx->pc = 0x126060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 5));
    // 0x126064: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x126064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x126068: 0xae070664  sw          $a3, 0x664($s0)
    ctx->pc = 0x126068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 7));
    // 0x12606c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x12606cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x126070: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x126070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x126074: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x126074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x126078: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x126078u;
    SET_GPR_U32(ctx, 31, 0x126080u);
    ctx->pc = 0x12607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126078u;
            // 0x12607c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126080u; }
        if (ctx->pc != 0x126080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126080u; }
        if (ctx->pc != 0x126080u) { return; }
    }
    ctx->pc = 0x126080u;
    // 0x126080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126088: 0x2662fd30  addiu       $v0, $s3, -0x2D0
    ctx->pc = 0x126088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966576));
    // 0x12608c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x126090: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x126090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x126094: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x126094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126098: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x126098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12609c: 0x0  nop
    ctx->pc = 0x12609cu;
    // NOP
label_1260a0:
    // 0x1260a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1260a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1260a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1260a8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1260a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1260ac: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x1260b0: 0x0  nop
    ctx->pc = 0x1260b0u;
    // NOP
    // 0x1260b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1260B4u;
    {
        const bool branch_taken_0x1260b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260B4u;
            // 0x1260b8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260b4) {
            ctx->pc = 0x1260A0u;
            runtime->cooperativeGuestYield();
            goto label_1260a0;
        }
    }
    ctx->pc = 0x1260BCu;
    // 0x1260bc: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x1260bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x1260c0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1260C0u;
    SET_GPR_U32(ctx, 31, 0x1260C8u);
    ctx->pc = 0x1260C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1260C0u;
            // 0x1260c4: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260C8u; }
        if (ctx->pc != 0x1260C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260C8u; }
        if (ctx->pc != 0x1260C8u) { return; }
    }
    ctx->pc = 0x1260C8u;
    // 0x1260c8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1260c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1260cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1260ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260d0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1260D0u;
    SET_GPR_U32(ctx, 31, 0x1260D8u);
    ctx->pc = 0x1260D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1260D0u;
            // 0x1260d4: 0x24054200  addiu       $a1, $zero, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260D8u; }
        if (ctx->pc != 0x1260D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260D8u; }
        if (ctx->pc != 0x1260D8u) { return; }
    }
    ctx->pc = 0x1260D8u;
    // 0x1260d8: 0x24434200  addiu       $v1, $v0, 0x4200
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16896));
    // 0x1260dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1260dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260e0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1260e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1260e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1260e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1260e8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1260e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1260ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1260ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1260f0: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x1260F0u;
    SET_GPR_U32(ctx, 31, 0x1260F8u);
    ctx->pc = 0x1260F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1260F0u;
            // 0x1260f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260F8u; }
        if (ctx->pc != 0x1260F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260F8u; }
        if (ctx->pc != 0x1260F8u) { return; }
    }
    ctx->pc = 0x1260F8u;
    // 0x1260f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1260f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1260fc: 0x2623fd10  addiu       $v1, $s1, -0x2F0
    ctx->pc = 0x1260fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966544));
    // 0x126100: 0xae030658  sw          $v1, 0x658($s0)
    ctx->pc = 0x126100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 3));
    // 0x126104: 0x24040840  addiu       $a0, $zero, 0x840
    ctx->pc = 0x126104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x126108: 0x24452100  addiu       $a1, $v0, 0x2100
    ctx->pc = 0x126108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
    // 0x12610c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12610cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126110: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x126114: 0xae040660  sw          $a0, 0x660($s0)
    ctx->pc = 0x126114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 4));
    // 0x126118: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x126118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x12611c: 0xae060664  sw          $a2, 0x664($s0)
    ctx->pc = 0x12611cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 6));
    // 0x126120: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x126120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x126124: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x126124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x126128: 0xae50006c  sw          $s0, 0x6C($s2)
    ctx->pc = 0x126128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
    // 0x12612c: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x12612cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x126130: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x126130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x126134: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x126134u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x126138: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x126138u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x12613c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x12613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x126140: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x126140u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x126144: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x126144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126148: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x126148u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x12614c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x12614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126150: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x126150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x126154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126158: 0xfa430020  sqc2        $vf3, 0x20($s2)
    ctx->pc = 0x126158u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12615c: 0xf8620030  sqc2        $vf2, 0x30($v1)
    ctx->pc = 0x12615cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x126160: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x126160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126164: 0xc08fc48  jal         func_23F120
    ctx->pc = 0x126164u;
    SET_GPR_U32(ctx, 31, 0x12616Cu);
    ctx->pc = 0x126168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126164u;
            // 0x126168: 0xf8640020  sqc2        $vf4, 0x20($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F120u;
    if (runtime->hasFunction(0x23F120u)) {
        auto targetFn = runtime->lookupFunction(0x23F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12616Cu; }
        if (ctx->pc != 0x12616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f120_0x23f1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12616Cu; }
        if (ctx->pc != 0x12616Cu) { return; }
    }
    ctx->pc = 0x12616Cu;
    // 0x12616c: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x12616cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x126170: 0x2690e848  addiu       $s0, $s4, -0x17B8
    ctx->pc = 0x126170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x126174: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x126174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x126178: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x126178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12617c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x12617cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x126180: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x126180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x126184: 0x40f809  jalr        $v0
    ctx->pc = 0x126184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12618Cu);
        ctx->pc = 0x126188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126184u;
            // 0x126188: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12618Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125E78u: goto label_125e78;
            case 0x125F30u: goto label_125f30;
            case 0x125FE8u: goto label_125fe8;
            case 0x1260A0u: goto label_1260a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12618Cu; }
            if (ctx->pc != 0x12618Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12618Cu;
    // 0x12618c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x126190: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x126190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126194: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x126194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x126198: 0x8ea8bde0  lw          $t0, -0x4220($s5)
    ctx->pc = 0x126198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950368)));
    // 0x12619c: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x12619Cu;
    SET_GPR_U32(ctx, 31, 0x1261A4u);
    ctx->pc = 0x1261A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12619Cu;
            // 0x1261a0: 0x24077100  addiu       $a3, $zero, 0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1261A4u; }
        if (ctx->pc != 0x1261A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1261A4u; }
        if (ctx->pc != 0x1261A4u) { return; }
    }
    ctx->pc = 0x1261A4u;
    // 0x1261a4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1261a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1261a8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1261a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1261ac: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1261acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1261b0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1261b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1261b4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1261b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1261b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1261b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1261bc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1261bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1261c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1261c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1261c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1261C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261C4u;
            // 0x1261c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125E78u: goto label_125e78;
            case 0x125F30u: goto label_125f30;
            case 0x125FE8u: goto label_125fe8;
            case 0x1260A0u: goto label_1260a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1261CCu;
    // 0x1261cc: 0x0  nop
    ctx->pc = 0x1261ccu;
    // NOP
}
