#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D5F8
// Address: 0x21d5f8 - 0x21d808
void sub_0021D5F8_0x21d5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D5F8_0x21d5f8");
#endif

    ctx->pc = 0x21d5f8u;

    // 0x21d5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21d600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21d604: 0x10820041  beq         $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21D604u;
    {
        const bool branch_taken_0x21d604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D604u;
            // 0x21d608: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d604) {
            ctx->pc = 0x21D70Cu;
            goto label_21d70c;
        }
    }
    ctx->pc = 0x21D60Cu;
    // 0x21d60c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x21d60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21d610: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D610u;
    {
        const bool branch_taken_0x21d610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d610) {
            ctx->pc = 0x21D614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D610u;
            // 0x21d614: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D628u;
            goto label_21d628;
        }
    }
    ctx->pc = 0x21D618u;
    // 0x21d618: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D618u;
    {
        const bool branch_taken_0x21d618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D618u;
            // 0x21d61c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d618) {
            ctx->pc = 0x21D640u;
            goto label_21d640;
        }
    }
    ctx->pc = 0x21D620u;
    // 0x21d620: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x21D620u;
    {
        const bool branch_taken_0x21d620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D620u;
            // 0x21d624: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d620) {
            ctx->pc = 0x21D800u;
            goto label_21d800;
        }
    }
    ctx->pc = 0x21D628u;
label_21d628:
    // 0x21d628: 0x10820044  beq         $a0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x21D628u;
    {
        const bool branch_taken_0x21d628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D628u;
            // 0x21d62c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d628) {
            ctx->pc = 0x21D73Cu;
            goto label_21d73c;
        }
    }
    ctx->pc = 0x21D630u;
    // 0x21d630: 0x10820062  beq         $a0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x21D630u;
    {
        const bool branch_taken_0x21d630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D630u;
            // 0x21d634: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d630) {
            ctx->pc = 0x21D7BCu;
            goto label_21d7bc;
        }
    }
    ctx->pc = 0x21D638u;
    // 0x21d638: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x21D638u;
    {
        const bool branch_taken_0x21d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D638u;
            // 0x21d63c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d638) {
            ctx->pc = 0x21D800u;
            goto label_21d800;
        }
    }
    ctx->pc = 0x21D640u;
label_21d640:
    // 0x21d640: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21d640u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21d644: 0x8e02e590  lw          $v0, -0x1A70($s0)
    ctx->pc = 0x21d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960528)));
    // 0x21d648: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D648u;
    {
        const bool branch_taken_0x21d648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D648u;
            // 0x21d64c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d648) {
            ctx->pc = 0x21D670u;
            goto label_21d670;
        }
    }
    ctx->pc = 0x21D650u;
    // 0x21d650: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x21d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x21d654: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21D654u;
    {
        const bool branch_taken_0x21d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D654u;
            // 0x21d658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d654) {
            ctx->pc = 0x21D6A8u;
            goto label_21d6a8;
        }
    }
    ctx->pc = 0x21D65Cu;
    // 0x21d65c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d660: 0xc08e328  jal         func_238CA0
    ctx->pc = 0x21D660u;
    SET_GPR_U32(ctx, 31, 0x21D668u);
    ctx->pc = 0x21D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D660u;
            // 0x21d664: 0x8c44e848  lw          $a0, -0x17B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CA0u;
    if (runtime->hasFunction(0x238CA0u)) {
        auto targetFn = runtime->lookupFunction(0x238CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D668u; }
        if (ctx->pc != 0x21D668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CA0_0x238ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D668u; }
        if (ctx->pc != 0x21D668u) { return; }
    }
    ctx->pc = 0x21D668u;
    // 0x21d668: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21D668u;
    {
        const bool branch_taken_0x21d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D668u;
            // 0x21d66c: 0x8e02e590  lw          $v0, -0x1A70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d668) {
            ctx->pc = 0x21D6A0u;
            goto label_21d6a0;
        }
    }
    ctx->pc = 0x21D670u;
label_21d670:
    // 0x21d670: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x21d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x21d674: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D674u;
    {
        const bool branch_taken_0x21d674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D674u;
            // 0x21d678: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d674) {
            ctx->pc = 0x21D69Cu;
            goto label_21d69c;
        }
    }
    ctx->pc = 0x21D67Cu;
    // 0x21d67c: 0xc08e32c  jal         func_238CB0
    ctx->pc = 0x21D67Cu;
    SET_GPR_U32(ctx, 31, 0x21D684u);
    ctx->pc = 0x21D680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D67Cu;
            // 0x21d680: 0x8c44e848  lw          $a0, -0x17B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CB0u;
    if (runtime->hasFunction(0x238CB0u)) {
        auto targetFn = runtime->lookupFunction(0x238CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D684u; }
        if (ctx->pc != 0x21D684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238cb0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D684u; }
        if (ctx->pc != 0x21D684u) { return; }
    }
    ctx->pc = 0x21D684u;
    // 0x21d684: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21d688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21d68c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21d68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d690: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x21d690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x21d694: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x21D694u;
    SET_GPR_U32(ctx, 31, 0x21D69Cu);
    ctx->pc = 0x21D698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D694u;
            // 0x21d698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D69Cu; }
        if (ctx->pc != 0x21D69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D69Cu; }
        if (ctx->pc != 0x21D69Cu) { return; }
    }
    ctx->pc = 0x21D69Cu;
label_21d69c:
    // 0x21d69c: 0x8e02e590  lw          $v0, -0x1A70($s0)
    ctx->pc = 0x21d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960528)));
label_21d6a0:
    // 0x21d6a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D6A0u;
    {
        const bool branch_taken_0x21d6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6A0u;
            // 0x21d6a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6a0) {
            ctx->pc = 0x21D6B8u;
            goto label_21d6b8;
        }
    }
    ctx->pc = 0x21D6A8u;
label_21d6a8:
    // 0x21d6a8: 0xc05d452  jal         func_175148
    ctx->pc = 0x21D6A8u;
    SET_GPR_U32(ctx, 31, 0x21D6B0u);
    ctx->pc = 0x21D6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6A8u;
            // 0x21d6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6B0u; }
        if (ctx->pc != 0x21D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6B0u; }
        if (ctx->pc != 0x21D6B0u) { return; }
    }
    ctx->pc = 0x21D6B0u;
    // 0x21d6b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D6B0u;
    {
        const bool branch_taken_0x21d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d6b0) {
            ctx->pc = 0x21D6D4u;
            goto label_21d6d4;
        }
    }
    ctx->pc = 0x21D6B8u;
label_21d6b8:
    // 0x21d6b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d6bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21d6c0: 0x8c42c838  lw          $v0, -0x37C8($v0)
    ctx->pc = 0x21d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953016)));
    // 0x21d6c4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D6C4u;
    {
        const bool branch_taken_0x21d6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21D6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6C4u;
            // 0x21d6c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6c4) {
            ctx->pc = 0x21D6D4u;
            goto label_21d6d4;
        }
    }
    ctx->pc = 0x21D6CCu;
    // 0x21d6cc: 0xc05d452  jal         func_175148
    ctx->pc = 0x21D6CCu;
    SET_GPR_U32(ctx, 31, 0x21D6D4u);
    ctx->pc = 0x21D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6CCu;
            // 0x21d6d0: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6D4u; }
        if (ctx->pc != 0x21D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6D4u; }
        if (ctx->pc != 0x21D6D4u) { return; }
    }
    ctx->pc = 0x21D6D4u;
label_21d6d4:
    // 0x21d6d4: 0xc06ec3a  jal         func_1BB0E8
    ctx->pc = 0x21D6D4u;
    SET_GPR_U32(ctx, 31, 0x21D6DCu);
    ctx->pc = 0x1BB0E8u;
    if (runtime->hasFunction(0x1BB0E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6DCu; }
        if (ctx->pc != 0x21D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0e8_0x1bb0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6DCu; }
        if (ctx->pc != 0x21D6DCu) { return; }
    }
    ctx->pc = 0x21D6DCu;
    // 0x21d6dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d6e0: 0xc08757a  jal         func_21D5E8
    ctx->pc = 0x21D6E0u;
    SET_GPR_U32(ctx, 31, 0x21D6E8u);
    ctx->pc = 0x21D6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6E0u;
            // 0x21d6e4: 0x8c44cc98  lw          $a0, -0x3368($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5E8u;
    if (runtime->hasFunction(0x21D5E8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6E8u; }
        if (ctx->pc != 0x21D6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0021d5e8_0x21d5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D6E8u; }
        if (ctx->pc != 0x21D6E8u) { return; }
    }
    ctx->pc = 0x21D6E8u;
    // 0x21d6e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d6ec: 0x8c42e590  lw          $v0, -0x1A70($v0)
    ctx->pc = 0x21d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960528)));
    // 0x21d6f0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x21D6F0u;
    {
        const bool branch_taken_0x21d6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6F0u;
            // 0x21d6f4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6f0) {
            ctx->pc = 0x21D7ACu;
            goto label_21d7ac;
        }
    }
    ctx->pc = 0x21D6F8u;
    // 0x21d6f8: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x21d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x21d6fc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x21D6FCu;
    {
        const bool branch_taken_0x21d6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D6FCu;
            // 0x21d700: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6fc) {
            ctx->pc = 0x21D7FCu;
            goto label_21d7fc;
        }
    }
    ctx->pc = 0x21D704u;
    // 0x21d704: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21D704u;
    {
        const bool branch_taken_0x21d704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d704) {
            ctx->pc = 0x21D7ACu;
            goto label_21d7ac;
        }
    }
    ctx->pc = 0x21D70Cu;
label_21d70c:
    // 0x21d70c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d710: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x21d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x21d714: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D714u;
    {
        const bool branch_taken_0x21d714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d714) {
            ctx->pc = 0x21D718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D714u;
            // 0x21d718: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D72Cu;
            goto label_21d72c;
        }
    }
    ctx->pc = 0x21D71Cu;
    // 0x21d71c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d720: 0xc08e328  jal         func_238CA0
    ctx->pc = 0x21D720u;
    SET_GPR_U32(ctx, 31, 0x21D728u);
    ctx->pc = 0x21D724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D720u;
            // 0x21d724: 0x8c44e848  lw          $a0, -0x17B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CA0u;
    if (runtime->hasFunction(0x238CA0u)) {
        auto targetFn = runtime->lookupFunction(0x238CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D728u; }
        if (ctx->pc != 0x21D728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CA0_0x238ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D728u; }
        if (ctx->pc != 0x21D728u) { return; }
    }
    ctx->pc = 0x21D728u;
    // 0x21d728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d72c:
    // 0x21d72c: 0xc05d452  jal         func_175148
    ctx->pc = 0x21D72Cu;
    SET_GPR_U32(ctx, 31, 0x21D734u);
    ctx->pc = 0x21D730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D72Cu;
            // 0x21d730: 0x24057fbf  addiu       $a1, $zero, 0x7FBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32703));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D734u; }
        if (ctx->pc != 0x21D734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D734u; }
        if (ctx->pc != 0x21D734u) { return; }
    }
    ctx->pc = 0x21D734u;
    // 0x21d734: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21D734u;
    {
        const bool branch_taken_0x21d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D734u;
            // 0x21d738: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d734) {
            ctx->pc = 0x21D7A4u;
            goto label_21d7a4;
        }
    }
    ctx->pc = 0x21D73Cu;
label_21d73c:
    // 0x21d73c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d740: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x21d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x21d744: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21D744u;
    {
        const bool branch_taken_0x21d744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D744u;
            // 0x21d748: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d744) {
            ctx->pc = 0x21D798u;
            goto label_21d798;
        }
    }
    ctx->pc = 0x21D74Cu;
    // 0x21d74c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d750: 0xc08e328  jal         func_238CA0
    ctx->pc = 0x21D750u;
    SET_GPR_U32(ctx, 31, 0x21D758u);
    ctx->pc = 0x21D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D750u;
            // 0x21d754: 0x8c44e848  lw          $a0, -0x17B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CA0u;
    if (runtime->hasFunction(0x238CA0u)) {
        auto targetFn = runtime->lookupFunction(0x238CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D758u; }
        if (ctx->pc != 0x21D758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CA0_0x238ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D758u; }
        if (ctx->pc != 0x21D758u) { return; }
    }
    ctx->pc = 0x21D758u;
    // 0x21d758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d75c: 0xc05d452  jal         func_175148
    ctx->pc = 0x21D75Cu;
    SET_GPR_U32(ctx, 31, 0x21D764u);
    ctx->pc = 0x21D760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D75Cu;
            // 0x21d760: 0x24057dbd  addiu       $a1, $zero, 0x7DBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32189));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D764u; }
        if (ctx->pc != 0x21D764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D764u; }
        if (ctx->pc != 0x21D764u) { return; }
    }
    ctx->pc = 0x21D764u;
    // 0x21d764: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d768: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21d768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21d76c: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x21d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x21d770: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D770u;
    {
        const bool branch_taken_0x21d770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D770u;
            // 0x21d774: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d770) {
            ctx->pc = 0x21D798u;
            goto label_21d798;
        }
    }
    ctx->pc = 0x21D778u;
    // 0x21d778: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d77c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x21d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x21d780: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x21d780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x21d784: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21d784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d788: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x21d788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x21d78c: 0xc08ac98  jal         func_22B260
    ctx->pc = 0x21D78Cu;
    SET_GPR_U32(ctx, 31, 0x21D794u);
    ctx->pc = 0x21D790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D78Cu;
            // 0x21d790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B260u;
    if (runtime->hasFunction(0x22B260u)) {
        auto targetFn = runtime->lookupFunction(0x22B260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D794u; }
        if (ctx->pc != 0x21D794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B260_0x22b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D794u; }
        if (ctx->pc != 0x21D794u) { return; }
    }
    ctx->pc = 0x21D794u;
    // 0x21d794: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21d798:
    // 0x21d798: 0x8c44e560  lw          $a0, -0x1AA0($v0)
    ctx->pc = 0x21d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x21d79c: 0x3884000a  xori        $a0, $a0, 0xA
    ctx->pc = 0x21d79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)10);
    // 0x21d7a0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x21d7a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21d7a4:
    // 0x21d7a4: 0xc08757a  jal         func_21D5E8
    ctx->pc = 0x21D7A4u;
    SET_GPR_U32(ctx, 31, 0x21D7ACu);
    ctx->pc = 0x21D5E8u;
    if (runtime->hasFunction(0x21D5E8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7ACu; }
        if (ctx->pc != 0x21D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0021d5e8_0x21d5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7ACu; }
        if (ctx->pc != 0x21D7ACu) { return; }
    }
    ctx->pc = 0x21D7ACu;
label_21d7ac:
    // 0x21d7ac: 0xc0830c2  jal         func_20C308
    ctx->pc = 0x21D7ACu;
    SET_GPR_U32(ctx, 31, 0x21D7B4u);
    ctx->pc = 0x20C308u;
    if (runtime->hasFunction(0x20C308u)) {
        auto targetFn = runtime->lookupFunction(0x20C308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7B4u; }
        if (ctx->pc != 0x21D7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0020c308_0x20c308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7B4u; }
        if (ctx->pc != 0x21D7B4u) { return; }
    }
    ctx->pc = 0x21D7B4u;
    // 0x21d7b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21D7B4u;
    {
        const bool branch_taken_0x21d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7B4u;
            // 0x21d7b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7b4) {
            ctx->pc = 0x21D7FCu;
            goto label_21d7fc;
        }
    }
    ctx->pc = 0x21D7BCu;
label_21d7bc:
    // 0x21d7bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d7c0: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x21d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x21d7c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D7C4u;
    {
        const bool branch_taken_0x21d7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7C4u;
            // 0x21d7c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7c4) {
            ctx->pc = 0x21D7D4u;
            goto label_21d7d4;
        }
    }
    ctx->pc = 0x21D7CCu;
    // 0x21d7cc: 0xc08e32c  jal         func_238CB0
    ctx->pc = 0x21D7CCu;
    SET_GPR_U32(ctx, 31, 0x21D7D4u);
    ctx->pc = 0x21D7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7CCu;
            // 0x21d7d0: 0x8c44e848  lw          $a0, -0x17B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CB0u;
    if (runtime->hasFunction(0x238CB0u)) {
        auto targetFn = runtime->lookupFunction(0x238CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7D4u; }
        if (ctx->pc != 0x21D7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238cb0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7D4u; }
        if (ctx->pc != 0x21D7D4u) { return; }
    }
    ctx->pc = 0x21D7D4u;
label_21d7d4:
    // 0x21d7d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d7d8: 0xc05d452  jal         func_175148
    ctx->pc = 0x21D7D8u;
    SET_GPR_U32(ctx, 31, 0x21D7E0u);
    ctx->pc = 0x21D7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7D8u;
            // 0x21d7dc: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175148u;
    if (runtime->hasFunction(0x175148u)) {
        auto targetFn = runtime->lookupFunction(0x175148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7E0u; }
        if (ctx->pc != 0x21D7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175148_0x175148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7E0u; }
        if (ctx->pc != 0x21D7E0u) { return; }
    }
    ctx->pc = 0x21D7E0u;
    // 0x21d7e0: 0xc06ec3a  jal         func_1BB0E8
    ctx->pc = 0x21D7E0u;
    SET_GPR_U32(ctx, 31, 0x21D7E8u);
    ctx->pc = 0x1BB0E8u;
    if (runtime->hasFunction(0x1BB0E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7E8u; }
        if (ctx->pc != 0x21D7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bb0e8_0x1bb0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7E8u; }
        if (ctx->pc != 0x21D7E8u) { return; }
    }
    ctx->pc = 0x21D7E8u;
    // 0x21d7e8: 0xc08757a  jal         func_21D5E8
    ctx->pc = 0x21D7E8u;
    SET_GPR_U32(ctx, 31, 0x21D7F0u);
    ctx->pc = 0x21D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D7E8u;
            // 0x21d7ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5E8u;
    if (runtime->hasFunction(0x21D5E8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7F0u; }
        if (ctx->pc != 0x21D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0021d5e8_0x21d5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7F0u; }
        if (ctx->pc != 0x21D7F0u) { return; }
    }
    ctx->pc = 0x21D7F0u;
    // 0x21d7f0: 0xc0830c2  jal         func_20C308
    ctx->pc = 0x21D7F0u;
    SET_GPR_U32(ctx, 31, 0x21D7F8u);
    ctx->pc = 0x20C308u;
    if (runtime->hasFunction(0x20C308u)) {
        auto targetFn = runtime->lookupFunction(0x20C308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7F8u; }
        if (ctx->pc != 0x21D7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0020c308_0x20c308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7F8u; }
        if (ctx->pc != 0x21D7F8u) { return; }
    }
    ctx->pc = 0x21D7F8u;
    // 0x21d7f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d7fc:
    // 0x21d7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d800:
    // 0x21d800: 0x3e00008  jr          $ra
    ctx->pc = 0x21D800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D800u;
            // 0x21d804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D628u: goto label_21d628;
            case 0x21D640u: goto label_21d640;
            case 0x21D670u: goto label_21d670;
            case 0x21D69Cu: goto label_21d69c;
            case 0x21D6A0u: goto label_21d6a0;
            case 0x21D6A8u: goto label_21d6a8;
            case 0x21D6B8u: goto label_21d6b8;
            case 0x21D6D4u: goto label_21d6d4;
            case 0x21D70Cu: goto label_21d70c;
            case 0x21D72Cu: goto label_21d72c;
            case 0x21D73Cu: goto label_21d73c;
            case 0x21D798u: goto label_21d798;
            case 0x21D7A4u: goto label_21d7a4;
            case 0x21D7ACu: goto label_21d7ac;
            case 0x21D7BCu: goto label_21d7bc;
            case 0x21D7D4u: goto label_21d7d4;
            case 0x21D7FCu: goto label_21d7fc;
            case 0x21D800u: goto label_21d800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D808u;
}
