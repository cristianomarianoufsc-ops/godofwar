#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001362E8
// Address: 0x1362e8 - 0x136490
void sub_001362E8_0x1362e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001362E8_0x1362e8");
#endif

    ctx->pc = 0x1362e8u;

    // 0x1362e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1362e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1362ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1362ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1362f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1362f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1362f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1362f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1362f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1362f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1362fc: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1362fcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x136300: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x136300u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x136304: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x136304u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136308: 0x4be21b3d  vmr32.xyzw  $vf2, $vf3
    ctx->pc = 0x136308u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x13630c: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x13630cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136310: 0x4be4133d  vmr32.xyzw  $vf4, $vf2
    ctx->pc = 0x136310u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x136314: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x136314u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136318: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x136318u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13631c: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x13631cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    // 0x136320: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x136320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x136324: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x136324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x136328: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x136328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13632c: 0x38180  sll         $s0, $v1, 6
    ctx->pc = 0x13632cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x136330: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x136330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x136334: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x136334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136338: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x136338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13633c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x13633cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136340: 0xa623005c  sh          $v1, 0x5C($s1)
    ctx->pc = 0x136340u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x136344: 0xc04f824  jal         func_13E090
    ctx->pc = 0x136344u;
    SET_GPR_U32(ctx, 31, 0x13634Cu);
    ctx->pc = 0x136348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136344u;
            // 0x136348: 0xae26004c  sw          $a2, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13634Cu; }
        if (ctx->pc != 0x13634Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13634Cu; }
        if (ctx->pc != 0x13634Cu) { return; }
    }
    ctx->pc = 0x13634Cu;
    // 0x13634c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136354: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x136354u;
    SET_GPR_U32(ctx, 31, 0x13635Cu);
    ctx->pc = 0x136358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136354u;
            // 0x136358: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13635Cu; }
        if (ctx->pc != 0x13635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13635Cu; }
        if (ctx->pc != 0x13635Cu) { return; }
    }
    ctx->pc = 0x13635Cu;
    // 0x13635c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x136360: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x136360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x136364: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x136364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x136368: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x136368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13636c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13636Cu;
    {
        const bool branch_taken_0x13636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13636Cu;
            // 0x136370: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13636c) {
            ctx->pc = 0x1363CCu;
            goto label_1363cc;
        }
    }
    ctx->pc = 0x136374u;
    // 0x136374: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x136374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x136378: 0xc04f824  jal         func_13E090
    ctx->pc = 0x136378u;
    SET_GPR_U32(ctx, 31, 0x136380u);
    ctx->pc = 0x13637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136378u;
            // 0x13637c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136380u; }
        if (ctx->pc != 0x136380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136380u; }
        if (ctx->pc != 0x136380u) { return; }
    }
    ctx->pc = 0x136380u;
    // 0x136380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136388: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x136388u;
    SET_GPR_U32(ctx, 31, 0x136390u);
    ctx->pc = 0x13638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136388u;
            // 0x13638c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136390u; }
        if (ctx->pc != 0x136390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136390u; }
        if (ctx->pc != 0x136390u) { return; }
    }
    ctx->pc = 0x136390u;
    // 0x136390: 0x9623005c  lhu         $v1, 0x5C($s1)
    ctx->pc = 0x136390u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x136394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136398: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x136398u;
    {
        const bool branch_taken_0x136398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136398u;
            // 0x13639c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136398) {
            ctx->pc = 0x1363CCu;
            goto label_1363cc;
        }
    }
    ctx->pc = 0x1363A0u;
    // 0x1363a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1363a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1363a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1363a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1363ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1363b0:
    // 0x1363b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1363b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1363b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1363b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1363b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1363b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1363bc: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1363bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1363c0: 0x0  nop
    ctx->pc = 0x1363c0u;
    // NOP
    // 0x1363c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1363C4u;
    {
        const bool branch_taken_0x1363c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1363C4u;
            // 0x1363c8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363c4) {
            ctx->pc = 0x1363B0u;
            runtime->cooperativeGuestYield();
            goto label_1363b0;
        }
    }
    ctx->pc = 0x1363CCu;
label_1363cc:
    // 0x1363cc: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1363ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1363d0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1363d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1363d4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1363d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1363d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363dc: 0x2c430101  sltiu       $v1, $v0, 0x101
    ctx->pc = 0x1363dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x1363e0: 0xfe200040  sd          $zero, 0x40($s1)
    ctx->pc = 0x1363e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 0));
    // 0x1363e4: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1363e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1363e8: 0x8c87003c  lw          $a3, 0x3C($a0)
    ctx->pc = 0x1363e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1363ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1363ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1363f0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1363f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1363f4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1363f8: 0xa6270086  sh          $a3, 0x86($s1)
    ctx->pc = 0x1363f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 7));
    // 0x1363fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1363fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x136400: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x136400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x136404: 0xa6220084  sh          $v0, 0x84($s1)
    ctx->pc = 0x136404u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x136408: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x136408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x13640c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x13640cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x136410: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x136414: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x136414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x136418: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13641c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136420: 0x96290084  lhu         $t1, 0x84($s1)
    ctx->pc = 0x136420u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x136424: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x136424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136428: 0xae260090  sw          $a2, 0x90($s1)
    ctx->pc = 0x136428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 6));
    // 0x13642c: 0xae250098  sw          $a1, 0x98($s1)
    ctx->pc = 0x13642cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 5));
    // 0x136430: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x136430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
    // 0x136434: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x136434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x136438: 0x1120000b  beqz        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x136438u;
    {
        const bool branch_taken_0x136438 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x13643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136438u;
            // 0x13643c: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136438) {
            ctx->pc = 0x136468u;
            goto label_136468;
        }
    }
    ctx->pc = 0x136440u;
    // 0x136440: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x136440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136444: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_136448:
    // 0x136448: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x136448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x13644c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x136450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x136450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x136454: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x136454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x136458: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x136458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x13645c: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x13645cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x136460: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x136460u;
    {
        const bool branch_taken_0x136460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136460u;
            // 0x136464: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136460) {
            ctx->pc = 0x136448u;
            runtime->cooperativeGuestYield();
            goto label_136448;
        }
    }
    ctx->pc = 0x136468u;
label_136468:
    // 0x136468: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x136468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13646c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x13646cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x136470: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x136470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x136474: 0xa620005e  sh          $zero, 0x5E($s1)
    ctx->pc = 0x136474u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x136478: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x136478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13647c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x13647cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136480: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136484: 0x3e00008  jr          $ra
    ctx->pc = 0x136484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136484u;
            // 0x136488: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1363B0u: goto label_1363b0;
            case 0x1363CCu: goto label_1363cc;
            case 0x136448u: goto label_136448;
            case 0x136468u: goto label_136468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13648Cu;
    // 0x13648c: 0x0  nop
    ctx->pc = 0x13648cu;
    // NOP
}
