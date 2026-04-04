#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a200
// Address: 0x29a200 - 0x29a2f8
void entry_29a200_0x29a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a200_0x29a2f8");
#endif

    ctx->pc = 0x29a200u;

    // 0x29a200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a204: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x29a204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x29a208: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a20c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a210: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29a210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a214: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29a218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a220: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29a220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29a228: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A228u;
    {
        const bool branch_taken_0x29a228 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A228u;
            // 0x29a22c: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a228) {
            ctx->pc = 0x29A240u;
            goto label_29a240;
        }
    }
    ctx->pc = 0x29A230u;
    // 0x29a230: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a234: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x29a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x29a238: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A238u;
    {
        const bool branch_taken_0x29a238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a238) {
            ctx->pc = 0x29A23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A238u;
            // 0x29a23c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A24Cu;
            goto label_29a24c;
        }
    }
    ctx->pc = 0x29A240u;
label_29a240:
    // 0x29a240: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a244: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x29A244u;
    {
        const bool branch_taken_0x29a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A244u;
            // 0x29a248: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a244) {
            ctx->pc = 0x29A2D8u;
            goto label_29a2d8;
        }
    }
    ctx->pc = 0x29A24Cu;
label_29a24c:
    // 0x29a24c: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x29a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x29a250: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x29a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x29a254: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A254u;
    {
        const bool branch_taken_0x29a254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29a254) {
            ctx->pc = 0x29A258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A254u;
            // 0x29a258: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A268u;
            goto label_29a268;
        }
    }
    ctx->pc = 0x29A25Cu;
    // 0x29a25c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a260: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29A260u;
    {
        const bool branch_taken_0x29a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A260u;
            // 0x29a264: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a260) {
            ctx->pc = 0x29A2D8u;
            goto label_29a2d8;
        }
    }
    ctx->pc = 0x29A268u;
label_29a268:
    // 0x29a268: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x29a268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x29a26c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A26Cu;
    {
        const bool branch_taken_0x29a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a26c) {
            ctx->pc = 0x29A280u;
            goto label_29a280;
        }
    }
    ctx->pc = 0x29A274u;
    // 0x29a274: 0xc0a6734  jal         func_299CD0
    ctx->pc = 0x29A274u;
    SET_GPR_U32(ctx, 31, 0x29A27Cu);
    ctx->pc = 0x29A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A274u;
            // 0x29a278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299CD0u;
    if (runtime->hasFunction(0x299CD0u)) {
        auto targetFn = runtime->lookupFunction(0x299CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A27Cu; }
        if (ctx->pc != 0x29A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299cd0_0x299d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A27Cu; }
        if (ctx->pc != 0x29A27Cu) { return; }
    }
    ctx->pc = 0x29A27Cu;
    // 0x29a27c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29a280:
    // 0x29a280: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A280u;
    {
        const bool branch_taken_0x29a280 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A280u;
            // 0x29a284: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a280) {
            ctx->pc = 0x29A29Cu;
            goto label_29a29c;
        }
    }
    ctx->pc = 0x29A288u;
    // 0x29a288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29a288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29a28c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x29a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x29a290: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29a294: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29A294u;
    {
        const bool branch_taken_0x29a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A294u;
            // 0x29a298: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a294) {
            ctx->pc = 0x29A2C4u;
            goto label_29a2c4;
        }
    }
    ctx->pc = 0x29A29Cu;
label_29a29c:
    // 0x29a29c: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x29a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x29a2a0: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x29a2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x29a2a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x29a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x29a2a8: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x29a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x29a2ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a2b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a2b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A2B4u;
    {
        const bool branch_taken_0x29a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2B4u;
            // 0x29a2b8: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2b4) {
            ctx->pc = 0x29A2C4u;
            goto label_29a2c4;
        }
    }
    ctx->pc = 0x29A2BCu;
    // 0x29a2bc: 0xc0a6712  jal         func_299C48
    ctx->pc = 0x29A2BCu;
    SET_GPR_U32(ctx, 31, 0x29A2C4u);
    ctx->pc = 0x29A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2BCu;
            // 0x29a2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299C48u;
    if (runtime->hasFunction(0x299C48u)) {
        auto targetFn = runtime->lookupFunction(0x299C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2C4u; }
        if (ctx->pc != 0x29A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299c48_0x299cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2C4u; }
        if (ctx->pc != 0x29A2C4u) { return; }
    }
    ctx->pc = 0x29A2C4u;
label_29a2c4:
    // 0x29a2c4: 0xc0a67ec  jal         func_299FB0
    ctx->pc = 0x29A2C4u;
    SET_GPR_U32(ctx, 31, 0x29A2CCu);
    ctx->pc = 0x299FB0u;
    if (runtime->hasFunction(0x299FB0u)) {
        auto targetFn = runtime->lookupFunction(0x299FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2CCu; }
        if (ctx->pc != 0x29A2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299fb0_0x29a008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2CCu; }
        if (ctx->pc != 0x29A2CCu) { return; }
    }
    ctx->pc = 0x29A2CCu;
    // 0x29a2cc: 0xc0a66ae  jal         func_299AB8
    ctx->pc = 0x29A2CCu;
    SET_GPR_U32(ctx, 31, 0x29A2D4u);
    ctx->pc = 0x29A2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2CCu;
            // 0x29a2d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299AB8u;
    if (runtime->hasFunction(0x299AB8u)) {
        auto targetFn = runtime->lookupFunction(0x299AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2D4u; }
        if (ctx->pc != 0x29A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299ab8_0x299c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A2D4u; }
        if (ctx->pc != 0x29A2D4u) { return; }
    }
    ctx->pc = 0x29A2D4u;
    // 0x29a2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a2d8:
    // 0x29a2d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29a2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a2dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a2e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a2e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29A2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A2ECu;
            // 0x29a2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A240u: goto label_29a240;
            case 0x29A24Cu: goto label_29a24c;
            case 0x29A268u: goto label_29a268;
            case 0x29A280u: goto label_29a280;
            case 0x29A29Cu: goto label_29a29c;
            case 0x29A2C4u: goto label_29a2c4;
            case 0x29A2D8u: goto label_29a2d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A2F4u;
    // 0x29a2f4: 0x0  nop
    ctx->pc = 0x29a2f4u;
    // NOP
}
