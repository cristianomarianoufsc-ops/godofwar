#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA8A8
// Address: 0x1fa8a8 - 0x1fb4b8
void sub_001FA8A8_0x1fa8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA8A8_0x1fa8a8");
#endif

    ctx->pc = 0x1fa8a8u;

    // 0x1fa8a8: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x1fa8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
    // 0x1fa8ac: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x1fa8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
    // 0x1fa8b0: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x1fa8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
    // 0x1fa8b4: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x1fa8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
    // 0x1fa8b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8bc: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x1fa8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
    // 0x1fa8c0: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x1fa8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
    // 0x1fa8c4: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x1fa8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
    // 0x1fa8c8: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x1fa8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
    // 0x1fa8cc: 0x7fb704a0  sq          $s7, 0x4A0($sp)
    ctx->pc = 0x1fa8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 23));
    // 0x1fa8d0: 0x7fbe0490  sq          $fp, 0x490($sp)
    ctx->pc = 0x1fa8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 30));
    // 0x1fa8d4: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x1fa8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x1fa8d8: 0xe7b50528  swc1        $f21, 0x528($sp)
    ctx->pc = 0x1fa8d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
    // 0x1fa8dc: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x1fa8dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
    // 0x1fa8e0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fa8e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fa8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fa8e8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fa8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1fa8ec: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1fa8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1fa8f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA8F8u);
        ctx->pc = 0x1FA8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA8F0u;
            // 0x1fa8f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA8F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA950u: goto label_1fa950;
            case 0x1FA9F8u: goto label_1fa9f8;
            case 0x1FAA18u: goto label_1faa18;
            case 0x1FAA98u: goto label_1faa98;
            case 0x1FAAC0u: goto label_1faac0;
            case 0x1FAAE8u: goto label_1faae8;
            case 0x1FAB10u: goto label_1fab10;
            case 0x1FAB38u: goto label_1fab38;
            case 0x1FAB7Cu: goto label_1fab7c;
            case 0x1FABF8u: goto label_1fabf8;
            case 0x1FAC14u: goto label_1fac14;
            case 0x1FAC3Cu: goto label_1fac3c;
            case 0x1FAC60u: goto label_1fac60;
            case 0x1FAC90u: goto label_1fac90;
            case 0x1FAC94u: goto label_1fac94;
            case 0x1FACE0u: goto label_1face0;
            case 0x1FACF0u: goto label_1facf0;
            case 0x1FAD38u: goto label_1fad38;
            case 0x1FAD80u: goto label_1fad80;
            case 0x1FADC8u: goto label_1fadc8;
            case 0x1FB3D0u: goto label_1fb3d0;
            case 0x1FB480u: goto label_1fb480;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA8F8u; }
            if (ctx->pc != 0x1FA8F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA8F8u;
    // 0x1fa8f8: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1fa8fc: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1fa8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1fa900: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1fa900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1fa904: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1fa904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fa908: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x1fa908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fa90c: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x1fa90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1fa910: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fa910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa914: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA914u;
    {
        const bool branch_taken_0x1fa914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA914u;
            // 0x1fa918: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa914) {
            ctx->pc = 0x1FA950u;
            goto label_1fa950;
        }
    }
    ctx->pc = 0x1FA91Cu;
    // 0x1fa91c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1fa91cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa920: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fa924: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fa928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa92c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa930: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fa930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa934: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fa934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa938: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa93c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fa93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fa940: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fa940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fa944: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA94Cu);
        ctx->pc = 0x1FA948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA944u;
            // 0x1fa948: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA94Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA950u: goto label_1fa950;
            case 0x1FA9F8u: goto label_1fa9f8;
            case 0x1FAA18u: goto label_1faa18;
            case 0x1FAA98u: goto label_1faa98;
            case 0x1FAAC0u: goto label_1faac0;
            case 0x1FAAE8u: goto label_1faae8;
            case 0x1FAB10u: goto label_1fab10;
            case 0x1FAB38u: goto label_1fab38;
            case 0x1FAB7Cu: goto label_1fab7c;
            case 0x1FABF8u: goto label_1fabf8;
            case 0x1FAC14u: goto label_1fac14;
            case 0x1FAC3Cu: goto label_1fac3c;
            case 0x1FAC60u: goto label_1fac60;
            case 0x1FAC90u: goto label_1fac90;
            case 0x1FAC94u: goto label_1fac94;
            case 0x1FACE0u: goto label_1face0;
            case 0x1FACF0u: goto label_1facf0;
            case 0x1FAD38u: goto label_1fad38;
            case 0x1FAD80u: goto label_1fad80;
            case 0x1FADC8u: goto label_1fadc8;
            case 0x1FB3D0u: goto label_1fb3d0;
            case 0x1FB480u: goto label_1fb480;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA94Cu; }
            if (ctx->pc != 0x1FA94Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FA94Cu;
    // 0x1fa94c: 0x0  nop
    ctx->pc = 0x1fa94cu;
    // NOP
label_1fa950:
    // 0x1fa950: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fa950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fa954: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x1fa954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa958: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1fa958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa95c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1fa95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1fa960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fa960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa964: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fa964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fa968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa96c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fa96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fa970: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1fa970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fa974: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1fa974u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fa978: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x1fa978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x1fa97c: 0x46156328  max.s       $f12, $f12, $f21
    ctx->pc = 0x1fa97cu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[21]);
    // 0x1fa980: 0x46146329  min.s       $f12, $f12, $f20
    ctx->pc = 0x1fa980u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[20]);
    // 0x1fa984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa988: 0xc080502  jal         func_201408
    ctx->pc = 0x1FA988u;
    SET_GPR_U32(ctx, 31, 0x1FA990u);
    ctx->pc = 0x1FA98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA988u;
            // 0x1fa98c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201408u;
    if (runtime->hasFunction(0x201408u)) {
        auto targetFn = runtime->lookupFunction(0x201408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA990u; }
        if (ctx->pc != 0x1FA990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_201408_0x201458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA990u; }
        if (ctx->pc != 0x1FA990u) { return; }
    }
    ctx->pc = 0x1FA990u;
    // 0x1fa990: 0xc62c00a4  lwc1        $f12, 0xA4($s1)
    ctx->pc = 0x1fa990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa994: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1fa994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1fa998: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fa998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fa99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa9a0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1fa9a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1fa9a4: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x1fa9a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x1fa9a8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fa9a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1fa9ac: 0x46156328  max.s       $f12, $f12, $f21
    ctx->pc = 0x1fa9acu;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[21]);
    // 0x1fa9b0: 0x46146329  min.s       $f12, $f12, $f20
    ctx->pc = 0x1fa9b0u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[20]);
    // 0x1fa9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9b8: 0xc080502  jal         func_201408
    ctx->pc = 0x1FA9B8u;
    SET_GPR_U32(ctx, 31, 0x1FA9C0u);
    ctx->pc = 0x1FA9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA9B8u;
            // 0x1fa9bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201408u;
    if (runtime->hasFunction(0x201408u)) {
        auto targetFn = runtime->lookupFunction(0x201408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA9C0u; }
        if (ctx->pc != 0x1FA9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_201408_0x201458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA9C0u; }
        if (ctx->pc != 0x1FA9C0u) { return; }
    }
    ctx->pc = 0x1FA9C0u;
    // 0x1fa9c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fa9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1fa9c4: 0x8c64cd58  lw          $a0, -0x32A8($v1)
    ctx->pc = 0x1fa9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954328)));
    // 0x1fa9c8: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1FA9C8u;
    SET_GPR_U32(ctx, 31, 0x1FA9D0u);
    ctx->pc = 0x1FA9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA9C8u;
            // 0x1fa9cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA9D0u; }
        if (ctx->pc != 0x1FA9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA9D0u; }
        if (ctx->pc != 0x1FA9D0u) { return; }
    }
    ctx->pc = 0x1FA9D0u;
    // 0x1fa9d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA9D0u;
    {
        const bool branch_taken_0x1fa9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA9D0u;
            // 0x1fa9d4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9d0) {
            ctx->pc = 0x1FA9F8u;
            goto label_1fa9f8;
        }
    }
    ctx->pc = 0x1FA9D8u;
    // 0x1fa9d8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1fa9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1fa9dc: 0x90432d3d  lbu         $v1, 0x2D3D($v0)
    ctx->pc = 0x1fa9dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1fa9e0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1fa9e4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1fa9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fa9e8: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x1fa9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x1fa9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa9f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA9F0u;
    {
        const bool branch_taken_0x1fa9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA9F0u;
            // 0x1fa9f4: 0xd8620010  lqc2        $vf2, 0x10($v1) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9f0) {
            ctx->pc = 0x1FAA18u;
            goto label_1faa18;
        }
    }
    ctx->pc = 0x1FA9F8u;
label_1fa9f8:
    // 0x1fa9f8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1fa9fc: 0x90432d3d  lbu         $v1, 0x2D3D($v0)
    ctx->pc = 0x1fa9fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1faa00: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1faa04: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1faa04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1faa08: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x1faa0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faa10: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1faa10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faa14: 0x0  nop
    ctx->pc = 0x1faa14u;
    // NOP
label_1faa18:
    // 0x1faa18: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x1faa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1faa1c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1faa1cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1faa20: 0xc04b934  jal         func_12E4D0
    ctx->pc = 0x1FAA20u;
    SET_GPR_U32(ctx, 31, 0x1FAA28u);
    ctx->pc = 0x1FAA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA20u;
            // 0x1faa24: 0xfba20470  sqc2        $vf2, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4D0u;
    if (runtime->hasFunction(0x12E4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12E4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA28u; }
        if (ctx->pc != 0x1FAA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12e4d0_0x12e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA28u; }
        if (ctx->pc != 0x1FAA28u) { return; }
    }
    ctx->pc = 0x1FAA28u;
    // 0x1faa28: 0xdba20470  lqc2        $vf2, 0x470($sp)
    ctx->pc = 0x1faa28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1faa2c: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1faa30: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1faa30u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1faa34: 0xd86300b0  lqc2        $vf3, 0xB0($v1)
    ctx->pc = 0x1faa34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1faa38: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x1faa38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1faa3c: 0x4a211b3c  vmove.w     $vf1, $vf3
    ctx->pc = 0x1faa3cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1faa40: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1faa40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1faa44: 0xf86100b0  sqc2        $vf1, 0xB0($v1)
    ctx->pc = 0x1faa44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa4c: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x1faa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1faa50: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1faa50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faa54: 0xfba10400  sqc2        $vf1, 0x400($sp)
    ctx->pc = 0x1faa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faa58: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1faa58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1faa5c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1faa5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1faa60: 0xd86100b0  lqc2        $vf1, 0xB0($v1)
    ctx->pc = 0x1faa60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1faa64: 0xdba30400  lqc2        $vf3, 0x400($sp)
    ctx->pc = 0x1faa64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1faa68: 0x4a221840  vaddx.w     $vf1, $vf3, $vf2x
    ctx->pc = 0x1faa68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faa6c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1faa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1faa70: 0xf86100b0  sqc2        $vf1, 0xB0($v1)
    ctx->pc = 0x1faa70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faa74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1faa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1faa78: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1faa7c: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1faa7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1faa80: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x1faa80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1faa84: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1faa84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1faa88: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAA88u;
    {
        const bool branch_taken_0x1faa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FAA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA88u;
            // 0x1faa8c: 0x86320084  lh          $s2, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa88) {
            ctx->pc = 0x1FAA98u;
            goto label_1faa98;
        }
    }
    ctx->pc = 0x1FAA90u;
    // 0x1faa90: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FAA90u;
    SET_GPR_U32(ctx, 31, 0x1FAA98u);
    ctx->pc = 0x1FAA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA90u;
            // 0x1faa94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA98u; }
        if (ctx->pc != 0x1FAA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA98u; }
        if (ctx->pc != 0x1FAA98u) { return; }
    }
    ctx->pc = 0x1FAA98u;
label_1faa98:
    // 0x1faa98: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1faa9c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1faaa0: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1faaa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faaa4: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x1faaa4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1faaa8: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1faaa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1faaac: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAAACu;
    {
        const bool branch_taken_0x1faaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FAAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAACu;
            // 0x1faab0: 0x86320086  lh          $s2, 0x86($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaac) {
            ctx->pc = 0x1FAAC0u;
            goto label_1faac0;
        }
    }
    ctx->pc = 0x1FAAB4u;
    // 0x1faab4: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FAAB4u;
    SET_GPR_U32(ctx, 31, 0x1FAABCu);
    ctx->pc = 0x1FAAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAB4u;
            // 0x1faab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAABCu; }
        if (ctx->pc != 0x1FAABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAABCu; }
        if (ctx->pc != 0x1FAABCu) { return; }
    }
    ctx->pc = 0x1FAABCu;
    // 0x1faabc: 0x0  nop
    ctx->pc = 0x1faabcu;
    // NOP
label_1faac0:
    // 0x1faac0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1faac4: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1faac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1faac8: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1faac8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faacc: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x1faaccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1faad0: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1faad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1faad4: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAAD4u;
    {
        const bool branch_taken_0x1faad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FAAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAD4u;
            // 0x1faad8: 0x8632008a  lh          $s2, 0x8A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 138)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faad4) {
            ctx->pc = 0x1FAAE8u;
            goto label_1faae8;
        }
    }
    ctx->pc = 0x1FAADCu;
    // 0x1faadc: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FAADCu;
    SET_GPR_U32(ctx, 31, 0x1FAAE4u);
    ctx->pc = 0x1FAAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAADCu;
            // 0x1faae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAE4u; }
        if (ctx->pc != 0x1FAAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAE4u; }
        if (ctx->pc != 0x1FAAE4u) { return; }
    }
    ctx->pc = 0x1FAAE4u;
    // 0x1faae4: 0x0  nop
    ctx->pc = 0x1faae4u;
    // NOP
label_1faae8:
    // 0x1faae8: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1faae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1faaec: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1faaf0: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x1faaf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faaf4: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x1faaf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1faaf8: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1faaf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1faafc: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAAFCu;
    {
        const bool branch_taken_0x1faafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FAB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAFCu;
            // 0x1fab00: 0x86320088  lh          $s2, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faafc) {
            ctx->pc = 0x1FAB10u;
            goto label_1fab10;
        }
    }
    ctx->pc = 0x1FAB04u;
    // 0x1fab04: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FAB04u;
    SET_GPR_U32(ctx, 31, 0x1FAB0Cu);
    ctx->pc = 0x1FAB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB04u;
            // 0x1fab08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB0Cu; }
        if (ctx->pc != 0x1FAB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB0Cu; }
        if (ctx->pc != 0x1FAB0Cu) { return; }
    }
    ctx->pc = 0x1FAB0Cu;
    // 0x1fab0c: 0x0  nop
    ctx->pc = 0x1fab0cu;
    // NOP
label_1fab10:
    // 0x1fab10: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fab10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fab14: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x1fab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1fab18: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1fab18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fab1c: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x1fab1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1fab20: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1fab20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fab24: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAB24u;
    {
        const bool branch_taken_0x1fab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FAB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB24u;
            // 0x1fab28: 0x8632008c  lh          $s2, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab24) {
            ctx->pc = 0x1FAB38u;
            goto label_1fab38;
        }
    }
    ctx->pc = 0x1FAB2Cu;
    // 0x1fab2c: 0xc04da64  jal         func_136990
    ctx->pc = 0x1FAB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FAB34u);
    ctx->pc = 0x1FAB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB2Cu;
            // 0x1fab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB34u; }
        if (ctx->pc != 0x1FAB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB34u; }
        if (ctx->pc != 0x1FAB34u) { return; }
    }
    ctx->pc = 0x1FAB34u;
    // 0x1fab34: 0x0  nop
    ctx->pc = 0x1fab34u;
    // NOP
label_1fab38:
    // 0x1fab38: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1fab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1fab3c: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x1fab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fab40: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1fab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1fab44: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1fab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fab48: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x1fab48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fab4c: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1fab4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1fab50: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1fab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1fab54: 0x40f809  jalr        $v0
    ctx->pc = 0x1FAB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAB5Cu);
        ctx->pc = 0x1FAB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB54u;
            // 0x1fab58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FAB5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA950u: goto label_1fa950;
            case 0x1FA9F8u: goto label_1fa9f8;
            case 0x1FAA18u: goto label_1faa18;
            case 0x1FAA98u: goto label_1faa98;
            case 0x1FAAC0u: goto label_1faac0;
            case 0x1FAAE8u: goto label_1faae8;
            case 0x1FAB10u: goto label_1fab10;
            case 0x1FAB38u: goto label_1fab38;
            case 0x1FAB7Cu: goto label_1fab7c;
            case 0x1FABF8u: goto label_1fabf8;
            case 0x1FAC14u: goto label_1fac14;
            case 0x1FAC3Cu: goto label_1fac3c;
            case 0x1FAC60u: goto label_1fac60;
            case 0x1FAC90u: goto label_1fac90;
            case 0x1FAC94u: goto label_1fac94;
            case 0x1FACE0u: goto label_1face0;
            case 0x1FACF0u: goto label_1facf0;
            case 0x1FAD38u: goto label_1fad38;
            case 0x1FAD80u: goto label_1fad80;
            case 0x1FADC8u: goto label_1fadc8;
            case 0x1FB3D0u: goto label_1fb3d0;
            case 0x1FB480u: goto label_1fb480;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB5Cu; }
            if (ctx->pc != 0x1FAB5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FAB5Cu;
    // 0x1fab5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab60: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1fab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1fab64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAB64u;
    {
        const bool branch_taken_0x1fab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab64) {
            ctx->pc = 0x1FAB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB64u;
            // 0x1fab68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB7Cu;
            goto label_1fab7c;
        }
    }
    ctx->pc = 0x1FAB6Cu;
    // 0x1fab6c: 0xc090d56  jal         func_243558
    ctx->pc = 0x1FAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1FAB74u);
    ctx->pc = 0x1FAB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB6Cu;
            // 0x1fab70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB74u; }
        if (ctx->pc != 0x1FAB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB74u; }
        if (ctx->pc != 0x1FAB74u) { return; }
    }
    ctx->pc = 0x1FAB74u;
    // 0x1fab74: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1fab74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1fab78: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1fab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1fab7c:
    // 0x1fab7c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1FAB7Cu;
    {
        const bool branch_taken_0x1fab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB7Cu;
            // 0x1fab80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab7c) {
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAB84u;
    // 0x1fab84: 0xdaa30030  lqc2        $vf3, 0x30($s5)
    ctx->pc = 0x1fab84u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1fab88: 0xda610030  lqc2        $vf1, 0x30($s3)
    ctx->pc = 0x1fab88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1fab8c: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1fab8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fab90: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1fab90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fab94: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1fab94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fab98: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1fab98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fab9c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1fab9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1faba0: 0xda410030  lqc2        $vf1, 0x30($s2)
    ctx->pc = 0x1faba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1faba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1faba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faba8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1faba8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fabac: 0x46000084  c1          0x84
    ctx->pc = 0x1fabacu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fabb0: 0x4be318ea  vmul.xyzw   $vf3, $vf3, $vf3
    ctx->pc = 0x1fabb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fabb4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1fabb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fabb8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1fabb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fabbc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1fabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1fabc0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1fabc0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fabc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fabc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fabc8: 0x46000044  c1          0x44
    ctx->pc = 0x1fabc8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fabcc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FABCCu;
    {
        const bool branch_taken_0x1fabcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabcc) {
            ctx->pc = 0x1FABD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABCCu;
            // 0x1fabd0: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC14u;
            goto label_1fac14;
        }
    }
    ctx->pc = 0x1FABD4u;
    // 0x1fabd4: 0x3c0140b3  lui         $at, 0x40B3
    ctx->pc = 0x1fabd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16563 << 16));
    // 0x1fabd8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fabd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1fabdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fabdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fabe0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fabe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fabe4: 0x0  nop
    ctx->pc = 0x1fabe4u;
    // NOP
    // 0x1fabe8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FABE8u;
    {
        const bool branch_taken_0x1fabe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABE8u;
            // 0x1fabec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabe8) {
            ctx->pc = 0x1FABF8u;
            goto label_1fabf8;
        }
    }
    ctx->pc = 0x1FABF0u;
    // 0x1fabf0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FABF0u;
    {
        const bool branch_taken_0x1fabf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABF0u;
            // 0x1fabf4: 0xa6220092  sh          $v0, 0x92($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabf0) {
            ctx->pc = 0x1FAC90u;
            goto label_1fac90;
        }
    }
    ctx->pc = 0x1FABF8u;
label_1fabf8:
    // 0x1fabf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fabf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fabfc: 0x0  nop
    ctx->pc = 0x1fabfcu;
    // NOP
    // 0x1fac00: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
    ctx->pc = 0x1FAC00u;
    {
        const bool branch_taken_0x1fac00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fac00) {
            ctx->pc = 0x1FAC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC00u;
            // 0x1fac04: 0xa6200092  sh          $zero, 0x92($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC90u;
            goto label_1fac90;
        }
    }
    ctx->pc = 0x1FAC08u;
    // 0x1fac08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fac0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FAC0Cu;
    {
        const bool branch_taken_0x1fac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC0Cu;
            // 0x1fac10: 0xa6220092  sh          $v0, 0x92($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac0c) {
            ctx->pc = 0x1FAC90u;
            goto label_1fac90;
        }
    }
    ctx->pc = 0x1FAC14u;
label_1fac14:
    // 0x1fac14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fac18: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAC18u;
    {
        const bool branch_taken_0x1fac18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FAC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC18u;
            // 0x1fac1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac18) {
            ctx->pc = 0x1FAC3Cu;
            goto label_1fac3c;
        }
    }
    ctx->pc = 0x1FAC20u;
    // 0x1fac20: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FAC20u;
    {
        const bool branch_taken_0x1fac20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fac20) {
            ctx->pc = 0x1FAC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC20u;
            // 0x1fac24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC28u;
    // 0x1fac28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fac2c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAC2Cu;
    {
        const bool branch_taken_0x1fac2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fac2c) {
            ctx->pc = 0x1FAC60u;
            goto label_1fac60;
        }
    }
    ctx->pc = 0x1FAC34u;
    // 0x1fac34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FAC34u;
    {
        const bool branch_taken_0x1fac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC34u;
            // 0x1fac38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac34) {
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC3Cu;
label_1fac3c:
    // 0x1fac3c: 0x3c0140b3  lui         $at, 0x40B3
    ctx->pc = 0x1fac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16563 << 16));
    // 0x1fac40: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fac40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1fac44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fac44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fac48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fac4c: 0x0  nop
    ctx->pc = 0x1fac4cu;
    // NOP
    // 0x1fac50: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAC50u;
    {
        const bool branch_taken_0x1fac50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FAC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC50u;
            // 0x1fac54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac50) {
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC58u;
    // 0x1fac58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FAC58u;
    {
        const bool branch_taken_0x1fac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC58u;
            // 0x1fac5c: 0xa6200092  sh          $zero, 0x92($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac58) {
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC60u;
label_1fac60:
    // 0x1fac60: 0x3c0140b3  lui         $at, 0x40B3
    ctx->pc = 0x1fac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16563 << 16));
    // 0x1fac64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fac64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1fac68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fac68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fac6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fac70: 0x0  nop
    ctx->pc = 0x1fac70u;
    // NOP
    // 0x1fac74: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAC74u;
    {
        const bool branch_taken_0x1fac74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fac74) {
            ctx->pc = 0x1FAC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC74u;
            // 0x1fac78: 0xa6240092  sh          $a0, 0x92($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC90u;
            goto label_1fac90;
        }
    }
    ctx->pc = 0x1FAC7Cu;
    // 0x1fac7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fac7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fac80: 0x0  nop
    ctx->pc = 0x1fac80u;
    // NOP
    // 0x1fac84: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAC84u;
    {
        const bool branch_taken_0x1fac84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fac84) {
            ctx->pc = 0x1FAC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC84u;
            // 0x1fac88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC8Cu;
    // 0x1fac8c: 0xa6240092  sh          $a0, 0x92($s1)
    ctx->pc = 0x1fac8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 4));
label_1fac90:
    // 0x1fac90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fac94:
    // 0x1fac94: 0xc06149c  jal         func_185270
    ctx->pc = 0x1FAC94u;
    SET_GPR_U32(ctx, 31, 0x1FAC9Cu);
    ctx->pc = 0x1FAC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC94u;
            // 0x1fac98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC9Cu; }
        if (ctx->pc != 0x1FAC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAC9Cu; }
        if (ctx->pc != 0x1FAC9Cu) { return; }
    }
    ctx->pc = 0x1FAC9Cu;
    // 0x1fac9c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1fac9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faca0: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x1faca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x1faca4: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x1faca4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faca8: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1FACA8u;
    SET_GPR_U32(ctx, 31, 0x1FACB0u);
    ctx->pc = 0x1FACACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACA8u;
            // 0x1facac: 0x7ba70020  lq          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FACB0u; }
        if (ctx->pc != 0x1FACB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FACB0u; }
        if (ctx->pc != 0x1FACB0u) { return; }
    }
    ctx->pc = 0x1FACB0u;
    // 0x1facb0: 0x7ba20350  lq          $v0, 0x350($sp)
    ctx->pc = 0x1facb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1facb4: 0x7fa20370  sq          $v0, 0x370($sp)
    ctx->pc = 0x1facb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 2));
    // 0x1facb8: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x1facb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x1facbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1facbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1facc0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FACC0u;
    {
        const bool branch_taken_0x1facc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACC0u;
            // 0x1facc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facc0) {
            ctx->pc = 0x1FAD38u;
            goto label_1fad38;
        }
    }
    ctx->pc = 0x1FACC8u;
    // 0x1facc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FACC8u;
    {
        const bool branch_taken_0x1facc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACC8u;
            // 0x1faccc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facc8) {
            ctx->pc = 0x1FACE0u;
            goto label_1face0;
        }
    }
    ctx->pc = 0x1FACD0u;
    // 0x1facd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FACD0u;
    {
        const bool branch_taken_0x1facd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACD0u;
            // 0x1facd4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facd0) {
            ctx->pc = 0x1FACF0u;
            goto label_1facf0;
        }
    }
    ctx->pc = 0x1FACD8u;
    // 0x1facd8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1FACD8u;
    {
        const bool branch_taken_0x1facd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1facd8) {
            ctx->pc = 0x1FADC8u;
            goto label_1fadc8;
        }
    }
    ctx->pc = 0x1FACE0u;
label_1face0:
    // 0x1face0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FACE0u;
    {
        const bool branch_taken_0x1face0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACE0u;
            // 0x1face4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1face0) {
            ctx->pc = 0x1FAD80u;
            goto label_1fad80;
        }
    }
    ctx->pc = 0x1FACE8u;
    // 0x1face8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1FACE8u;
    {
        const bool branch_taken_0x1face8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1face8) {
            ctx->pc = 0x1FADC8u;
            goto label_1fadc8;
        }
    }
    ctx->pc = 0x1FACF0u;
label_1facf0:
    // 0x1facf0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1facf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1facf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1facf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1facf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1facf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1facfc: 0xc441e3d0  lwc1        $f1, -0x1C30($v0)
    ctx->pc = 0x1facfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad04: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x1fad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1fad08: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x1fad08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x1fad0c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1fad0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fad10: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1fad10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1fad14: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x1fad14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fad18: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1fad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1fad1c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x1fad1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fad20: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1fad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1fad24: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x1fad24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1fad28: 0xc07f3cc  jal         func_1FCF30
    ctx->pc = 0x1FAD28u;
    SET_GPR_U32(ctx, 31, 0x1FAD30u);
    ctx->pc = 0x1FAD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD28u;
            // 0x1fad2c: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCF30u;
    if (runtime->hasFunction(0x1FCF30u)) {
        auto targetFn = runtime->lookupFunction(0x1FCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD30u; }
        if (ctx->pc != 0x1FAD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCF30_0x1fcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD30u; }
        if (ctx->pc != 0x1FAD30u) { return; }
    }
    ctx->pc = 0x1FAD30u;
    // 0x1fad30: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FAD30u;
    {
        const bool branch_taken_0x1fad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD30u;
            // 0x1fad34: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad30) {
            ctx->pc = 0x1FADC8u;
            goto label_1fadc8;
        }
    }
    ctx->pc = 0x1FAD38u;
label_1fad38:
    // 0x1fad38: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fad3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fad3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fad40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fad40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fad44: 0xc441e3d4  lwc1        $f1, -0x1C2C($v0)
    ctx->pc = 0x1fad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad4c: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x1fad4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1fad50: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x1fad50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x1fad54: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1fad54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fad58: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1fad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1fad5c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x1fad5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1fad60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1fad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1fad64: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x1fad64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1fad68: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1fad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1fad6c: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x1fad6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1fad70: 0xc07f390  jal         func_1FCE40
    ctx->pc = 0x1FAD70u;
    SET_GPR_U32(ctx, 31, 0x1FAD78u);
    ctx->pc = 0x1FAD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD70u;
            // 0x1fad74: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE40u;
    if (runtime->hasFunction(0x1FCE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD78u; }
        if (ctx->pc != 0x1FAD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fce40_0x1fce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAD78u; }
        if (ctx->pc != 0x1FAD78u) { return; }
    }
    ctx->pc = 0x1FAD78u;
    // 0x1fad78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAD78u;
    {
        const bool branch_taken_0x1fad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAD78u;
            // 0x1fad7c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad78) {
            ctx->pc = 0x1FADC8u;
            goto label_1fadc8;
        }
    }
    ctx->pc = 0x1FAD80u;
label_1fad80:
    // 0x1fad80: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fad84: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1fad88: 0xc441e3cc  lwc1        $f1, -0x1C34($v0)
    ctx->pc = 0x1fad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad90: 0xc460e3d8  lwc1        $f0, -0x1C28($v1)
    ctx->pc = 0x1fad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fad94: 0xe6210094  swc1        $f1, 0x94($s1)
    ctx->pc = 0x1fad94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x1fad98: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x1fad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x1fad9c: 0xe6210098  swc1        $f1, 0x98($s1)
    ctx->pc = 0x1fad9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1fada0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1fada0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fada4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1fada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1fada8: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x1fada8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1fadac: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1fadacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1fadb0: 0x7aa20020  lq          $v0, 0x20($s5)
    ctx->pc = 0x1fadb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1fadb4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1fadb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1fadb8: 0x7aa20030  lq          $v0, 0x30($s5)
    ctx->pc = 0x1fadb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1fadbc: 0xc07f390  jal         func_1FCE40
    ctx->pc = 0x1FADBCu;
    SET_GPR_U32(ctx, 31, 0x1FADC4u);
    ctx->pc = 0x1FADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FADBCu;
            // 0x1fadc0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE40u;
    if (runtime->hasFunction(0x1FCE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADC4u; }
        if (ctx->pc != 0x1FADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fce40_0x1fce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADC4u; }
        if (ctx->pc != 0x1FADC4u) { return; }
    }
    ctx->pc = 0x1FADC4u;
    // 0x1fadc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fadc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fadc8:
    // 0x1fadc8: 0xc06149c  jal         func_185270
    ctx->pc = 0x1FADC8u;
    SET_GPR_U32(ctx, 31, 0x1FADD0u);
    ctx->pc = 0x1FADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FADC8u;
            // 0x1fadcc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADD0u; }
        if (ctx->pc != 0x1FADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADD0u; }
        if (ctx->pc != 0x1FADD0u) { return; }
    }
    ctx->pc = 0x1FADD0u;
    // 0x1fadd0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x1fadd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fadd4: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x1fadd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x1fadd8: 0x7ba80090  lq          $t0, 0x90($sp)
    ctx->pc = 0x1fadd8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1faddc: 0x7ba900a0  lq          $t1, 0xA0($sp)
    ctx->pc = 0x1faddcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fade0: 0x70032ca9  por         $a1, $zero, $v1
    ctx->pc = 0x1fade0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1fade4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1fade4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fade8: 0x700834a9  por         $a2, $zero, $t0
    ctx->pc = 0x1fade8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1fadec: 0x70093ca9  por         $a3, $zero, $t1
    ctx->pc = 0x1fadecu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x1fadf0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1fadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1fadf4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1fadf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1fadf8: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x1fadf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x1fadfc: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x1FADFCu;
    SET_GPR_U32(ctx, 31, 0x1FAE04u);
    ctx->pc = 0x1FAE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FADFCu;
            // 0x1fae00: 0x7fa90060  sq          $t1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE04u; }
        if (ctx->pc != 0x1FAE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE04u; }
        if (ctx->pc != 0x1FAE04u) { return; }
    }
    ctx->pc = 0x1FAE04u;
    // 0x1fae04: 0xc621009c  lwc1        $f1, 0x9C($s1)
    ctx->pc = 0x1fae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fae08: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1fae08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1fae0c: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x1fae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fae10: 0xc4a2c658  lwc1        $f2, -0x39A8($a1)
    ctx->pc = 0x1fae10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fae14: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x1fae18: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1fae18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1fae1c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fae20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fae20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fae24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1fae24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1fae28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fae28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fae2c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fae2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fae30: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1fae30u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x1fae34: 0xc6340098  lwc1        $f20, 0x98($s1)
    ctx->pc = 0x1fae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fae38: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1fae38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1fae3c: 0x7ba50360  lq          $a1, 0x360($sp)
    ctx->pc = 0x1fae3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1fae40: 0xe6340094  swc1        $f20, 0x94($s1)
    ctx->pc = 0x1fae40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x1fae44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fae44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fae48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fae48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fae4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fae4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fae50: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fae50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fae54: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x1fae54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1fae58: 0xe621009c  swc1        $f1, 0x9C($s1)
    ctx->pc = 0x1fae58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x1fae5c: 0x460da528  max.s       $f20, $f20, $f13
    ctx->pc = 0x1fae5cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[13]);
    // 0x1fae60: 0x4603a529  min.s       $f20, $f20, $f3
    ctx->pc = 0x1fae60u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[3]);
    // 0x1fae64: 0x7ba40370  lq          $a0, 0x370($sp)
    ctx->pc = 0x1fae64u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1fae68: 0xc061084  jal         func_184210
    ctx->pc = 0x1FAE68u;
    SET_GPR_U32(ctx, 31, 0x1FAE70u);
    ctx->pc = 0x1FAE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE68u;
            // 0x1fae6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE70u; }
        if (ctx->pc != 0x1FAE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE70u; }
        if (ctx->pc != 0x1FAE70u) { return; }
    }
    ctx->pc = 0x1FAE70u;
    // 0x1fae70: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1fae70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fae74: 0xfba40370  sqc2        $vf4, 0x370($sp)
    ctx->pc = 0x1fae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fae78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fae7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1fae7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fae80: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fae80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fae84: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x1fae84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fae88: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x1fae88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1fae8c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1fae8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fae90: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x1fae90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fae94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fae98: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1fae98u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fae9c: 0x4b013045  vsuby.x     $vf1, $vf6, $vf1y
    ctx->pc = 0x1fae9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faea0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1faea0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faea4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1faea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faea8: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x1faea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1faeac: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1faeacu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1faeb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1faeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faeb4: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x1faeb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faeb8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1faeb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1faebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1faebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faec0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1faec0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faec4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1faec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faec8: 0x70e22b89  pcpyld      $a1, $a3, $v0
    ctx->pc = 0x1faec8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1faecc: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x1faeccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faed0: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x1faed0u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1faed4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1faed4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faed8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1faed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faedc: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x1faedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x1faee0: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x1faee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faee4: 0x4b013044  vsubx.x     $vf1, $vf6, $vf1x
    ctx->pc = 0x1faee4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faee8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1faee8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faeec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faef0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1faef0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1faef4: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1faef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faef8: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1faef8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faefc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1faefcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faf00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1faf00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf04: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x1faf04u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1faf08: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x1faf08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faf0c: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x1faf0cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1faf10: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x1faf10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1faf14: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1faf14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1faf18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1faf18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf1c: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x1faf1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1faf20: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1faf20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1faf24: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1faf24u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1faf28: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1faf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf2c: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x1faf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x1faf30: 0x4b043184  vsubx.x     $vf6, $vf6, $vf4x
    ctx->pc = 0x1faf30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1faf34: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x1faf34u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1faf38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1faf38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf3c: 0x48263000  qmfc2.ni    $a2, $vf6
    ctx->pc = 0x1faf3cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1faf40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1faf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf44: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1faf44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faf48: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x1faf48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1faf4c: 0xdba20070  lqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1faf4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1faf50: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1faf50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1faf54: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1faf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1faf58: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1faf58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1faf5c: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x1faf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x1faf60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1faf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1faf64: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1faf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1faf68: 0xfba20380  sqc2        $vf2, 0x380($sp)
    ctx->pc = 0x1faf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1faf6c: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1faf6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1faf70: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1faf70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1faf74: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1faf74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1faf78: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x1faf78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1faf7c: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1faf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1faf80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1faf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf84: 0xc07e904  jal         func_1FA410
    ctx->pc = 0x1FAF84u;
    SET_GPR_U32(ctx, 31, 0x1FAF8Cu);
    ctx->pc = 0x1FAF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF84u;
            // 0x1faf88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA410u;
    if (runtime->hasFunction(0x1FA410u)) {
        auto targetFn = runtime->lookupFunction(0x1FA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF8Cu; }
        if (ctx->pc != 0x1FAF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA410_0x1fa410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF8Cu; }
        if (ctx->pc != 0x1FAF8Cu) { return; }
    }
    ctx->pc = 0x1FAF8Cu;
    // 0x1faf8c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1faf8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faf90: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1faf90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faf94: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1faf94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faf98: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1faf98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1faf9c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1faf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fafa0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1fafa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1fafa4: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1fafa4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1fafa8: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x1fafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fafac: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1fafacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fafb0: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1fafb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fafb4: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1fafb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fafb8: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1fafb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fafbc: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1fafbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fafc0: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1fafc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fafc4: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1fafc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fafc8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1fafc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1fafcc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1fafccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1fafd0: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x1fafd0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1fafd4: 0x70421389  pcpyld      $v0, $v0, $v0
    ctx->pc = 0x1fafd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1fafd8: 0xdec6bdf8  ld          $a2, -0x4208($s6)
    ctx->pc = 0x1fafd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x1fafdc: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x1fafdcu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1fafe0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fafe4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1fafe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fafe8: 0x64c30001  daddiu      $v1, $a2, 0x1
    ctx->pc = 0x1fafe8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x1fafec: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1fafecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1faff0: 0x4be118da  vmulz.xyzw  $vf3, $vf3, $vf1z
    ctx->pc = 0x1faff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1faff4: 0x4be11099  vmuly.xyzw  $vf2, $vf2, $vf1y
    ctx->pc = 0x1faff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1faff8: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1faff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1faffc: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1faffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb000: 0x64c60002  daddiu      $a2, $a2, 0x2
    ctx->pc = 0x1fb000u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)2);
    // 0x1fb004: 0xfba10390  sqc2        $vf1, 0x390($sp)
    ctx->pc = 0x1fb004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb008: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fb008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb00c: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1fb00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb010: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1fb010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1fb014: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x1fb014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb018: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x1fb018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1fb01c: 0xfba40180  sqc2        $vf4, 0x180($sp)
    ctx->pc = 0x1fb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb020: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1fb020u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x1fb024: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1fb024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb028: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1fb028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb02c: 0xfec3bdf8  sd          $v1, -0x4208($s6)
    ctx->pc = 0x1fb02cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294950392), GPR_U64(ctx, 3));
    // 0x1fb030: 0xfa840020  sqc2        $vf4, 0x20($s4)
    ctx->pc = 0x1fb030u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb034: 0xfe830068  sd          $v1, 0x68($s4)
    ctx->pc = 0x1fb034u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 3));
    // 0x1fb038: 0xa6870060  sh          $a3, 0x60($s4)
    ctx->pc = 0x1fb038u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 96), (uint16_t)GPR_U32(ctx, 7));
    // 0x1fb03c: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1fb03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fb040: 0x7e820030  sq          $v0, 0x30($s4)
    ctx->pc = 0x1fb040u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), GPR_VEC(ctx, 2));
    // 0x1fb044: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1fb044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1fb048: 0x7e820040  sq          $v0, 0x40($s4)
    ctx->pc = 0x1fb048u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 64), GPR_VEC(ctx, 2));
    // 0x1fb04c: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1fb04cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1fb050: 0x7e820050  sq          $v0, 0x50($s4)
    ctx->pc = 0x1fb050u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 80), GPR_VEC(ctx, 2));
    // 0x1fb054: 0xfec6bdf8  sd          $a2, -0x4208($s6)
    ctx->pc = 0x1fb054u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294950392), GPR_U64(ctx, 6));
    // 0x1fb058: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1FB058u;
    SET_GPR_U32(ctx, 31, 0x1FB060u);
    ctx->pc = 0x1FB05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB058u;
            // 0x1fb05c: 0xfe860068  sd          $a2, 0x68($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 104), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB060u; }
        if (ctx->pc != 0x1FB060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB060u; }
        if (ctx->pc != 0x1FB060u) { return; }
    }
    ctx->pc = 0x1FB060u;
    // 0x1fb060: 0xdba60230  lqc2        $vf6, 0x230($sp)
    ctx->pc = 0x1fb060u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1fb064: 0xdba70240  lqc2        $vf7, 0x240($sp)
    ctx->pc = 0x1fb064u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1fb068: 0xdba80250  lqc2        $vf8, 0x250($sp)
    ctx->pc = 0x1fb068u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1fb06c: 0xdba40260  lqc2        $vf4, 0x260($sp)
    ctx->pc = 0x1fb06cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1fb070: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1fb070u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1fb074: 0xdae50030  lqc2        $vf5, 0x30($s7)
    ctx->pc = 0x1fb074u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1fb078: 0xdae10010  lqc2        $vf1, 0x10($s7)
    ctx->pc = 0x1fb078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1fb07c: 0xdae30020  lqc2        $vf3, 0x20($s7)
    ctx->pc = 0x1fb07cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1fb080: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1fb080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb084: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1fb084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb088: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1fb088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb08c: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1fb08cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb090: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1fb090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb094: 0xfba20270  sqc2        $vf2, 0x270($sp)
    ctx->pc = 0x1fb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb098: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1fb098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb09c: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1fb09cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0a0: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1fb0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb0a4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1fb0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb0a8: 0xfba10280  sqc2        $vf1, 0x280($sp)
    ctx->pc = 0x1fb0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb0ac: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1fb0acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0b0: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1fb0b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0b4: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1fb0b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb0b8: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1fb0b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb0bc: 0xfba30290  sqc2        $vf3, 0x290($sp)
    ctx->pc = 0x1fb0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb0c0: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1fb0c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0c4: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1fb0c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0c8: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x1fb0c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb0cc: 0xfba402a0  sqc2        $vf4, 0x2A0($sp)
    ctx->pc = 0x1fb0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb0d0: 0xfba201f0  sqc2        $vf2, 0x1F0($sp)
    ctx->pc = 0x1fb0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb0d4: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1fb0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb0d8: 0xfba30210  sqc2        $vf3, 0x210($sp)
    ctx->pc = 0x1fb0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb0dc: 0xfba40220  sqc2        $vf4, 0x220($sp)
    ctx->pc = 0x1fb0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb0e0: 0xdba500f0  lqc2        $vf5, 0xF0($sp)
    ctx->pc = 0x1fb0e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fb0e4: 0xdba60100  lqc2        $vf6, 0x100($sp)
    ctx->pc = 0x1fb0e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fb0e8: 0xdba70110  lqc2        $vf7, 0x110($sp)
    ctx->pc = 0x1fb0e8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fb0ec: 0xdba80120  lqc2        $vf8, 0x120($sp)
    ctx->pc = 0x1fb0ecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fb0f0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x1fb0f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb0f4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x1fb0f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0f8: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x1fb0f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb0fc: 0x4be2408b  vmaddw.xyzw $vf2, $vf8, $vf2w
    ctx->pc = 0x1fb0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb100: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1fb100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb104: 0xfba202b0  sqc2        $vf2, 0x2B0($sp)
    ctx->pc = 0x1fb104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb108: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x1fb108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb10c: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1fb10cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb110: 0x4be1404b  vmaddw.xyzw $vf1, $vf8, $vf1w
    ctx->pc = 0x1fb110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb114: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x1fb114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb118: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1fb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb11c: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1fb11cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb120: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1fb120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb124: 0x4be340cb  vmaddw.xyzw $vf3, $vf8, $vf3w
    ctx->pc = 0x1fb124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb128: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x1fb128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb12c: 0xfba302d0  sqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x1fb12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb130: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x1fb130u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb134: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x1fb134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb138: 0x4be4410b  vmaddw.xyzw $vf4, $vf8, $vf4w
    ctx->pc = 0x1fb138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb13c: 0xfba402e0  sqc2        $vf4, 0x2E0($sp)
    ctx->pc = 0x1fb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb140: 0xfba201b0  sqc2        $vf2, 0x1B0($sp)
    ctx->pc = 0x1fb140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb144: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1fb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb148: 0xfba401e0  sqc2        $vf4, 0x1E0($sp)
    ctx->pc = 0x1fb148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb14c: 0xfba301d0  sqc2        $vf3, 0x1D0($sp)
    ctx->pc = 0x1fb14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb150: 0x7bc50030  lq          $a1, 0x30($fp)
    ctx->pc = 0x1fb150u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1fb154: 0x7fa50410  sq          $a1, 0x410($sp)
    ctx->pc = 0x1fb154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 5));
    // 0x1fb158: 0xdbc10020  lqc2        $vf1, 0x20($fp)
    ctx->pc = 0x1fb158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1fb15c: 0xfba103a0  sqc2        $vf1, 0x3A0($sp)
    ctx->pc = 0x1fb15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb160: 0xdba20400  lqc2        $vf2, 0x400($sp)
    ctx->pc = 0x1fb160u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1fb164: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb164u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb168: 0xfba20420  sqc2        $vf2, 0x420($sp)
    ctx->pc = 0x1fb168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb16c: 0xdba40420  lqc2        $vf4, 0x420($sp)
    ctx->pc = 0x1fb16cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1fb170: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1fb170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb174: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fb174u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb178: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fb178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb17c: 0xfba30440  sqc2        $vf3, 0x440($sp)
    ctx->pc = 0x1fb17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb180: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1fb180u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1fb184: 0x4a0003bf  vwaitq
    ctx->pc = 0x1fb184u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1fb188: 0x4bc0211c  vmulq.xyz   $vf4, $vf4, $Q
    ctx->pc = 0x1fb188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb18c: 0x4a0002ff  vnop
    ctx->pc = 0x1fb18cu;
    // NOP operation, no action needed for VU0
    // 0x1fb190: 0x4a0002ff  vnop
    ctx->pc = 0x1fb190u;
    // NOP operation, no action needed for VU0
    // 0x1fb194: 0xfba80430  sqc2        $vf8, 0x430($sp)
    ctx->pc = 0x1fb194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1fb198: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1fb198u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1fb19c: 0xfba10420  sqc2        $vf1, 0x420($sp)
    ctx->pc = 0x1fb19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb1a0: 0xfba102f0  sqc2        $vf1, 0x2F0($sp)
    ctx->pc = 0x1fb1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb1a4: 0xdba10440  lqc2        $vf1, 0x440($sp)
    ctx->pc = 0x1fb1a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1fb1a8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1fb1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1ac: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fb1acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1b0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fb1b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1b4: 0xdba30430  lqc2        $vf3, 0x430($sp)
    ctx->pc = 0x1fb1b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1fb1b8: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1fb1b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1fb1bc: 0x4be418ac  vsub.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x1fb1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1c0: 0xdba30440  lqc2        $vf3, 0x440($sp)
    ctx->pc = 0x1fb1c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1fb1c4: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1fb1c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1fb1c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1fb1c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1fb1cc: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x1fb1ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1d0: 0x4a0002ff  vnop
    ctx->pc = 0x1fb1d0u;
    // NOP operation, no action needed for VU0
    // 0x1fb1d4: 0x4a0002ff  vnop
    ctx->pc = 0x1fb1d4u;
    // NOP operation, no action needed for VU0
    // 0x1fb1d8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x1fb1d8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x1fb1dc: 0xfba10440  sqc2        $vf1, 0x440($sp)
    ctx->pc = 0x1fb1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb1e0: 0xfba10300  sqc2        $vf1, 0x300($sp)
    ctx->pc = 0x1fb1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb1e4: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1fb1e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1e8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1fb1e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1ec: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1fb1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb1f0: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1fb1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1fb1f4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1fb1f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1fb1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb1fc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1fb1fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb204: 0x46000004  c1          0x4
    ctx->pc = 0x1fb204u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fb208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb20c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1fb20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1fb210: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1fb210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1fb214: 0xdba30420  lqc2        $vf3, 0x420($sp)
    ctx->pc = 0x1fb214u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1fb218: 0x4be11898  vmulx.xyzw  $vf2, $vf3, $vf1x
    ctx->pc = 0x1fb218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb21c: 0x4be22128  vadd.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x1fb21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1fb220: 0xfba40450  sqc2        $vf4, 0x450($sp)
    ctx->pc = 0x1fb220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1fb224: 0xdba20440  lqc2        $vf2, 0x440($sp)
    ctx->pc = 0x1fb224u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1fb228: 0x4be11058  vmulx.xyzw  $vf1, $vf2, $vf1x
    ctx->pc = 0x1fb228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb22c: 0xdba30430  lqc2        $vf3, 0x430($sp)
    ctx->pc = 0x1fb22cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1fb230: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1fb230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1fb234: 0xfba30460  sqc2        $vf3, 0x460($sp)
    ctx->pc = 0x1fb234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1fb238: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1fb238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1fb23c: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1FB23Cu;
    SET_GPR_U32(ctx, 31, 0x1FB244u);
    ctx->pc = 0x1FB240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB23Cu;
            // 0x1fb240: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB244u; }
        if (ctx->pc != 0x1FB244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB244u; }
        if (ctx->pc != 0x1FB244u) { return; }
    }
    ctx->pc = 0x1FB244u;
    // 0x1fb244: 0x3c023f03  lui         $v0, 0x3F03
    ctx->pc = 0x1fb244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16131 << 16));
    // 0x1fb248: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1fb248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1fb24c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb24cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb250: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1fb254: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1fb254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1fb258: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x1fb258u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x1fb25c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x1fb25cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fb260: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x1fb260u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x1fb264: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1fb264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fb268: 0x7c620050  sq          $v0, 0x50($v1)
    ctx->pc = 0x1fb268u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 2));
    // 0x1fb26c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1fb26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1fb270: 0x7c620060  sq          $v0, 0x60($v1)
    ctx->pc = 0x1fb270u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 2));
    // 0x1fb274: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1fb274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1fb278: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fb27c: 0xdba40410  lqc2        $vf4, 0x410($sp)
    ctx->pc = 0x1fb27cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1fb280: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x1fb280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb284: 0x3c033ec4  lui         $v1, 0x3EC4
    ctx->pc = 0x1fb284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16068 << 16));
    // 0x1fb288: 0x34639ba7  ori         $v1, $v1, 0x9BA7
    ctx->pc = 0x1fb288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39847);
    // 0x1fb28c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fb28cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb290: 0xdba30450  lqc2        $vf3, 0x450($sp)
    ctx->pc = 0x1fb290u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1fb294: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb298: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb29c: 0x3c033dc4  lui         $v1, 0x3DC4
    ctx->pc = 0x1fb29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15812 << 16));
    // 0x1fb2a0: 0x34639ba7  ori         $v1, $v1, 0x9BA7
    ctx->pc = 0x1fb2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39847);
    // 0x1fb2a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fb2a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb2a8: 0xdba40460  lqc2        $vf4, 0x460($sp)
    ctx->pc = 0x1fb2a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1fb2ac: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb2acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb2b0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb2b4: 0x3c033c03  lui         $v1, 0x3C03
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15363 << 16));
    // 0x1fb2b8: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x1fb2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x1fb2bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fb2bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb2c0: 0xdba30430  lqc2        $vf3, 0x430($sp)
    ctx->pc = 0x1fb2c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1fb2c4: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x1fb2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb2c8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb2cc: 0xdba10310  lqc2        $vf1, 0x310($sp)
    ctx->pc = 0x1fb2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1fb2d0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1fb2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb2d4: 0xdba10320  lqc2        $vf1, 0x320($sp)
    ctx->pc = 0x1fb2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fb2d8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1fb2d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb2dc: 0xdba10330  lqc2        $vf1, 0x330($sp)
    ctx->pc = 0x1fb2dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fb2e0: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1fb2e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb2e4: 0xdba10340  lqc2        $vf1, 0x340($sp)
    ctx->pc = 0x1fb2e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fb2e8: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1fb2e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb2ec: 0xfba103b0  sqc2        $vf1, 0x3B0($sp)
    ctx->pc = 0x1fb2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb2f0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1fb2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1fb2f4: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1fb2f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb2f8: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fb2f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb2fc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fb2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb300: 0x3c023cdd  lui         $v0, 0x3CDD
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15581 << 16));
    // 0x1fb304: 0x34422f1c  ori         $v0, $v0, 0x2F1C
    ctx->pc = 0x1fb304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12060);
    // 0x1fb308: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1fb308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb30c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1fb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1fb310: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1fb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fb314: 0xdba40410  lqc2        $vf4, 0x410($sp)
    ctx->pc = 0x1fb314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1fb318: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x1fb318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb31c: 0x3c033e41  lui         $v1, 0x3E41
    ctx->pc = 0x1fb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15937 << 16));
    // 0x1fb320: 0x34638938  ori         $v1, $v1, 0x8938
    ctx->pc = 0x1fb320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35128);
    // 0x1fb324: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fb324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb328: 0xdba40450  lqc2        $vf4, 0x450($sp)
    ctx->pc = 0x1fb328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1fb32c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb330: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb334: 0x3c033ee1  lui         $v1, 0x3EE1
    ctx->pc = 0x1fb334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16097 << 16));
    // 0x1fb338: 0x3463cac0  ori         $v1, $v1, 0xCAC0
    ctx->pc = 0x1fb338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51904);
    // 0x1fb33c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fb33cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb340: 0xdba40460  lqc2        $vf4, 0x460($sp)
    ctx->pc = 0x1fb340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1fb344: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb348: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb34c: 0x3c033eaf  lui         $v1, 0x3EAF
    ctx->pc = 0x1fb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16047 << 16));
    // 0x1fb350: 0x34639db2  ori         $v1, $v1, 0x9DB2
    ctx->pc = 0x1fb350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40370);
    // 0x1fb354: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1fb354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1fb358: 0xdba40430  lqc2        $vf4, 0x430($sp)
    ctx->pc = 0x1fb358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1fb35c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1fb35cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb360: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1fb360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb364: 0xdba10310  lqc2        $vf1, 0x310($sp)
    ctx->pc = 0x1fb364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1fb368: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1fb368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb36c: 0xdba10320  lqc2        $vf1, 0x320($sp)
    ctx->pc = 0x1fb36cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fb370: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1fb370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb374: 0xdba10330  lqc2        $vf1, 0x330($sp)
    ctx->pc = 0x1fb374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fb378: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1fb378u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb37c: 0xdba10340  lqc2        $vf1, 0x340($sp)
    ctx->pc = 0x1fb37cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fb380: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1fb380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb384: 0xfba103c0  sqc2        $vf1, 0x3C0($sp)
    ctx->pc = 0x1fb384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb388: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fb388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb38c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1fb38cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb390: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1fb390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1fb394: 0x7fa203d0  sq          $v0, 0x3D0($sp)
    ctx->pc = 0x1fb394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 2));
    // 0x1fb398: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fb398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fb39c: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1fb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1fb3a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1fb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1fb3a4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1fb3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1fb3a8: 0x8ca4cd58  lw          $a0, -0x32A8($a1)
    ctx->pc = 0x1fb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954328)));
    // 0x1fb3ac: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1fb3b0: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x1fb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x1fb3b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb3b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1fb3bc: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1FB3BCu;
    SET_GPR_U32(ctx, 31, 0x1FB3C4u);
    ctx->pc = 0x1FB3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3BCu;
            // 0x1fb3c0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB3C4u; }
        if (ctx->pc != 0x1FB3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB3C4u; }
        if (ctx->pc != 0x1FB3C4u) { return; }
    }
    ctx->pc = 0x1FB3C4u;
    // 0x1fb3c4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB3C4u;
    {
        const bool branch_taken_0x1fb3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3c4) {
            ctx->pc = 0x1FB3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB3C4u;
            // 0x1fb3c8: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB3D0u;
            goto label_1fb3d0;
        }
    }
    ctx->pc = 0x1FB3CCu;
    // 0x1fb3cc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1fb3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb3d0:
    // 0x1fb3d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1fb3d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1fb3d4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1fb3d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1fb3d8: 0xdba203d0  lqc2        $vf2, 0x3D0($sp)
    ctx->pc = 0x1fb3d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1fb3dc: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1fb3dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb3e0: 0xfba203e0  sqc2        $vf2, 0x3E0($sp)
    ctx->pc = 0x1fb3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb3e4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1fb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1fb3e8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1fb3e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1fb3ec: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x1fb3ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb3f0: 0xdba10430  lqc2        $vf1, 0x430($sp)
    ctx->pc = 0x1fb3f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1fb3f4: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1fb3f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1fb3f8: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1fb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1fb3fc: 0xdba10310  lqc2        $vf1, 0x310($sp)
    ctx->pc = 0x1fb3fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1fb400: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1fb400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1fb404: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1fb404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fb408: 0xdba10320  lqc2        $vf1, 0x320($sp)
    ctx->pc = 0x1fb408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fb40c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1fb40cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb410: 0xdba10330  lqc2        $vf1, 0x330($sp)
    ctx->pc = 0x1fb410u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fb414: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1fb414u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1fb418: 0xdba10340  lqc2        $vf1, 0x340($sp)
    ctx->pc = 0x1fb418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fb41c: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1fb41cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1fb420: 0xfba103f0  sqc2        $vf1, 0x3F0($sp)
    ctx->pc = 0x1fb420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb424: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1fb424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1fb428: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1fb428u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb42c: 0x7ba60450  lq          $a2, 0x450($sp)
    ctx->pc = 0x1fb42cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1fb430: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1fb430u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1fb434: 0x7ba70460  lq          $a3, 0x460($sp)
    ctx->pc = 0x1fb434u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1fb438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb43c: 0x7ba50410  lq          $a1, 0x410($sp)
    ctx->pc = 0x1fb43cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1fb440: 0xc07ed2e  jal         func_1FB4B8
    ctx->pc = 0x1FB440u;
    SET_GPR_U32(ctx, 31, 0x1FB448u);
    ctx->pc = 0x1FB444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB440u;
            // 0x1fb444: 0x7ba80430  lq          $t0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4B8u;
    if (runtime->hasFunction(0x1FB4B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FB4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB448u; }
        if (ctx->pc != 0x1FB448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB4B8_0x1fb4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB448u; }
        if (ctx->pc != 0x1FB448u) { return; }
    }
    ctx->pc = 0x1FB448u;
    // 0x1fb448: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x1fb448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x1fb44c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fb44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fb450: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FB450u;
    {
        const bool branch_taken_0x1fb450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB450u;
            // 0x1fb454: 0x7bb00510  lq          $s0, 0x510($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb450) {
            ctx->pc = 0x1FB480u;
            goto label_1fb480;
        }
    }
    ctx->pc = 0x1FB458u;
    // 0x1fb458: 0xc07f352  jal         func_1FCD48
    ctx->pc = 0x1FB458u;
    SET_GPR_U32(ctx, 31, 0x1FB460u);
    ctx->pc = 0x1FB45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB458u;
            // 0x1fb45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCD48u;
    if (runtime->hasFunction(0x1FCD48u)) {
        auto targetFn = runtime->lookupFunction(0x1FCD48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB460u; }
        if (ctx->pc != 0x1FB460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCD48_0x1fcd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB460u; }
        if (ctx->pc != 0x1FB460u) { return; }
    }
    ctx->pc = 0x1FB460u;
    // 0x1fb460: 0x7ba50410  lq          $a1, 0x410($sp)
    ctx->pc = 0x1fb460u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1fb464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb468: 0x7ba60420  lq          $a2, 0x420($sp)
    ctx->pc = 0x1fb468u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1fb46c: 0x7ba70430  lq          $a3, 0x430($sp)
    ctx->pc = 0x1fb46cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1fb470: 0xc07ef2e  jal         func_1FBCB8
    ctx->pc = 0x1FB470u;
    SET_GPR_U32(ctx, 31, 0x1FB478u);
    ctx->pc = 0x1FB474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB470u;
            // 0x1fb474: 0x7ba80440  lq          $t0, 0x440($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBCB8u;
    if (runtime->hasFunction(0x1FBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1FBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB478u; }
        if (ctx->pc != 0x1FB478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBCB8_0x1fbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB478u; }
        if (ctx->pc != 0x1FB478u) { return; }
    }
    ctx->pc = 0x1FB478u;
    // 0x1fb478: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x1fb478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x1fb47c: 0x0  nop
    ctx->pc = 0x1fb47cu;
    // NOP
label_1fb480:
    // 0x1fb480: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x1fb480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x1fb484: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x1fb484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x1fb488: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x1fb488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1fb48c: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x1fb48cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1fb490: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x1fb490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1fb494: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x1fb494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1fb498: 0x7bb704a0  lq          $s7, 0x4A0($sp)
    ctx->pc = 0x1fb498u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1fb49c: 0x7bbe0490  lq          $fp, 0x490($sp)
    ctx->pc = 0x1fb49cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1fb4a0: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x1fb4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1fb4a4: 0xc7b50528  lwc1        $f21, 0x528($sp)
    ctx->pc = 0x1fb4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fb4a8: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x1fb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fb4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4ACu;
            // 0x1fb4b0: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA950u: goto label_1fa950;
            case 0x1FA9F8u: goto label_1fa9f8;
            case 0x1FAA18u: goto label_1faa18;
            case 0x1FAA98u: goto label_1faa98;
            case 0x1FAAC0u: goto label_1faac0;
            case 0x1FAAE8u: goto label_1faae8;
            case 0x1FAB10u: goto label_1fab10;
            case 0x1FAB38u: goto label_1fab38;
            case 0x1FAB7Cu: goto label_1fab7c;
            case 0x1FABF8u: goto label_1fabf8;
            case 0x1FAC14u: goto label_1fac14;
            case 0x1FAC3Cu: goto label_1fac3c;
            case 0x1FAC60u: goto label_1fac60;
            case 0x1FAC90u: goto label_1fac90;
            case 0x1FAC94u: goto label_1fac94;
            case 0x1FACE0u: goto label_1face0;
            case 0x1FACF0u: goto label_1facf0;
            case 0x1FAD38u: goto label_1fad38;
            case 0x1FAD80u: goto label_1fad80;
            case 0x1FADC8u: goto label_1fadc8;
            case 0x1FB3D0u: goto label_1fb3d0;
            case 0x1FB480u: goto label_1fb480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FB4B4u;
    // 0x1fb4b4: 0x0  nop
    ctx->pc = 0x1fb4b4u;
    // NOP
}
