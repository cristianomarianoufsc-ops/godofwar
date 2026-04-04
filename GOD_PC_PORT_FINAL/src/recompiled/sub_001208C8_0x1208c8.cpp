#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001208C8
// Address: 0x1208c8 - 0x120d80
void sub_001208C8_0x1208c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001208C8_0x1208c8");
#endif

    ctx->pc = 0x1208c8u;

    // 0x1208c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1208c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1208cc: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1208ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1208d0: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1208d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1208d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1208d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208d8: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1208d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1208dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1208dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208e0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1208e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1208e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1208e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208e8: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1208e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1208ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1208ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208f0: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1208f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1208f4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208f8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1208f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1208fc: 0x26960360  addiu       $s6, $s4, 0x360
    ctx->pc = 0x1208fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 864));
    // 0x120900: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x120900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x120904: 0x8e840360  lw          $a0, 0x360($s4)
    ctx->pc = 0x120904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
    // 0x120908: 0x10960002  beq         $a0, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x120908u;
    {
        const bool branch_taken_0x120908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x12090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120908u;
            // 0x12090c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120908) {
            ctx->pc = 0x120914u;
            goto label_120914;
        }
    }
    ctx->pc = 0x120910u;
    // 0x120910: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x120910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_120914:
    // 0x120914: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x120914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x120918: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x120918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12091c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12091Cu;
    {
        const bool branch_taken_0x12091c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12091Cu;
            // 0x120920: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12091c) {
            ctx->pc = 0x12092Cu;
            goto label_12092c;
        }
    }
    ctx->pc = 0x120924u;
    // 0x120924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x120924u;
    {
        const bool branch_taken_0x120924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120924u;
            // 0x120928: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120924) {
            ctx->pc = 0x120948u;
            goto label_120948;
        }
    }
    ctx->pc = 0x12092Cu;
label_12092c:
    // 0x12092c: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x120930: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x120930u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x120934: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x120934u;
    {
        const bool branch_taken_0x120934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x120938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120934u;
            // 0x120938: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120934) {
            ctx->pc = 0x120948u;
            goto label_120948;
        }
    }
    ctx->pc = 0x12093Cu;
    // 0x12093c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x12093Cu;
    SET_GPR_U32(ctx, 31, 0x120944u);
    ctx->pc = 0x120940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12093Cu;
            // 0x120940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120944u; }
        if (ctx->pc != 0x120944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120944u; }
        if (ctx->pc != 0x120944u) { return; }
    }
    ctx->pc = 0x120944u;
    // 0x120944: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x120944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_120948:
    // 0x120948: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x120948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12094c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x120950: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x120950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x120954: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x120954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x120958: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x120958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12095c: 0x70021fc9  prot3w      $v1, $v0
    ctx->pc = 0x12095cu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x120960: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x120960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120964: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x120964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x120968: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x120968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12096c: 0xc060f88  jal         func_183E20
    ctx->pc = 0x12096Cu;
    SET_GPR_U32(ctx, 31, 0x120974u);
    ctx->pc = 0x120970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12096Cu;
            // 0x120970: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120974u; }
        if (ctx->pc != 0x120974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120974u; }
        if (ctx->pc != 0x120974u) { return; }
    }
    ctx->pc = 0x120974u;
    // 0x120974: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x120974u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x120978: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12097c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120984: 0xc440f1b0  lwc1        $f0, -0xE50($v0)
    ctx->pc = 0x120984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120988: 0x8e840360  lw          $a0, 0x360($s4)
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
    // 0x12098c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x12098cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x120990: 0x54960002  bnel        $a0, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x120990u;
    {
        const bool branch_taken_0x120990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x120990) {
            ctx->pc = 0x120994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120990u;
            // 0x120994: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12099Cu;
            goto label_12099c;
        }
    }
    ctx->pc = 0x120998u;
    // 0x120998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x120998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12099c:
    // 0x12099c: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x12099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1209a0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x1209a0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x1209a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1209a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1209a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1209a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1209ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1209acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1209b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1209b4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1209b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1209b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1209b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1209bc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1209bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1209c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1209c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1209c4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1209c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1209c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1209c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1209cc: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x1209ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1209d0: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1209d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1209d4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1209d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1209d8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1209d8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1209dc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1209dcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x1209e0: 0x460020c1  sub.s       $f3, $f4, $f0
    ctx->pc = 0x1209e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1209e4: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x1209e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1209e8: 0x0  nop
    ctx->pc = 0x1209e8u;
    // NOP
    // 0x1209ec: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1209ECu;
    {
        const bool branch_taken_0x1209ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1209F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1209ECu;
            // 0x1209f0: 0x46022081  sub.s       $f2, $f4, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209ec) {
            ctx->pc = 0x120AD4u;
            goto label_120ad4;
        }
    }
    ctx->pc = 0x1209F4u;
    // 0x1209f4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1209f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1209f8: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x1209f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x1209fc: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x1209fcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    // 0x120a00: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x120a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120a04: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x120a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120a08: 0x0  nop
    ctx->pc = 0x120a08u;
    // NOP
    // 0x120a0c: 0x450100cc  bc1t        . + 4 + (0xCC << 2)
    ctx->pc = 0x120A0Cu;
    {
        const bool branch_taken_0x120a0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x120A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120A0Cu;
            // 0x120a10: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a0c) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120A14u;
    // 0x120a14: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x120a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x120a18: 0x46031101  sub.s       $f4, $f2, $f3
    ctx->pc = 0x120a18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x120a1c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x120a1cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x120a20: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x120a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x120a24: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x120a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120a28: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x120a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120a2c: 0x0  nop
    ctx->pc = 0x120a2cu;
    // NOP
    // 0x120a30: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x120A30u;
    {
        const bool branch_taken_0x120a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120a30) {
            ctx->pc = 0x120A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120A30u;
            // 0x120a34: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120A50u;
            goto label_120a50;
        }
    }
    ctx->pc = 0x120A38u;
    // 0x120a38: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x120a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120a3c: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x120a3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x120a40: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120a40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120a44: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x120a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120a48: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x120A48u;
    {
        const bool branch_taken_0x120a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120A48u;
            // 0x120a4c: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a48) {
            ctx->pc = 0x120D18u;
            goto label_120d18;
        }
    }
    ctx->pc = 0x120A50u;
label_120a50:
    // 0x120a50: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x120a50u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x120a54: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x120a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120a58: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x120a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x120a5c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x120a5cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x120a60: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x120a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x120a64: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x120a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120a68: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x120a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120a6c: 0x0  nop
    ctx->pc = 0x120a6cu;
    // NOP
    // 0x120a70: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x120A70u;
    {
        const bool branch_taken_0x120a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120a70) {
            ctx->pc = 0x120A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120A70u;
            // 0x120a74: 0x46030801  sub.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x120AB8u;
            goto label_120ab8;
        }
    }
    ctx->pc = 0x120A78u;
    // 0x120a78: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x120a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120a7c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x120a7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120a80: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120a84: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x120a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120a88: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x120a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120a8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x120a8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x120a90: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x120a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x120a94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120a94u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120a9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120a9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120aa0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120aa4: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120aa8: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x120aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120aac: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x120AACu;
    {
        const bool branch_taken_0x120aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120AACu;
            // 0x120ab0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aac) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120AB4u;
    // 0x120ab4: 0x0  nop
    ctx->pc = 0x120ab4u;
    // NOP
label_120ab8:
    // 0x120ab8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x120abc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x120abcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x120ac0: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x120ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x120ac4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x120ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120ac8: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x120ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x120acc: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x120ACCu;
    {
        const bool branch_taken_0x120acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120ACCu;
            // 0x120ad0: 0x7e620040  sq          $v0, 0x40($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120acc) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120AD4u;
label_120ad4:
    // 0x120ad4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x120ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120ad8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x120ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120adc: 0x0  nop
    ctx->pc = 0x120adcu;
    // NOP
    // 0x120ae0: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x120AE0u;
    {
        const bool branch_taken_0x120ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x120AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120AE0u;
            // 0x120ae4: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae0) {
            ctx->pc = 0x120BE0u;
            goto label_120be0;
        }
    }
    ctx->pc = 0x120AE8u;
    // 0x120ae8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x120ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120aec: 0x0  nop
    ctx->pc = 0x120aecu;
    // NOP
    // 0x120af0: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x120AF0u;
    {
        const bool branch_taken_0x120af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120af0) {
            ctx->pc = 0x120AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120AF0u;
            // 0x120af4: 0xda030000  lqc2        $vf3, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120B70u;
            goto label_120b70;
        }
    }
    ctx->pc = 0x120AF8u;
    // 0x120af8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x120af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120afc: 0x0  nop
    ctx->pc = 0x120afcu;
    // NOP
    // 0x120b00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x120B00u;
    {
        const bool branch_taken_0x120b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x120B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120B00u;
            // 0x120b04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b00) {
            ctx->pc = 0x120B18u;
            goto label_120b18;
        }
    }
    ctx->pc = 0x120B08u;
    // 0x120b08: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x120b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120b0c: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x120b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x120b10: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x120B10u;
    {
        const bool branch_taken_0x120b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120B10u;
            // 0x120b14: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b10) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120B18u;
label_120b18:
    // 0x120b18: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x120b18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120b1c: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x120b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120b20: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120b20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120b24: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x120b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120b28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x120b28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x120b2c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x120b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x120b30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120b30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120b34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120b38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120b3c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120b40: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120b44: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120b44u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120b48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120b4c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x120b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120b50: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x120b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x120b54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x120b54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x120b58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120b58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120b5c: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x120b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x120b60: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x120b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120b64: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x120b64u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    // 0x120b68: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x120B68u;
    {
        const bool branch_taken_0x120b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120B68u;
            // 0x120b6c: 0x7e620020  sq          $v0, 0x20($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b68) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120B70u;
label_120b70:
    // 0x120b70: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x120b70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120b74: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120b74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120b78: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x120b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120b7c: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x120b7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x120b80: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x120b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x120b84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120b84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120b88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120b8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120b90: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120b94: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120b98: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120b98u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120b9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x120b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x120ba0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x120ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120ba4: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x120ba4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x120ba8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x120ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x120bac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120bacu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120bb0: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x120bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x120bb4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x120bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120bb8: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x120bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    // 0x120bbc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x120bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120bc0: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x120bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x120bc4: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x120bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x120bc8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x120bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120bcc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x120bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x120bd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120bd0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120bd4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x120BD4u;
    {
        const bool branch_taken_0x120bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120BD4u;
            // 0x120bd8: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bd4) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120BDCu;
    // 0x120bdc: 0x0  nop
    ctx->pc = 0x120bdcu;
    // NOP
label_120be0:
    // 0x120be0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x120be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120be4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x120BE4u;
    {
        const bool branch_taken_0x120be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120be4) {
            ctx->pc = 0x120C38u;
            goto label_120c38;
        }
    }
    ctx->pc = 0x120BECu;
    // 0x120bec: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x120becu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120bf0: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x120bf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120bf4: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120bf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120bf8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x120bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120bfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x120bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x120c00: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x120c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x120c04: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120c04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120c08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120c0c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120c0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120c10: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c14: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c18: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120c18u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120c1c: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x120c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120c20: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x120c20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120c24: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120c24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c28: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x120c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120c2c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x120c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120c30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x120C30u;
    {
        const bool branch_taken_0x120c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120C30u;
            // 0x120c34: 0xc6410008  lwc1        $f1, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c30) {
            ctx->pc = 0x120C90u;
            goto label_120c90;
        }
    }
    ctx->pc = 0x120C38u;
label_120c38:
    // 0x120c38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x120c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120c3c: 0x0  nop
    ctx->pc = 0x120c3cu;
    // NOP
    // 0x120c40: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x120C40u;
    {
        const bool branch_taken_0x120c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x120C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120C40u;
            // 0x120c44: 0xda030000  lqc2        $vf3, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c40) {
            ctx->pc = 0x120CB8u;
            goto label_120cb8;
        }
    }
    ctx->pc = 0x120C48u;
    // 0x120c48: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x120c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120c4c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c50: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x120c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120c54: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x120c54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x120c58: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x120c58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x120c5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120c5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120c60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120c64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120c64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120c68: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c6c: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120c6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c70: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120c70u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120c74: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x120c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120c78: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x120c78u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x120c7c: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120c80: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x120c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120c84: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x120c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120c88: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x120c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120c8c: 0x0  nop
    ctx->pc = 0x120c8cu;
    // NOP
label_120c90:
    // 0x120c90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x120c90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x120c94: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x120c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x120c98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120c98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120c9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120ca0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120ca4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120ca8: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120cac: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x120cacu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120cb0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x120CB0u;
    {
        const bool branch_taken_0x120cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120CB0u;
            // 0x120cb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cb0) {
            ctx->pc = 0x120D40u;
            goto label_120d40;
        }
    }
    ctx->pc = 0x120CB8u;
label_120cb8:
    // 0x120cb8: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x120cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120cbc: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120cbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120cc0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x120cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120cc4: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x120cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x120cc8: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x120cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x120ccc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120cccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120cd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120cd4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120cd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120cd8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120cdc: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120ce0: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x120ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120ce4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x120ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120ce8: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x120ce8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x120cec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x120cecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x120cf0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120cf0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120cf4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x120cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x120cf8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x120cf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120cfc: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x120cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
    // 0x120d00: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x120d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120d04: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x120d04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120d08: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120d08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120d0c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x120d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120d10: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x120d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120d14: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x120d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120d18:
    // 0x120d18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x120d18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x120d1c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x120d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x120d20: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x120d20u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x120d24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x120d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x120d28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120d28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120d2c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x120d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120d30: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x120d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120d34: 0xfa610020  sqc2        $vf1, 0x20($s3)
    ctx->pc = 0x120d34u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120d38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120d3c: 0x0  nop
    ctx->pc = 0x120d3cu;
    // NOP
label_120d40:
    // 0x120d40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x120d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x120d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120d4c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x120d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x120d50: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x120d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x120d54: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x120d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x120d58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x120d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d5c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x120d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x120d60: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x120d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x120d64: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x120d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x120d68: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x120d68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x120d6c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x120d6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x120d70: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x120d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x120d74: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x120d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x120d78: 0x3e00008  jr          $ra
    ctx->pc = 0x120D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120D78u;
            // 0x120d7c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120914u: goto label_120914;
            case 0x12092Cu: goto label_12092c;
            case 0x120948u: goto label_120948;
            case 0x12099Cu: goto label_12099c;
            case 0x120A50u: goto label_120a50;
            case 0x120AB8u: goto label_120ab8;
            case 0x120AD4u: goto label_120ad4;
            case 0x120B18u: goto label_120b18;
            case 0x120B70u: goto label_120b70;
            case 0x120BE0u: goto label_120be0;
            case 0x120C38u: goto label_120c38;
            case 0x120C90u: goto label_120c90;
            case 0x120CB8u: goto label_120cb8;
            case 0x120D18u: goto label_120d18;
            case 0x120D40u: goto label_120d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120D80u;
}
