#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001007C8
// Address: 0x1007c8 - 0x100a60
void sub_001007C8_0x1007c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001007C8_0x1007c8");
#endif

    ctx->pc = 0x1007c8u;

label_1007c8:
    // 0x1007c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1007c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1007cc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1007ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1007d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1007d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1007d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1007d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007d8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1007d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1007dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1007dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007e0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1007e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1007e4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1007e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007e8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1007e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1007ec: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1007ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007f0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1007f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1007f4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1007f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1007f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1007f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1007fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1007fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100800: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x100800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x100804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100808: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x100808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10080c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100810: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x100810u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x100814: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x100814u;
    {
        const bool branch_taken_0x100814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100814u;
            // 0x100818: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100814) {
            ctx->pc = 0x100890u;
            goto label_100890;
        }
    }
    ctx->pc = 0x10081Cu;
    // 0x10081c: 0x0  nop
    ctx->pc = 0x10081cu;
    // NOP
label_100820:
    // 0x100820: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x100824: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x100824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100828: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x100828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x10082c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x10082cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100830: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x100834: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x100838: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x100838u;
    {
        const bool branch_taken_0x100838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100838) {
            ctx->pc = 0x10083Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100838u;
            // 0x10083c: 0x94620012  lhu         $v0, 0x12($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100880u;
            goto label_100880;
        }
    }
    ctx->pc = 0x100840u;
    // 0x100840: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x100844: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x100844u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x100848: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10084c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x100850: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x100850u;
    {
        const bool branch_taken_0x100850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100850u;
            // 0x100854: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100850) {
            ctx->pc = 0x100890u;
            goto label_100890;
        }
    }
    ctx->pc = 0x100858u;
    // 0x100858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100858u;
    {
        const bool branch_taken_0x100858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100858u;
            // 0x10085c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100858) {
            ctx->pc = 0x100870u;
            goto label_100870;
        }
    }
    ctx->pc = 0x100860u;
    // 0x100860: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x100860u;
    {
        const bool branch_taken_0x100860 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x100860) {
            ctx->pc = 0x100864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100860u;
            // 0x100864: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100870u;
            goto label_100870;
        }
    }
    ctx->pc = 0x100868u;
    // 0x100868: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x100868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10086c: 0x0  nop
    ctx->pc = 0x10086cu;
    // NOP
label_100870:
    // 0x100870: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x100870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x100874: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x100874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x100878: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100878u;
    {
        const bool branch_taken_0x100878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100878u;
            // 0x10087c: 0xc29021  addu        $s2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100878) {
            ctx->pc = 0x100898u;
            goto label_100898;
        }
    }
    ctx->pc = 0x100880u;
label_100880:
    // 0x100880: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x100884: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x100884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100888: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x100888u;
    {
        const bool branch_taken_0x100888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100888u;
            // 0x10088c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100888) {
            ctx->pc = 0x100820u;
            runtime->cooperativeGuestYield();
            goto label_100820;
        }
    }
    ctx->pc = 0x100890u;
label_100890:
    // 0x100890: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x100890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100894: 0x0  nop
    ctx->pc = 0x100894u;
    // NOP
label_100898:
    // 0x100898: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x100898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10089c: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1008a0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1008a4: 0x1051001c  beq         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1008A4u;
    {
        const bool branch_taken_0x1008a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1008A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008A4u;
            // 0x1008a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008a4) {
            ctx->pc = 0x100918u;
            goto label_100918;
        }
    }
    ctx->pc = 0x1008ACu;
    // 0x1008ac: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1008b0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x1008b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1008b4: 0x0  nop
    ctx->pc = 0x1008b4u;
    // NOP
label_1008b8:
    // 0x1008b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1008b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1008bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1008bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008c0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1008c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1008c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008c8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1008cc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1008ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1008d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1008d8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1008dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1008DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1008E4u);
        ctx->pc = 0x1008E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008DCu;
            // 0x1008e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1008E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1007C8u: goto label_1007c8;
            case 0x100820u: goto label_100820;
            case 0x100870u: goto label_100870;
            case 0x100880u: goto label_100880;
            case 0x100890u: goto label_100890;
            case 0x100898u: goto label_100898;
            case 0x1008B8u: goto label_1008b8;
            case 0x100908u: goto label_100908;
            case 0x100918u: goto label_100918;
            case 0x100938u: goto label_100938;
            case 0x100980u: goto label_100980;
            case 0x100990u: goto label_100990;
            case 0x100998u: goto label_100998;
            case 0x1009A8u: goto label_1009a8;
            case 0x1009C0u: goto label_1009c0;
            case 0x1009E0u: goto label_1009e0;
            case 0x1009F8u: goto label_1009f8;
            case 0x100A08u: goto label_100a08;
            case 0x100A14u: goto label_100a14;
            case 0x100A2Cu: goto label_100a2c;
            case 0x100A30u: goto label_100a30;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1008E4u; }
            if (ctx->pc != 0x1008E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1008E4u;
    // 0x1008e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1008E4u;
    {
        const bool branch_taken_0x1008e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1008e4) {
            ctx->pc = 0x1008E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1008E4u;
            // 0x1008e8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100908u;
            goto label_100908;
        }
    }
    ctx->pc = 0x1008ECu;
    // 0x1008ec: 0x52a00006  beql        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1008ECu;
    {
        const bool branch_taken_0x1008ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1008ec) {
            ctx->pc = 0x1008F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1008ECu;
            // 0x1008f0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100908u;
            goto label_100908;
        }
    }
    ctx->pc = 0x1008F4u;
    // 0x1008f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1008f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1008f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1008fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x100900: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100904: 0x0  nop
    ctx->pc = 0x100904u;
    // NOP
label_100908:
    // 0x100908: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10090c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100910: 0x1443ffe9  bne         $v0, $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x100910u;
    {
        const bool branch_taken_0x100910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100910u;
            // 0x100914: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100910) {
            ctx->pc = 0x1008B8u;
            runtime->cooperativeGuestYield();
            goto label_1008b8;
        }
    }
    ctx->pc = 0x100918u;
label_100918:
    // 0x100918: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x10091c: 0x4a00043  bltz        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x10091Cu;
    {
        const bool branch_taken_0x10091c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x100920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10091Cu;
            // 0x100920: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10091c) {
            ctx->pc = 0x100A2Cu;
            goto label_100a2c;
        }
    }
    ctx->pc = 0x100924u;
    // 0x100924: 0x8e67001c  lw          $a3, 0x1C($s3)
    ctx->pc = 0x100924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100928: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x100928u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x10092c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10092Cu;
    {
        const bool branch_taken_0x10092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10092Cu;
            // 0x100930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10092c) {
            ctx->pc = 0x100990u;
            goto label_100990;
        }
    }
    ctx->pc = 0x100934u;
    // 0x100934: 0x0  nop
    ctx->pc = 0x100934u;
    // NOP
label_100938:
    // 0x100938: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10093c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x100940: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x100940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x100944: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x100944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x100948: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10094c: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x10094cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x100950: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x100950u;
    {
        const bool branch_taken_0x100950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100950) {
            ctx->pc = 0x100954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100950u;
            // 0x100954: 0x94e20012  lhu         $v0, 0x12($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100980u;
            goto label_100980;
        }
    }
    ctx->pc = 0x100958u;
    // 0x100958: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10095c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x100960: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x100964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x100964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x100968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x100968u;
    {
        const bool branch_taken_0x100968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100968u;
            // 0x10096c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100968) {
            ctx->pc = 0x100990u;
            goto label_100990;
        }
    }
    ctx->pc = 0x100970u;
    // 0x100970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100974: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x100978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100978u;
    {
        const bool branch_taken_0x100978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100978u;
            // 0x10097c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100978) {
            ctx->pc = 0x100998u;
            goto label_100998;
        }
    }
    ctx->pc = 0x100980u;
label_100980:
    // 0x100980: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100984: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x100984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100988: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x100988u;
    {
        const bool branch_taken_0x100988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100988u;
            // 0x10098c: 0x1284823  subu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100988) {
            ctx->pc = 0x100938u;
            runtime->cooperativeGuestYield();
            goto label_100938;
        }
    }
    ctx->pc = 0x100990u;
label_100990:
    // 0x100990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100994: 0x0  nop
    ctx->pc = 0x100994u;
    // NOP
label_100998:
    // 0x100998: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x100998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10099c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x10099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x1009a0: 0x1051001c  beq         $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1009A0u;
    {
        const bool branch_taken_0x1009a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1009A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009A0u;
            // 0x1009a4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009a0) {
            ctx->pc = 0x100A14u;
            goto label_100a14;
        }
    }
    ctx->pc = 0x1009A8u;
label_1009a8:
    // 0x1009a8: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1009ac: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1009b0: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x1009b4: 0x50820014  beql        $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1009B4u;
    {
        const bool branch_taken_0x1009b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1009b4) {
            ctx->pc = 0x1009B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1009B4u;
            // 0x1009b8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100A08u;
            goto label_100a08;
        }
    }
    ctx->pc = 0x1009BCu;
    // 0x1009bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1009c0:
    // 0x1009c0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1009c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1009c4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1009C4u;
    {
        const bool branch_taken_0x1009c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009c4) {
            ctx->pc = 0x1009C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1009C4u;
            // 0x1009c8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1009F8u;
            goto label_1009f8;
        }
    }
    ctx->pc = 0x1009CCu;
    // 0x1009cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1009ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1009d0: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1009d4: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1009D4u;
    {
        const bool branch_taken_0x1009d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1009d4) {
            ctx->pc = 0x1009D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1009D4u;
            // 0x1009d8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1009F8u;
            goto label_1009f8;
        }
    }
    ctx->pc = 0x1009DCu;
    // 0x1009dc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1009dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1009e0:
    // 0x1009e0: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1009E0u;
    {
        const bool branch_taken_0x1009e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1009E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009E0u;
            // 0x1009e4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009e0) {
            ctx->pc = 0x100A30u;
            goto label_100a30;
        }
    }
    ctx->pc = 0x1009E8u;
    // 0x1009e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1009e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1009ec: 0x5468fffc  bnel        $v1, $t0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1009ECu;
    {
        const bool branch_taken_0x1009ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1009ec) {
            ctx->pc = 0x1009F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1009ECu;
            // 0x1009f0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1009E0u;
            runtime->cooperativeGuestYield();
            goto label_1009e0;
        }
    }
    ctx->pc = 0x1009F4u;
    // 0x1009f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1009f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1009f8:
    // 0x1009f8: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x1009f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x1009fc: 0x5482fff0  bnel        $a0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1009FCu;
    {
        const bool branch_taken_0x1009fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1009fc) {
            ctx->pc = 0x100A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1009FCu;
            // 0x100a00: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1009C0u;
            runtime->cooperativeGuestYield();
            goto label_1009c0;
        }
    }
    ctx->pc = 0x100A04u;
    // 0x100a04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x100a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_100a08:
    // 0x100a08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100a0c: 0x1443ffe6  bne         $v0, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x100A0Cu;
    {
        const bool branch_taken_0x100a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A0Cu;
            // 0x100a10: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a0c) {
            ctx->pc = 0x1009A8u;
            runtime->cooperativeGuestYield();
            goto label_1009a8;
        }
    }
    ctx->pc = 0x100A14u;
label_100a14:
    // 0x100a14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a18: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x100a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a24: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x100A24u;
    SET_GPR_U32(ctx, 31, 0x100A2Cu);
    ctx->pc = 0x100A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A24u;
            // 0x100a28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    runtime->cooperativeGuestYield();
    goto label_1007c8;
    ctx->pc = 0x100A2Cu;
label_100a2c:
    // 0x100a2c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x100a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100a30:
    // 0x100a30: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x100a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x100a34: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x100a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x100a38: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x100a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x100a3c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x100a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x100a40: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x100a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x100a44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x100a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x100a48: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x100a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100a4c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x100a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100a50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x100a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100a54: 0x3e00008  jr          $ra
    ctx->pc = 0x100A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A54u;
            // 0x100a58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1007C8u: goto label_1007c8;
            case 0x100820u: goto label_100820;
            case 0x100870u: goto label_100870;
            case 0x100880u: goto label_100880;
            case 0x100890u: goto label_100890;
            case 0x100898u: goto label_100898;
            case 0x1008B8u: goto label_1008b8;
            case 0x100908u: goto label_100908;
            case 0x100918u: goto label_100918;
            case 0x100938u: goto label_100938;
            case 0x100980u: goto label_100980;
            case 0x100990u: goto label_100990;
            case 0x100998u: goto label_100998;
            case 0x1009A8u: goto label_1009a8;
            case 0x1009C0u: goto label_1009c0;
            case 0x1009E0u: goto label_1009e0;
            case 0x1009F8u: goto label_1009f8;
            case 0x100A08u: goto label_100a08;
            case 0x100A14u: goto label_100a14;
            case 0x100A2Cu: goto label_100a2c;
            case 0x100A30u: goto label_100a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100A5Cu;
    // 0x100a5c: 0x0  nop
    ctx->pc = 0x100a5cu;
    // NOP
}
