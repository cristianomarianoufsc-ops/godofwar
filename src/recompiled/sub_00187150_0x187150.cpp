#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187150
// Address: 0x187150 - 0x1873e8
void sub_00187150_0x187150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187150_0x187150");
#endif

    ctx->pc = 0x187150u;

    // 0x187150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x187154: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x187154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x187158: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x187158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18715c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187160: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x187160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x187164: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x187164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x187168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18716c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x18716cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187170: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x187170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x187174: 0x2473e848  addiu       $s3, $v1, -0x17B8
    ctx->pc = 0x187174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x187178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18717c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x187180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187184: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187188: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18718c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x187190: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x187194: 0x40f809  jalr        $v0
    ctx->pc = 0x187194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18719Cu);
        ctx->pc = 0x187198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187194u;
            // 0x187198: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18719Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18719Cu; }
            if (ctx->pc != 0x18719Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18719Cu;
    // 0x18719c: 0xc04c6b2  jal         func_131AC8
    ctx->pc = 0x18719Cu;
    SET_GPR_U32(ctx, 31, 0x1871A4u);
    ctx->pc = 0x1871A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18719Cu;
            // 0x1871a0: 0x26440188  addiu       $a0, $s2, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AC8u;
    if (runtime->hasFunction(0x131AC8u)) {
        auto targetFn = runtime->lookupFunction(0x131AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871A4u; }
        if (ctx->pc != 0x1871A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131ac8_0x131ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871A4u; }
        if (ctx->pc != 0x1871A4u) { return; }
    }
    ctx->pc = 0x1871A4u;
    // 0x1871a4: 0x8e4501a0  lw          $a1, 0x1A0($s2)
    ctx->pc = 0x1871a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x1871a8: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1871A8u;
    {
        const bool branch_taken_0x1871a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1871A8u;
            // 0x1871ac: 0x26510038  addiu       $s1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a8) {
            ctx->pc = 0x187258u;
            goto label_187258;
        }
    }
    ctx->pc = 0x1871B0u;
    // 0x1871b0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1871b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1871b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1871b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1871bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1871c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1871c4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1871c8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1871cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1871CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1871D4u);
        ctx->pc = 0x1871D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1871CCu;
            // 0x1871d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1871D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1871D4u; }
            if (ctx->pc != 0x1871D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1871D4u;
    // 0x1871d4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1871d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1871d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871dc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1871DCu;
    SET_GPR_U32(ctx, 31, 0x1871E4u);
    ctx->pc = 0x1871E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1871DCu;
            // 0x1871e0: 0x8c647910  lw          $a0, 0x7910($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871E4u; }
        if (ctx->pc != 0x1871E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871E4u; }
        if (ctx->pc != 0x1871E4u) { return; }
    }
    ctx->pc = 0x1871E4u;
    // 0x1871e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1871e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1871e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1871e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1871ec: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1871ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1871f0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1871f4: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x1871f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1871f8: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1871f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1871fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1871fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x187200: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x187200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x187204: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x187204u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18720c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x187210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187214: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187218: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18721c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x18721cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x187220: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x187220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x187224: 0x40f809  jalr        $v0
    ctx->pc = 0x187224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18722Cu);
        ctx->pc = 0x187228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187224u;
            // 0x187228: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18722Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18722Cu; }
            if (ctx->pc != 0x18722Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18722Cu;
    // 0x18722c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x18722cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x187230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x187234: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x187234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x187238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18723c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187240: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187244: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x187244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x187248: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x18724c: 0x40f809  jalr        $v0
    ctx->pc = 0x18724Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187254u);
        ctx->pc = 0x187250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18724Cu;
            // 0x187250: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187254u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187254u; }
            if (ctx->pc != 0x187254u) { return; }
        }
        }
    }
    ctx->pc = 0x187254u;
    // 0x187254: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x187254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
label_187258:
    // 0x187258: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x187258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18725c: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x187260: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x187260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x187264: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x187264u;
    {
        const bool branch_taken_0x187264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187264u;
            // 0x187268: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187264) {
            ctx->pc = 0x1873ACu;
            goto label_1873ac;
        }
    }
    ctx->pc = 0x18726Cu;
    // 0x18726c: 0x0  nop
    ctx->pc = 0x18726cu;
    // NOP
label_187270:
    // 0x187270: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x187274: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x187274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x187278: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x187278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18727c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x18727cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187280: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187280u;
    {
        const bool branch_taken_0x187280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x187284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187280u;
            // 0x187284: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187280) {
            ctx->pc = 0x187298u;
            goto label_187298;
        }
    }
    ctx->pc = 0x187288u;
    // 0x187288: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x187288u;
    {
        const bool branch_taken_0x187288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187288u;
            // 0x18728c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187288) {
            ctx->pc = 0x187310u;
            goto label_187310;
        }
    }
    ctx->pc = 0x187290u;
    // 0x187290: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x187290u;
    {
        const bool branch_taken_0x187290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187290u;
            // 0x187294: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187290) {
            ctx->pc = 0x1873A0u;
            goto label_1873a0;
        }
    }
    ctx->pc = 0x187298u;
label_187298:
    // 0x187298: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18729c: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x18729Cu;
    {
        const bool branch_taken_0x18729c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18729Cu;
            // 0x1872a0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18729c) {
            ctx->pc = 0x18739Cu;
            goto label_18739c;
        }
    }
    ctx->pc = 0x1872A4u;
    // 0x1872a4: 0x2630fff8  addiu       $s0, $s1, -0x8
    ctx->pc = 0x1872a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_1872a8:
    // 0x1872a8: 0x11800a  movz        $s0, $zero, $s1
    ctx->pc = 0x1872a8u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1872ac: 0xc0545be  jal         func_1516F8
    ctx->pc = 0x1872ACu;
    SET_GPR_U32(ctx, 31, 0x1872B4u);
    ctx->pc = 0x1872B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1872ACu;
            // 0x1872b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1516F8u;
    if (runtime->hasFunction(0x1516F8u)) {
        auto targetFn = runtime->lookupFunction(0x1516F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872B4u; }
        if (ctx->pc != 0x1872B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001516F8_0x1516f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872B4u; }
        if (ctx->pc != 0x1872B4u) { return; }
    }
    ctx->pc = 0x1872B4u;
    // 0x1872b4: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x1872b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1872b8: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1872B8u;
    {
        const bool branch_taken_0x1872b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872b8) {
            ctx->pc = 0x1872BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1872B8u;
            // 0x1872bc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187300u;
            goto label_187300;
        }
    }
    ctx->pc = 0x1872C0u;
    // 0x1872c0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1872c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1872c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1872c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1872c8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1872C8u;
    {
        const bool branch_taken_0x1872c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1872c8) {
            ctx->pc = 0x1872CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1872C8u;
            // 0x1872cc: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187300u;
            goto label_187300;
        }
    }
    ctx->pc = 0x1872D0u;
    // 0x1872d0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1872d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1872d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1872d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1872d8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1872d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1872dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1872e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1872e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1872e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1872e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1872e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1872ec: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1872ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1872f0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1872f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1872f4: 0x40f809  jalr        $v0
    ctx->pc = 0x1872F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1872FCu);
        ctx->pc = 0x1872F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1872F4u;
            // 0x1872f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1872FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1872FCu; }
            if (ctx->pc != 0x1872FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1872FCu;
    // 0x1872fc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_187300:
    // 0x187300: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x187300u;
    {
        const bool branch_taken_0x187300 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x187304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187300u;
            // 0x187304: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187300) {
            ctx->pc = 0x1872A8u;
            runtime->cooperativeGuestYield();
            goto label_1872a8;
        }
    }
    ctx->pc = 0x187308u;
    // 0x187308: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x187308u;
    {
        const bool branch_taken_0x187308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18730Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187308u;
            // 0x18730c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187308) {
            ctx->pc = 0x18739Cu;
            goto label_18739c;
        }
    }
    ctx->pc = 0x187310u;
label_187310:
    // 0x187310: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x187310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x187314: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x187314u;
    {
        const bool branch_taken_0x187314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x187318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187314u;
            // 0x187318: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187314) {
            ctx->pc = 0x1873A0u;
            goto label_1873a0;
        }
    }
    ctx->pc = 0x18731Cu;
    // 0x18731c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x18731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_187320:
    // 0x187320: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x187320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187324: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x187324u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x187328: 0xc054f60  jal         func_153D80
    ctx->pc = 0x187328u;
    SET_GPR_U32(ctx, 31, 0x187330u);
    ctx->pc = 0x18732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187328u;
            // 0x18732c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153D80u;
    if (runtime->hasFunction(0x153D80u)) {
        auto targetFn = runtime->lookupFunction(0x153D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187330u; }
        if (ctx->pc != 0x187330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153D80_0x153d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187330u; }
        if (ctx->pc != 0x187330u) { return; }
    }
    ctx->pc = 0x187330u;
    // 0x187330: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x187334: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x187334u;
    {
        const bool branch_taken_0x187334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x187334) {
            ctx->pc = 0x187338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187334u;
            // 0x187338: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187390u;
            goto label_187390;
        }
    }
    ctx->pc = 0x18733Cu;
    // 0x18733c: 0x92220043  lbu         $v0, 0x43($s1)
    ctx->pc = 0x18733cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
    // 0x187340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x187340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x187344: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x187344u;
    {
        const bool branch_taken_0x187344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187344) {
            ctx->pc = 0x187348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187344u;
            // 0x187348: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187390u;
            goto label_187390;
        }
    }
    ctx->pc = 0x18734Cu;
    // 0x18734c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x18734cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x187350: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x187350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x187354: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x187354u;
    {
        const bool branch_taken_0x187354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187354) {
            ctx->pc = 0x187358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187354u;
            // 0x187358: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187390u;
            goto label_187390;
        }
    }
    ctx->pc = 0x18735Cu;
    // 0x18735c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x18735cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x187360: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x187364: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x187364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x187368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18736c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187370: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x187370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187374: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x187378: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18737c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x187380: 0x40f809  jalr        $v0
    ctx->pc = 0x187380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187388u);
        ctx->pc = 0x187384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187380u;
            // 0x187384: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187388u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187388u; }
            if (ctx->pc != 0x187388u) { return; }
        }
        }
    }
    ctx->pc = 0x187388u;
    // 0x187388: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x187388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18738c: 0x0  nop
    ctx->pc = 0x18738cu;
    // NOP
label_187390:
    // 0x187390: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x187390u;
    {
        const bool branch_taken_0x187390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x187394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187390u;
            // 0x187394: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187390) {
            ctx->pc = 0x187320u;
            runtime->cooperativeGuestYield();
            goto label_187320;
        }
    }
    ctx->pc = 0x187398u;
    // 0x187398: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x187398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18739c:
    // 0x18739c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1873a0:
    // 0x1873a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1873a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1873a4: 0x1443ffb2  bne         $v0, $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1873A4u;
    {
        const bool branch_taken_0x1873a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1873A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873A4u;
            // 0x1873a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873a4) {
            ctx->pc = 0x187270u;
            runtime->cooperativeGuestYield();
            goto label_187270;
        }
    }
    ctx->pc = 0x1873ACu;
label_1873ac:
    // 0x1873ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1873b0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1873b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1873b8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1873b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1873bc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1873bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1873c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1873C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1873C8u);
        ctx->pc = 0x1873C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873C0u;
            // 0x1873c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1873C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1873C8u; }
            if (ctx->pc != 0x1873C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1873C8u;
    // 0x1873c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1873c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1873cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1873ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1873d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1873d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1873d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1873d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1873d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1873dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1873DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873DCu;
            // 0x1873e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187258u: goto label_187258;
            case 0x187270u: goto label_187270;
            case 0x187298u: goto label_187298;
            case 0x1872A8u: goto label_1872a8;
            case 0x187300u: goto label_187300;
            case 0x187310u: goto label_187310;
            case 0x187320u: goto label_187320;
            case 0x187390u: goto label_187390;
            case 0x18739Cu: goto label_18739c;
            case 0x1873A0u: goto label_1873a0;
            case 0x1873ACu: goto label_1873ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1873E4u;
    // 0x1873e4: 0x0  nop
    ctx->pc = 0x1873e4u;
    // NOP
}
