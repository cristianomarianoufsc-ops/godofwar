#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D618
// Address: 0x27d618 - 0x27d738
void sub_0027D618_0x27d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D618_0x27d618");
#endif

    ctx->pc = 0x27d618u;

    // 0x27d618: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27d618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27d61c: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x27d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x27d620: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d624: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27d624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27d628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d62c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d630: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27d630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27d634: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x27d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x27d638: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27d638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d63c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27d640: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27d644: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x27d644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d648: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27d64c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d650: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x27d650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d654: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D654u;
    {
        const bool branch_taken_0x27d654 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x27D658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D654u;
            // 0x27d658: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d654) {
            ctx->pc = 0x27D664u;
            goto label_27d664;
        }
    }
    ctx->pc = 0x27D65Cu;
    // 0x27d65c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27d660: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x27d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_27d664:
    // 0x27d664: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27d664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27d668: 0x3c150032  lui         $s5, 0x32
    ctx->pc = 0x27d668u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
    // 0x27d66c: 0x2223818  mult        $a3, $s1, $v0
    ctx->pc = 0x27d66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27d670: 0x26a8c9c8  addiu       $t0, $s5, -0x3638
    ctx->pc = 0x27d670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953416));
    // 0x27d674: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d678: 0x25040804  addiu       $a0, $t0, 0x804
    ctx->pc = 0x27d678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2052));
    // 0x27d67c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x27d67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27d680: 0x24a300ff  addiu       $v1, $a1, 0xFF
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x27d684: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x27d684u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x27d688: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x27d688u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x27d68c: 0xe49021  addu        $s2, $a3, $a0
    ctx->pc = 0x27d68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x27d690: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x27d690u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x27d694: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x27d694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x27d698: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x27d698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27d69c: 0x1090000f  beq         $a0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x27D69Cu;
    {
        const bool branch_taken_0x27d69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x27D6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D69Cu;
            // 0x27d6a0: 0x62a023  subu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d69c) {
            ctx->pc = 0x27D6DCu;
            goto label_27d6dc;
        }
    }
    ctx->pc = 0x27D6A4u;
    // 0x27d6a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x27d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27d6a8: 0xe82821  addu        $a1, $a3, $t0
    ctx->pc = 0x27d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x27d6ac: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x27d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x27d6b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6b4: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x27d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x27d6b8: 0xc0a05f8  jal         func_2817E0
    ctx->pc = 0x27D6B8u;
    SET_GPR_U32(ctx, 31, 0x27D6C0u);
    ctx->pc = 0x27D6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6B8u;
            // 0x27d6bc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817E0u;
    if (runtime->hasFunction(0x2817E0u)) {
        auto targetFn = runtime->lookupFunction(0x2817E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6C0u; }
        if (ctx->pc != 0x27D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2817e0_0x281820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D6C0u; }
        if (ctx->pc != 0x27D6C0u) { return; }
    }
    ctx->pc = 0x27D6C0u;
    // 0x27d6c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D6C0u;
    {
        const bool branch_taken_0x27d6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d6c0) {
            ctx->pc = 0x27D6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6C0u;
            // 0x27d6c4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D6DCu;
            goto label_27d6dc;
        }
    }
    ctx->pc = 0x27D6C8u;
    // 0x27d6c8: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27d6cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6d0: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x27d6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x27d6d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27D6D4u;
    {
        const bool branch_taken_0x27d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6D4u;
            // 0x27d6d8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6d4) {
            ctx->pc = 0x27D710u;
            goto label_27d710;
        }
    }
    ctx->pc = 0x27D6DCu;
label_27d6dc:
    // 0x27d6dc: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27d6e0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x27d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x27d6e4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27d6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27d6e8: 0x26a4c9c8  addiu       $a0, $s5, -0x3638
    ctx->pc = 0x27d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953416));
    // 0x27d6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d6f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27d6f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d6f8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D6F8u;
    {
        const bool branch_taken_0x27d6f8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27d6f8) {
            ctx->pc = 0x27D6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6F8u;
            // 0x27d6fc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D710u;
            goto label_27d710;
        }
    }
    ctx->pc = 0x27D700u;
    // 0x27d700: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27d700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27d704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d708: 0x34639001  ori         $v1, $v1, 0x9001
    ctx->pc = 0x27d708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36865);
    // 0x27d70c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x27d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_27d710:
    // 0x27d710: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d714: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27d714u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27d718: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27d718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d71c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27d71cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d720: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27d720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d724: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27d724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d72c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D72Cu;
            // 0x27d730: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D664u: goto label_27d664;
            case 0x27D6DCu: goto label_27d6dc;
            case 0x27D710u: goto label_27d710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D734u;
    // 0x27d734: 0x0  nop
    ctx->pc = 0x27d734u;
    // NOP
}
