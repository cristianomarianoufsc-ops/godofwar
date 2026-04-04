#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125970
// Address: 0x125970 - 0x125a48
void sub_00125970_0x125970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125970_0x125970");
#endif

    ctx->pc = 0x125970u;

    // 0x125970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x125974: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x125974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x125978: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x125978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12597c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12597cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x125984: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x125984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125988: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x125988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x12598c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12598cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125994: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x125994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125998: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x125998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12599c: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x12599cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1259a0: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1259a0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1259a4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1259a4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1259a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1259a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1259ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1259acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1259b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1259b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1259b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1259B4u;
    {
        const bool branch_taken_0x1259b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259b4) {
            ctx->pc = 0x1259B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1259B4u;
            // 0x1259b8: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1259C8u;
            goto label_1259c8;
        }
    }
    ctx->pc = 0x1259BCu;
    // 0x1259bc: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x1259BCu;
    SET_GPR_U32(ctx, 31, 0x1259C4u);
    ctx->pc = 0x1259C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1259BCu;
            // 0x1259c0: 0x7e050000  sq          $a1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1259C4u; }
        if (ctx->pc != 0x1259C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1259C4u; }
        if (ctx->pc != 0x1259C4u) { return; }
    }
    ctx->pc = 0x1259C4u;
    // 0x1259c4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1259c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1259c8:
    // 0x1259c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1259c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1259cc: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1259ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x1259d0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1259d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1259d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1259d8: 0x10910004  beq         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1259D8u;
    {
        const bool branch_taken_0x1259d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x1259DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259D8u;
            // 0x1259dc: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259d8) {
            ctx->pc = 0x1259ECu;
            goto label_1259ec;
        }
    }
    ctx->pc = 0x1259E0u;
    // 0x1259e0: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1259e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x1259e4: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x1259E4u;
    SET_GPR_U32(ctx, 31, 0x1259ECu);
    ctx->pc = 0x1259E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1259E4u;
            // 0x1259e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1259ECu; }
        if (ctx->pc != 0x1259ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1259ECu; }
        if (ctx->pc != 0x1259ECu) { return; }
    }
    ctx->pc = 0x1259ECu;
label_1259ec:
    // 0x1259ec: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1259ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1259f0: 0x52420005  beql        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1259F0u;
    {
        const bool branch_taken_0x1259f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1259f0) {
            ctx->pc = 0x1259F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1259F0u;
            // 0x1259f4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A08u;
            goto label_125a08;
        }
    }
    ctx->pc = 0x1259F8u;
    // 0x1259f8: 0xa6120034  sh          $s2, 0x34($s0)
    ctx->pc = 0x1259f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 18));
    // 0x1259fc: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x1259FCu;
    SET_GPR_U32(ctx, 31, 0x125A04u);
    ctx->pc = 0x125A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1259FCu;
            // 0x125a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A04u; }
        if (ctx->pc != 0x125A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A04u; }
        if (ctx->pc != 0x125A04u) { return; }
    }
    ctx->pc = 0x125A04u;
    // 0x125a04: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x125a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_125a08:
    // 0x125a08: 0x10530005  beq         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x125A08u;
    {
        const bool branch_taken_0x125a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x125A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A08u;
            // 0x125a0c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a08) {
            ctx->pc = 0x125A20u;
            goto label_125a20;
        }
    }
    ctx->pc = 0x125A10u;
    // 0x125a10: 0xae130038  sw          $s3, 0x38($s0)
    ctx->pc = 0x125a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
    // 0x125a14: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x125A14u;
    SET_GPR_U32(ctx, 31, 0x125A1Cu);
    ctx->pc = 0x125A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125A14u;
            // 0x125a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A1Cu; }
        if (ctx->pc != 0x125A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23f000_0x23f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125A1Cu; }
        if (ctx->pc != 0x125A1Cu) { return; }
    }
    ctx->pc = 0x125A1Cu;
    // 0x125a1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x125a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_125a20:
    // 0x125a20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x125a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125a24: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x125a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x125a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125a2c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x125a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x125a30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x125a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125a34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x125a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x125A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A3Cu;
            // 0x125a40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1259C8u: goto label_1259c8;
            case 0x1259ECu: goto label_1259ec;
            case 0x125A08u: goto label_125a08;
            case 0x125A20u: goto label_125a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125A44u;
    // 0x125a44: 0x0  nop
    ctx->pc = 0x125a44u;
    // NOP
}
