#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214958
// Address: 0x214958 - 0x214b58
void sub_00214958_0x214958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214958_0x214958");
#endif

    ctx->pc = 0x214958u;

    // 0x214958: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x214958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x21495c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x21495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x214960: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x214960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x214964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214968: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x214968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x21496c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214970: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x214970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x214974: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x214974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214978: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x214978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21497c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214980: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x214980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x214984: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x214984u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_214988:
    // 0x214988: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x214988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21498c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21498cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x214990: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x214990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x214994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x214994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x214998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x214998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21499c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21499Cu;
    {
        const bool branch_taken_0x21499c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21499Cu;
            // 0x2149a0: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21499c) {
            ctx->pc = 0x214988u;
            runtime->cooperativeGuestYield();
            goto label_214988;
        }
    }
    ctx->pc = 0x2149A4u;
    // 0x2149a4: 0xc077988  jal         func_1DE620
    ctx->pc = 0x2149A4u;
    SET_GPR_U32(ctx, 31, 0x2149ACu);
    ctx->pc = 0x2149A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2149A4u;
            // 0x2149a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE620u;
    if (runtime->hasFunction(0x1DE620u)) {
        auto targetFn = runtime->lookupFunction(0x1DE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2149ACu; }
        if (ctx->pc != 0x2149ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE620_0x1de620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2149ACu; }
        if (ctx->pc != 0x2149ACu) { return; }
    }
    ctx->pc = 0x2149ACu;
    // 0x2149ac: 0x8e530104  lw          $s3, 0x104($s2)
    ctx->pc = 0x2149acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2149b0: 0xae1101c0  sw          $s1, 0x1C0($s0)
    ctx->pc = 0x2149b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 17));
    // 0x2149b4: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2149b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2149b8: 0xae0501d8  sw          $a1, 0x1D8($s0)
    ctx->pc = 0x2149b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 5));
    // 0x2149bc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x2149bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2149c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2149c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2149c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2149C4u;
    {
        const bool branch_taken_0x2149c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2149c4) {
            ctx->pc = 0x2149C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2149C4u;
            // 0x2149c8: 0x7a450020  lq          $a1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214A00u;
            goto label_214a00;
        }
    }
    ctx->pc = 0x2149CCu;
    // 0x2149cc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2149ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2149d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2149d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2149d4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2149d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2149d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2149d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2149dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2149dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2149e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2149e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2149e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2149e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2149e8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2149e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2149ec: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2149ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2149f0: 0x40f809  jalr        $v0
    ctx->pc = 0x2149F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2149F8u);
        ctx->pc = 0x2149F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2149F0u;
            // 0x2149f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2149F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214988u: goto label_214988;
            case 0x214A00u: goto label_214a00;
            case 0x214A54u: goto label_214a54;
            case 0x214A7Cu: goto label_214a7c;
            case 0x214B18u: goto label_214b18;
            case 0x214B20u: goto label_214b20;
            case 0x214B24u: goto label_214b24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2149F8u; }
            if (ctx->pc != 0x2149F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2149F8u;
    // 0x2149f8: 0x7a450020  lq          $a1, 0x20($s2)
    ctx->pc = 0x2149f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2149fc: 0x0  nop
    ctx->pc = 0x2149fcu;
    // NOP
label_214a00:
    // 0x214a00: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x214a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x214a04: 0x8e0601ac  lw          $a2, 0x1AC($s0)
    ctx->pc = 0x214a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x214a08: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x214a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x214a0c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x214a0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214a10: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x214a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x214a14: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x214a14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x214a18: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x214a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x214a1c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x214a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x214a20: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x214a20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
    // 0x214a24: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x214a24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x214a28: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x214a28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x214a2c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x214a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x214a30: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x214a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x214a34: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x214a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x214a38: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x214a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x214a3c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x214a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x214a40: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x214A40u;
    {
        const bool branch_taken_0x214a40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214A40u;
            // 0x214a44: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a40) {
            ctx->pc = 0x214A54u;
            goto label_214a54;
        }
    }
    ctx->pc = 0x214A48u;
    // 0x214a48: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x214a4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214a50: 0xe4c00140  swc1        $f0, 0x140($a2)
    ctx->pc = 0x214a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 320), bits); }
label_214a54:
    // 0x214a54: 0x8e0201dc  lw          $v0, 0x1DC($s0)
    ctx->pc = 0x214a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x214a58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x214A58u;
    {
        const bool branch_taken_0x214a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214a58) {
            ctx->pc = 0x214A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214A58u;
            // 0x214a5c: 0x8e0401dc  lw          $a0, 0x1DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214A7Cu;
            goto label_214a7c;
        }
    }
    ctx->pc = 0x214A60u;
    // 0x214a60: 0xc07ff7a  jal         func_1FFDE8
    ctx->pc = 0x214A60u;
    SET_GPR_U32(ctx, 31, 0x214A68u);
    ctx->pc = 0x214A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214A60u;
            // 0x214a64: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDE8u;
    if (runtime->hasFunction(0x1FFDE8u)) {
        auto targetFn = runtime->lookupFunction(0x1FFDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A68u; }
        if (ctx->pc != 0x214A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFDE8_0x1ffde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A68u; }
        if (ctx->pc != 0x214A68u) { return; }
    }
    ctx->pc = 0x214A68u;
    // 0x214a68: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x214a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x214a6c: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x214a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x214a70: 0x24638a18  addiu       $v1, $v1, -0x75E8
    ctx->pc = 0x214a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937112));
    // 0x214a74: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x214a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x214a78: 0x8e0401dc  lw          $a0, 0x1DC($s0)
    ctx->pc = 0x214a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
label_214a7c:
    // 0x214a7c: 0xc07ffaa  jal         func_1FFEA8
    ctx->pc = 0x214A7Cu;
    SET_GPR_U32(ctx, 31, 0x214A84u);
    ctx->pc = 0x214A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214A7Cu;
            // 0x214a80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFEA8u;
    if (runtime->hasFunction(0x1FFEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FFEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A84u; }
        if (ctx->pc != 0x214A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ffea8_0x1fffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214A84u; }
        if (ctx->pc != 0x214A84u) { return; }
    }
    ctx->pc = 0x214A84u;
    // 0x214a84: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x214a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x214a88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214a8c: 0xae0201f0  sw          $v0, 0x1F0($s0)
    ctx->pc = 0x214a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 2));
    // 0x214a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a94: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x214a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x214a98: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x214a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x214a9c: 0x40f809  jalr        $v0
    ctx->pc = 0x214A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214AA4u);
        ctx->pc = 0x214AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214A9Cu;
            // 0x214aa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214AA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214988u: goto label_214988;
            case 0x214A00u: goto label_214a00;
            case 0x214A54u: goto label_214a54;
            case 0x214A7Cu: goto label_214a7c;
            case 0x214B18u: goto label_214b18;
            case 0x214B20u: goto label_214b20;
            case 0x214B24u: goto label_214b24;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214AA4u; }
            if (ctx->pc != 0x214AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x214AA4u;
    // 0x214aa4: 0x32827fff  andi        $v0, $s4, 0x7FFF
    ctx->pc = 0x214aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32767);
    // 0x214aa8: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x214aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x214aac: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x214aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
    // 0x214ab0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x214ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214ab4: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x214ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x214ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214abc: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x214abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x214ac0: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x214ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x214ac4: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x214ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x214ac8: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x214ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x214acc: 0x8442009e  lh          $v0, 0x9E($v0)
    ctx->pc = 0x214accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 158)));
    // 0x214ad0: 0xae0301e8  sw          $v1, 0x1E8($s0)
    ctx->pc = 0x214ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 3));
    // 0x214ad4: 0xc0852d6  jal         func_214B58
    ctx->pc = 0x214AD4u;
    SET_GPR_U32(ctx, 31, 0x214ADCu);
    ctx->pc = 0x214AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214AD4u;
            // 0x214ad8: 0xae0201e4  sw          $v0, 0x1E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214B58u;
    if (runtime->hasFunction(0x214B58u)) {
        auto targetFn = runtime->lookupFunction(0x214B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214ADCu; }
        if (ctx->pc != 0x214ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214B58_0x214b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214ADCu; }
        if (ctx->pc != 0x214ADCu) { return; }
    }
    ctx->pc = 0x214ADCu;
    // 0x214adc: 0x32828000  andi        $v0, $s4, 0x8000
    ctx->pc = 0x214adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
    // 0x214ae0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x214AE0u;
    {
        const bool branch_taken_0x214ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214ae0) {
            ctx->pc = 0x214AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214AE0u;
            // 0x214ae4: 0x8e0201f0  lw          $v0, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214B18u;
            goto label_214b18;
        }
    }
    ctx->pc = 0x214AE8u;
    // 0x214ae8: 0x920201f4  lbu         $v0, 0x1F4($s0)
    ctx->pc = 0x214ae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x214aec: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x214AECu;
    {
        const bool branch_taken_0x214aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214aec) {
            ctx->pc = 0x214AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214AECu;
            // 0x214af0: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214B24u;
            goto label_214b24;
        }
    }
    ctx->pc = 0x214AF4u;
    // 0x214af4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214af8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x214af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x214afc: 0xc06d1b6  jal         func_1B46D8
    ctx->pc = 0x214AFCu;
    SET_GPR_U32(ctx, 31, 0x214B04u);
    ctx->pc = 0x214B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214AFCu;
            // 0x214b00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B46D8u;
    if (runtime->hasFunction(0x1B46D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B46D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B04u; }
        if (ctx->pc != 0x214B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B46D8_0x1b46d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B04u; }
        if (ctx->pc != 0x214B04u) { return; }
    }
    ctx->pc = 0x214B04u;
    // 0x214b04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x214B04u;
    {
        const bool branch_taken_0x214b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214B04u;
            // 0x214b08: 0x93a20080  lbu         $v0, 0x80($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b04) {
            ctx->pc = 0x214B20u;
            goto label_214b20;
        }
    }
    ctx->pc = 0x214B0Cu;
    // 0x214b0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x214B0Cu;
    {
        const bool branch_taken_0x214b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214b0c) {
            ctx->pc = 0x214B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214B0Cu;
            // 0x214b10: 0x8e030174  lw          $v1, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214B24u;
            goto label_214b24;
        }
    }
    ctx->pc = 0x214B14u;
    // 0x214b14: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x214b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_214b18:
    // 0x214b18: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x214b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x214b1c: 0xae0201f0  sw          $v0, 0x1F0($s0)
    ctx->pc = 0x214b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 2));
label_214b20:
    // 0x214b20: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x214b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_214b24:
    // 0x214b24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x214b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x214b28: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x214b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x214b2c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x214b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x214b30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x214b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x214b34: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x214b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x214b38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x214b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x214b3c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x214b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x214b40: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x214b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x214b44: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x214b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x214b48: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x214b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x214b4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x214b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214b50: 0x3e00008  jr          $ra
    ctx->pc = 0x214B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214B50u;
            // 0x214b54: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214988u: goto label_214988;
            case 0x214A00u: goto label_214a00;
            case 0x214A54u: goto label_214a54;
            case 0x214A7Cu: goto label_214a7c;
            case 0x214B18u: goto label_214b18;
            case 0x214B20u: goto label_214b20;
            case 0x214B24u: goto label_214b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214B58u;
}
