#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_173570
// Address: 0x173570 - 0x173690
void entry_173570_0x173690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_173570_0x173690");
#endif

    ctx->pc = 0x173570u;

    // 0x173570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173574: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17357c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17357cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173584: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x173584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173588: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x173588u;
    {
        const bool branch_taken_0x173588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173588u;
            // 0x17358c: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173588) {
            ctx->pc = 0x1735D0u;
            goto label_1735d0;
        }
    }
    ctx->pc = 0x173590u;
    // 0x173590: 0xc05cd0c  jal         func_173430
    ctx->pc = 0x173590u;
    SET_GPR_U32(ctx, 31, 0x173598u);
    ctx->pc = 0x173594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173590u;
            // 0x173594: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173430u;
    if (runtime->hasFunction(0x173430u)) {
        auto targetFn = runtime->lookupFunction(0x173430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173598u; }
        if (ctx->pc != 0x173598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173430_0x1734a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173598u; }
        if (ctx->pc != 0x173598u) { return; }
    }
    ctx->pc = 0x173598u;
    // 0x173598: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173598u;
    {
        const bool branch_taken_0x173598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173598) {
            ctx->pc = 0x17359Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173598u;
            // 0x17359c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1735ACu;
            goto label_1735ac;
        }
    }
    ctx->pc = 0x1735A0u;
    // 0x1735a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1735a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1735a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1735a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1735a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1735a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1735ac:
    // 0x1735ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1735ACu;
    {
        const bool branch_taken_0x1735ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735ACu;
            // 0x1735b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735ac) {
            ctx->pc = 0x1735CCu;
            goto label_1735cc;
        }
    }
    ctx->pc = 0x1735B4u;
    // 0x1735b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1735B4u;
    {
        const bool branch_taken_0x1735b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735B4u;
            // 0x1735b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735b4) {
            ctx->pc = 0x17367Cu;
            goto label_17367c;
        }
    }
    ctx->pc = 0x1735BCu;
label_1735bc:
    // 0x1735bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1735c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1735c4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1735C4u;
    {
        const bool branch_taken_0x1735c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735C4u;
            // 0x1735c8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735c4) {
            ctx->pc = 0x173678u;
            goto label_173678;
        }
    }
    ctx->pc = 0x1735CCu;
label_1735cc:
    // 0x1735cc: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
label_1735d0:
    // 0x1735d0: 0x2622e848  addiu       $v0, $s1, -0x17B8
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1735d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1735d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1735d8: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1735dc: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1735e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1735e4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1735e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1735e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1735ec: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1735f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1735f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1735f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1735f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1735f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1735fc: 0xc061e82  jal         func_187A08
    ctx->pc = 0x1735FCu;
    SET_GPR_U32(ctx, 31, 0x173604u);
    ctx->pc = 0x173600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1735FCu;
            // 0x173600: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A08u;
    if (runtime->hasFunction(0x187A08u)) {
        auto targetFn = runtime->lookupFunction(0x187A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173604u; }
        if (ctx->pc != 0x173604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a08_0x187a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173604u; }
        if (ctx->pc != 0x173604u) { return; }
    }
    ctx->pc = 0x173604u;
    // 0x173604: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x173604u;
    {
        const bool branch_taken_0x173604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173604) {
            ctx->pc = 0x173608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173604u;
            // 0x173608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173678u;
            goto label_173678;
        }
    }
    ctx->pc = 0x17360Cu;
    // 0x17360c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x17360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_173610:
    // 0x173610: 0xc05d6b6  jal         func_175AD8
    ctx->pc = 0x173610u;
    SET_GPR_U32(ctx, 31, 0x173618u);
    ctx->pc = 0x173614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173610u;
            // 0x173614: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AD8u;
    if (runtime->hasFunction(0x175AD8u)) {
        auto targetFn = runtime->lookupFunction(0x175AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173618u; }
        if (ctx->pc != 0x173618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AD8_0x175ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173618u; }
        if (ctx->pc != 0x173618u) { return; }
    }
    ctx->pc = 0x173618u;
    // 0x173618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17361c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17361Cu;
            // 0x173620: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17361c) {
            ctx->pc = 0x173634u;
            goto label_173634;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x173624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x173628: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x173628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x17362c: 0x5043ffe3  beql        $v0, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x17362Cu;
    {
        const bool branch_taken_0x17362c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x17362c) {
            ctx->pc = 0x173630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17362Cu;
            // 0x173630: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1735BCu;
            runtime->cooperativeGuestYield();
            goto label_1735bc;
        }
    }
    ctx->pc = 0x173634u;
label_173634:
    // 0x173634: 0x2622e848  addiu       $v0, $s1, -0x17B8
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x173638: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x173638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x17363c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x17363cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x173640: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x173644: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x173644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x173648: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x173648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17364c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x17364cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x173650: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x173654: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173658: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17365c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17365cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x173660: 0xc061e8a  jal         func_187A28
    ctx->pc = 0x173660u;
    SET_GPR_U32(ctx, 31, 0x173668u);
    ctx->pc = 0x173664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173660u;
            // 0x173664: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A28u;
    if (runtime->hasFunction(0x187A28u)) {
        auto targetFn = runtime->lookupFunction(0x187A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173668u; }
        if (ctx->pc != 0x173668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_187a28_0x187a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173668u; }
        if (ctx->pc != 0x173668u) { return; }
    }
    ctx->pc = 0x173668u;
    // 0x173668: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x173668u;
    {
        const bool branch_taken_0x173668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173668) {
            ctx->pc = 0x17366Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173668u;
            // 0x17366c: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173610u;
            runtime->cooperativeGuestYield();
            goto label_173610;
        }
    }
    ctx->pc = 0x173670u;
    // 0x173670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173674: 0x0  nop
    ctx->pc = 0x173674u;
    // NOP
label_173678:
    // 0x173678: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17367c:
    // 0x17367c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17367cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173684: 0x3e00008  jr          $ra
    ctx->pc = 0x173684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173684u;
            // 0x173688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1735ACu: goto label_1735ac;
            case 0x1735BCu: goto label_1735bc;
            case 0x1735CCu: goto label_1735cc;
            case 0x1735D0u: goto label_1735d0;
            case 0x173610u: goto label_173610;
            case 0x173634u: goto label_173634;
            case 0x173678u: goto label_173678;
            case 0x17367Cu: goto label_17367c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17368Cu;
    // 0x17368c: 0x0  nop
    ctx->pc = 0x17368cu;
    // NOP
}
