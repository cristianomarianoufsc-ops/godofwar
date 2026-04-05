#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117D10
// Address: 0x117d10 - 0x118110
void sub_00117D10_0x117d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D10_0x117d10");
#endif

    ctx->pc = 0x117d10u;

    // 0x117d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117d14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x117d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x117d18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x117d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x117d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x117d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x117d24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x117d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117d2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x117d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x117d30: 0x8c46e854  lw          $a2, -0x17AC($v0)
    ctx->pc = 0x117d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x117d34: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x117d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x117d38: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x117d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x117d3c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x117d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117d40: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x117d44: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x117d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x117d48: 0x40f809  jalr        $v0
    ctx->pc = 0x117D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117D50u);
        ctx->pc = 0x117D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D48u;
            // 0x117d4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117D50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117D50u; }
            if (ctx->pc != 0x117D50u) { return; }
        }
        }
    }
    ctx->pc = 0x117D50u;
    // 0x117d50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x117d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x117d58: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x117d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x117d5c: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x117d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x117d60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D60u;
    {
        const bool branch_taken_0x117d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D60u;
            // 0x117d64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d60) {
            ctx->pc = 0x117D78u;
            goto label_117d78;
        }
    }
    ctx->pc = 0x117D68u;
    // 0x117d68: 0xc046044  jal         func_118110
    ctx->pc = 0x117D68u;
    SET_GPR_U32(ctx, 31, 0x117D70u);
    ctx->pc = 0x117D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D68u;
            // 0x117d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D70u; }
        if (ctx->pc != 0x117D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D70u; }
        if (ctx->pc != 0x117D70u) { return; }
    }
    ctx->pc = 0x117D70u;
    // 0x117d70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x117d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x117d74: 0x0  nop
    ctx->pc = 0x117d74u;
    // NOP
label_117d78:
    // 0x117d78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x117d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x117d80: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x117D80u;
    SET_GPR_U32(ctx, 31, 0x117D88u);
    ctx->pc = 0x117D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117D80u;
            // 0x117d84: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D88u; }
        if (ctx->pc != 0x117D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117D88u; }
        if (ctx->pc != 0x117D88u) { return; }
    }
    ctx->pc = 0x117D88u;
    // 0x117d88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x117d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117d8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x117d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117d90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x117d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d98: 0x3e00008  jr          $ra
    ctx->pc = 0x117D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117D98u;
            // 0x117d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117DA0u;
    // 0x117da0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x117da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x117da4: 0x0  nop
    ctx->pc = 0x117da4u;
    // NOP
    // 0x117da8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x117da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x117dac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117db0: 0x8c464638  lw          $a2, 0x4638($v0)
    ctx->pc = 0x117db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x117db4: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x117db4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x117db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117dbc: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x117dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x117dc0: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x117dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x117dc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117dc8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x117dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x117dcc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x117dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x117dd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x117dd4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x117dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x117dd8: 0x3463d410  ori         $v1, $v1, 0xD410
    ctx->pc = 0x117dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54288);
    // 0x117ddc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117de0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x117de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x117de4: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x117de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x117de8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x117dec: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x117decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x117df0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x117df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x117df4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117df8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x117df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x117dfc: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x117dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x117e00: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x117e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x117e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x117e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117e08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x117e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x117e0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x117e10: 0xac45c300  sw          $a1, -0x3D00($v0)
    ctx->pc = 0x117e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), GPR_U32(ctx, 5));
    // 0x117e14: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x117e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x117e18: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x117e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x117e1c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x117e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x117e20: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x117e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x117e24: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x117e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x117e28: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x117e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x117e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117e30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117e34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x117e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x117e38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x117e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x117e3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x117e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x117e40: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x117e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x117e44: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x117e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x117e48: 0x40f809  jalr        $v0
    ctx->pc = 0x117E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117E50u);
        ctx->pc = 0x117E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E48u;
            // 0x117e4c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117E50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117E50u; }
            if (ctx->pc != 0x117E50u) { return; }
        }
        }
    }
    ctx->pc = 0x117E50u;
    // 0x117e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e54: 0x3e00008  jr          $ra
    ctx->pc = 0x117E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E54u;
            // 0x117e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117E5Cu;
    // 0x117e5c: 0x0  nop
    ctx->pc = 0x117e5cu;
    // NOP
    // 0x117e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117e64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x117e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x117e68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x117e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x117e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x117e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x117e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117e78: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x117e78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x117e7c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x117e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x117e80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117E80u;
    {
        const bool branch_taken_0x117e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E80u;
            // 0x117e84: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e80) {
            ctx->pc = 0x117E98u;
            goto label_117e98;
        }
    }
    ctx->pc = 0x117E88u;
    // 0x117e88: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x117e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x117e8c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x117e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x117E90u;
    {
        const bool branch_taken_0x117e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117E90u;
            // 0x117e94: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e90) {
            ctx->pc = 0x117F08u;
            goto label_117f08;
        }
    }
    ctx->pc = 0x117E98u;
label_117e98:
    // 0x117e98: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x117e98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x117e9c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x117e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x117ea0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x117EA0u;
    {
        const bool branch_taken_0x117ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117ea0) {
            ctx->pc = 0x117EDCu;
            goto label_117edc;
        }
    }
    ctx->pc = 0x117EA8u;
    // 0x117ea8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x117EA8u;
    SET_GPR_U32(ctx, 31, 0x117EB0u);
    ctx->pc = 0x117EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117EA8u;
            // 0x117eac: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EB0u; }
        if (ctx->pc != 0x117EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EB0u; }
        if (ctx->pc != 0x117EB0u) { return; }
    }
    ctx->pc = 0x117EB0u;
    // 0x117eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x117EB8u;
    SET_GPR_U32(ctx, 31, 0x117EC0u);
    ctx->pc = 0x117EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117EB8u;
            // 0x117ebc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EC0u; }
        if (ctx->pc != 0x117EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EC0u; }
        if (ctx->pc != 0x117EC0u) { return; }
    }
    ctx->pc = 0x117EC0u;
    // 0x117ec0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ec8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x117ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x117ecc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x117ECCu;
    SET_GPR_U32(ctx, 31, 0x117ED4u);
    ctx->pc = 0x117ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117ECCu;
            // 0x117ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ED4u; }
        if (ctx->pc != 0x117ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ED4u; }
        if (ctx->pc != 0x117ED4u) { return; }
    }
    ctx->pc = 0x117ED4u;
    // 0x117ed4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x117ED4u;
    {
        const bool branch_taken_0x117ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117ED4u;
            // 0x117ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ed4) {
            ctx->pc = 0x117F0Cu;
            goto label_117f0c;
        }
    }
    ctx->pc = 0x117EDCu;
label_117edc:
    // 0x117edc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x117EDCu;
    SET_GPR_U32(ctx, 31, 0x117EE4u);
    ctx->pc = 0x117EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117EDCu;
            // 0x117ee0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EE4u; }
        if (ctx->pc != 0x117EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EE4u; }
        if (ctx->pc != 0x117EE4u) { return; }
    }
    ctx->pc = 0x117EE4u;
    // 0x117ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eec: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x117EECu;
    SET_GPR_U32(ctx, 31, 0x117EF4u);
    ctx->pc = 0x117EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117EECu;
            // 0x117ef0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EF4u; }
        if (ctx->pc != 0x117EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117EF4u; }
        if (ctx->pc != 0x117EF4u) { return; }
    }
    ctx->pc = 0x117EF4u;
    // 0x117ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ef8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x117ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x117efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f00: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x117F00u;
    SET_GPR_U32(ctx, 31, 0x117F08u);
    ctx->pc = 0x117F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117F00u;
            // 0x117f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F08u; }
        if (ctx->pc != 0x117F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F08u; }
        if (ctx->pc != 0x117F08u) { return; }
    }
    ctx->pc = 0x117F08u;
label_117f08:
    // 0x117f08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117f0c:
    // 0x117f0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x117f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117f10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x117f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117f14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x117f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x117F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F1Cu;
            // 0x117f20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117F24u;
    // 0x117f24: 0x0  nop
    ctx->pc = 0x117f24u;
    // NOP
    // 0x117f28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x117f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x117f2c: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x117f30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x117f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x117f34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117f38: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x117f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x117f3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x117f40: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x117f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x117f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117f48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117f4c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x117f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x117f50: 0x54660008  bnel        $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x117F50u;
    {
        const bool branch_taken_0x117f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x117f50) {
            ctx->pc = 0x117F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F50u;
            // 0x117f54: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F74u;
            goto label_117f74;
        }
    }
    ctx->pc = 0x117F58u;
    // 0x117f58: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x117f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x117f5c: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x117F5Cu;
    {
        const bool branch_taken_0x117f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x117f5c) {
            ctx->pc = 0x117F8Cu;
            goto label_117f8c;
        }
    }
    ctx->pc = 0x117F64u;
    // 0x117f64: 0x3e00008  jr          $ra
    ctx->pc = 0x117F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F64u;
            // 0x117f68: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117F6Cu;
    // 0x117f6c: 0x0  nop
    ctx->pc = 0x117f6cu;
    // NOP
label_117f70:
    // 0x117f70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x117f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_117f74:
    // 0x117f74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x117f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x117f78: 0x50460003  beql        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x117F78u;
    {
        const bool branch_taken_0x117f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x117f78) {
            ctx->pc = 0x117F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117F78u;
            // 0x117f7c: 0x8c42002c  lw          $v0, 0x2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117F88u;
            goto label_117f88;
        }
    }
    ctx->pc = 0x117F80u;
    // 0x117f80: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x117F80u;
    {
        const bool branch_taken_0x117f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117F80u;
            // 0x117f84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f80) {
            ctx->pc = 0x117F70u;
            runtime->cooperativeGuestYield();
            goto label_117f70;
        }
    }
    ctx->pc = 0x117F88u;
label_117f88:
    // 0x117f88: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x117f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_117f8c:
    // 0x117f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x117F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117F94u;
    // 0x117f94: 0x0  nop
    ctx->pc = 0x117f94u;
    // NOP
    // 0x117f98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x117f9c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x117f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x117fa0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x117fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x117fa4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x117fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fa8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x117fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x117fac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x117facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x117fb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x117fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x117fb4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x117fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x117fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117fbc: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x117fbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x117fc0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x117fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x117fc4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x117FC4u;
    {
        const bool branch_taken_0x117fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FC4u;
            // 0x117fc8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fc4) {
            ctx->pc = 0x1180F0u;
            goto label_1180f0;
        }
    }
    ctx->pc = 0x117FCCu;
    // 0x117fcc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x117fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x117fd0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x117FD0u;
    {
        const bool branch_taken_0x117fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FD0u;
            // 0x117fd4: 0x26930008  addiu       $s3, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fd0) {
            ctx->pc = 0x1180F0u;
            goto label_1180f0;
        }
    }
    ctx->pc = 0x117FD8u;
    // 0x117fd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117fdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x117fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x117fe0: 0x2632023  subu        $a0, $s3, $v1
    ctx->pc = 0x117fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x117fe4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x117fe8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x117fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x117fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117ff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x117ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117ff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117ff8: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x117FF8u;
    {
        const bool branch_taken_0x117ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x117FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117FF8u;
            // 0x117ffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ff8) {
            ctx->pc = 0x11807Cu;
            goto label_11807c;
        }
    }
    ctx->pc = 0x118000u;
    // 0x118000: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x118000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x118004: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x118004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x118008: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x118008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x11800c: 0x2684001c  addiu       $a0, $s4, 0x1C
    ctx->pc = 0x11800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x118010: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x118010u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118014: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x118014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x118018: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11801c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x11801Cu;
    SET_GPR_U32(ctx, 31, 0x118024u);
    ctx->pc = 0x118020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11801Cu;
            // 0x118020: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118024u; }
        if (ctx->pc != 0x118024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118024u; }
        if (ctx->pc != 0x118024u) { return; }
    }
    ctx->pc = 0x118024u;
    // 0x118024: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118024u;
    {
        const bool branch_taken_0x118024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118024u;
            // 0x118028: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118024) {
            ctx->pc = 0x118068u;
            goto label_118068;
        }
    }
    ctx->pc = 0x11802Cu;
    // 0x11802c: 0x0  nop
    ctx->pc = 0x11802cu;
    // NOP
label_118030:
    // 0x118030: 0xc08e47a  jal         func_2391E8
    ctx->pc = 0x118030u;
    SET_GPR_U32(ctx, 31, 0x118038u);
    ctx->pc = 0x118034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118030u;
            // 0x118034: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2391E8u;
    if (runtime->hasFunction(0x2391E8u)) {
        auto targetFn = runtime->lookupFunction(0x2391E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118038u; }
        if (ctx->pc != 0x118038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2391e8_0x239200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118038u; }
        if (ctx->pc != 0x118038u) { return; }
    }
    ctx->pc = 0x118038u;
    // 0x118038: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11803c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11803cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118044: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x118044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x118048: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x118048u;
    SET_GPR_U32(ctx, 31, 0x118050u);
    ctx->pc = 0x11804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118048u;
            // 0x11804c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118050u; }
        if (ctx->pc != 0x118050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118050u; }
        if (ctx->pc != 0x118050u) { return; }
    }
    ctx->pc = 0x118050u;
    // 0x118050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118058: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x118058u;
    SET_GPR_U32(ctx, 31, 0x118060u);
    ctx->pc = 0x11805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118058u;
            // 0x11805c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118060u; }
        if (ctx->pc != 0x118060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118060u; }
        if (ctx->pc != 0x118060u) { return; }
    }
    ctx->pc = 0x118060u;
    // 0x118060: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x118060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x118064: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x118064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
label_118068:
    // 0x118068: 0xc08e480  jal         func_239200
    ctx->pc = 0x118068u;
    SET_GPR_U32(ctx, 31, 0x118070u);
    ctx->pc = 0x11806Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118068u;
            // 0x11806c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239200u;
    if (runtime->hasFunction(0x239200u)) {
        auto targetFn = runtime->lookupFunction(0x239200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118070u; }
        if (ctx->pc != 0x118070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239200_0x239208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118070u; }
        if (ctx->pc != 0x118070u) { return; }
    }
    ctx->pc = 0x118070u;
    // 0x118070: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x118070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118074: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x118074u;
    {
        const bool branch_taken_0x118074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118074u;
            // 0x118078: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118074) {
            ctx->pc = 0x118030u;
            runtime->cooperativeGuestYield();
            goto label_118030;
        }
    }
    ctx->pc = 0x11807Cu;
label_11807c:
    // 0x11807c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x118080: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x118080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x118084: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x118084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x118088: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x118088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11808c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x118090: 0x40f809  jalr        $v0
    ctx->pc = 0x118090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x118098u);
        ctx->pc = 0x118094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118090u;
            // 0x118094: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x118098u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x118098u; }
            if (ctx->pc != 0x118098u) { return; }
        }
        }
    }
    ctx->pc = 0x118098u;
    // 0x118098: 0x3c110011  lui         $s1, 0x11
    ctx->pc = 0x118098u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17 << 16));
    // 0x11809c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11809cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180a0: 0x26317f28  addiu       $s1, $s1, 0x7F28
    ctx->pc = 0x1180a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32552));
    // 0x1180a4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1180A4u;
    SET_GPR_U32(ctx, 31, 0x1180ACu);
    ctx->pc = 0x1180A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180A4u;
            // 0x1180a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180ACu; }
        if (ctx->pc != 0x1180ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180ACu; }
        if (ctx->pc != 0x1180ACu) { return; }
    }
    ctx->pc = 0x1180ACu;
    // 0x1180ac: 0x2652007c  addiu       $s2, $s2, 0x7C
    ctx->pc = 0x1180acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x1180b0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1180b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1180b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1180b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180b8: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x1180b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x1180bc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1180bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1180c0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1180C0u;
    SET_GPR_U32(ctx, 31, 0x1180C8u);
    ctx->pc = 0x1180C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180C0u;
            // 0x1180c4: 0xae140004  sw          $s4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180C8u; }
        if (ctx->pc != 0x1180C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180C8u; }
        if (ctx->pc != 0x1180C8u) { return; }
    }
    ctx->pc = 0x1180C8u;
    // 0x1180c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1180c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1180cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1180ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1180d0: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1180d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1180d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1180d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1180d8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1180d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1180dc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1180dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1180e0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1180e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1180e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1180e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1180e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1180e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1180ec: 0x0  nop
    ctx->pc = 0x1180ecu;
    // NOP
label_1180f0:
    // 0x1180f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1180f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1180f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1180f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1180f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1180f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1180fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1180fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118100: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x118100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118108: 0x3e00008  jr          $ra
    ctx->pc = 0x118108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118108u;
            // 0x11810c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D78u: goto label_117d78;
            case 0x117E98u: goto label_117e98;
            case 0x117EDCu: goto label_117edc;
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x118030u: goto label_118030;
            case 0x118068u: goto label_118068;
            case 0x11807Cu: goto label_11807c;
            case 0x1180F0u: goto label_1180f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118110u;
}
