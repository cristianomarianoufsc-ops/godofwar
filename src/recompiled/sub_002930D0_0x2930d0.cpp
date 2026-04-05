#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002930D0
// Address: 0x2930d0 - 0x293260
void sub_002930D0_0x2930d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002930D0_0x2930d0");
#endif

    ctx->pc = 0x2930d0u;

    // 0x2930d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2930d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2930d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2930d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2930d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2930d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2930dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2930dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2930e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2930e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2930e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2930e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2930ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2930f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2930f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2930f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2930f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930f8: 0xc0a4c1a  jal         func_293068
    ctx->pc = 0x2930F8u;
    SET_GPR_U32(ctx, 31, 0x293100u);
    ctx->pc = 0x2930FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2930F8u;
            // 0x2930fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293068u;
    if (runtime->hasFunction(0x293068u)) {
        auto targetFn = runtime->lookupFunction(0x293068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293100u; }
        if (ctx->pc != 0x293100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293068_0x2930d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293100u; }
        if (ctx->pc != 0x293100u) { return; }
    }
    ctx->pc = 0x293100u;
    // 0x293100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x293100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293104: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293104u;
    {
        const bool branch_taken_0x293104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x293108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293104u;
            // 0x293108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293104) {
            ctx->pc = 0x293128u;
            goto label_293128;
        }
    }
    ctx->pc = 0x29310Cu;
    // 0x29310c: 0xc0a49da  jal         func_292768
    ctx->pc = 0x29310Cu;
    SET_GPR_U32(ctx, 31, 0x293114u);
    ctx->pc = 0x293110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29310Cu;
            // 0x293110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293114u; }
        if (ctx->pc != 0x293114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293114u; }
        if (ctx->pc != 0x293114u) { return; }
    }
    ctx->pc = 0x293114u;
    // 0x293114: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x293114u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29311c: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x29311cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x293120: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x293120u;
    {
        const bool branch_taken_0x293120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293120u;
            // 0x293124: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293120) {
            ctx->pc = 0x29323Cu;
            goto label_29323c;
        }
    }
    ctx->pc = 0x293128u;
label_293128:
    // 0x293128: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293128u;
    {
        const bool branch_taken_0x293128 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x29312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293128u;
            // 0x29312c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293128) {
            ctx->pc = 0x293140u;
            goto label_293140;
        }
    }
    ctx->pc = 0x293130u;
    // 0x293130: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x293130u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293134: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x293134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293138: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x293138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29313c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x29313cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_293140:
    // 0x293140: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293144: 0xc0a49da  jal         func_292768
    ctx->pc = 0x293144u;
    SET_GPR_U32(ctx, 31, 0x29314Cu);
    ctx->pc = 0x293148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293144u;
            // 0x293148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29314Cu; }
        if (ctx->pc != 0x29314Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29314Cu; }
        if (ctx->pc != 0x29314Cu) { return; }
    }
    ctx->pc = 0x29314Cu;
    // 0x29314c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x29314cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293150: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x293150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x293154: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x293154u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x293158: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x293158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x29315c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x29315cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x293160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293164: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x293164u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x293168: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x293168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x29316c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x29316cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x293170: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293174: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x293174u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x293178: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x293178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x29317c: 0x0  nop
    ctx->pc = 0x29317cu;
    // NOP
label_293180:
    // 0x293180: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x293180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x293184: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x293184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x293188: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x29318c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x29318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x293190: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x293190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x293194: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x293194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x293198: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x293198u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x29319c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x29319cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2931a0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2931a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2931a4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2931a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2931a8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2931a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2931ac: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x2931acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2931b0: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2931b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2931b4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2931b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2931b8: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2931b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2931bc: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2931bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2931c0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x2931c0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2931c4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2931C4u;
    {
        const bool branch_taken_0x2931c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2931C4u;
            // 0x2931c8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931c4) {
            ctx->pc = 0x293180u;
            runtime->cooperativeGuestYield();
            goto label_293180;
        }
    }
    ctx->pc = 0x2931CCu;
    // 0x2931cc: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x2931ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2931d0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2931D0u;
    {
        const bool branch_taken_0x2931d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931d0) {
            ctx->pc = 0x2931D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2931D0u;
            // 0x2931d4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x293210u;
            goto label_293210;
        }
    }
    ctx->pc = 0x2931D8u;
label_2931d8:
    // 0x2931d8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2931d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2931dc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2931dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2931e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2931e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2931e4: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x2931e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2931e8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2931e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2931ec: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2931ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2931f0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x2931f0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2931f4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2931f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2931f8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x2931f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2931fc: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2931fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x293200: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x293200u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x293204: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x293204u;
    {
        const bool branch_taken_0x293204 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x293208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293204u;
            // 0x293208: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293204) {
            ctx->pc = 0x2931D8u;
            runtime->cooperativeGuestYield();
            goto label_2931d8;
        }
    }
    ctx->pc = 0x29320Cu;
    // 0x29320c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_293210:
    // 0x293210: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x293210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x293214: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x293214u;
    {
        const bool branch_taken_0x293214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293214) {
            ctx->pc = 0x293218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x293214u;
            // 0x293218: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29323Cu;
            goto label_29323c;
        }
    }
    ctx->pc = 0x29321Cu;
    // 0x29321c: 0x0  nop
    ctx->pc = 0x29321cu;
    // NOP
label_293220:
    // 0x293220: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x293220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x293224: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x293224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x293228: 0x0  nop
    ctx->pc = 0x293228u;
    // NOP
    // 0x29322c: 0x0  nop
    ctx->pc = 0x29322cu;
    // NOP
    // 0x293230: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x293230u;
    {
        const bool branch_taken_0x293230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293230u;
            // 0x293234: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293230) {
            ctx->pc = 0x293220u;
            runtime->cooperativeGuestYield();
            goto label_293220;
        }
    }
    ctx->pc = 0x293238u;
    // 0x293238: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x293238u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_29323c:
    // 0x29323c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x29323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293240: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x293240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293244: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x293244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x293248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29324c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29324cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293254: 0x3e00008  jr          $ra
    ctx->pc = 0x293254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293254u;
            // 0x293258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293128u: goto label_293128;
            case 0x293140u: goto label_293140;
            case 0x293180u: goto label_293180;
            case 0x2931D8u: goto label_2931d8;
            case 0x293210u: goto label_293210;
            case 0x293220u: goto label_293220;
            case 0x29323Cu: goto label_29323c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29325Cu;
    // 0x29325c: 0x0  nop
    ctx->pc = 0x29325cu;
    // NOP
}
