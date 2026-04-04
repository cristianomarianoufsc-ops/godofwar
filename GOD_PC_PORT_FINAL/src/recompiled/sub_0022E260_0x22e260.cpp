#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E260
// Address: 0x22e260 - 0x22e370
void sub_0022E260_0x22e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E260_0x22e260");
#endif

    ctx->pc = 0x22e260u;

    // 0x22e260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22e264: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22e268: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22e268u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22e26c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22e270: 0x8e421280  lw          $v0, 0x1280($s2)
    ctx->pc = 0x22e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4736)));
    // 0x22e274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22e27c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x22E27Cu;
    {
        const bool branch_taken_0x22e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E27Cu;
            // 0x22e280: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e27c) {
            ctx->pc = 0x22E320u;
            goto label_22e320;
        }
    }
    ctx->pc = 0x22E284u;
    // 0x22e284: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22e288: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e28c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x22e28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e290: 0x24511278  addiu       $s1, $v0, 0x1278
    ctx->pc = 0x22e290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4728));
    // 0x22e294: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x22e294u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22e298: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22e298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x22e29c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x22e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e2a0: 0x24a5c138  addiu       $a1, $a1, -0x3EC8
    ctx->pc = 0x22e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951224));
    // 0x22e2a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e2a8: 0xc09f3da  jal         func_27CF68
    ctx->pc = 0x22E2A8u;
    SET_GPR_U32(ctx, 31, 0x22E2B0u);
    ctx->pc = 0x22E2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2A8u;
            // 0x22e2ac: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27CF68u;
    if (runtime->hasFunction(0x27CF68u)) {
        auto targetFn = runtime->lookupFunction(0x27CF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E2B0u; }
        if (ctx->pc != 0x22E2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27cf68_0x27d018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E2B0u; }
        if (ctx->pc != 0x22E2B0u) { return; }
    }
    ctx->pc = 0x22E2B0u;
    // 0x22e2b0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x22e2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22e2b4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x22e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22e2b8: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22E2B8u;
    {
        const bool branch_taken_0x22e2b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2B8u;
            // 0x22e2bc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2b8) {
            ctx->pc = 0x22E2FCu;
            goto label_22e2fc;
        }
    }
    ctx->pc = 0x22E2C0u;
    // 0x22e2c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22e2c4: 0x2463bc68  addiu       $v1, $v1, -0x4398
    ctx->pc = 0x22e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949992));
    // 0x22e2c8: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22e2cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x22e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22e2d0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x22e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22e2d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22e2d8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E2D8u;
    {
        const bool branch_taken_0x22e2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2D8u;
            // 0x22e2dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2d8) {
            ctx->pc = 0x22E2ECu;
            goto label_22e2ec;
        }
    }
    ctx->pc = 0x22E2E0u;
    // 0x22e2e0: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x22e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36867);
    // 0x22e2e4: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E2E4u;
    {
        const bool branch_taken_0x22e2e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e2e4) {
            ctx->pc = 0x22E2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2E4u;
            // 0x22e2e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E2F4u;
            goto label_22e2f4;
        }
    }
    ctx->pc = 0x22E2ECu;
label_22e2ec:
    // 0x22e2ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e2f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22e2f4:
    // 0x22e2f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22E2F4u;
    {
        const bool branch_taken_0x22e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2F4u;
            // 0x22e2f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2f4) {
            ctx->pc = 0x22E354u;
            goto label_22e354;
        }
    }
    ctx->pc = 0x22E2FCu;
label_22e2fc:
    // 0x22e2fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e300: 0x8c4212a4  lw          $v0, 0x12A4($v0)
    ctx->pc = 0x22e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x22e304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e308: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22e30c: 0xc09f104  jal         func_27C410
    ctx->pc = 0x22E30Cu;
    SET_GPR_U32(ctx, 31, 0x22E314u);
    ctx->pc = 0x22E310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E30Cu;
            // 0x22e310: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C410u;
    if (runtime->hasFunction(0x27C410u)) {
        auto targetFn = runtime->lookupFunction(0x27C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E314u; }
        if (ctx->pc != 0x22E314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27c410_0x27c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E314u; }
        if (ctx->pc != 0x22E314u) { return; }
    }
    ctx->pc = 0x22E314u;
    // 0x22e314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e318: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22E318u;
    {
        const bool branch_taken_0x22e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E318u;
            // 0x22e31c: 0xae421280  sw          $v0, 0x1280($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e318) {
            ctx->pc = 0x22E350u;
            goto label_22e350;
        }
    }
    ctx->pc = 0x22E320u;
label_22e320:
    // 0x22e320: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E320u;
    SET_GPR_U32(ctx, 31, 0x22E328u);
    ctx->pc = 0x22E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E320u;
            // 0x22e324: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E328u; }
        if (ctx->pc != 0x22E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E328u; }
        if (ctx->pc != 0x22E328u) { return; }
    }
    ctx->pc = 0x22E328u;
    // 0x22e328: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E328u;
    {
        const bool branch_taken_0x22e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E328u;
            // 0x22e32c: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e328) {
            ctx->pc = 0x22E350u;
            goto label_22e350;
        }
    }
    ctx->pc = 0x22E330u;
    // 0x22e330: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22e330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22e334: 0x2463bc68  addiu       $v1, $v1, -0x4398
    ctx->pc = 0x22e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949992));
    // 0x22e338: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22e338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22e33c: 0x8c841284  lw          $a0, 0x1284($a0)
    ctx->pc = 0x22e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4740)));
    // 0x22e340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e344: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x22e344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x22e348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E348u;
    {
        const bool branch_taken_0x22e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E348u;
            // 0x22e34c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e348) {
            ctx->pc = 0x22E354u;
            goto label_22e354;
        }
    }
    ctx->pc = 0x22E350u;
label_22e350:
    // 0x22e350: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e354:
    // 0x22e354: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22e354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e358: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e35c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22e35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e364: 0x3e00008  jr          $ra
    ctx->pc = 0x22E364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E364u;
            // 0x22e368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E2ECu: goto label_22e2ec;
            case 0x22E2F4u: goto label_22e2f4;
            case 0x22E2FCu: goto label_22e2fc;
            case 0x22E320u: goto label_22e320;
            case 0x22E350u: goto label_22e350;
            case 0x22E354u: goto label_22e354;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E36Cu;
    // 0x22e36c: 0x0  nop
    ctx->pc = 0x22e36cu;
    // NOP
}
