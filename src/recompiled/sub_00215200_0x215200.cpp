#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215200
// Address: 0x215200 - 0x215760
void sub_00215200_0x215200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215200_0x215200");
#endif

    ctx->pc = 0x215200u;

label_215200:
    // 0x215200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215204: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x215208: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x215208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21520c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21520cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215218: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x215218u;
    SET_GPR_U32(ctx, 31, 0x215220u);
    ctx->pc = 0x21521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215218u;
            // 0x21521c: 0x8c441198  lw          $a0, 0x1198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215220u; }
        if (ctx->pc != 0x215220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215220u; }
        if (ctx->pc != 0x215220u) { return; }
    }
    ctx->pc = 0x215220u;
    // 0x215220: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215220u;
    {
        const bool branch_taken_0x215220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215220u;
            // 0x215224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215220) {
            ctx->pc = 0x21523Cu;
            goto label_21523c;
        }
    }
    ctx->pc = 0x215228u;
    // 0x215228: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x215228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21522c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21522cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215230: 0x78a60050  lq          $a2, 0x50($a1)
    ctx->pc = 0x215230u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x215234: 0xc089344  jal         func_224D10
    ctx->pc = 0x215234u;
    SET_GPR_U32(ctx, 31, 0x21523Cu);
    ctx->pc = 0x215238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215234u;
            // 0x215238: 0x70063ca9  por         $a3, $zero, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224D10u;
    if (runtime->hasFunction(0x224D10u)) {
        auto targetFn = runtime->lookupFunction(0x224D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21523Cu; }
        if (ctx->pc != 0x21523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224D10_0x224d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21523Cu; }
        if (ctx->pc != 0x21523Cu) { return; }
    }
    ctx->pc = 0x21523Cu;
label_21523c:
    // 0x21523c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21523cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215244: 0x3e00008  jr          $ra
    ctx->pc = 0x215244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215244u;
            // 0x215248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215200u: goto label_215200;
            case 0x21523Cu: goto label_21523c;
            case 0x2152FCu: goto label_2152fc;
            case 0x215308u: goto label_215308;
            case 0x21532Cu: goto label_21532c;
            case 0x215370u: goto label_215370;
            case 0x2153B0u: goto label_2153b0;
            case 0x2153BCu: goto label_2153bc;
            case 0x215400u: goto label_215400;
            case 0x215494u: goto label_215494;
            case 0x215498u: goto label_215498;
            case 0x2154ACu: goto label_2154ac;
            case 0x2154E8u: goto label_2154e8;
            case 0x2154F8u: goto label_2154f8;
            case 0x215538u: goto label_215538;
            case 0x21553Cu: goto label_21553c;
            case 0x215570u: goto label_215570;
            case 0x21557Cu: goto label_21557c;
            case 0x2155B4u: goto label_2155b4;
            case 0x2155C8u: goto label_2155c8;
            case 0x2155FCu: goto label_2155fc;
            case 0x21562Cu: goto label_21562c;
            case 0x21563Cu: goto label_21563c;
            case 0x215658u: goto label_215658;
            case 0x215660u: goto label_215660;
            case 0x21568Cu: goto label_21568c;
            case 0x215690u: goto label_215690;
            case 0x2156FCu: goto label_2156fc;
            case 0x215700u: goto label_215700;
            case 0x215714u: goto label_215714;
            case 0x215728u: goto label_215728;
            case 0x215730u: goto label_215730;
            case 0x215734u: goto label_215734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21524Cu;
    // 0x21524c: 0x0  nop
    ctx->pc = 0x21524cu;
    // NOP
    // 0x215250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x215254: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x215254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x215258: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x215258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21525c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215260: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x215260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x215264: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x215264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x215268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21526c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x21526cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x215270: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x215270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x215274: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x215274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x215278: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x215278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x21527c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x21527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x215280: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x215280u;
    {
        const bool branch_taken_0x215280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215280u;
            // 0x215284: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215280) {
            ctx->pc = 0x21532Cu;
            goto label_21532c;
        }
    }
    ctx->pc = 0x215288u;
    // 0x215288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x215288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21528c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x21528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x215290: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x215290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x215294: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x215294u;
    {
        const bool branch_taken_0x215294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215294u;
            // 0x215298: 0xae4201f0  sw          $v0, 0x1F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215294) {
            ctx->pc = 0x21532Cu;
            goto label_21532c;
        }
    }
    ctx->pc = 0x21529Cu;
    // 0x21529c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x21529cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2152a0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x2152a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x2152a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2152a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2152a8: 0x8e4601d8  lw          $a2, 0x1D8($s2)
    ctx->pc = 0x2152a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x2152ac: 0x8ce200f4  lw          $v0, 0xF4($a3)
    ctx->pc = 0x2152acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x2152b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2152b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152b4: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x2152b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x2152b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2152b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2152bc: 0x8cd0001c  lw          $s0, 0x1C($a2)
    ctx->pc = 0x2152bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2152c0: 0xace200f4  sw          $v0, 0xF4($a3)
    ctx->pc = 0x2152c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 2));
    // 0x2152c4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x2152C4u;
    SET_GPR_U32(ctx, 31, 0x2152CCu);
    ctx->pc = 0x2152C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2152C4u;
            // 0x2152c8: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152CCu; }
        if (ctx->pc != 0x2152CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152CCu; }
        if (ctx->pc != 0x2152CCu) { return; }
    }
    ctx->pc = 0x2152CCu;
    // 0x2152cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2152ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2152d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152d4: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x2152D4u;
    SET_GPR_U32(ctx, 31, 0x2152DCu);
    ctx->pc = 0x2152D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2152D4u;
            // 0x2152d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152DCu; }
        if (ctx->pc != 0x2152DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152DCu; }
        if (ctx->pc != 0x2152DCu) { return; }
    }
    ctx->pc = 0x2152DCu;
    // 0x2152dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2152dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2152e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2152e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2152e4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2152E4u;
    {
        const bool branch_taken_0x2152e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2152E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2152E4u;
            // 0x2152e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152e4) {
            ctx->pc = 0x2152FCu;
            goto label_2152fc;
        }
    }
    ctx->pc = 0x2152ECu;
    // 0x2152ec: 0xc085224  jal         func_214890
    ctx->pc = 0x2152ECu;
    SET_GPR_U32(ctx, 31, 0x2152F4u);
    ctx->pc = 0x2152F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2152ECu;
            // 0x2152f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152F4u; }
        if (ctx->pc != 0x2152F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2152F4u; }
        if (ctx->pc != 0x2152F4u) { return; }
    }
    ctx->pc = 0x2152F4u;
    // 0x2152f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2152F4u;
    {
        const bool branch_taken_0x2152f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2152F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2152F4u;
            // 0x2152f8: 0x8e4201d8  lw          $v0, 0x1D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152f4) {
            ctx->pc = 0x215308u;
            goto label_215308;
        }
    }
    ctx->pc = 0x2152FCu;
label_2152fc:
    // 0x2152fc: 0xc085224  jal         func_214890
    ctx->pc = 0x2152FCu;
    SET_GPR_U32(ctx, 31, 0x215304u);
    ctx->pc = 0x215300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2152FCu;
            // 0x215300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215304u; }
        if (ctx->pc != 0x215304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215304u; }
        if (ctx->pc != 0x215304u) { return; }
    }
    ctx->pc = 0x215304u;
    // 0x215304: 0x8e4201d8  lw          $v0, 0x1D8($s2)
    ctx->pc = 0x215304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
label_215308:
    // 0x215308: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x21530c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21530cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x215310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215314: 0xc040622  jal         func_101888
    ctx->pc = 0x215314u;
    SET_GPR_U32(ctx, 31, 0x21531Cu);
    ctx->pc = 0x215318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215314u;
            // 0x215318: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21531Cu; }
        if (ctx->pc != 0x21531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21531Cu; }
        if (ctx->pc != 0x21531Cu) { return; }
    }
    ctx->pc = 0x21531Cu;
    // 0x21531c: 0xc085404  jal         func_215010
    ctx->pc = 0x21531Cu;
    SET_GPR_U32(ctx, 31, 0x215324u);
    ctx->pc = 0x215320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21531Cu;
            // 0x215320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215010u;
    if (runtime->hasFunction(0x215010u)) {
        auto targetFn = runtime->lookupFunction(0x215010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215324u; }
        if (ctx->pc != 0x215324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00215010_0x215010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215324u; }
        if (ctx->pc != 0x215324u) { return; }
    }
    ctx->pc = 0x215324u;
    // 0x215324: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x215324u;
    {
        const bool branch_taken_0x215324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215324u;
            // 0x215328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215324) {
            ctx->pc = 0x215734u;
            goto label_215734;
        }
    }
    ctx->pc = 0x21532Cu;
label_21532c:
    // 0x21532c: 0xc040314  jal         func_100C50
    ctx->pc = 0x21532Cu;
    SET_GPR_U32(ctx, 31, 0x215334u);
    ctx->pc = 0x215330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21532Cu;
            // 0x215330: 0x8e4401d8  lw          $a0, 0x1D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215334u; }
        if (ctx->pc != 0x215334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215334u; }
        if (ctx->pc != 0x215334u) { return; }
    }
    ctx->pc = 0x215334u;
    // 0x215334: 0x8e4401d8  lw          $a0, 0x1D8($s2)
    ctx->pc = 0x215334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x215338: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x215338u;
    SET_GPR_U32(ctx, 31, 0x215340u);
    ctx->pc = 0x21533Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215338u;
            // 0x21533c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215340u; }
        if (ctx->pc != 0x215340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215340u; }
        if (ctx->pc != 0x215340u) { return; }
    }
    ctx->pc = 0x215340u;
    // 0x215340: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x215340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x215344: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x215344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x215348: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x215348u;
    {
        const bool branch_taken_0x215348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215348u;
            // 0x21534c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215348) {
            ctx->pc = 0x2154ACu;
            goto label_2154ac;
        }
    }
    ctx->pc = 0x215350u;
    // 0x215350: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x215350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215354: 0x0  nop
    ctx->pc = 0x215354u;
    // NOP
    // 0x215358: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x215358u;
    {
        const bool branch_taken_0x215358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215358) {
            ctx->pc = 0x21535Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215358u;
            // 0x21535c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215370u;
            goto label_215370;
        }
    }
    ctx->pc = 0x215360u;
    // 0x215360: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x215360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x215364: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x215364u;
    {
        const bool branch_taken_0x215364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215364u;
            // 0x215368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215364) {
            ctx->pc = 0x215734u;
            goto label_215734;
        }
    }
    ctx->pc = 0x21536Cu;
    // 0x21536c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x21536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_215370:
    // 0x215370: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x215370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x215374: 0xc64101e0  lwc1        $f1, 0x1E0($s2)
    ctx->pc = 0x215374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215378: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x215378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21537c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21537cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215380: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x215384: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21538c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x21538Cu;
    {
        const bool branch_taken_0x21538c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21538Cu;
            // 0x215390: 0xac8200f4  sw          $v0, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21538c) {
            ctx->pc = 0x2153BCu;
            goto label_2153bc;
        }
    }
    ctx->pc = 0x215394u;
    // 0x215394: 0x8e4301c0  lw          $v1, 0x1C0($s2)
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x215398: 0x8462009c  lh          $v0, 0x9C($v1)
    ctx->pc = 0x215398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x21539c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21539Cu;
    {
        const bool branch_taken_0x21539c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21539c) {
            ctx->pc = 0x2153B0u;
            goto label_2153b0;
        }
    }
    ctx->pc = 0x2153A4u;
    // 0x2153a4: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x2153a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2153a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2153a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2153ac: 0xe64001e0  swc1        $f0, 0x1E0($s2)
    ctx->pc = 0x2153acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
label_2153b0:
    // 0x2153b0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2153b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2153b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2153b8: 0xe64001ec  swc1        $f0, 0x1EC($s2)
    ctx->pc = 0x2153b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 492), bits); }
label_2153bc:
    // 0x2153bc: 0xc64101ec  lwc1        $f1, 0x1EC($s2)
    ctx->pc = 0x2153bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2153c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2153c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2153c4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2153c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2153c8: 0x0  nop
    ctx->pc = 0x2153c8u;
    // NOP
    // 0x2153cc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2153CCu;
    {
        const bool branch_taken_0x2153cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2153D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2153CCu;
            // 0x2153d0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153cc) {
            ctx->pc = 0x215400u;
            goto label_215400;
        }
    }
    ctx->pc = 0x2153D4u;
    // 0x2153d4: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x2153d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2153d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2153d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2153dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2153dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2153e0: 0x0  nop
    ctx->pc = 0x2153e0u;
    // NOP
    // 0x2153e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2153E4u;
    {
        const bool branch_taken_0x2153e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2153E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2153E4u;
            // 0x2153e8: 0xe64001ec  swc1        $f0, 0x1EC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153e4) {
            ctx->pc = 0x215400u;
            goto label_215400;
        }
    }
    ctx->pc = 0x2153ECu;
    // 0x2153ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2153ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153f0: 0xc0853d4  jal         func_214F50
    ctx->pc = 0x2153F0u;
    SET_GPR_U32(ctx, 31, 0x2153F8u);
    ctx->pc = 0x2153F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2153F0u;
            // 0x2153f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214F50u;
    if (runtime->hasFunction(0x214F50u)) {
        auto targetFn = runtime->lookupFunction(0x214F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153F8u; }
        if (ctx->pc != 0x2153F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214F50_0x214f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153F8u; }
        if (ctx->pc != 0x2153F8u) { return; }
    }
    ctx->pc = 0x2153F8u;
    // 0x2153f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2153fc: 0xae4201e8  sw          $v0, 0x1E8($s2)
    ctx->pc = 0x2153fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 2));
label_215400:
    // 0x215400: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x215404: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x215404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x215408: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x215408u;
    {
        const bool branch_taken_0x215408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215408u;
            // 0x21540c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215408) {
            ctx->pc = 0x215734u;
            goto label_215734;
        }
    }
    ctx->pc = 0x215410u;
    // 0x215410: 0xc64101e0  lwc1        $f1, 0x1E0($s2)
    ctx->pc = 0x215410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215414: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x215414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215418: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x215418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21541c: 0x0  nop
    ctx->pc = 0x21541cu;
    // NOP
    // 0x215420: 0x450000c3  bc1f        . + 4 + (0xC3 << 2)
    ctx->pc = 0x215420u;
    {
        const bool branch_taken_0x215420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215420u;
            // 0x215424: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215420) {
            ctx->pc = 0x215730u;
            goto label_215730;
        }
    }
    ctx->pc = 0x215428u;
    // 0x215428: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x215428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21542c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21542cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215430: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x215430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215434: 0x0  nop
    ctx->pc = 0x215434u;
    // NOP
    // 0x215438: 0x450000bd  bc1f        . + 4 + (0xBD << 2)
    ctx->pc = 0x215438u;
    {
        const bool branch_taken_0x215438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215438u;
            // 0x21543c: 0xe64001e0  swc1        $f0, 0x1E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215438) {
            ctx->pc = 0x215730u;
            goto label_215730;
        }
    }
    ctx->pc = 0x215440u;
    // 0x215440: 0x30620060  andi        $v0, $v1, 0x60
    ctx->pc = 0x215440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x215444: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x215444u;
    {
        const bool branch_taken_0x215444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215444) {
            ctx->pc = 0x215448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215444u;
            // 0x215448: 0x8e4301f0  lw          $v1, 0x1F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215498u;
            goto label_215498;
        }
    }
    ctx->pc = 0x21544Cu;
    // 0x21544c: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x215450: 0x8445009c  lh          $a1, 0x9C($v0)
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x215454: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x215454u;
    {
        const bool branch_taken_0x215454 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x215458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215454u;
            // 0x215458: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215454) {
            ctx->pc = 0x215494u;
            goto label_215494;
        }
    }
    ctx->pc = 0x21545Cu;
    // 0x21545c: 0xc0761ae  jal         func_1D86B8
    ctx->pc = 0x21545Cu;
    SET_GPR_U32(ctx, 31, 0x215464u);
    ctx->pc = 0x215460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21545Cu;
            // 0x215460: 0x8e24cd58  lw          $a0, -0x32A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D86B8u;
    if (runtime->hasFunction(0x1D86B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D86B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215464u; }
        if (ctx->pc != 0x215464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d86b8_0x1d8730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215464u; }
        if (ctx->pc != 0x215464u) { return; }
    }
    ctx->pc = 0x215464u;
    // 0x215464: 0x8e4301c0  lw          $v1, 0x1C0($s2)
    ctx->pc = 0x215464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x215468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21546c: 0x8e24cd58  lw          $a0, -0x32A8($s1)
    ctx->pc = 0x21546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x215470: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x215470u;
    SET_GPR_U32(ctx, 31, 0x215478u);
    ctx->pc = 0x215474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215470u;
            // 0x215474: 0x8465009c  lh          $a1, 0x9C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215478u; }
        if (ctx->pc != 0x215478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215478u; }
        if (ctx->pc != 0x215478u) { return; }
    }
    ctx->pc = 0x215478u;
    // 0x215478: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x215478u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21547c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21547Cu;
    {
        const bool branch_taken_0x21547c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x215480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21547Cu;
            // 0x215480: 0x8e24cd58  lw          $a0, -0x32A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21547c) {
            ctx->pc = 0x215494u;
            goto label_215494;
        }
    }
    ctx->pc = 0x215484u;
    // 0x215484: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x215484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x215488: 0x8445009c  lh          $a1, 0x9C($v0)
    ctx->pc = 0x215488u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x21548c: 0xc0762d0  jal         func_1D8B40
    ctx->pc = 0x21548Cu;
    SET_GPR_U32(ctx, 31, 0x215494u);
    ctx->pc = 0x215490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21548Cu;
            // 0x215490: 0x8e4601cc  lw          $a2, 0x1CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B40u;
    if (runtime->hasFunction(0x1D8B40u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215494u; }
        if (ctx->pc != 0x215494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B40_0x1d8b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215494u; }
        if (ctx->pc != 0x215494u) { return; }
    }
    ctx->pc = 0x215494u;
label_215494:
    // 0x215494: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_215498:
    // 0x215498: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21549c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x21549cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2154a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2154a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2154a4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2154A4u;
    {
        const bool branch_taken_0x2154a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154A4u;
            // 0x2154a8: 0xae4301f0  sw          $v1, 0x1F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154a4) {
            ctx->pc = 0x215730u;
            goto label_215730;
        }
    }
    ctx->pc = 0x2154ACu;
label_2154ac:
    // 0x2154ac: 0xc085404  jal         func_215010
    ctx->pc = 0x2154ACu;
    SET_GPR_U32(ctx, 31, 0x2154B4u);
    ctx->pc = 0x2154B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154ACu;
            // 0x2154b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215010u;
    if (runtime->hasFunction(0x215010u)) {
        auto targetFn = runtime->lookupFunction(0x215010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154B4u; }
        if (ctx->pc != 0x2154B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00215010_0x215010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154B4u; }
        if (ctx->pc != 0x2154B4u) { return; }
    }
    ctx->pc = 0x2154B4u;
    // 0x2154b4: 0x8e430190  lw          $v1, 0x190($s2)
    ctx->pc = 0x2154b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x2154b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2154b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2154bc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2154BCu;
    {
        const bool branch_taken_0x2154bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2154bc) {
            ctx->pc = 0x2154F8u;
            goto label_2154f8;
        }
    }
    ctx->pc = 0x2154C4u;
    // 0x2154c4: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x2154c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x2154c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2154c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2154cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2154CCu;
    {
        const bool branch_taken_0x2154cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154CCu;
            // 0x2154d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154cc) {
            ctx->pc = 0x2154E8u;
            goto label_2154e8;
        }
    }
    ctx->pc = 0x2154D4u;
    // 0x2154d4: 0x8e4301d0  lw          $v1, 0x1D0($s2)
    ctx->pc = 0x2154d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x2154d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2154D8u;
    {
        const bool branch_taken_0x2154d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2154DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154D8u;
            // 0x2154dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154d8) {
            ctx->pc = 0x2154E8u;
            goto label_2154e8;
        }
    }
    ctx->pc = 0x2154E0u;
    // 0x2154e0: 0xc085224  jal         func_214890
    ctx->pc = 0x2154E0u;
    SET_GPR_U32(ctx, 31, 0x2154E8u);
    ctx->pc = 0x2154E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154E0u;
            // 0x2154e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154E8u; }
        if (ctx->pc != 0x2154E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154E8u; }
        if (ctx->pc != 0x2154E8u) { return; }
    }
    ctx->pc = 0x2154E8u;
label_2154e8:
    // 0x2154e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2154e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2154ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2154ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2154f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2154F0u;
    {
        const bool branch_taken_0x2154f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154F0u;
            // 0x2154f4: 0xe64001e0  swc1        $f0, 0x1E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f0) {
            ctx->pc = 0x215538u;
            goto label_215538;
        }
    }
    ctx->pc = 0x2154F8u;
label_2154f8:
    // 0x2154f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2154f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2154fc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2154fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215500: 0x0  nop
    ctx->pc = 0x215500u;
    // NOP
    // 0x215504: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x215504u;
    {
        const bool branch_taken_0x215504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215504u;
            // 0x215508: 0x8e4201d0  lw          $v0, 0x1D0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215504) {
            ctx->pc = 0x21553Cu;
            goto label_21553c;
        }
    }
    ctx->pc = 0x21550Cu;
    // 0x21550c: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x21550Cu;
    {
        const bool branch_taken_0x21550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21550c) {
            ctx->pc = 0x215510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21550Cu;
            // 0x215510: 0xc64e01e0  lwc1        $f14, 0x1E0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x215690u;
            goto label_215690;
        }
    }
    ctx->pc = 0x215514u;
    // 0x215514: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x215518: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x215518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x21551c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x215520: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x215520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x215524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215528: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x21552c: 0xe64001e0  swc1        $f0, 0x1E0($s2)
    ctx->pc = 0x21552cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
    // 0x215530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x215534: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x215534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
label_215538:
    // 0x215538: 0x8e4201d0  lw          $v0, 0x1D0($s2)
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 464)));
label_21553c:
    // 0x21553c: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x21553Cu;
    {
        const bool branch_taken_0x21553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21553c) {
            ctx->pc = 0x215540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21553Cu;
            // 0x215540: 0xc64e01e0  lwc1        $f14, 0x1E0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x215690u;
            goto label_215690;
        }
    }
    ctx->pc = 0x215544u;
    // 0x215544: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x215544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215548: 0x0  nop
    ctx->pc = 0x215548u;
    // NOP
    // 0x21554c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x21554Cu;
    {
        const bool branch_taken_0x21554c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21554c) {
            ctx->pc = 0x215550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21554Cu;
            // 0x215550: 0x8e4201f0  lw          $v0, 0x1F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215570u;
            goto label_215570;
        }
    }
    ctx->pc = 0x215554u;
    // 0x215554: 0xc64101e0  lwc1        $f1, 0x1E0($s2)
    ctx->pc = 0x215554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21555c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21555cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215560: 0x0  nop
    ctx->pc = 0x215560u;
    // NOP
    // 0x215564: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x215564u;
    {
        const bool branch_taken_0x215564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x215568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215564u;
            // 0x215568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215564) {
            ctx->pc = 0x21557Cu;
            goto label_21557c;
        }
    }
    ctx->pc = 0x21556Cu;
    // 0x21556c: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x21556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_215570:
    // 0x215570: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x215570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x215574: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x215574u;
    {
        const bool branch_taken_0x215574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215574u;
            // 0x215578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215574) {
            ctx->pc = 0x21568Cu;
            goto label_21568c;
        }
    }
    ctx->pc = 0x21557Cu;
label_21557c:
    // 0x21557c: 0xc085224  jal         func_214890
    ctx->pc = 0x21557Cu;
    SET_GPR_U32(ctx, 31, 0x215584u);
    ctx->pc = 0x215580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21557Cu;
            // 0x215580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215584u; }
        if (ctx->pc != 0x215584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215584u; }
        if (ctx->pc != 0x215584u) { return; }
    }
    ctx->pc = 0x215584u;
    // 0x215584: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x215584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215588: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x215588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x21558c: 0x8e4301d8  lw          $v1, 0x1D8($s2)
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x215590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215598: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x215598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x21559c: 0xae4401f0  sw          $a0, 0x1F0($s2)
    ctx->pc = 0x21559cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 4));
    // 0x2155a0: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x2155a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2155a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2155A4u;
    {
        const bool branch_taken_0x2155a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155A4u;
            // 0x2155a8: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155a4) {
            ctx->pc = 0x2155B4u;
            goto label_2155b4;
        }
    }
    ctx->pc = 0x2155ACu;
    // 0x2155ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2155ACu;
    {
        const bool branch_taken_0x2155ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155ACu;
            // 0x2155b0: 0x2413000f  addiu       $s3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155ac) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155B4u;
label_2155b4:
    // 0x2155b4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2155b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2155b8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2155B8u;
    {
        const bool branch_taken_0x2155b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2155b8) {
            ctx->pc = 0x2155BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2155B8u;
            // 0x2155bc: 0x8e4201c0  lw          $v0, 0x1C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2155C8u;
            goto label_2155c8;
        }
    }
    ctx->pc = 0x2155C0u;
    // 0x2155c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2155C0u;
    {
        const bool branch_taken_0x2155c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2155C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155C0u;
            // 0x2155c4: 0x24130007  addiu       $s3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155c0) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155C8u;
label_2155c8:
    // 0x2155c8: 0x8445009c  lh          $a1, 0x9C($v0)
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2155cc: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2155CCu;
    {
        const bool branch_taken_0x2155cc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2155D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155CCu;
            // 0x2155d0: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155cc) {
            ctx->pc = 0x2155FCu;
            goto label_2155fc;
        }
    }
    ctx->pc = 0x2155D4u;
    // 0x2155d4: 0xc0761ae  jal         func_1D86B8
    ctx->pc = 0x2155D4u;
    SET_GPR_U32(ctx, 31, 0x2155DCu);
    ctx->pc = 0x2155D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2155D4u;
            // 0x2155d8: 0x8e24cd58  lw          $a0, -0x32A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D86B8u;
    if (runtime->hasFunction(0x1D86B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D86B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155DCu; }
        if (ctx->pc != 0x2155DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d86b8_0x1d8730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155DCu; }
        if (ctx->pc != 0x2155DCu) { return; }
    }
    ctx->pc = 0x2155DCu;
    // 0x2155dc: 0x8e4301c0  lw          $v1, 0x1C0($s2)
    ctx->pc = 0x2155dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x2155e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2155e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155e4: 0x8e24cd58  lw          $a0, -0x32A8($s1)
    ctx->pc = 0x2155e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x2155e8: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x2155E8u;
    SET_GPR_U32(ctx, 31, 0x2155F0u);
    ctx->pc = 0x2155ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2155E8u;
            // 0x2155ec: 0x8465009c  lh          $a1, 0x9C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155F0u; }
        if (ctx->pc != 0x2155F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2155F0u; }
        if (ctx->pc != 0x2155F0u) { return; }
    }
    ctx->pc = 0x2155F0u;
    // 0x2155f0: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2155f0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2155f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2155f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2155f8: 0x50980a  movz        $s3, $v0, $s0
    ctx->pc = 0x2155f8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_2155fc:
    // 0x2155fc: 0x6630016  bgezl       $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2155FCu;
    {
        const bool branch_taken_0x2155fc = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x2155fc) {
            ctx->pc = 0x215600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2155FCu;
            // 0x215600: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215658u;
            goto label_215658;
        }
    }
    ctx->pc = 0x215604u;
    // 0x215604: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x215604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x215608: 0x9482009e  lhu         $v0, 0x9E($a0)
    ctx->pc = 0x215608u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 158)));
    // 0x21560c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x21560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x215610: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x215610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x215614: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x215614u;
    {
        const bool branch_taken_0x215614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215614u;
            // 0x215618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215614) {
            ctx->pc = 0x21563Cu;
            goto label_21563c;
        }
    }
    ctx->pc = 0x21561Cu;
    // 0x21561c: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x21561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x215620: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215624: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215624u;
    {
        const bool branch_taken_0x215624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215624) {
            ctx->pc = 0x215628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215624u;
            // 0x215628: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21562Cu;
            goto label_21562c;
        }
    }
    ctx->pc = 0x21562Cu;
label_21562c:
    // 0x21562c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x21562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x215630: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x215630u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x215634: 0x1010  mfhi        $v0
    ctx->pc = 0x215634u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x215638: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x215638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21563c:
    // 0x21563c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21563cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x215640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x215640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x215644: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x215644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x215648: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x215648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21564c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x21564cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x215650: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215650u;
    {
        const bool branch_taken_0x215650 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x215654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215650u;
            // 0x215654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215650) {
            ctx->pc = 0x215660u;
            goto label_215660;
        }
    }
    ctx->pc = 0x215658u;
label_215658:
    // 0x215658: 0xc085480  jal         func_215200
    ctx->pc = 0x215658u;
    SET_GPR_U32(ctx, 31, 0x215660u);
    ctx->pc = 0x21565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215658u;
            // 0x21565c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x215200u;
    runtime->cooperativeGuestYield();
    goto label_215200;
    ctx->pc = 0x215660u;
label_215660:
    // 0x215660: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x215664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21566c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x21566cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x215670: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x215670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x215674: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x215678: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x215678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x21567c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21567cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x215680: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x215680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
    // 0x215684: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x215684u;
    {
        const bool branch_taken_0x215684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215684u;
            // 0x215688: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215684) {
            ctx->pc = 0x215728u;
            goto label_215728;
        }
    }
    ctx->pc = 0x21568Cu;
label_21568c:
    // 0x21568c: 0xc64e01e0  lwc1        $f14, 0x1E0($s2)
    ctx->pc = 0x21568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_215690:
    // 0x215690: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x215690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x215694: 0x46157034  c.lt.s      $f14, $f21
    ctx->pc = 0x215694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215698: 0x0  nop
    ctx->pc = 0x215698u;
    // NOP
    // 0x21569c: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x21569Cu;
    {
        const bool branch_taken_0x21569c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21569c) {
            ctx->pc = 0x2156A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21569Cu;
            // 0x2156a0: 0x8e4201d8  lw          $v0, 0x1D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215714u;
            goto label_215714;
        }
    }
    ctx->pc = 0x2156A4u;
    // 0x2156a4: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x2156a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2156a8: 0x0  nop
    ctx->pc = 0x2156a8u;
    // NOP
    // 0x2156ac: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2156ACu;
    {
        const bool branch_taken_0x2156ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2156B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156ACu;
            // 0x2156b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156ac) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x2156B4u;
    // 0x2156b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2156b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2156b8: 0x3c058040  lui         $a1, 0x8040
    ctx->pc = 0x2156b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32832 << 16));
    // 0x2156bc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2156bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2156c0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2156c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2156c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2156c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156c8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2156c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2156cc: 0xc085362  jal         func_214D88
    ctx->pc = 0x2156CCu;
    SET_GPR_U32(ctx, 31, 0x2156D4u);
    ctx->pc = 0x2156D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2156CCu;
            // 0x2156d0: 0xac6200f4  sw          $v0, 0xF4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214D88u;
    if (runtime->hasFunction(0x214D88u)) {
        auto targetFn = runtime->lookupFunction(0x214D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156D4u; }
        if (ctx->pc != 0x2156D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_214d88_0x214e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156D4u; }
        if (ctx->pc != 0x2156D4u) { return; }
    }
    ctx->pc = 0x2156D4u;
    // 0x2156d4: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x2156d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x2156d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2156d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2156dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2156DCu;
    {
        const bool branch_taken_0x2156dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156DCu;
            // 0x2156e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156dc) {
            ctx->pc = 0x2156FCu;
            goto label_2156fc;
        }
    }
    ctx->pc = 0x2156E4u;
    // 0x2156e4: 0xc085224  jal         func_214890
    ctx->pc = 0x2156E4u;
    SET_GPR_U32(ctx, 31, 0x2156ECu);
    ctx->pc = 0x2156E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2156E4u;
            // 0x2156e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156ECu; }
        if (ctx->pc != 0x2156ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156ECu; }
        if (ctx->pc != 0x2156ECu) { return; }
    }
    ctx->pc = 0x2156ECu;
    // 0x2156ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2156f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2156f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2156f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2156F4u;
    {
        const bool branch_taken_0x2156f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156F4u;
            // 0x2156f8: 0xe64001e0  swc1        $f0, 0x1E0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156f4) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x2156FCu;
label_2156fc:
    // 0x2156fc: 0xe65501e0  swc1        $f21, 0x1E0($s2)
    ctx->pc = 0x2156fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 480), bits); }
label_215700:
    // 0x215700: 0xc64001e0  lwc1        $f0, 0x1E0($s2)
    ctx->pc = 0x215700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215708: 0x8e4301d8  lw          $v1, 0x1D8($s2)
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x21570c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21570Cu;
    {
        const bool branch_taken_0x21570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21570Cu;
            // 0x215710: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21570c) {
            ctx->pc = 0x215734u;
            goto label_215734;
        }
    }
    ctx->pc = 0x215714u;
label_215714:
    // 0x215714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x215718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21571c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x21571cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x215720: 0xe44e003c  swc1        $f14, 0x3C($v0)
    ctx->pc = 0x215720u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x215724: 0xc48e01e0  lwc1        $f14, 0x1E0($a0)
    ctx->pc = 0x215724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_215728:
    // 0x215728: 0xc085362  jal         func_214D88
    ctx->pc = 0x215728u;
    SET_GPR_U32(ctx, 31, 0x215730u);
    ctx->pc = 0x214D88u;
    if (runtime->hasFunction(0x214D88u)) {
        auto targetFn = runtime->lookupFunction(0x214D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215730u; }
        if (ctx->pc != 0x215730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_214d88_0x214e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215730u; }
        if (ctx->pc != 0x215730u) { return; }
    }
    ctx->pc = 0x215730u;
label_215730:
    // 0x215730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215734:
    // 0x215734: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x215734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215738: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x215738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21573c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21573cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215740: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x215740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215748: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x215748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21574c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x21574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x215750: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x215750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x215754: 0x3e00008  jr          $ra
    ctx->pc = 0x215754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215754u;
            // 0x215758: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215200u: goto label_215200;
            case 0x21523Cu: goto label_21523c;
            case 0x2152FCu: goto label_2152fc;
            case 0x215308u: goto label_215308;
            case 0x21532Cu: goto label_21532c;
            case 0x215370u: goto label_215370;
            case 0x2153B0u: goto label_2153b0;
            case 0x2153BCu: goto label_2153bc;
            case 0x215400u: goto label_215400;
            case 0x215494u: goto label_215494;
            case 0x215498u: goto label_215498;
            case 0x2154ACu: goto label_2154ac;
            case 0x2154E8u: goto label_2154e8;
            case 0x2154F8u: goto label_2154f8;
            case 0x215538u: goto label_215538;
            case 0x21553Cu: goto label_21553c;
            case 0x215570u: goto label_215570;
            case 0x21557Cu: goto label_21557c;
            case 0x2155B4u: goto label_2155b4;
            case 0x2155C8u: goto label_2155c8;
            case 0x2155FCu: goto label_2155fc;
            case 0x21562Cu: goto label_21562c;
            case 0x21563Cu: goto label_21563c;
            case 0x215658u: goto label_215658;
            case 0x215660u: goto label_215660;
            case 0x21568Cu: goto label_21568c;
            case 0x215690u: goto label_215690;
            case 0x2156FCu: goto label_2156fc;
            case 0x215700u: goto label_215700;
            case 0x215714u: goto label_215714;
            case 0x215728u: goto label_215728;
            case 0x215730u: goto label_215730;
            case 0x215734u: goto label_215734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21575Cu;
    // 0x21575c: 0x0  nop
    ctx->pc = 0x21575cu;
    // NOP
}
