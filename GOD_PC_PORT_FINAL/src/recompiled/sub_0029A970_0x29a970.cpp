#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A970
// Address: 0x29a970 - 0x29aa38
void sub_0029A970_0x29a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A970_0x29a970");
#endif

    ctx->pc = 0x29a970u;

    // 0x29a970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a974: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29a978: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a97c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a980: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a98c: 0x24505ea0  addiu       $s0, $v0, 0x5EA0
    ctx->pc = 0x29a98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24224));
    // 0x29a990: 0x8c445ea0  lw          $a0, 0x5EA0($v0)
    ctx->pc = 0x29a990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24224)));
    // 0x29a994: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x29a994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x29a998: 0xc0a6a58  jal         func_29A960
    ctx->pc = 0x29A998u;
    SET_GPR_U32(ctx, 31, 0x29A9A0u);
    ctx->pc = 0x29A99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A998u;
            // 0x29a99c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A960u;
    if (runtime->hasFunction(0x29A960u)) {
        auto targetFn = runtime->lookupFunction(0x29A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9A0u; }
        if (ctx->pc != 0x29A9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a960_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9A0u; }
        if (ctx->pc != 0x29A9A0u) { return; }
    }
    ctx->pc = 0x29A9A0u;
    // 0x29a9a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29a9a4: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x29a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x29a9a8: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x29a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x29a9ac: 0x24a55b20  addiu       $a1, $a1, 0x5B20
    ctx->pc = 0x29a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
    // 0x29a9b0: 0xc0a6a42  jal         func_29A908
    ctx->pc = 0x29A9B0u;
    SET_GPR_U32(ctx, 31, 0x29A9B8u);
    ctx->pc = 0x29A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9B0u;
            // 0x29a9b4: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A908u;
    if (runtime->hasFunction(0x29A908u)) {
        auto targetFn = runtime->lookupFunction(0x29A908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9B8u; }
        if (ctx->pc != 0x29A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a908_0x29a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9B8u; }
        if (ctx->pc != 0x29A9B8u) { return; }
    }
    ctx->pc = 0x29A9B8u;
    // 0x29a9b8: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x29A9B8u;
    SET_GPR_U32(ctx, 31, 0x29A9C0u);
    ctx->pc = 0x29A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9B8u;
            // 0x29a9bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9C0u; }
        if (ctx->pc != 0x29A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9C0u; }
        if (ctx->pc != 0x29A9C0u) { return; }
    }
    ctx->pc = 0x29A9C0u;
    // 0x29a9c0: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x29A9C0u;
    SET_GPR_U32(ctx, 31, 0x29A9C8u);
    ctx->pc = 0x29A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9C0u;
            // 0x29a9c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9C8u; }
        if (ctx->pc != 0x29A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9C8u; }
        if (ctx->pc != 0x29A9C8u) { return; }
    }
    ctx->pc = 0x29A9C8u;
    // 0x29a9c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a9cc: 0xc0a6a58  jal         func_29A960
    ctx->pc = 0x29A9CCu;
    SET_GPR_U32(ctx, 31, 0x29A9D4u);
    ctx->pc = 0x29A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9CCu;
            // 0x29a9d0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A960u;
    if (runtime->hasFunction(0x29A960u)) {
        auto targetFn = runtime->lookupFunction(0x29A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9D4u; }
        if (ctx->pc != 0x29A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a960_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9D4u; }
        if (ctx->pc != 0x29A9D4u) { return; }
    }
    ctx->pc = 0x29A9D4u;
    // 0x29a9d4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x29a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a9d8: 0xc0a6a58  jal         func_29A960
    ctx->pc = 0x29A9D8u;
    SET_GPR_U32(ctx, 31, 0x29A9E0u);
    ctx->pc = 0x29A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9D8u;
            // 0x29a9dc: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A960u;
    if (runtime->hasFunction(0x29A960u)) {
        auto targetFn = runtime->lookupFunction(0x29A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9E0u; }
        if (ctx->pc != 0x29A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a960_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9E0u; }
        if (ctx->pc != 0x29A9E0u) { return; }
    }
    ctx->pc = 0x29A9E0u;
    // 0x29a9e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a9e4: 0x0  nop
    ctx->pc = 0x29a9e4u;
    // NOP
label_29a9e8:
    // 0x29a9e8: 0xc0a6a54  jal         func_29A950
    ctx->pc = 0x29A9E8u;
    SET_GPR_U32(ctx, 31, 0x29A9F0u);
    ctx->pc = 0x29A9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9E8u;
            // 0x29a9ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A950u;
    if (runtime->hasFunction(0x29A950u)) {
        auto targetFn = runtime->lookupFunction(0x29A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9F0u; }
        if (ctx->pc != 0x29A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a950_0x29a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9F0u; }
        if (ctx->pc != 0x29A9F0u) { return; }
    }
    ctx->pc = 0x29A9F0u;
    // 0x29a9f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a9f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9f8: 0xc0a6a58  jal         func_29A960
    ctx->pc = 0x29A9F8u;
    SET_GPR_U32(ctx, 31, 0x29AA00u);
    ctx->pc = 0x29A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9F8u;
            // 0x29a9fc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A960u;
    if (runtime->hasFunction(0x29A960u)) {
        auto targetFn = runtime->lookupFunction(0x29A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA00u; }
        if (ctx->pc != 0x29AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a960_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA00u; }
        if (ctx->pc != 0x29AA00u) { return; }
    }
    ctx->pc = 0x29AA00u;
    // 0x29aa00: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x29aa00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x29aa04: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29AA04u;
    {
        const bool branch_taken_0x29aa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aa04) {
            ctx->pc = 0x29AA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA04u;
            // 0x29aa08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A9E8u;
            runtime->cooperativeGuestYield();
            goto label_29a9e8;
        }
    }
    ctx->pc = 0x29AA0Cu;
    // 0x29aa0c: 0xc0a6a54  jal         func_29A950
    ctx->pc = 0x29AA0Cu;
    SET_GPR_U32(ctx, 31, 0x29AA14u);
    ctx->pc = 0x29AA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA0Cu;
            // 0x29aa10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A950u;
    if (runtime->hasFunction(0x29A950u)) {
        auto targetFn = runtime->lookupFunction(0x29A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA14u; }
        if (ctx->pc != 0x29AA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a950_0x29a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA14u; }
        if (ctx->pc != 0x29AA14u) { return; }
    }
    ctx->pc = 0x29AA14u;
    // 0x29aa14: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29aa18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29aa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29aa1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29aa1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29aa20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29aa20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aa24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29aa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aa28: 0xac625e98  sw          $v0, 0x5E98($v1)
    ctx->pc = 0x29aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24216), GPR_U32(ctx, 2));
    // 0x29aa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA2Cu;
            // 0x29aa30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A9E8u: goto label_29a9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AA34u;
    // 0x29aa34: 0x0  nop
    ctx->pc = 0x29aa34u;
    // NOP
}
