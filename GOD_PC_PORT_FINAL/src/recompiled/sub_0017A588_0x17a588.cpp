#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A588
// Address: 0x17a588 - 0x17a658
void sub_0017A588_0x17a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A588_0x17a588");
#endif

    ctx->pc = 0x17a588u;

    // 0x17a588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a58c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17a590: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17a590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17a594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17a594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a598: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17a59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a5a0: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A5A0u;
    SET_GPR_U32(ctx, 31, 0x17A5A8u);
    ctx->pc = 0x17A5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5A0u;
            // 0x17a5a4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5A8u; }
        if (ctx->pc != 0x17A5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5A8u; }
        if (ctx->pc != 0x17A5A8u) { return; }
    }
    ctx->pc = 0x17A5A8u;
    // 0x17a5a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5ac: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x17A5ACu;
    SET_GPR_U32(ctx, 31, 0x17A5B4u);
    ctx->pc = 0x17A5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5ACu;
            // 0x17a5b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5B4u; }
        if (ctx->pc != 0x17A5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5B4u; }
        if (ctx->pc != 0x17A5B4u) { return; }
    }
    ctx->pc = 0x17A5B4u;
    // 0x17a5b4: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A5B4u;
    SET_GPR_U32(ctx, 31, 0x17A5BCu);
    ctx->pc = 0x17A5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5B4u;
            // 0x17a5b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5BCu; }
        if (ctx->pc != 0x17A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5BCu; }
        if (ctx->pc != 0x17A5BCu) { return; }
    }
    ctx->pc = 0x17A5BCu;
    // 0x17a5bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a5c0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17A5C0u;
    {
        const bool branch_taken_0x17a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5C0u;
            // 0x17a5c4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5c0) {
            ctx->pc = 0x17A630u;
            goto label_17a630;
        }
    }
    ctx->pc = 0x17A5C8u;
    // 0x17a5c8: 0x2450e848  addiu       $s0, $v0, -0x17B8
    ctx->pc = 0x17a5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x17a5cc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17a5d0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x17A5D0u;
    {
        const bool branch_taken_0x17a5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5d0) {
            ctx->pc = 0x17A5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5D0u;
            // 0x17a5d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17A628u;
            goto label_17a628;
        }
    }
    ctx->pc = 0x17A5D8u;
    // 0x17a5d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a5dc: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a5e0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a5e4: 0x40f809  jalr        $v0
    ctx->pc = 0x17A5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A5ECu);
        ctx->pc = 0x17A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5E4u;
            // 0x17a5e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A5ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A628u: goto label_17a628;
            case 0x17A630u: goto label_17a630;
            case 0x17A63Cu: goto label_17a63c;
            case 0x17A640u: goto label_17a640;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A5ECu; }
            if (ctx->pc != 0x17A5ECu) { return; }
        }
        }
    }
    ctx->pc = 0x17A5ECu;
    // 0x17a5ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17A5ECu;
    {
        const bool branch_taken_0x17a5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5ec) {
            ctx->pc = 0x17A5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5ECu;
            // 0x17a5f0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17A628u;
            goto label_17a628;
        }
    }
    ctx->pc = 0x17A5F4u;
    // 0x17a5f4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x17a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17a5f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a5fc: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17a5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x17a600: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x17a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x17a604: 0x40f809  jalr        $v0
    ctx->pc = 0x17A604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A60Cu);
        ctx->pc = 0x17A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A604u;
            // 0x17a608: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A60Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A628u: goto label_17a628;
            case 0x17A630u: goto label_17a630;
            case 0x17A63Cu: goto label_17a63c;
            case 0x17A640u: goto label_17a640;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A60Cu; }
            if (ctx->pc != 0x17A60Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17A60Cu;
    // 0x17a60c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a610: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a614: 0xc0619c4  jal         func_186710
    ctx->pc = 0x17A614u;
    SET_GPR_U32(ctx, 31, 0x17A61Cu);
    ctx->pc = 0x17A618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A614u;
            // 0x17a618: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186710u;
    if (runtime->hasFunction(0x186710u)) {
        auto targetFn = runtime->lookupFunction(0x186710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A61Cu; }
        if (ctx->pc != 0x17A61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186710_0x186710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A61Cu; }
        if (ctx->pc != 0x17A61Cu) { return; }
    }
    ctx->pc = 0x17A61Cu;
    // 0x17a61c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A61Cu;
    {
        const bool branch_taken_0x17a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A61Cu;
            // 0x17a620: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a61c) {
            ctx->pc = 0x17A640u;
            goto label_17a640;
        }
    }
    ctx->pc = 0x17A624u;
    // 0x17a624: 0x0  nop
    ctx->pc = 0x17a624u;
    // NOP
label_17a628:
    // 0x17a628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17A628u;
    {
        const bool branch_taken_0x17a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A628u;
            // 0x17a62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a628) {
            ctx->pc = 0x17A63Cu;
            goto label_17a63c;
        }
    }
    ctx->pc = 0x17A630u;
label_17a630:
    // 0x17a630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a634: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a638: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x17a638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_17a63c:
    // 0x17a63c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17a63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a640:
    // 0x17a640: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17a640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a644: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17a644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A64Cu;
            // 0x17a650: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A628u: goto label_17a628;
            case 0x17A630u: goto label_17a630;
            case 0x17A63Cu: goto label_17a63c;
            case 0x17A640u: goto label_17a640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A654u;
    // 0x17a654: 0x0  nop
    ctx->pc = 0x17a654u;
    // NOP
}
