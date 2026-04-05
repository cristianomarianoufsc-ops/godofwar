#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286588
// Address: 0x286588 - 0x2867f0
void sub_00286588_0x286588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286588_0x286588");
#endif

    ctx->pc = 0x286588u;

    // 0x286588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28658c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286590: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x286590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x286594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286598: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28659c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2865a0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2865a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2865a4: 0x12050003  beq         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2865A4u;
    {
        const bool branch_taken_0x2865a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2865A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2865A4u;
            // 0x2865a8: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865a4) {
            ctx->pc = 0x2865B4u;
            goto label_2865b4;
        }
    }
    ctx->pc = 0x2865ACu;
    // 0x2865ac: 0xc0a2c50  jal         func_28B140
    ctx->pc = 0x2865ACu;
    SET_GPR_U32(ctx, 31, 0x2865B4u);
    ctx->pc = 0x28B140u;
    if (runtime->hasFunction(0x28B140u)) {
        auto targetFn = runtime->lookupFunction(0x28B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865B4u; }
        if (ctx->pc != 0x2865B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B140_0x28b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865B4u; }
        if (ctx->pc != 0x2865B4u) { return; }
    }
    ctx->pc = 0x2865B4u;
label_2865b4:
    // 0x2865b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2865b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865b8: 0xc0a1c80  jal         func_287200
    ctx->pc = 0x2865B8u;
    SET_GPR_U32(ctx, 31, 0x2865C0u);
    ctx->pc = 0x2865BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2865B8u;
            // 0x2865bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287200u;
    if (runtime->hasFunction(0x287200u)) {
        auto targetFn = runtime->lookupFunction(0x287200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865C0u; }
        if (ctx->pc != 0x2865C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287200_0x287200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865C0u; }
        if (ctx->pc != 0x2865C0u) { return; }
    }
    ctx->pc = 0x2865C0u;
    // 0x2865c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2865c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2865c4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2865c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2865c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2865c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2865cc: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2865CCu;
    {
        const bool branch_taken_0x2865cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2865cc) {
            ctx->pc = 0x2865D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2865CCu;
            // 0x2865d0: 0x8e4d0004  lw          $t5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x2865D4u;
    // 0x2865d4: 0xc0a2c50  jal         func_28B140
    ctx->pc = 0x2865D4u;
    SET_GPR_U32(ctx, 31, 0x2865DCu);
    ctx->pc = 0x28B140u;
    if (runtime->hasFunction(0x28B140u)) {
        auto targetFn = runtime->lookupFunction(0x28B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865DCu; }
        if (ctx->pc != 0x2865DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B140_0x28b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2865DCu; }
        if (ctx->pc != 0x2865DCu) { return; }
    }
    ctx->pc = 0x2865DCu;
label_2865dc:
    // 0x2865dc: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x2865dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2865e0: 0x11a00034  beqz        $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x2865E0u;
    {
        const bool branch_taken_0x2865e0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2865E0u;
            // 0x2865e4: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865e0) {
            ctx->pc = 0x2866B4u;
            goto label_2866b4;
        }
    }
    ctx->pc = 0x2865E8u;
    // 0x2865e8: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x2865e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2865ec: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_2865f0:
    // 0x2865f0: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x2865f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2865f4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2865F4u;
    {
        const bool branch_taken_0x2865f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2865F4u;
            // 0x2865f8: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865f4) {
            ctx->pc = 0x286694u;
            goto label_286694;
        }
    }
    ctx->pc = 0x2865FCu;
    // 0x2865fc: 0x0  nop
    ctx->pc = 0x2865fcu;
    // NOP
label_286600:
    // 0x286600: 0x246c0002  addiu       $t4, $v1, 0x2
    ctx->pc = 0x286600u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x286604: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x286604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x286608: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286608u;
    {
        const bool branch_taken_0x286608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286608u;
            // 0x28660c: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286608) {
            ctx->pc = 0x286658u;
            goto label_286658;
        }
    }
    ctx->pc = 0x286610u;
    // 0x286610: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x286614: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x286614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x286618: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x286618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28661c: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x286620: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286624: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x286624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x286628: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286628u;
    {
        const bool branch_taken_0x286628 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286628u;
            // 0x28662c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286628) {
            ctx->pc = 0x28665Cu;
            goto label_28665c;
        }
    }
    ctx->pc = 0x286630u;
    // 0x286630: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x286634: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x286634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286638: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28663c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x286640: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286640u;
    {
        const bool branch_taken_0x286640 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286640u;
            // 0x286644: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286640) {
            ctx->pc = 0x286660u;
            goto label_286660;
        }
    }
    ctx->pc = 0x286648u;
    // 0x286648: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x286648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x28664c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x28664cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x286650: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x286650u;
    {
        const bool branch_taken_0x286650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286650u;
            // 0x286654: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286650) {
            ctx->pc = 0x286690u;
            goto label_286690;
        }
    }
    ctx->pc = 0x286658u;
label_286658:
    // 0x286658: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x286658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28665c:
    // 0x28665c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x28665cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_286660:
    // 0x286660: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x286660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x286664: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x286664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x286668: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28666c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x28666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x286670: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x286670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x286674: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x286674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286678: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286678u;
    {
        const bool branch_taken_0x286678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x286678) {
            ctx->pc = 0x2866A4u;
            goto label_2866a4;
        }
    }
    ctx->pc = 0x286680u;
    // 0x286680: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x286680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x286684: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x286684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x286688: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x286688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x28668c: 0x0  nop
    ctx->pc = 0x28668cu;
    // NOP
label_286690:
    // 0x286690: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x286690u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_286694:
    // 0x286694: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x286694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x286698: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x286698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x28669c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x28669Cu;
    {
        const bool branch_taken_0x28669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2866A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28669Cu;
            // 0x2866a0: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28669c) {
            ctx->pc = 0x286600u;
            runtime->cooperativeGuestYield();
            goto label_286600;
        }
    }
    ctx->pc = 0x2866A4u;
label_2866a4:
    // 0x2866a4: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2866A4u;
    {
        const bool branch_taken_0x2866a4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2866A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2866A4u;
            // 0x2866a8: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866a4) {
            ctx->pc = 0x2865F0u;
            runtime->cooperativeGuestYield();
            goto label_2865f0;
        }
    }
    ctx->pc = 0x2866ACu;
    // 0x2866ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2866ACu;
    {
        const bool branch_taken_0x2866ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2866ac) {
            ctx->pc = 0x2866B8u;
            goto label_2866b8;
        }
    }
    ctx->pc = 0x2866B4u;
label_2866b4:
    // 0x2866b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2866b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2866b8:
    // 0x2866b8: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x2866B8u;
    {
        const bool branch_taken_0x2866b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2866BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2866B8u;
            // 0x2866bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866b8) {
            ctx->pc = 0x2867C0u;
            goto label_2867c0;
        }
    }
    ctx->pc = 0x2866C0u;
    // 0x2866c0: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x2866c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2866c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2866c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2866c8: 0x4b7021  addu        $t6, $v0, $t3
    ctx->pc = 0x2866c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2866cc: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x2866ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_2866d0:
    // 0x2866d0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x2866d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x2866d4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2866d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2866d8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2866d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2866dc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x2866dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x2866e0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x2866e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x2866e4: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x2866e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2866e8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2866E8u;
    {
        const bool branch_taken_0x2866e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2866E8u;
            // 0x2866ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866e8) {
            ctx->pc = 0x2867B0u;
            goto label_2867b0;
        }
    }
    ctx->pc = 0x2866F0u;
    // 0x2866f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2866f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866f4: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x2866f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2866f8: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x2866f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2866fc: 0x0  nop
    ctx->pc = 0x2866fcu;
    // NOP
label_286700:
    // 0x286700: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x286700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x286704: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x286704u;
    {
        const bool branch_taken_0x286704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286704u;
            // 0x286708: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286704) {
            ctx->pc = 0x286758u;
            goto label_286758;
        }
    }
    ctx->pc = 0x28670Cu;
    // 0x28670c: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x28670cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x286710: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x286714: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x286714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x286718: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x286718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x28671c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286720: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x286720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x286724: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286724u;
    {
        const bool branch_taken_0x286724 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286724u;
            // 0x286728: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286724) {
            ctx->pc = 0x28675Cu;
            goto label_28675c;
        }
    }
    ctx->pc = 0x28672Cu;
    // 0x28672c: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x286730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x286730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286734: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x286734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x286738: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x286738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28673c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28673Cu;
    {
        const bool branch_taken_0x28673c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28673Cu;
            // 0x286740: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28673c) {
            ctx->pc = 0x286760u;
            goto label_286760;
        }
    }
    ctx->pc = 0x286744u;
    // 0x286744: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x286744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x286748: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x286748u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x28674c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28674Cu;
    {
        const bool branch_taken_0x28674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28674Cu;
            // 0x286750: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28674c) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286754u;
    // 0x286754: 0x0  nop
    ctx->pc = 0x286754u;
    // NOP
label_286758:
    // 0x286758: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x286758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28675c:
    // 0x28675c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x28675cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_286760:
    // 0x286760: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x286760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x286764: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x286764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x286768: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x286768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28676c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x28676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x286770: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x286774: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286778: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x286778u;
    {
        const bool branch_taken_0x286778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x286778) {
            ctx->pc = 0x2867B4u;
            goto label_2867b4;
        }
    }
    ctx->pc = 0x286780u;
    // 0x286780: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x286780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x286784: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x286784u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x286788: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x286788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x28678c: 0x0  nop
    ctx->pc = 0x28678cu;
    // NOP
label_286790:
    // 0x286790: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x286790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x286794: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x286794u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286798: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x286798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x28679c: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x28679cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2867a0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2867A0u;
    {
        const bool branch_taken_0x2867a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2867A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867A0u;
            // 0x2867a4: 0x254c0002  addiu       $t4, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867a0) {
            ctx->pc = 0x286700u;
            runtime->cooperativeGuestYield();
            goto label_286700;
        }
    }
    ctx->pc = 0x2867A8u;
    // 0x2867a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2867A8u;
    {
        const bool branch_taken_0x2867a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2867a8) {
            ctx->pc = 0x2867B4u;
            goto label_2867b4;
        }
    }
    ctx->pc = 0x2867B0u;
label_2867b0:
    // 0x2867b0: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x2867b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2867b4:
    // 0x2867b4: 0x11e0ffc6  beqz        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2867B4u;
    {
        const bool branch_taken_0x2867b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867B4u;
            // 0x2867b8: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867b4) {
            ctx->pc = 0x2866D0u;
            runtime->cooperativeGuestYield();
            goto label_2866d0;
        }
    }
    ctx->pc = 0x2867BCu;
    // 0x2867bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2867bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2867c0:
    // 0x2867c0: 0xc0a1922  jal         func_286488
    ctx->pc = 0x2867C0u;
    SET_GPR_U32(ctx, 31, 0x2867C8u);
    ctx->pc = 0x2867C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2867C0u;
            // 0x2867c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286488u;
    if (runtime->hasFunction(0x286488u)) {
        auto targetFn = runtime->lookupFunction(0x286488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867C8u; }
        if (ctx->pc != 0x2867C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286488_0x286488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867C8u; }
        if (ctx->pc != 0x2867C8u) { return; }
    }
    ctx->pc = 0x2867C8u;
    // 0x2867c8: 0xc0a2cb0  jal         func_28B2C0
    ctx->pc = 0x2867C8u;
    SET_GPR_U32(ctx, 31, 0x2867D0u);
    ctx->pc = 0x2867CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2867C8u;
            // 0x2867cc: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B2C0u;
    if (runtime->hasFunction(0x28B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867D0u; }
        if (ctx->pc != 0x2867D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B2C0_0x28b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2867D0u; }
        if (ctx->pc != 0x2867D0u) { return; }
    }
    ctx->pc = 0x2867D0u;
    // 0x2867d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2867d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2867d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2867d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2867d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2867d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2867dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2867dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2867e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2867e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2867e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2867E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2867E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867E4u;
            // 0x2867e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2865B4u: goto label_2865b4;
            case 0x2865DCu: goto label_2865dc;
            case 0x2865F0u: goto label_2865f0;
            case 0x286600u: goto label_286600;
            case 0x286658u: goto label_286658;
            case 0x28665Cu: goto label_28665c;
            case 0x286660u: goto label_286660;
            case 0x286690u: goto label_286690;
            case 0x286694u: goto label_286694;
            case 0x2866A4u: goto label_2866a4;
            case 0x2866B4u: goto label_2866b4;
            case 0x2866B8u: goto label_2866b8;
            case 0x2866D0u: goto label_2866d0;
            case 0x286700u: goto label_286700;
            case 0x286758u: goto label_286758;
            case 0x28675Cu: goto label_28675c;
            case 0x286760u: goto label_286760;
            case 0x286790u: goto label_286790;
            case 0x2867B0u: goto label_2867b0;
            case 0x2867B4u: goto label_2867b4;
            case 0x2867C0u: goto label_2867c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2867ECu;
    // 0x2867ec: 0x0  nop
    ctx->pc = 0x2867ecu;
    // NOP
}
