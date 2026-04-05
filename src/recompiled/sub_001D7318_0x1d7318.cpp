#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7318
// Address: 0x1d7318 - 0x1d7410
void sub_001D7318_0x1d7318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7318_0x1d7318");
#endif

    ctx->pc = 0x1d7318u;

    // 0x1d7318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d731c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d7320: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d7320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d7324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d7324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d732c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d732cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7334: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d7338: 0x24512cc0  addiu       $s1, $v0, 0x2CC0
    ctx->pc = 0x1d7338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d733c: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d7340: 0x96230082  lhu         $v1, 0x82($s1)
    ctx->pc = 0x1d7340u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
    // 0x1d7344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7348: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d734c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7350: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7350u;
    {
        const bool branch_taken_0x1d7350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7350) {
            ctx->pc = 0x1D7354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7350u;
            // 0x1d7354: 0x9222007e  lbu         $v0, 0x7E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7378u;
            goto label_1d7378;
        }
    }
    ctx->pc = 0x1D7358u;
    // 0x1d7358: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d735c: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1d7360: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1d7360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d7364: 0x24c66a60  addiu       $a2, $a2, 0x6A60
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27232));
    // 0x1d7368: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1D7368u;
    SET_GPR_U32(ctx, 31, 0x1D7370u);
    ctx->pc = 0x1D736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7368u;
            // 0x1d736c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7370u; }
        if (ctx->pc != 0x1D7370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7370u; }
        if (ctx->pc != 0x1D7370u) { return; }
    }
    ctx->pc = 0x1D7370u;
    // 0x1d7370: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D7370u;
    {
        const bool branch_taken_0x1d7370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7370u;
            // 0x1d7374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7370) {
            ctx->pc = 0x1D73F0u;
            goto label_1d73f0;
        }
    }
    ctx->pc = 0x1D7378u;
label_1d7378:
    // 0x1d7378: 0x1050001c  beq         $v0, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D7378u;
    {
        const bool branch_taken_0x1d7378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7378u;
            // 0x1d737c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7378) {
            ctx->pc = 0x1D73ECu;
            goto label_1d73ec;
        }
    }
    ctx->pc = 0x1D7380u;
    // 0x1d7380: 0x2603fffd  addiu       $v1, $s0, -0x3
    ctx->pc = 0x1d7380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x1d7384: 0x2442cd88  addiu       $v0, $v0, -0x3278
    ctx->pc = 0x1d7384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954376));
    // 0x1d7388: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d7388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d738c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d7390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7394: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d7398: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d7398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d739c: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1D739Cu;
    SET_GPR_U32(ctx, 31, 0x1D73A4u);
    ctx->pc = 0x1D73A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D739Cu;
            // 0x1d73a0: 0x8c44cb94  lw          $a0, -0x346C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73A4u; }
        if (ctx->pc != 0x1D73A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73A4u; }
        if (ctx->pc != 0x1D73A4u) { return; }
    }
    ctx->pc = 0x1D73A4u;
    // 0x1d73a4: 0xa230007e  sb          $s0, 0x7E($s1)
    ctx->pc = 0x1d73a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 126), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d73a8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d73ac: 0x9043463c  lbu         $v1, 0x463C($v0)
    ctx->pc = 0x1d73acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17980)));
    // 0x1d73b0: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1d73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1d73b4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D73B4u;
    {
        const bool branch_taken_0x1d73b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D73B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73B4u;
            // 0x1d73b8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73b4) {
            ctx->pc = 0x1D73D0u;
            goto label_1d73d0;
        }
    }
    ctx->pc = 0x1D73BCu;
    // 0x1d73bc: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1d73c0: 0x90424642  lbu         $v0, 0x4642($v0)
    ctx->pc = 0x1d73c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17986)));
    // 0x1d73c4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D73C4u;
    {
        const bool branch_taken_0x1d73c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D73C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73C4u;
            // 0x1d73c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73c4) {
            ctx->pc = 0x1D73F0u;
            goto label_1d73f0;
        }
    }
    ctx->pc = 0x1D73CCu;
    // 0x1d73cc: 0x0  nop
    ctx->pc = 0x1d73ccu;
    // NOP
label_1d73d0:
    // 0x1d73d0: 0x0  nop
    ctx->pc = 0x1d73d0u;
    // NOP
    // 0x1d73d4: 0x0  nop
    ctx->pc = 0x1d73d4u;
    // NOP
    // 0x1d73d8: 0x0  nop
    ctx->pc = 0x1d73d8u;
    // NOP
    // 0x1d73dc: 0x0  nop
    ctx->pc = 0x1d73dcu;
    // NOP
    // 0x1d73e0: 0x0  nop
    ctx->pc = 0x1d73e0u;
    // NOP
    // 0x1d73e4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D73E4u;
    {
        const bool branch_taken_0x1d73e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73e4) {
            ctx->pc = 0x1D73D0u;
            runtime->cooperativeGuestYield();
            goto label_1d73d0;
        }
    }
    ctx->pc = 0x1D73ECu;
label_1d73ec:
    // 0x1d73ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d73f0:
    // 0x1d73f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d73f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d73f4: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x1d73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
    // 0x1d73f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d73f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d73fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d73fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7404: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7404u;
            // 0x1d7408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7378u: goto label_1d7378;
            case 0x1D73D0u: goto label_1d73d0;
            case 0x1D73ECu: goto label_1d73ec;
            case 0x1D73F0u: goto label_1d73f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D740Cu;
    // 0x1d740c: 0x0  nop
    ctx->pc = 0x1d740cu;
    // NOP
}
