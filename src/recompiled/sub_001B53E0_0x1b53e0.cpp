#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B53E0
// Address: 0x1b53e0 - 0x1b54a0
void sub_001B53E0_0x1b53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B53E0_0x1b53e0");
#endif

    ctx->pc = 0x1b53e0u;

    // 0x1b53e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b53e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b53e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b53e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b53f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b53f4: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x1b53f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b53f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b53fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b53fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b5400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5404: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1B5404u;
    SET_GPR_U32(ctx, 31, 0x1B540Cu);
    ctx->pc = 0x1B5408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5404u;
            // 0x1b5408: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B540Cu; }
        if (ctx->pc != 0x1B540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B540Cu; }
        if (ctx->pc != 0x1B540Cu) { return; }
    }
    ctx->pc = 0x1B540Cu;
    // 0x1b540c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b540cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b5410: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1b5410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1b5414: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1b5414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1b5418: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1b5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1b541c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b5420: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b5420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b5424: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b5428: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1B5428u;
    SET_GPR_U32(ctx, 31, 0x1B5430u);
    ctx->pc = 0x1B542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5428u;
            // 0x1b542c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5430u; }
        if (ctx->pc != 0x1B5430u) { return; }
    }
    ctx->pc = 0x1B5430u;
    // 0x1b5430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5434: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5434u;
    {
        const bool branch_taken_0x1b5434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5434) {
            ctx->pc = 0x1B5454u;
            goto label_1b5454;
        }
    }
    ctx->pc = 0x1B543Cu;
    // 0x1b543c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b5440: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5440u;
    {
        const bool branch_taken_0x1b5440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5440u;
            // 0x1b5444: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5440) {
            ctx->pc = 0x1B544Cu;
            goto label_1b544c;
        }
    }
    ctx->pc = 0x1B5448u;
    // 0x1b5448: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1b544c:
    // 0x1b544c: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1B544Cu;
    SET_GPR_U32(ctx, 31, 0x1B5454u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5454u; }
        if (ctx->pc != 0x1B5454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5454u; }
        if (ctx->pc != 0x1B5454u) { return; }
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1B5454u;
    SET_GPR_U32(ctx, 31, 0x1B545Cu);
    ctx->pc = 0x1B5458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5454u;
            // 0x1b5458: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B545Cu; }
        if (ctx->pc != 0x1B545Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B545Cu; }
        if (ctx->pc != 0x1B545Cu) { return; }
    }
    ctx->pc = 0x1B545Cu;
    // 0x1b545c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B545Cu;
    {
        const bool branch_taken_0x1b545c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B545Cu;
            // 0x1b5460: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b545c) {
            ctx->pc = 0x1B546Cu;
            goto label_1b546c;
        }
    }
    ctx->pc = 0x1B5464u;
    // 0x1b5464: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1B5464u;
    SET_GPR_U32(ctx, 31, 0x1B546Cu);
    ctx->pc = 0x1B5468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5464u;
            // 0x1b5468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B546Cu; }
        if (ctx->pc != 0x1B546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B546Cu; }
        if (ctx->pc != 0x1B546Cu) { return; }
    }
    ctx->pc = 0x1B546Cu;
label_1b546c:
    // 0x1b546c: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x1b546cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x1b5470: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b5470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5474: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1b5474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1b5478: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b5478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b547c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b547cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5480: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b5480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5484: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b5484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5488: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b5488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b548c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5490: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5490u;
            // 0x1b5494: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B544Cu: goto label_1b544c;
            case 0x1B5454u: goto label_1b5454;
            case 0x1B546Cu: goto label_1b546c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B5498u;
    // 0x1b5498: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b549c: 0x0  nop
    ctx->pc = 0x1b549cu;
    // NOP
}
