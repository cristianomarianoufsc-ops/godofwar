#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002995C8
// Address: 0x2995c8 - 0x2996a8
void sub_002995C8_0x2995c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002995C8_0x2995c8");
#endif

    ctx->pc = 0x2995c8u;

    // 0x2995c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2995c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2995cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2995ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2995d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2995d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2995d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2995d8: 0xc0a6558  jal         func_299560
    ctx->pc = 0x2995D8u;
    SET_GPR_U32(ctx, 31, 0x2995E0u);
    ctx->pc = 0x2995DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2995D8u;
            // 0x2995dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299560u;
    if (runtime->hasFunction(0x299560u)) {
        auto targetFn = runtime->lookupFunction(0x299560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995E0u; }
        if (ctx->pc != 0x2995E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299560_0x299560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2995E0u; }
        if (ctx->pc != 0x2995E0u) { return; }
    }
    ctx->pc = 0x2995E0u;
    // 0x2995e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2995E0u;
    {
        const bool branch_taken_0x2995e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2995E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2995E0u;
            // 0x2995e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2995e0) {
            ctx->pc = 0x29965Cu;
            goto label_29965c;
        }
    }
    ctx->pc = 0x2995E8u;
    // 0x2995e8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2995e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2995ec: 0x24505330  addiu       $s0, $v0, 0x5330
    ctx->pc = 0x2995ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x2995f0: 0x8c445330  lw          $a0, 0x5330($v0)
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21296)));
    // 0x2995f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2995f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2995f8: 0xc0a653e  jal         func_2994F8
    ctx->pc = 0x2995F8u;
    SET_GPR_U32(ctx, 31, 0x299600u);
    ctx->pc = 0x2995FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2995F8u;
            // 0x2995fc: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2994F8u;
    if (runtime->hasFunction(0x2994F8u)) {
        auto targetFn = runtime->lookupFunction(0x2994F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299600u; }
        if (ctx->pc != 0x299600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2994f8_0x299508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299600u; }
        if (ctx->pc != 0x299600u) { return; }
    }
    ctx->pc = 0x299600u;
    // 0x299600: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x299600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x299604: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x299608: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x299608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x29960c: 0x24a54b88  addiu       $a1, $a1, 0x4B88
    ctx->pc = 0x29960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19336));
    // 0x299610: 0xc0a6542  jal         func_299508
    ctx->pc = 0x299610u;
    SET_GPR_U32(ctx, 31, 0x299618u);
    ctx->pc = 0x299614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299610u;
            // 0x299614: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299508u;
    if (runtime->hasFunction(0x299508u)) {
        auto targetFn = runtime->lookupFunction(0x299508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299618u; }
        if (ctx->pc != 0x299618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299508_0x299550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299618u; }
        if (ctx->pc != 0x299618u) { return; }
    }
    ctx->pc = 0x299618u;
    // 0x299618: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x299618u;
    SET_GPR_U32(ctx, 31, 0x299620u);
    ctx->pc = 0x29961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299618u;
            // 0x29961c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299620u; }
        if (ctx->pc != 0x299620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299620u; }
        if (ctx->pc != 0x299620u) { return; }
    }
    ctx->pc = 0x299620u;
    // 0x299620: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x299620u;
    SET_GPR_U32(ctx, 31, 0x299628u);
    ctx->pc = 0x299624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299620u;
            // 0x299624: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299628u; }
        if (ctx->pc != 0x299628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299628u; }
        if (ctx->pc != 0x299628u) { return; }
    }
    ctx->pc = 0x299628u;
    // 0x299628: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29962c: 0xc0a653e  jal         func_2994F8
    ctx->pc = 0x29962Cu;
    SET_GPR_U32(ctx, 31, 0x299634u);
    ctx->pc = 0x299630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29962Cu;
            // 0x299630: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2994F8u;
    if (runtime->hasFunction(0x2994F8u)) {
        auto targetFn = runtime->lookupFunction(0x2994F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299634u; }
        if (ctx->pc != 0x299634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2994f8_0x299508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299634u; }
        if (ctx->pc != 0x299634u) { return; }
    }
    ctx->pc = 0x299634u;
    // 0x299634: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x299634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_299638:
    // 0x299638: 0xc0a6554  jal         func_299550
    ctx->pc = 0x299638u;
    SET_GPR_U32(ctx, 31, 0x299640u);
    ctx->pc = 0x29963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299638u;
            // 0x29963c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299550u;
    if (runtime->hasFunction(0x299550u)) {
        auto targetFn = runtime->lookupFunction(0x299550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299640u; }
        if (ctx->pc != 0x299640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299550_0x299560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299640u; }
        if (ctx->pc != 0x299640u) { return; }
    }
    ctx->pc = 0x299640u;
    // 0x299640: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x299644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x299644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299648: 0xc0a653e  jal         func_2994F8
    ctx->pc = 0x299648u;
    SET_GPR_U32(ctx, 31, 0x299650u);
    ctx->pc = 0x29964Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299648u;
            // 0x29964c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2994F8u;
    if (runtime->hasFunction(0x2994F8u)) {
        auto targetFn = runtime->lookupFunction(0x2994F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299650u; }
        if (ctx->pc != 0x299650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2994f8_0x299508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299650u; }
        if (ctx->pc != 0x299650u) { return; }
    }
    ctx->pc = 0x299650u;
    // 0x299650: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x299650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x299654: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299654u;
    {
        const bool branch_taken_0x299654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299654) {
            ctx->pc = 0x299658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299654u;
            // 0x299658: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299638u;
            runtime->cooperativeGuestYield();
            goto label_299638;
        }
    }
    ctx->pc = 0x29965Cu;
label_29965c:
    // 0x29965c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299660: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299664: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29966c: 0x3e00008  jr          $ra
    ctx->pc = 0x29966Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29966Cu;
            // 0x299670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299638u: goto label_299638;
            case 0x29965Cu: goto label_29965c;
            case 0x299680u: goto label_299680;
            case 0x2996A0u: goto label_2996a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299674u;
    // 0x299674: 0x0  nop
    ctx->pc = 0x299674u;
    // NOP
    // 0x299678: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x299678u;
    {
        const bool branch_taken_0x299678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299678u;
            // 0x29967c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299678) {
            ctx->pc = 0x2996A0u;
            goto label_2996a0;
        }
    }
    ctx->pc = 0x299680u;
label_299680:
    // 0x299680: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x299680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299684: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x299684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299688: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x299688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29968c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x29968cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x299690: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x299690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x299694: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x299694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x299698: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299698u;
    {
        const bool branch_taken_0x299698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299698) {
            ctx->pc = 0x299680u;
            runtime->cooperativeGuestYield();
            goto label_299680;
        }
    }
    ctx->pc = 0x2996A0u;
label_2996a0:
    // 0x2996a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2996A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2996A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2996A0u;
            // 0x2996a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299638u: goto label_299638;
            case 0x29965Cu: goto label_29965c;
            case 0x299680u: goto label_299680;
            case 0x2996A0u: goto label_2996a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2996A8u;
}
