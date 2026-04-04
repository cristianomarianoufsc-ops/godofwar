#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001491C8
// Address: 0x1491c8 - 0x149340
void sub_001491C8_0x1491c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001491C8_0x1491c8");
#endif

    ctx->pc = 0x1491c8u;

    // 0x1491c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1491cc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1491ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1491d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1491d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1491d4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1491d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1491d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1491dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1491dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491e0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1491e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1491e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1491e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491e8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1491e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1491ec: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x1491ecu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1491f0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1491f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1491f4: 0x7bc03  sra         $s7, $a3, 16
    ctx->pc = 0x1491f4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1491f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1491f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1491fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1491fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149200: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x149200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x149204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149208: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x149208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14920c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x14920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x149210: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x149214: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x149214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x149218: 0x6a0c0  sll         $s4, $a2, 3
    ctx->pc = 0x149218u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x14921c: 0xc05309e  jal         func_14C278
    ctx->pc = 0x14921Cu;
    SET_GPR_U32(ctx, 31, 0x149224u);
    ctx->pc = 0x149220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14921Cu;
            // 0x149220: 0x282a821  addu        $s5, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149224u; }
        if (ctx->pc != 0x149224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149224u; }
        if (ctx->pc != 0x149224u) { return; }
    }
    ctx->pc = 0x149224u;
    // 0x149224: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149228: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x149228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14922c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x149230: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x149230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x149234: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x149238: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x149238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x14923c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x14923Cu;
    SET_GPR_U32(ctx, 31, 0x149244u);
    ctx->pc = 0x149240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14923Cu;
            // 0x149240: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (runtime->hasFunction(0x143F68u)) {
        auto targetFn = runtime->lookupFunction(0x143F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149244u; }
        if (ctx->pc != 0x149244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143f68_0x143f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149244u; }
        if (ctx->pc != 0x149244u) { return; }
    }
    ctx->pc = 0x149244u;
    // 0x149244: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x149244u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x149248: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x149248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14924c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x149250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x149254: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x149254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x149258: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14925c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x14925cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x149260: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x149260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x149264: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x149264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x149268: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x149268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
    // 0x14926c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x14926cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x149270: 0xc05309e  jal         func_14C278
    ctx->pc = 0x149270u;
    SET_GPR_U32(ctx, 31, 0x149278u);
    ctx->pc = 0x149274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149270u;
            // 0x149274: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149278u; }
        if (ctx->pc != 0x149278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149278u; }
        if (ctx->pc != 0x149278u) { return; }
    }
    ctx->pc = 0x149278u;
    // 0x149278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x149278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14927c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x149280: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x149280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x149284: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x149284u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x149288: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x149288u;
    {
        const bool branch_taken_0x149288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149288u;
            // 0x14928c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149288) {
            ctx->pc = 0x1492B4u;
            goto label_1492b4;
        }
    }
    ctx->pc = 0x149290u;
    // 0x149290: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x149290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149294: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_149298:
    // 0x149298: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14929c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1492a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1492a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1492a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1492a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1492a8: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x1492a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1492ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1492ACu;
    {
        const bool branch_taken_0x1492ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1492B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1492ACu;
            // 0x1492b0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492ac) {
            ctx->pc = 0x149298u;
            runtime->cooperativeGuestYield();
            goto label_149298;
        }
    }
    ctx->pc = 0x1492B4u;
label_1492b4:
    // 0x1492b4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1492b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1492b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1492bc: 0x3c02ff0f  lui         $v0, 0xFF0F
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65295 << 16));
    // 0x1492c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1492c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1492c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1492c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1492c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1492c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1492cc: 0x34420f0f  ori         $v0, $v0, 0xF0F
    ctx->pc = 0x1492ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3855);
    // 0x1492d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1492d4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1492d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1492d8: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x1492d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1492dc: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1492dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1492e0: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x1492e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x1492e4: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1492e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1492e8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x1492e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x1492ec: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x1492ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x1492f0: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1492f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x1492f4: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1492f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x1492f8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1492f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1492fc: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x1492fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x149300: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x149300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x149304: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x149304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149308: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x14930c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14930cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149310: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x149314: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x149314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149318: 0xa4560006  sh          $s6, 0x6($v0)
    ctx->pc = 0x149318u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 22));
    // 0x14931c: 0xa4570004  sh          $s7, 0x4($v0)
    ctx->pc = 0x14931cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 23));
    // 0x149320: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x149320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149324: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149328: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x149328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14932c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x14932cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149330: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x149330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149338: 0x3e00008  jr          $ra
    ctx->pc = 0x149338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149338u;
            // 0x14933c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149298u: goto label_149298;
            case 0x1492B4u: goto label_1492b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149340u;
}
