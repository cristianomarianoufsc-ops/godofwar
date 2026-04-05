#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FBD8
// Address: 0x26fbd8 - 0x26fda0
void sub_0026FBD8_0x26fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FBD8_0x26fbd8");
#endif

    ctx->pc = 0x26fbd8u;

    // 0x26fbd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26fbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26fbdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fbe0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x26fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x26fbe4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x26fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26fbe8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbec: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26fbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26fbf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26fbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbf4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x26fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x26fbf8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x26fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26fbfc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26fc00: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x26fc00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x26fc04: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC04u;
    {
        const bool branch_taken_0x26fc04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC04u;
            // 0x26fc08: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc04) {
            ctx->pc = 0x26FC18u;
            goto label_26fc18;
        }
    }
    ctx->pc = 0x26FC0Cu;
    // 0x26fc0c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x26fc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26fc10: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC10u;
    {
        const bool branch_taken_0x26fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc10) {
            ctx->pc = 0x26FC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC10u;
            // 0x26fc14: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FC20u;
            goto label_26fc20;
        }
    }
    ctx->pc = 0x26FC18u;
label_26fc18:
    // 0x26fc18: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x26fc18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fc1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_26fc20:
    // 0x26fc20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC20u;
    {
        const bool branch_taken_0x26fc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC20u;
            // 0x26fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc20) {
            ctx->pc = 0x26FC34u;
            goto label_26fc34;
        }
    }
    ctx->pc = 0x26FC28u;
    // 0x26fc28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x26fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x26fc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fc30: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x26fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_26fc34:
    // 0x26fc34: 0xc09bdec  jal         func_26F7B0
    ctx->pc = 0x26FC34u;
    SET_GPR_U32(ctx, 31, 0x26FC3Cu);
    ctx->pc = 0x26FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC34u;
            // 0x26fc38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F7B0u;
    if (runtime->hasFunction(0x26F7B0u)) {
        auto targetFn = runtime->lookupFunction(0x26F7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC3Cu; }
        if (ctx->pc != 0x26FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f7b0_0x26fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC3Cu; }
        if (ctx->pc != 0x26FC3Cu) { return; }
    }
    ctx->pc = 0x26FC3Cu;
    // 0x26fc3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FC3Cu;
    {
        const bool branch_taken_0x26fc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc3c) {
            ctx->pc = 0x26FC40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC3Cu;
            // 0x26fc40: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FC58u;
            goto label_26fc58;
        }
    }
    ctx->pc = 0x26FC44u;
    // 0x26fc44: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC44u;
    {
        const bool branch_taken_0x26fc44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc44) {
            ctx->pc = 0x26FC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC44u;
            // 0x26fc48: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FC58u;
            goto label_26fc58;
        }
    }
    ctx->pc = 0x26FC4Cu;
    // 0x26fc4c: 0xc09c062  jal         func_270188
    ctx->pc = 0x26FC4Cu;
    SET_GPR_U32(ctx, 31, 0x26FC54u);
    ctx->pc = 0x26FC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC4Cu;
            // 0x26fc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270188u;
    if (runtime->hasFunction(0x270188u)) {
        auto targetFn = runtime->lookupFunction(0x270188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC54u; }
        if (ctx->pc != 0x26FC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270188_0x270258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC54u; }
        if (ctx->pc != 0x26FC54u) { return; }
    }
    ctx->pc = 0x26FC54u;
    // 0x26fc54: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x26fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_26fc58:
    // 0x26fc58: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x26FC58u;
    {
        const bool branch_taken_0x26fc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC58u;
            // 0x26fc5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc58) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FC60u;
    // 0x26fc60: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x26fc60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc68: 0xc09e38a  jal         func_278E28
    ctx->pc = 0x26FC68u;
    SET_GPR_U32(ctx, 31, 0x26FC70u);
    ctx->pc = 0x26FC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC68u;
            // 0x26fc6c: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E28u;
    if (runtime->hasFunction(0x278E28u)) {
        auto targetFn = runtime->lookupFunction(0x278E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC70u; }
        if (ctx->pc != 0x26FC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e28_0x278f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC70u; }
        if (ctx->pc != 0x26FC70u) { return; }
    }
    ctx->pc = 0x26FC70u;
    // 0x26fc70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FC70u;
    {
        const bool branch_taken_0x26fc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fc70) {
            ctx->pc = 0x26FC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC70u;
            // 0x26fc74: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FC8Cu;
            goto label_26fc8c;
        }
    }
    ctx->pc = 0x26FC78u;
    // 0x26fc78: 0xc09c330  jal         func_270CC0
    ctx->pc = 0x26FC78u;
    SET_GPR_U32(ctx, 31, 0x26FC80u);
    ctx->pc = 0x26FC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC78u;
            // 0x26fc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270CC0u;
    if (runtime->hasFunction(0x270CC0u)) {
        auto targetFn = runtime->lookupFunction(0x270CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC80u; }
        if (ctx->pc != 0x26FC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270CC0_0x270cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC80u; }
        if (ctx->pc != 0x26FC80u) { return; }
    }
    ctx->pc = 0x26FC80u;
    // 0x26fc80: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x26fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x26fc84: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x26FC84u;
    {
        const bool branch_taken_0x26fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC84u;
            // 0x26fc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc84) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FC8Cu;
label_26fc8c:
    // 0x26fc8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26fc90: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x26fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x26fc94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26fc98: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x26fc98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x26fc9c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x26FC9Cu;
    {
        const bool branch_taken_0x26fc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC9Cu;
            // 0x26fca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc9c) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FCA4u;
    // 0x26fca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fca8: 0xc09bdec  jal         func_26F7B0
    ctx->pc = 0x26FCA8u;
    SET_GPR_U32(ctx, 31, 0x26FCB0u);
    ctx->pc = 0x26FCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCA8u;
            // 0x26fcac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F7B0u;
    if (runtime->hasFunction(0x26F7B0u)) {
        auto targetFn = runtime->lookupFunction(0x26F7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCB0u; }
        if (ctx->pc != 0x26FCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f7b0_0x26fa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCB0u; }
        if (ctx->pc != 0x26FCB0u) { return; }
    }
    ctx->pc = 0x26FCB0u;
    // 0x26fcb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26fcb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcb4: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x26fcb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x26fcb8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FCB8u;
    {
        const bool branch_taken_0x26fcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCB8u;
            // 0x26fcbc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcb8) {
            ctx->pc = 0x26FCD4u;
            goto label_26fcd4;
        }
    }
    ctx->pc = 0x26FCC0u;
    // 0x26fcc0: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FCC0u;
    {
        const bool branch_taken_0x26fcc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fcc0) {
            ctx->pc = 0x26FCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCC0u;
            // 0x26fcc4: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26FCD8u;
            goto label_26fcd8;
        }
    }
    ctx->pc = 0x26FCC8u;
    // 0x26fcc8: 0xc09c062  jal         func_270188
    ctx->pc = 0x26FCC8u;
    SET_GPR_U32(ctx, 31, 0x26FCD0u);
    ctx->pc = 0x26FCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCC8u;
            // 0x26fccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270188u;
    if (runtime->hasFunction(0x270188u)) {
        auto targetFn = runtime->lookupFunction(0x270188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCD0u; }
        if (ctx->pc != 0x26FCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_270188_0x270258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCD0u; }
        if (ctx->pc != 0x26FCD0u) { return; }
    }
    ctx->pc = 0x26FCD0u;
    // 0x26fcd0: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x26fcd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_26fcd4:
    // 0x26fcd4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x26fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_26fcd8:
    // 0x26fcd8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26FCD8u;
    {
        const bool branch_taken_0x26fcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCD8u;
            // 0x26fcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcd8) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FCE0u;
    // 0x26fce0: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x26fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x26fce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fce8: 0xc09c360  jal         func_270D80
    ctx->pc = 0x26FCE8u;
    SET_GPR_U32(ctx, 31, 0x26FCF0u);
    ctx->pc = 0x26FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCE8u;
            // 0x26fcec: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270D80u;
    if (runtime->hasFunction(0x270D80u)) {
        auto targetFn = runtime->lookupFunction(0x270D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCF0u; }
        if (ctx->pc != 0x26FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270D80_0x270d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCF0u; }
        if (ctx->pc != 0x26FCF0u) { return; }
    }
    ctx->pc = 0x26FCF0u;
    // 0x26fcf0: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x26fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x26fcf4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x26fcf8: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x26fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x26fcfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fd00: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x26fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x26fd04: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x26fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x26fd08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26fd0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fd10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fd14: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x26fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x26fd18: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x26FD18u;
    {
        const bool branch_taken_0x26fd18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD18u;
            // 0x26fd1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd18) {
            ctx->pc = 0x26FD78u;
            goto label_26fd78;
        }
    }
    ctx->pc = 0x26FD20u;
    // 0x26fd20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fd24: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26FD24u;
    {
        const bool branch_taken_0x26fd24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD24u;
            // 0x26fd28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd24) {
            ctx->pc = 0x26FD78u;
            goto label_26fd78;
        }
    }
    ctx->pc = 0x26FD2Cu;
    // 0x26fd2c: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x26fd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x26fd30: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x26FD30u;
    {
        const bool branch_taken_0x26fd30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD30u;
            // 0x26fd34: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd30) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FD38u;
    // 0x26fd38: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x26fd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x26fd3c: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FD3Cu;
    {
        const bool branch_taken_0x26fd3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD3Cu;
            // 0x26fd40: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd3c) {
            ctx->pc = 0x26FD80u;
            goto label_26fd80;
        }
    }
    ctx->pc = 0x26FD44u;
    // 0x26fd44: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x26fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x26fd48: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x26fd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd4c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x26fd4cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fd54: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26fd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26fd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd60: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x26fd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x26fd64: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x26fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x26fd68: 0xe0f809  jalr        $a3
    ctx->pc = 0x26FD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x26FD70u);
        ctx->pc = 0x26FD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD68u;
            // 0x26fd6c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26FD70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FC18u: goto label_26fc18;
            case 0x26FC20u: goto label_26fc20;
            case 0x26FC34u: goto label_26fc34;
            case 0x26FC58u: goto label_26fc58;
            case 0x26FC8Cu: goto label_26fc8c;
            case 0x26FCD4u: goto label_26fcd4;
            case 0x26FCD8u: goto label_26fcd8;
            case 0x26FD78u: goto label_26fd78;
            case 0x26FD7Cu: goto label_26fd7c;
            case 0x26FD80u: goto label_26fd80;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26FD70u; }
            if (ctx->pc != 0x26FD70u) { return; }
        }
        }
    }
    ctx->pc = 0x26FD70u;
    // 0x26fd70: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x26fd70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd74: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x26fd74u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26fd78:
    // 0x26fd78: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x26fd78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26fd7c:
    // 0x26fd7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26fd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26fd80:
    // 0x26fd80: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x26fd80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26fd84: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x26fd84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26fd88: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x26fd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fd8c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26fd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fd90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26fd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fd94: 0x3e00008  jr          $ra
    ctx->pc = 0x26FD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD94u;
            // 0x26fd98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FC18u: goto label_26fc18;
            case 0x26FC20u: goto label_26fc20;
            case 0x26FC34u: goto label_26fc34;
            case 0x26FC58u: goto label_26fc58;
            case 0x26FC8Cu: goto label_26fc8c;
            case 0x26FCD4u: goto label_26fcd4;
            case 0x26FCD8u: goto label_26fcd8;
            case 0x26FD78u: goto label_26fd78;
            case 0x26FD7Cu: goto label_26fd7c;
            case 0x26FD80u: goto label_26fd80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FD9Cu;
    // 0x26fd9c: 0x0  nop
    ctx->pc = 0x26fd9cu;
    // NOP
}
