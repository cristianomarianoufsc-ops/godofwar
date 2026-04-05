#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FB78
// Address: 0x21fb78 - 0x21fc30
void sub_0021FB78_0x21fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FB78_0x21fb78");
#endif

    ctx->pc = 0x21fb78u;

    // 0x21fb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fb7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fb80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21fb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fb88: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21FB88u;
    SET_GPR_U32(ctx, 31, 0x21FB90u);
    ctx->pc = 0x21FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB88u;
            // 0x21fb8c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB90u; }
        if (ctx->pc != 0x21FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FB90u; }
        if (ctx->pc != 0x21FB90u) { return; }
    }
    ctx->pc = 0x21FB90u;
    // 0x21fb90: 0x8e02e5b0  lw          $v0, -0x1A50($s0)
    ctx->pc = 0x21fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960560)));
    // 0x21fb94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21FB94u;
    {
        const bool branch_taken_0x21fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FB94u;
            // 0x21fb98: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb94) {
            ctx->pc = 0x21FBE8u;
            goto label_21fbe8;
        }
    }
    ctx->pc = 0x21FB9Cu;
    // 0x21fb9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fba0: 0x8c42e5b4  lw          $v0, -0x1A4C($v0)
    ctx->pc = 0x21fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960564)));
    // 0x21fba4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FBA4u;
    {
        const bool branch_taken_0x21fba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21FBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBA4u;
            // 0x21fba8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fba4) {
            ctx->pc = 0x21FBBCu;
            goto label_21fbbc;
        }
    }
    ctx->pc = 0x21FBACu;
    // 0x21fbac: 0xc087c4e  jal         func_21F138
    ctx->pc = 0x21FBACu;
    SET_GPR_U32(ctx, 31, 0x21FBB4u);
    ctx->pc = 0x21F138u;
    if (runtime->hasFunction(0x21F138u)) {
        auto targetFn = runtime->lookupFunction(0x21F138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBB4u; }
        if (ctx->pc != 0x21FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21f138_0x21f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBB4u; }
        if (ctx->pc != 0x21FBB4u) { return; }
    }
    ctx->pc = 0x21FBB4u;
    // 0x21fbb4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21FBB4u;
    {
        const bool branch_taken_0x21fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBB4u;
            // 0x21fbb8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbb4) {
            ctx->pc = 0x21FC20u;
            goto label_21fc20;
        }
    }
    ctx->pc = 0x21FBBCu;
label_21fbbc:
    // 0x21fbbc: 0x8c42e5ac  lw          $v0, -0x1A54($v0)
    ctx->pc = 0x21fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960556)));
    // 0x21fbc0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x21FBC0u;
    {
        const bool branch_taken_0x21fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fbc0) {
            ctx->pc = 0x21FBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBC0u;
            // 0x21fbc4: 0xae00e5b0  sw          $zero, -0x1A50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21FC20u;
            goto label_21fc20;
        }
    }
    ctx->pc = 0x21FBC8u;
    // 0x21fbc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fbcc: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21fbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbd4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21FBD4u;
    SET_GPR_U32(ctx, 31, 0x21FBDCu);
    ctx->pc = 0x21FBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBD4u;
            // 0x21fbd8: 0xac400274  sw          $zero, 0x274($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBDCu; }
        if (ctx->pc != 0x21FBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FBDCu; }
        if (ctx->pc != 0x21FBDCu) { return; }
    }
    ctx->pc = 0x21FBDCu;
    // 0x21fbdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21FBDCu;
    {
        const bool branch_taken_0x21fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBDCu;
            // 0x21fbe0: 0xae00e5b0  sw          $zero, -0x1A50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbdc) {
            ctx->pc = 0x21FC20u;
            goto label_21fc20;
        }
    }
    ctx->pc = 0x21FBE4u;
    // 0x21fbe4: 0x0  nop
    ctx->pc = 0x21fbe4u;
    // NOP
label_21fbe8:
    // 0x21fbe8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21fbec: 0x8c62e5a0  lw          $v0, -0x1A60($v1)
    ctx->pc = 0x21fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960544)));
    // 0x21fbf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FBF0u;
    {
        const bool branch_taken_0x21fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBF0u;
            // 0x21fbf4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbf0) {
            ctx->pc = 0x21FC00u;
            goto label_21fc00;
        }
    }
    ctx->pc = 0x21FBF8u;
    // 0x21fbf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21FBF8u;
    {
        const bool branch_taken_0x21fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FBF8u;
            // 0x21fbfc: 0xac62e5a0  sw          $v0, -0x1A60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbf8) {
            ctx->pc = 0x21FC20u;
            goto label_21fc20;
        }
    }
    ctx->pc = 0x21FC00u;
label_21fc00:
    // 0x21fc00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fc04: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21fc08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc0c: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21FC0Cu;
    SET_GPR_U32(ctx, 31, 0x21FC14u);
    ctx->pc = 0x21FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC0Cu;
            // 0x21fc10: 0xac400268  sw          $zero, 0x268($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC14u; }
        if (ctx->pc != 0x21FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FC14u; }
        if (ctx->pc != 0x21FC14u) { return; }
    }
    ctx->pc = 0x21FC14u;
    // 0x21fc14: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x21fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21fc18: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fc1c: 0xac43e560  sw          $v1, -0x1AA0($v0)
    ctx->pc = 0x21fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 3));
label_21fc20:
    // 0x21fc20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21fc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fc24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FC28u;
            // 0x21fc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FBBCu: goto label_21fbbc;
            case 0x21FBE8u: goto label_21fbe8;
            case 0x21FC00u: goto label_21fc00;
            case 0x21FC20u: goto label_21fc20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FC30u;
}
