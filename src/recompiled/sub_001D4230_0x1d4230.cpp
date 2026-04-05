#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4230
// Address: 0x1d4230 - 0x1d43d0
void sub_001D4230_0x1d4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4230_0x1d4230");
#endif

    ctx->pc = 0x1d4230u;

    // 0x1d4230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d4234: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d4238: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d423c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d423cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4240: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d4244: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x1d4244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d4248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d424c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1d424cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d4250:
    // 0x1d4250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4254: 0xc090c1e  jal         func_243078
    ctx->pc = 0x1D4254u;
    SET_GPR_U32(ctx, 31, 0x1D425Cu);
    ctx->pc = 0x1D4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4254u;
            // 0x1d4258: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243078u;
    if (runtime->hasFunction(0x243078u)) {
        auto targetFn = runtime->lookupFunction(0x243078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D425Cu; }
        if (ctx->pc != 0x1D425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243078_0x243160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D425Cu; }
        if (ctx->pc != 0x1D425Cu) { return; }
    }
    ctx->pc = 0x1D425Cu;
    // 0x1d425c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4260: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4260u;
    {
        const bool branch_taken_0x1d4260 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4260u;
            // 0x1d4264: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4260) {
            ctx->pc = 0x1D4250u;
            runtime->cooperativeGuestYield();
            goto label_1d4250;
        }
    }
    ctx->pc = 0x1D4268u;
    // 0x1d4268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d4268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d426c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4270: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1d4270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1d4274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4278:
    // 0x1d4278: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d4278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d427c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d4280: 0x0  nop
    ctx->pc = 0x1d4280u;
    // NOP
    // 0x1d4284: 0x0  nop
    ctx->pc = 0x1d4284u;
    // NOP
    // 0x1d4288: 0x0  nop
    ctx->pc = 0x1d4288u;
    // NOP
    // 0x1d428c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D428Cu;
    {
        const bool branch_taken_0x1d428c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D428Cu;
            // 0x1d4290: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d428c) {
            ctx->pc = 0x1D4278u;
            runtime->cooperativeGuestYield();
            goto label_1d4278;
        }
    }
    ctx->pc = 0x1D4294u;
    // 0x1d4294: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4298: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d429c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1d42a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d42a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d42a4: 0x0  nop
    ctx->pc = 0x1d42a4u;
    // NOP
label_1d42a8:
    // 0x1d42a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d42ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d42acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d42b0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1d42b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1d42b4: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x1d42b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d42b8: 0x0  nop
    ctx->pc = 0x1d42b8u;
    // NOP
    // 0x1d42bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D42BCu;
    {
        const bool branch_taken_0x1d42bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D42C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42BCu;
            // 0x1d42c0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42bc) {
            ctx->pc = 0x1D42A8u;
            runtime->cooperativeGuestYield();
            goto label_1d42a8;
        }
    }
    ctx->pc = 0x1D42C4u;
    // 0x1d42c4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1d42c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d42c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d42cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d42d0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1d42d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d42d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d42d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d42dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1d42dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1d42e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d42e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d42e4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d42e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d42e8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1d42e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1d42ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d42ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d42f0: 0x24a56320  addiu       $a1, $a1, 0x6320
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25376));
    // 0x1d42f4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1d42f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d42f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d42fc: 0x26040308  addiu       $a0, $s0, 0x308
    ctx->pc = 0x1d42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 776));
    // 0x1d4300: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1d4300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1d4304: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1d4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d4308: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1d4308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1d430c: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x1d430cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1d4310: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x1d4310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1d4314: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x1d4314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1d4318: 0xe6030300  swc1        $f3, 0x300($s0)
    ctx->pc = 0x1d4318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x1d431c: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x1d431cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x1d4320: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1d4320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d4324: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x1d4324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d4328: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d4328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1d432c: 0xe6040038  swc1        $f4, 0x38($s0)
    ctx->pc = 0x1d432cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1d4330: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1D4330u;
    SET_GPR_U32(ctx, 31, 0x1D4338u);
    ctx->pc = 0x1D4334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4330u;
            // 0x1d4334: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4338u; }
        if (ctx->pc != 0x1D4338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4338u; }
        if (ctx->pc != 0x1D4338u) { return; }
    }
    ctx->pc = 0x1D4338u;
    // 0x1d4338: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d4338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d433c: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x1d4340: 0x24a56338  addiu       $a1, $a1, 0x6338
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25400));
    // 0x1d4344: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x1D4344u;
    SET_GPR_U32(ctx, 31, 0x1D434Cu);
    ctx->pc = 0x1D4348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4344u;
            // 0x1d4348: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D434Cu; }
        if (ctx->pc != 0x1D434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D434Cu; }
        if (ctx->pc != 0x1D434Cu) { return; }
    }
    ctx->pc = 0x1D434Cu;
    // 0x1d434c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4350: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d4350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1d4354: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x1d4358: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1d435c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d435cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d4360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d4360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4364: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1d4368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d436c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d4370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4374: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1d4374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1d4378: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d4378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d437c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1d437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1d4380: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1d4380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1d4384: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d4384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d4388: 0xe6040338  swc1        $f4, 0x338($s0)
    ctx->pc = 0x1d4388u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x1d438c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x1d438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x1d4390: 0xe6010340  swc1        $f1, 0x340($s0)
    ctx->pc = 0x1d4390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
    // 0x1d4394: 0xe6020344  swc1        $f2, 0x344($s0)
    ctx->pc = 0x1d4394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 836), bits); }
    // 0x1d4398: 0xe603034c  swc1        $f3, 0x34C($s0)
    ctx->pc = 0x1d4398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 844), bits); }
    // 0x1d439c: 0xe6050350  swc1        $f5, 0x350($s0)
    ctx->pc = 0x1d439cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
    // 0x1d43a0: 0xa60303d4  sh          $v1, 0x3D4($s0)
    ctx->pc = 0x1d43a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 980), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d43a4: 0xe6050348  swc1        $f5, 0x348($s0)
    ctx->pc = 0x1d43a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 840), bits); }
    // 0x1d43a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d43a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d43ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d43acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d43b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d43b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d43b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d43b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d43b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D43B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D43BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43B8u;
            // 0x1d43bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4250u: goto label_1d4250;
            case 0x1D4278u: goto label_1d4278;
            case 0x1D42A8u: goto label_1d42a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D43C0u;
    // 0x1d43c0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d43c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d43c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D43C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D43CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43C8u;
            // 0x1d43cc: 0xac622cb0  sw          $v0, 0x2CB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4250u: goto label_1d4250;
            case 0x1D4278u: goto label_1d4278;
            case 0x1D42A8u: goto label_1d42a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D43D0u;
}
