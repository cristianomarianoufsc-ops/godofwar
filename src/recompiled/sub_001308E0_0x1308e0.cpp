#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001308E0
// Address: 0x1308e0 - 0x1309c0
void sub_001308E0_0x1308e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001308E0_0x1308e0");
#endif

    ctx->pc = 0x1308e0u;

    // 0x1308e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1308e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1308e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1308e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1308e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1308e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1308ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1308ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1308f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1308f4: 0x8e3000fc  lw          $s0, 0xFC($s1)
    ctx->pc = 0x1308f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1308f8: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1308F8u;
    {
        const bool branch_taken_0x1308f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308f8) {
            ctx->pc = 0x1308FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1308F8u;
            // 0x1308fc: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130978u;
            goto label_130978;
        }
    }
    ctx->pc = 0x130900u;
    // 0x130900: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x130900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x130904: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x130904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130908: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x130908u;
    {
        const bool branch_taken_0x130908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x13090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130908u;
            // 0x13090c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130908) {
            ctx->pc = 0x13093Cu;
            goto label_13093c;
        }
    }
    ctx->pc = 0x130910u;
    // 0x130910: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130914: 0x0  nop
    ctx->pc = 0x130914u;
    // NOP
label_130918:
    // 0x130918: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13091c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x130920: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x130920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130924: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x130924u;
    SET_GPR_U32(ctx, 31, 0x13092Cu);
    ctx->pc = 0x130928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130924u;
            // 0x130928: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13092Cu; }
        if (ctx->pc != 0x13092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13092Cu; }
        if (ctx->pc != 0x13092Cu) { return; }
    }
    ctx->pc = 0x13092Cu;
    // 0x13092c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x13092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130930: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x130930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130934: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x130934u;
    {
        const bool branch_taken_0x130934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x130934) {
            ctx->pc = 0x130938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130934u;
            // 0x130938: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130918u;
            runtime->cooperativeGuestYield();
            goto label_130918;
        }
    }
    ctx->pc = 0x13093Cu;
label_13093c:
    // 0x13093c: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x13093cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x130940: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x130940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x130944: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x130948: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x130948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x13094c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13094cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130950: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x130950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x130954: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x130954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x130958: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x130958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x13095c: 0x40f809  jalr        $v0
    ctx->pc = 0x13095Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130964u);
        ctx->pc = 0x130960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13095Cu;
            // 0x130960: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x130964u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130918u: goto label_130918;
            case 0x13093Cu: goto label_13093c;
            case 0x130978u: goto label_130978;
            case 0x13098Cu: goto label_13098c;
            case 0x1309A0u: goto label_1309a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130964u; }
            if (ctx->pc != 0x130964u) { return; }
        }
        }
    }
    ctx->pc = 0x130964u;
    // 0x130964: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x130964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x130968: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x130968u;
    SET_GPR_U32(ctx, 31, 0x130970u);
    ctx->pc = 0x13096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130968u;
            // 0x13096c: 0x8e2500fc  lw          $a1, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130970u; }
        if (ctx->pc != 0x130970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130970u; }
        if (ctx->pc != 0x130970u) { return; }
    }
    ctx->pc = 0x130970u;
    // 0x130970: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x130970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x130974: 0x0  nop
    ctx->pc = 0x130974u;
    // NOP
label_130978:
    // 0x130978: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x130978u;
    {
        const bool branch_taken_0x130978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130978) {
            ctx->pc = 0x13097Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130978u;
            // 0x13097c: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13098Cu;
            goto label_13098c;
        }
    }
    ctx->pc = 0x130980u;
    // 0x130980: 0xc04d924  jal         func_136490
    ctx->pc = 0x130980u;
    SET_GPR_U32(ctx, 31, 0x130988u);
    ctx->pc = 0x130984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130980u;
            // 0x130984: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130988u; }
        if (ctx->pc != 0x130988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136490_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130988u; }
        if (ctx->pc != 0x130988u) { return; }
    }
    ctx->pc = 0x130988u;
    // 0x130988: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x130988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_13098c:
    // 0x13098c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13098Cu;
    {
        const bool branch_taken_0x13098c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13098c) {
            ctx->pc = 0x130990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13098Cu;
            // 0x130990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1309A0u;
            goto label_1309a0;
        }
    }
    ctx->pc = 0x130994u;
    // 0x130994: 0xc08e23e  jal         func_2388F8
    ctx->pc = 0x130994u;
    SET_GPR_U32(ctx, 31, 0x13099Cu);
    ctx->pc = 0x130998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130994u;
            // 0x130998: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2388F8u;
    if (runtime->hasFunction(0x2388F8u)) {
        auto targetFn = runtime->lookupFunction(0x2388F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13099Cu; }
        if (ctx->pc != 0x13099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002388F8_0x2388f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13099Cu; }
        if (ctx->pc != 0x13099Cu) { return; }
    }
    ctx->pc = 0x13099Cu;
    // 0x13099c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1309a0:
    // 0x1309a0: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x1309A0u;
    SET_GPR_U32(ctx, 31, 0x1309A8u);
    ctx->pc = 0x1309A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1309A0u;
            // 0x1309a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309A8u; }
        if (ctx->pc != 0x1309A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309A8u; }
        if (ctx->pc != 0x1309A8u) { return; }
    }
    ctx->pc = 0x1309A8u;
    // 0x1309a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1309a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1309ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1309acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1309b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1309b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1309b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1309B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1309B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1309B4u;
            // 0x1309b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130918u: goto label_130918;
            case 0x13093Cu: goto label_13093c;
            case 0x130978u: goto label_130978;
            case 0x13098Cu: goto label_13098c;
            case 0x1309A0u: goto label_1309a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1309BCu;
    // 0x1309bc: 0x0  nop
    ctx->pc = 0x1309bcu;
    // NOP
}
