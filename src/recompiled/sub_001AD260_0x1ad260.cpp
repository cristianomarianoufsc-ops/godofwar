#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD260
// Address: 0x1ad260 - 0x1ad8d0
void sub_001AD260_0x1ad260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD260_0x1ad260");
#endif

    ctx->pc = 0x1ad260u;

    // 0x1ad260: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ad260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ad264: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ad264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1ad268: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ad268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1ad26c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ad26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad270: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1ad270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1ad274: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ad274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad278: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1ad278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1ad27c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ad27cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad280: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ad280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1ad284: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1ad284u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad288: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ad288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1ad28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad290: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ad290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1ad294: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ad294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ad298: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1ad298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1ad29c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ad29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad2a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ad2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ad2a4: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x1ad2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x1ad2a8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1ad2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1ad2ac: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x1ad2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x1ad2b0: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1ad2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x1ad2b4: 0x17c00002  bnez        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD2B4u;
    {
        const bool branch_taken_0x1ad2b4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2B4u;
            // 0x1ad2b8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2b4) {
            ctx->pc = 0x1AD2C0u;
            goto label_1ad2c0;
        }
    }
    ctx->pc = 0x1AD2BCu;
    // 0x1ad2bc: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1ad2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1ad2c0:
    // 0x1ad2c0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD2C0u;
    {
        const bool branch_taken_0x1ad2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2C0u;
            // 0x1ad2c4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2c0) {
            ctx->pc = 0x1AD2E8u;
            goto label_1ad2e8;
        }
    }
    ctx->pc = 0x1AD2C8u;
    // 0x1ad2c8: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1ad2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ad2cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad2d0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1ad2d4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1ad2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1ad2d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD2E0u);
        ctx->pc = 0x1AD2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2D8u;
            // 0x1ad2dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD2E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2E0u; }
            if (ctx->pc != 0x1AD2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD2E0u;
    // 0x1ad2e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD2E0u;
    {
        const bool branch_taken_0x1ad2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2E0u;
            // 0x1ad2e4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2e0) {
            ctx->pc = 0x1AD2ECu;
            goto label_1ad2ec;
        }
    }
    ctx->pc = 0x1AD2E8u;
label_1ad2e8:
    // 0x1ad2e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ad2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ad2ec:
    // 0x1ad2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad2f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ad2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ad2f4: 0x17c0000e  bnez        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x1AD2F4u;
    {
        const bool branch_taken_0x1ad2f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2F4u;
            // 0x1ad2f8: 0xac62cb08  sw          $v0, -0x34F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2f4) {
            ctx->pc = 0x1AD330u;
            goto label_1ad330;
        }
    }
    ctx->pc = 0x1AD2FCu;
    // 0x1ad2fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ad2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad300: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x1ad300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1ad304: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ad304u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad308: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ad308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ad30c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ad30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ad310: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ad314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad318: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad31c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad320: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1ad320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ad324: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ad324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ad328: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD330u);
        ctx->pc = 0x1AD32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD328u;
            // 0x1ad32c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD330u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD330u; }
            if (ctx->pc != 0x1AD330u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD330u;
label_1ad330:
    // 0x1ad330: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x1AD330u;
    SET_GPR_U32(ctx, 31, 0x1AD338u);
    ctx->pc = 0x1AD334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD330u;
            // 0x1ad334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD338u; }
        if (ctx->pc != 0x1AD338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD338u; }
        if (ctx->pc != 0x1AD338u) { return; }
    }
    ctx->pc = 0x1AD338u;
    // 0x1ad338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ad338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad33c: 0x12000109  beqz        $s0, . + 4 + (0x109 << 2)
    ctx->pc = 0x1AD33Cu;
    {
        const bool branch_taken_0x1ad33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad33c) {
            ctx->pc = 0x1AD764u;
            goto label_1ad764;
        }
    }
    ctx->pc = 0x1AD344u;
    // 0x1ad344: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD344u;
    {
        const bool branch_taken_0x1ad344 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD344u;
            // 0x1ad348: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad344) {
            ctx->pc = 0x1AD378u;
            goto label_1ad378;
        }
    }
    ctx->pc = 0x1AD34Cu;
    // 0x1ad34c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1ad34cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad350: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ad350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ad354: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ad354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ad358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad35c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad360: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad364: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad368: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1ad368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ad36c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1ad36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ad370: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD378u);
        ctx->pc = 0x1AD374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD370u;
            // 0x1ad374: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD378u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD378u; }
            if (ctx->pc != 0x1AD378u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD378u;
label_1ad378:
    // 0x1ad378: 0xc04c94c  jal         func_132530
    ctx->pc = 0x1AD378u;
    SET_GPR_U32(ctx, 31, 0x1AD380u);
    ctx->pc = 0x1AD37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD378u;
            // 0x1ad37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132530u;
    if (runtime->hasFunction(0x132530u)) {
        auto targetFn = runtime->lookupFunction(0x132530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD380u; }
        if (ctx->pc != 0x1AD380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132530_0x132530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD380u; }
        if (ctx->pc != 0x1AD380u) { return; }
    }
    ctx->pc = 0x1AD380u;
    // 0x1ad380: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ad380u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad384: 0x12e0009e  beqz        $s7, . + 4 + (0x9E << 2)
    ctx->pc = 0x1AD384u;
    {
        const bool branch_taken_0x1ad384 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad384) {
            ctx->pc = 0x1AD600u;
            goto label_1ad600;
        }
    }
    ctx->pc = 0x1AD38Cu;
    // 0x1ad38c: 0x96e20004  lhu         $v0, 0x4($s7)
    ctx->pc = 0x1ad38cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1ad390: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ad390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ad394: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD394u;
    {
        const bool branch_taken_0x1ad394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD394u;
            // 0x1ad398: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad394) {
            ctx->pc = 0x1AD3C8u;
            goto label_1ad3c8;
        }
    }
    ctx->pc = 0x1AD39Cu;
    // 0x1ad39c: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x1ad39cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ad3a0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ad3a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad3a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ad3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad3ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ad3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad3b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad3b8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ad3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ad3bc: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ad3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ad3c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD3C8u);
        ctx->pc = 0x1AD3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3C0u;
            // 0x1ad3c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD3C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3C8u; }
            if (ctx->pc != 0x1AD3C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD3C8u;
label_1ad3c8:
    // 0x1ad3c8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1ad3c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ad3cc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1ad3d0: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x1ad3d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x1ad3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3d8: 0x7ee20020  sq          $v0, 0x20($s7)
    ctx->pc = 0x1ad3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), GPR_VEC(ctx, 2));
    // 0x1ad3dc: 0x86e30060  lh          $v1, 0x60($s7)
    ctx->pc = 0x1ad3dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 96)));
    // 0x1ad3e0: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1ad3e4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x1ad3e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ad3e8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1ad3e8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1ad3ec: 0x7ee20030  sq          $v0, 0x30($s7)
    ctx->pc = 0x1ad3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), GPR_VEC(ctx, 2));
    // 0x1ad3f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3f4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1ad3f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1ad3f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ad3f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad3fc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1ad3fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ad400: 0x7ee20040  sq          $v0, 0x40($s7)
    ctx->pc = 0x1ad400u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 64), GPR_VEC(ctx, 2));
    // 0x1ad404: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x1ad404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ad408: 0x7ee20050  sq          $v0, 0x50($s7)
    ctx->pc = 0x1ad408u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 80), GPR_VEC(ctx, 2));
    // 0x1ad40c: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x1ad40cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x1ad410: 0xfee30068  sd          $v1, 0x68($s7)
    ctx->pc = 0x1ad410u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 104), GPR_U64(ctx, 3));
    // 0x1ad414: 0x0  nop
    ctx->pc = 0x1ad414u;
    // NOP
label_1ad418:
    // 0x1ad418: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ad418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ad41c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ad41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ad420: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ad420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ad424: 0x0  nop
    ctx->pc = 0x1ad424u;
    // NOP
    // 0x1ad428: 0x0  nop
    ctx->pc = 0x1ad428u;
    // NOP
    // 0x1ad42c: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AD42Cu;
    {
        const bool branch_taken_0x1ad42c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD42Cu;
            // 0x1ad430: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad42c) {
            ctx->pc = 0x1AD418u;
            runtime->cooperativeGuestYield();
            goto label_1ad418;
        }
    }
    ctx->pc = 0x1AD434u;
    // 0x1ad434: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1ad434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1ad438: 0x2462e848  addiu       $v0, $v1, -0x17B8
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1ad43c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ad43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ad440: 0xac5700d8  sw          $s7, 0xD8($v0)
    ctx->pc = 0x1ad440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 23));
    // 0x1ad444: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ad444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ad448: 0x8c42ecb4  lw          $v0, -0x134C($v0)
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962356)));
    // 0x1ad44c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad450: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1ad450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ad454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad458: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1ad458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1ad45c: 0x18800064  blez        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1AD45Cu;
    {
        const bool branch_taken_0x1ad45c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AD460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD45Cu;
            // 0x1ad460: 0x8c5400c0  lw          $s4, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad45c) {
            ctx->pc = 0x1AD5F0u;
            goto label_1ad5f0;
        }
    }
    ctx->pc = 0x1AD464u;
    // 0x1ad464: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1AD464u;
    {
        const bool branch_taken_0x1ad464 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD464u;
            // 0x1ad468: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad464) {
            ctx->pc = 0x1AD524u;
            goto label_1ad524;
        }
    }
    ctx->pc = 0x1AD46Cu;
    // 0x1ad46c: 0x8fb30010  lw          $s3, 0x10($sp)
    ctx->pc = 0x1ad46cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad470: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1ad470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ad474: 0x0  nop
    ctx->pc = 0x1ad474u;
    // NOP
label_1ad478:
    // 0x1ad478: 0x2682ffec  addiu       $v0, $s4, -0x14
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
    // 0x1ad47c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ad47cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad480: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1AD480u;
    SET_GPR_U32(ctx, 31, 0x1AD488u);
    ctx->pc = 0x1AD484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD480u;
            // 0x1ad484: 0x54b00b  movn        $s6, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD488u; }
        if (ctx->pc != 0x1AD488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD488u; }
        if (ctx->pc != 0x1AD488u) { return; }
    }
    ctx->pc = 0x1AD488u;
    // 0x1ad488: 0xc04e21c  jal         func_138870
    ctx->pc = 0x1AD488u;
    SET_GPR_U32(ctx, 31, 0x1AD490u);
    ctx->pc = 0x1AD48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD488u;
            // 0x1ad48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138870u;
    if (runtime->hasFunction(0x138870u)) {
        auto targetFn = runtime->lookupFunction(0x138870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD490u; }
        if (ctx->pc != 0x1AD490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138870_0x138870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD490u; }
        if (ctx->pc != 0x1AD490u) { return; }
    }
    ctx->pc = 0x1AD490u;
    // 0x1ad490: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad494: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ad494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad498: 0x8c44ca20  lw          $a0, -0x35E0($v0)
    ctx->pc = 0x1ad498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953504)));
    // 0x1ad49c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1AD49Cu;
    SET_GPR_U32(ctx, 31, 0x1AD4A4u);
    ctx->pc = 0x1AD4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD49Cu;
            // 0x1ad4a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4A4u; }
        if (ctx->pc != 0x1AD4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4A4u; }
        if (ctx->pc != 0x1AD4A4u) { return; }
    }
    ctx->pc = 0x1AD4A4u;
    // 0x1ad4a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ad4a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4a8: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x1ad4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1ad4ac: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x1ad4acu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ad4b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD4B0u;
    {
        const bool branch_taken_0x1ad4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4B0u;
            // 0x1ad4b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4b0) {
            ctx->pc = 0x1AD4C8u;
            goto label_1ad4c8;
        }
    }
    ctx->pc = 0x1AD4B8u;
    // 0x1ad4b8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1ad4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ad4bc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1AD4BCu;
    SET_GPR_U32(ctx, 31, 0x1AD4C4u);
    ctx->pc = 0x1AD4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4BCu;
            // 0x1ad4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4C4u; }
        if (ctx->pc != 0x1AD4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4C4u; }
        if (ctx->pc != 0x1AD4C4u) { return; }
    }
    ctx->pc = 0x1AD4C4u;
    // 0x1ad4c4: 0x0  nop
    ctx->pc = 0x1ad4c4u;
    // NOP
label_1ad4c8:
    // 0x1ad4c8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ad4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ad4cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ad4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4d4: 0xc046f98  jal         func_11BE60
    ctx->pc = 0x1AD4D4u;
    SET_GPR_U32(ctx, 31, 0x1AD4DCu);
    ctx->pc = 0x1AD4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4D4u;
            // 0x1ad4d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BE60u;
    if (runtime->hasFunction(0x11BE60u)) {
        auto targetFn = runtime->lookupFunction(0x11BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4DCu; }
        if (ctx->pc != 0x1AD4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE60_0x11be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD4DCu; }
        if (ctx->pc != 0x1AD4DCu) { return; }
    }
    ctx->pc = 0x1AD4DCu;
    // 0x1ad4dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ad4e0: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x1ad4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x1ad4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad4e8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ad4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1ad4ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ad4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ad4f0: 0xaec2001c  sw          $v0, 0x1C($s6)
    ctx->pc = 0x1ad4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 28), GPR_U32(ctx, 2));
    // 0x1ad4f4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1ad4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1ad4f8: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1ad4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1ad4fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD504u);
        ctx->pc = 0x1AD500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD4FCu;
            // 0x1ad500: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD504u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD504u; }
            if (ctx->pc != 0x1AD504u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD504u;
    // 0x1ad504: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1ad504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ad508: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1ad508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ad50c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x1ad50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ad510: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1AD510u;
    {
        const bool branch_taken_0x1ad510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD510u;
            // 0x1ad514: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad510) {
            ctx->pc = 0x1AD5F0u;
            goto label_1ad5f0;
        }
    }
    ctx->pc = 0x1AD518u;
    // 0x1ad518: 0x5460ffd7  bnel        $v1, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AD518u;
    {
        const bool branch_taken_0x1ad518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad518) {
            ctx->pc = 0x1AD51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD518u;
            // 0x1ad51c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD478u;
            runtime->cooperativeGuestYield();
            goto label_1ad478;
        }
    }
    ctx->pc = 0x1AD520u;
    // 0x1ad520: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ad520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1ad524:
    // 0x1ad524: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1ad524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad528: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AD528u;
    {
        const bool branch_taken_0x1ad528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD528u;
            // 0x1ad52c: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad528) {
            ctx->pc = 0x1AD5F0u;
            goto label_1ad5f0;
        }
    }
    ctx->pc = 0x1AD530u;
    // 0x1ad530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ad530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad534: 0x718823  subu        $s1, $v1, $s1
    ctx->pc = 0x1ad534u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ad538: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x1ad538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ad53c: 0x0  nop
    ctx->pc = 0x1ad53cu;
    // NOP
label_1ad540:
    // 0x1ad540: 0xc04e1f0  jal         func_1387C0
    ctx->pc = 0x1AD540u;
    SET_GPR_U32(ctx, 31, 0x1AD548u);
    ctx->pc = 0x1AD544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD540u;
            // 0x1ad544: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1387C0u;
    if (runtime->hasFunction(0x1387C0u)) {
        auto targetFn = runtime->lookupFunction(0x1387C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD548u; }
        if (ctx->pc != 0x1AD548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001387C0_0x1387c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD548u; }
        if (ctx->pc != 0x1AD548u) { return; }
    }
    ctx->pc = 0x1AD548u;
    // 0x1ad548: 0xc04e21c  jal         func_138870
    ctx->pc = 0x1AD548u;
    SET_GPR_U32(ctx, 31, 0x1AD550u);
    ctx->pc = 0x1AD54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD548u;
            // 0x1ad54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138870u;
    if (runtime->hasFunction(0x138870u)) {
        auto targetFn = runtime->lookupFunction(0x138870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD550u; }
        if (ctx->pc != 0x1AD550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138870_0x138870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD550u; }
        if (ctx->pc != 0x1AD550u) { return; }
    }
    ctx->pc = 0x1AD550u;
    // 0x1ad550: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad554: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ad554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ad558: 0x8c44ca20  lw          $a0, -0x35E0($v0)
    ctx->pc = 0x1ad558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953504)));
    // 0x1ad55c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1AD55Cu;
    SET_GPR_U32(ctx, 31, 0x1AD564u);
    ctx->pc = 0x1AD560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD55Cu;
            // 0x1ad560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD564u; }
        if (ctx->pc != 0x1AD564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD564u; }
        if (ctx->pc != 0x1AD564u) { return; }
    }
    ctx->pc = 0x1AD564u;
    // 0x1ad564: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ad564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad568: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1ad568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1ad56c: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x1ad56cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ad570: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD570u;
    {
        const bool branch_taken_0x1ad570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD570u;
            // 0x1ad574: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad570) {
            ctx->pc = 0x1AD588u;
            goto label_1ad588;
        }
    }
    ctx->pc = 0x1AD578u;
    // 0x1ad578: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1ad578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ad57c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1AD57Cu;
    SET_GPR_U32(ctx, 31, 0x1AD584u);
    ctx->pc = 0x1AD580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD57Cu;
            // 0x1ad580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD584u; }
        if (ctx->pc != 0x1AD584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD584u; }
        if (ctx->pc != 0x1AD584u) { return; }
    }
    ctx->pc = 0x1AD584u;
    // 0x1ad584: 0x0  nop
    ctx->pc = 0x1ad584u;
    // NOP
label_1ad588:
    // 0x1ad588: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ad588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ad58c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ad58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad594: 0xc046f98  jal         func_11BE60
    ctx->pc = 0x1AD594u;
    SET_GPR_U32(ctx, 31, 0x1AD59Cu);
    ctx->pc = 0x1AD598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD594u;
            // 0x1ad598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BE60u;
    if (runtime->hasFunction(0x11BE60u)) {
        auto targetFn = runtime->lookupFunction(0x11BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD59Cu; }
        if (ctx->pc != 0x1AD59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE60_0x11be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD59Cu; }
        if (ctx->pc != 0x1AD59Cu) { return; }
    }
    ctx->pc = 0x1AD59Cu;
    // 0x1ad59c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1ad59cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad5a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ad5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1ad5a4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1ad5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1ad5a8: 0x24a4e848  addiu       $a0, $a1, -0x17B8
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961224));
    // 0x1ad5ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad5b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad5b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ad5bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad5c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ad5c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad5c8: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ad5cc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1ad5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1ad5d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD5D8u);
        ctx->pc = 0x1AD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5D0u;
            // 0x1ad5d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD5D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5D8u; }
            if (ctx->pc != 0x1AD5D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD5D8u;
    // 0x1ad5d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5dc: 0xc04c492  jal         func_131248
    ctx->pc = 0x1AD5DCu;
    SET_GPR_U32(ctx, 31, 0x1AD5E4u);
    ctx->pc = 0x1AD5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD5DCu;
            // 0x1ad5e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5E4u; }
        if (ctx->pc != 0x1AD5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5E4u; }
        if (ctx->pc != 0x1AD5E4u) { return; }
    }
    ctx->pc = 0x1AD5E4u;
    // 0x1ad5e4: 0x1620ffd6  bnez        $s1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1AD5E4u;
    {
        const bool branch_taken_0x1ad5e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5e4) {
            ctx->pc = 0x1AD540u;
            runtime->cooperativeGuestYield();
            goto label_1ad540;
        }
    }
    ctx->pc = 0x1AD5ECu;
    // 0x1ad5ec: 0x0  nop
    ctx->pc = 0x1ad5ecu;
    // NOP
label_1ad5f0:
    // 0x1ad5f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ad5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ad5f4: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x1ad5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ad5f8: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x1ad5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x1ad5fc: 0x0  nop
    ctx->pc = 0x1ad5fcu;
    // NOP
label_1ad600:
    // 0x1ad600: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AD600u;
    {
        const bool branch_taken_0x1ad600 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD600u;
            // 0x1ad604: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad600) {
            ctx->pc = 0x1AD620u;
            goto label_1ad620;
        }
    }
    ctx->pc = 0x1AD608u;
    // 0x1ad608: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1ad608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1ad60c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad610: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1ad610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ad614: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1ad614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1ad618: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD620u);
        ctx->pc = 0x1AD61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD618u;
            // 0x1ad61c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD620u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD620u; }
            if (ctx->pc != 0x1AD620u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD620u;
label_1ad620:
    // 0x1ad620: 0x12e00050  beqz        $s7, . + 4 + (0x50 << 2)
    ctx->pc = 0x1AD620u;
    {
        const bool branch_taken_0x1ad620 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD620u;
            // 0x1ad624: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad620) {
            ctx->pc = 0x1AD764u;
            goto label_1ad764;
        }
    }
    ctx->pc = 0x1AD628u;
    // 0x1ad628: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AD628u;
    {
        const bool branch_taken_0x1ad628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD628u;
            // 0x1ad62c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad628) {
            ctx->pc = 0x1AD6C0u;
            goto label_1ad6c0;
        }
    }
    ctx->pc = 0x1AD630u;
    // 0x1ad630: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1ad630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1ad634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad638: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1ad63c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1ad640: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD640u;
    {
        const bool branch_taken_0x1ad640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD640u;
            // 0x1ad644: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad640) {
            ctx->pc = 0x1AD650u;
            goto label_1ad650;
        }
    }
    ctx->pc = 0x1AD648u;
    // 0x1ad648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD648u;
    {
        const bool branch_taken_0x1ad648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD648u;
            // 0x1ad64c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad648) {
            ctx->pc = 0x1AD654u;
            goto label_1ad654;
        }
    }
    ctx->pc = 0x1AD650u;
label_1ad650:
    // 0x1ad650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad654:
    // 0x1ad654: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD654u;
    {
        const bool branch_taken_0x1ad654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad654) {
            ctx->pc = 0x1AD658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD654u;
            // 0x1ad658: 0x8ee20104  lw          $v0, 0x104($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD670u;
            goto label_1ad670;
        }
    }
    ctx->pc = 0x1AD65Cu;
    // 0x1ad65c: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1ad65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1ad660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD664u;
    {
        const bool branch_taken_0x1ad664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD664u;
            // 0x1ad668: 0x94500034  lhu         $s0, 0x34($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad664) {
            ctx->pc = 0x1AD674u;
            goto label_1ad674;
        }
    }
    ctx->pc = 0x1AD66Cu;
    // 0x1ad66c: 0x0  nop
    ctx->pc = 0x1ad66cu;
    // NOP
label_1ad670:
    // 0x1ad670: 0x94500086  lhu         $s0, 0x86($v0)
    ctx->pc = 0x1ad670u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
label_1ad674:
    // 0x1ad674: 0xc069780  jal         func_1A5E00
    ctx->pc = 0x1AD674u;
    SET_GPR_U32(ctx, 31, 0x1AD67Cu);
    ctx->pc = 0x1AD678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD674u;
            // 0x1ad678: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E00u;
    if (runtime->hasFunction(0x1A5E00u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD67Cu; }
        if (ctx->pc != 0x1AD67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E00_0x1a5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD67Cu; }
        if (ctx->pc != 0x1AD67Cu) { return; }
    }
    ctx->pc = 0x1AD67Cu;
    // 0x1ad67c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad680: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ad680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ad684: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1ad684u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ad688: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x1ad688u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad68c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ad68cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad690: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x1ad690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ad694: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ad694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad698: 0x1e480b  movn        $t1, $zero, $fp
    ctx->pc = 0x1ad698u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1ad69c: 0xc0695c8  jal         func_1A5720
    ctx->pc = 0x1AD69Cu;
    SET_GPR_U32(ctx, 31, 0x1AD6A4u);
    ctx->pc = 0x1AD6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD69Cu;
            // 0x1ad6a0: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5720u;
    if (runtime->hasFunction(0x1A5720u)) {
        auto targetFn = runtime->lookupFunction(0x1A5720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6A4u; }
        if (ctx->pc != 0x1AD6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5720_0x1a5790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6A4u; }
        if (ctx->pc != 0x1AD6A4u) { return; }
    }
    ctx->pc = 0x1AD6A4u;
    // 0x1ad6a4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ad6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ad6a8: 0xc0697ac  jal         func_1A5EB0
    ctx->pc = 0x1AD6A8u;
    SET_GPR_U32(ctx, 31, 0x1AD6B0u);
    ctx->pc = 0x1AD6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6A8u;
            // 0x1ad6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EB0u;
    if (runtime->hasFunction(0x1A5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B0u; }
        if (ctx->pc != 0x1AD6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5EB0_0x1a5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B0u; }
        if (ctx->pc != 0x1AD6B0u) { return; }
    }
    ctx->pc = 0x1AD6B0u;
    // 0x1ad6b0: 0xc06b666  jal         func_1AD998
    ctx->pc = 0x1AD6B0u;
    SET_GPR_U32(ctx, 31, 0x1AD6B8u);
    ctx->pc = 0x1AD6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6B0u;
            // 0x1ad6b4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD998u;
    if (runtime->hasFunction(0x1AD998u)) {
        auto targetFn = runtime->lookupFunction(0x1AD998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B8u; }
        if (ctx->pc != 0x1AD6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD998_0x1ad998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6B8u; }
        if (ctx->pc != 0x1AD6B8u) { return; }
    }
    ctx->pc = 0x1AD6B8u;
    // 0x1ad6b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AD6B8u;
    {
        const bool branch_taken_0x1ad6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6B8u;
            // 0x1ad6bc: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6b8) {
            ctx->pc = 0x1AD6F8u;
            goto label_1ad6f8;
        }
    }
    ctx->pc = 0x1AD6C0u;
label_1ad6c0:
    // 0x1ad6c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad6c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD6C4u;
    {
        const bool branch_taken_0x1ad6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6C4u;
            // 0x1ad6c8: 0x3c05001b  lui         $a1, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6c4) {
            ctx->pc = 0x1AD6F8u;
            goto label_1ad6f8;
        }
    }
    ctx->pc = 0x1AD6CCu;
    // 0x1ad6cc: 0xc069780  jal         func_1A5E00
    ctx->pc = 0x1AD6CCu;
    SET_GPR_U32(ctx, 31, 0x1AD6D4u);
    ctx->pc = 0x1AD6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6CCu;
            // 0x1ad6d0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E00u;
    if (runtime->hasFunction(0x1A5E00u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6D4u; }
        if (ctx->pc != 0x1AD6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E00_0x1a5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6D4u; }
        if (ctx->pc != 0x1AD6D4u) { return; }
    }
    ctx->pc = 0x1AD6D4u;
    // 0x1ad6d4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1ad6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ad6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad6e0: 0xc0695e4  jal         func_1A5790
    ctx->pc = 0x1AD6E0u;
    SET_GPR_U32(ctx, 31, 0x1AD6E8u);
    ctx->pc = 0x1AD6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6E0u;
            // 0x1ad6e4: 0x1e300b  movn        $a2, $zero, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5790u;
    if (runtime->hasFunction(0x1A5790u)) {
        auto targetFn = runtime->lookupFunction(0x1A5790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6E8u; }
        if (ctx->pc != 0x1AD6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5790_0x1a5800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6E8u; }
        if (ctx->pc != 0x1AD6E8u) { return; }
    }
    ctx->pc = 0x1AD6E8u;
    // 0x1ad6e8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ad6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ad6ec: 0xc0697ac  jal         func_1A5EB0
    ctx->pc = 0x1AD6ECu;
    SET_GPR_U32(ctx, 31, 0x1AD6F4u);
    ctx->pc = 0x1AD6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD6ECu;
            // 0x1ad6f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5EB0u;
    if (runtime->hasFunction(0x1A5EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6F4u; }
        if (ctx->pc != 0x1AD6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5EB0_0x1a5eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD6F4u; }
        if (ctx->pc != 0x1AD6F4u) { return; }
    }
    ctx->pc = 0x1AD6F4u;
    // 0x1ad6f4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1ad6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1ad6f8:
    // 0x1ad6f8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ad6fc: 0x24a5d7c8  addiu       $a1, $a1, -0x2838
    ctx->pc = 0x1ad6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957000));
    // 0x1ad700: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1AD700u;
    SET_GPR_U32(ctx, 31, 0x1AD708u);
    ctx->pc = 0x1AD704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD700u;
            // 0x1ad704: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD708u; }
        if (ctx->pc != 0x1AD708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD708u; }
        if (ctx->pc != 0x1AD708u) { return; }
    }
    ctx->pc = 0x1AD708u;
    // 0x1ad708: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x1AD708u;
    {
        const bool branch_taken_0x1ad708 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD708u;
            // 0x1ad70c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad708) {
            ctx->pc = 0x1AD748u;
            goto label_1ad748;
        }
    }
    ctx->pc = 0x1AD710u;
    // 0x1ad710: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x1ad710u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ad714: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1ad714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1ad718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ad71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad720: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ad720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad724: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad728: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad72c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ad72cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad730: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ad730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ad734: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD73Cu);
        ctx->pc = 0x1AD738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD734u;
            // 0x1ad738: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD73Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD73Cu; }
            if (ctx->pc != 0x1AD73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AD73Cu;
    // 0x1ad73c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD73Cu;
    {
        const bool branch_taken_0x1ad73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad73c) {
            ctx->pc = 0x1AD764u;
            goto label_1ad764;
        }
    }
    ctx->pc = 0x1AD744u;
    // 0x1ad744: 0x0  nop
    ctx->pc = 0x1ad744u;
    // NOP
label_1ad748:
    // 0x1ad748: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ad748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad74c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ad74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad750: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad754: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ad758: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1ad758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ad75c: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD764u);
        ctx->pc = 0x1AD760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD75Cu;
            // 0x1ad760: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD764u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD764u; }
            if (ctx->pc != 0x1AD764u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD764u;
label_1ad764:
    // 0x1ad764: 0x17c0000a  bnez        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD764u;
    {
        const bool branch_taken_0x1ad764 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD764u;
            // 0x1ad768: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad764) {
            ctx->pc = 0x1AD790u;
            goto label_1ad790;
        }
    }
    ctx->pc = 0x1AD76Cu;
    // 0x1ad76c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ad76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ad770: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1ad770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1ad774: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ad774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ad778: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1ad778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ad77c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1ad780: 0x40f809  jalr        $v0
    ctx->pc = 0x1AD780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD788u);
        ctx->pc = 0x1AD784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD780u;
            // 0x1ad784: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AD788u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AD788u; }
            if (ctx->pc != 0x1AD788u) { return; }
        }
        }
    }
    ctx->pc = 0x1AD788u;
    // 0x1ad788: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1ad788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad78c: 0x0  nop
    ctx->pc = 0x1ad78cu;
    // NOP
label_1ad790:
    // 0x1ad790: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1ad790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1ad794: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1ad794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ad798: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1ad798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ad79c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1ad79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ad7a0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1ad7a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ad7a4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ad7a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad7a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ad7a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad7ac: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1ad7acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad7b0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1ad7b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad7b4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1ad7b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad7b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad7bc: 0xac80cb08  sw          $zero, -0x34F8($a0)
    ctx->pc = 0x1ad7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953736), GPR_U32(ctx, 0));
    // 0x1ad7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7C0u;
            // 0x1ad7c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD7C8u;
    // 0x1ad7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ad7cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ad7d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad7d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ad7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad7dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD7DCu;
    {
        const bool branch_taken_0x1ad7dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7DCu;
            // 0x1ad7e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7dc) {
            ctx->pc = 0x1AD7F0u;
            goto label_1ad7f0;
        }
    }
    ctx->pc = 0x1AD7E4u;
    // 0x1ad7e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ad7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ad7e8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AD7E8u;
    {
        const bool branch_taken_0x1ad7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7e8) {
            ctx->pc = 0x1AD7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7E8u;
            // 0x1ad7ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD83Cu;
            goto label_1ad83c;
        }
    }
    ctx->pc = 0x1AD7F0u;
label_1ad7f0:
    // 0x1ad7f0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1ad7f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad7f4: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x1ad7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x1ad7f8: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AD7F8u;
    {
        const bool branch_taken_0x1ad7f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD7F8u;
            // 0x1ad7fc: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad7f8) {
            ctx->pc = 0x1AD838u;
            goto label_1ad838;
        }
    }
    ctx->pc = 0x1AD800u;
    // 0x1ad800: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AD800u;
    {
        const bool branch_taken_0x1ad800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD800u;
            // 0x1ad804: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad800) {
            ctx->pc = 0x1AD838u;
            goto label_1ad838;
        }
    }
    ctx->pc = 0x1AD808u;
    // 0x1ad808: 0x54a2000c  bnel        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AD808u;
    {
        const bool branch_taken_0x1ad808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad808) {
            ctx->pc = 0x1AD80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD808u;
            // 0x1ad80c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD83Cu;
            goto label_1ad83c;
        }
    }
    ctx->pc = 0x1AD810u;
    // 0x1ad810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad818: 0xc04c572  jal         func_1315C8
    ctx->pc = 0x1AD818u;
    SET_GPR_U32(ctx, 31, 0x1AD820u);
    ctx->pc = 0x1AD81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD818u;
            // 0x1ad81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C8u;
    if (runtime->hasFunction(0x1315C8u)) {
        auto targetFn = runtime->lookupFunction(0x1315C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD820u; }
        if (ctx->pc != 0x1AD820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1315c8_0x1315d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD820u; }
        if (ctx->pc != 0x1AD820u) { return; }
    }
    ctx->pc = 0x1AD820u;
    // 0x1ad820: 0xc06b634  jal         func_1AD8D0
    ctx->pc = 0x1AD820u;
    SET_GPR_U32(ctx, 31, 0x1AD828u);
    ctx->pc = 0x1AD824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD820u;
            // 0x1ad824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8D0u;
    if (runtime->hasFunction(0x1AD8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD828u; }
        if (ctx->pc != 0x1AD828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD8D0_0x1ad8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD828u; }
        if (ctx->pc != 0x1AD828u) { return; }
    }
    ctx->pc = 0x1AD828u;
    // 0x1ad828: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD828u;
    {
        const bool branch_taken_0x1ad828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad828) {
            ctx->pc = 0x1AD82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD828u;
            // 0x1ad82c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD83Cu;
            goto label_1ad83c;
        }
    }
    ctx->pc = 0x1AD830u;
    // 0x1ad830: 0xc06988a  jal         func_1A6228
    ctx->pc = 0x1AD830u;
    SET_GPR_U32(ctx, 31, 0x1AD838u);
    ctx->pc = 0x1AD834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD830u;
            // 0x1ad834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6228u;
    if (runtime->hasFunction(0x1A6228u)) {
        auto targetFn = runtime->lookupFunction(0x1A6228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD838u; }
        if (ctx->pc != 0x1AD838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6228_0x1a6228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD838u; }
        if (ctx->pc != 0x1AD838u) { return; }
    }
    ctx->pc = 0x1AD838u;
label_1ad838:
    // 0x1ad838: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad83c:
    // 0x1ad83c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad844: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD844u;
            // 0x1ad848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD84Cu;
    // 0x1ad84c: 0x0  nop
    ctx->pc = 0x1ad84cu;
    // NOP
    // 0x1ad850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ad854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ad858: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ad858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad85c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AD85Cu;
    {
        const bool branch_taken_0x1ad85c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD85Cu;
            // 0x1ad860: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad85c) {
            ctx->pc = 0x1AD8C0u;
            goto label_1ad8c0;
        }
    }
    ctx->pc = 0x1AD864u;
    // 0x1ad864: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1ad864u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad868: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x1ad868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x1ad86c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD86Cu;
    {
        const bool branch_taken_0x1ad86c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD86Cu;
            // 0x1ad870: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad86c) {
            ctx->pc = 0x1AD888u;
            goto label_1ad888;
        }
    }
    ctx->pc = 0x1AD874u;
    // 0x1ad874: 0xc0698de  jal         func_1A6378
    ctx->pc = 0x1AD874u;
    SET_GPR_U32(ctx, 31, 0x1AD87Cu);
    ctx->pc = 0x1AD878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD874u;
            // 0x1ad878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6378u;
    if (runtime->hasFunction(0x1A6378u)) {
        auto targetFn = runtime->lookupFunction(0x1A6378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD87Cu; }
        if (ctx->pc != 0x1AD87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6378_0x1a6378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD87Cu; }
        if (ctx->pc != 0x1AD87Cu) { return; }
    }
    ctx->pc = 0x1AD87Cu;
    // 0x1ad87c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD87Cu;
    {
        const bool branch_taken_0x1ad87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD87Cu;
            // 0x1ad880: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad87c) {
            ctx->pc = 0x1AD8C4u;
            goto label_1ad8c4;
        }
    }
    ctx->pc = 0x1AD884u;
    // 0x1ad884: 0x0  nop
    ctx->pc = 0x1ad884u;
    // NOP
label_1ad888:
    // 0x1ad888: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD888u;
    {
        const bool branch_taken_0x1ad888 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD888u;
            // 0x1ad88c: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad888) {
            ctx->pc = 0x1AD8A0u;
            goto label_1ad8a0;
        }
    }
    ctx->pc = 0x1AD890u;
    // 0x1ad890: 0xc0698fa  jal         func_1A63E8
    ctx->pc = 0x1AD890u;
    SET_GPR_U32(ctx, 31, 0x1AD898u);
    ctx->pc = 0x1AD894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD890u;
            // 0x1ad894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A63E8u;
    if (runtime->hasFunction(0x1A63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD898u; }
        if (ctx->pc != 0x1AD898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A63E8_0x1a63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD898u; }
        if (ctx->pc != 0x1AD898u) { return; }
    }
    ctx->pc = 0x1AD898u;
    // 0x1ad898: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AD898u;
    {
        const bool branch_taken_0x1ad898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD898u;
            // 0x1ad89c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad898) {
            ctx->pc = 0x1AD8C4u;
            goto label_1ad8c4;
        }
    }
    ctx->pc = 0x1AD8A0u;
label_1ad8a0:
    // 0x1ad8a0: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD8A0u;
    {
        const bool branch_taken_0x1ad8a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad8a0) {
            ctx->pc = 0x1AD8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8A0u;
            // 0x1ad8a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD8C4u;
            goto label_1ad8c4;
        }
    }
    ctx->pc = 0x1AD8A8u;
    // 0x1ad8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad8ac: 0xc04d290  jal         func_134A40
    ctx->pc = 0x1AD8ACu;
    SET_GPR_U32(ctx, 31, 0x1AD8B4u);
    ctx->pc = 0x1AD8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8ACu;
            // 0x1ad8b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A40u;
    if (runtime->hasFunction(0x134A40u)) {
        auto targetFn = runtime->lookupFunction(0x134A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8B4u; }
        if (ctx->pc != 0x1AD8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134a40_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8B4u; }
        if (ctx->pc != 0x1AD8B4u) { return; }
    }
    ctx->pc = 0x1AD8B4u;
    // 0x1ad8b4: 0xc069910  jal         func_1A6440
    ctx->pc = 0x1AD8B4u;
    SET_GPR_U32(ctx, 31, 0x1AD8BCu);
    ctx->pc = 0x1AD8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8B4u;
            // 0x1ad8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6440u;
    if (runtime->hasFunction(0x1A6440u)) {
        auto targetFn = runtime->lookupFunction(0x1A6440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8BCu; }
        if (ctx->pc != 0x1AD8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6440_0x1a6440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8BCu; }
        if (ctx->pc != 0x1AD8BCu) { return; }
    }
    ctx->pc = 0x1AD8BCu;
    // 0x1ad8bc: 0x0  nop
    ctx->pc = 0x1ad8bcu;
    // NOP
label_1ad8c0:
    // 0x1ad8c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ad8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad8c4:
    // 0x1ad8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8C8u;
            // 0x1ad8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD2C0u: goto label_1ad2c0;
            case 0x1AD2E8u: goto label_1ad2e8;
            case 0x1AD2ECu: goto label_1ad2ec;
            case 0x1AD330u: goto label_1ad330;
            case 0x1AD378u: goto label_1ad378;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD418u: goto label_1ad418;
            case 0x1AD478u: goto label_1ad478;
            case 0x1AD4C8u: goto label_1ad4c8;
            case 0x1AD524u: goto label_1ad524;
            case 0x1AD540u: goto label_1ad540;
            case 0x1AD588u: goto label_1ad588;
            case 0x1AD5F0u: goto label_1ad5f0;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD620u: goto label_1ad620;
            case 0x1AD650u: goto label_1ad650;
            case 0x1AD654u: goto label_1ad654;
            case 0x1AD670u: goto label_1ad670;
            case 0x1AD674u: goto label_1ad674;
            case 0x1AD6C0u: goto label_1ad6c0;
            case 0x1AD6F8u: goto label_1ad6f8;
            case 0x1AD748u: goto label_1ad748;
            case 0x1AD764u: goto label_1ad764;
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD8D0u;
}
