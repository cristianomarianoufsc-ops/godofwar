#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017ACE0
// Address: 0x17ace0 - 0x17ad70
void sub_0017ACE0_0x17ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ACE0_0x17ace0");
#endif

    ctx->pc = 0x17ace0u;

    // 0x17ace0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ace4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17ace8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17acec: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x17acecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x17acf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17acf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17acf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17acfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad00: 0xc05ebba  jal         func_17AEE8
    ctx->pc = 0x17AD00u;
    SET_GPR_U32(ctx, 31, 0x17AD08u);
    ctx->pc = 0x17AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD00u;
            // 0x17ad04: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AEE8u;
    if (runtime->hasFunction(0x17AEE8u)) {
        auto targetFn = runtime->lookupFunction(0x17AEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD08u; }
        if (ctx->pc != 0x17AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AEE8_0x17aee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD08u; }
        if (ctx->pc != 0x17AD08u) { return; }
    }
    ctx->pc = 0x17AD08u;
    // 0x17ad08: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x17ad08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x17ad0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AD0Cu;
    {
        const bool branch_taken_0x17ad0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD0Cu;
            // 0x17ad10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad0c) {
            ctx->pc = 0x17AD20u;
            goto label_17ad20;
        }
    }
    ctx->pc = 0x17AD14u;
    // 0x17ad14: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x17AD14u;
    SET_GPR_U32(ctx, 31, 0x17AD1Cu);
    ctx->pc = 0x17AD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD14u;
            // 0x17ad18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD1Cu; }
        if (ctx->pc != 0x17AD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD1Cu; }
        if (ctx->pc != 0x17AD1Cu) { return; }
    }
    ctx->pc = 0x17AD1Cu;
    // 0x17ad1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ad1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ad20:
    // 0x17ad20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ad20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ad24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ad24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad28: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD28u;
            // 0x17ad2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AD20u: goto label_17ad20;
            case 0x17AD60u: goto label_17ad60;
            case 0x17AD64u: goto label_17ad64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AD30u;
    // 0x17ad30: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x17ad30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17ad34: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x17ad34u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x17ad38: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AD38u;
    {
        const bool branch_taken_0x17ad38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x17AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD38u;
            // 0x17ad3c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad38) {
            ctx->pc = 0x17AD60u;
            goto label_17ad60;
        }
    }
    ctx->pc = 0x17AD40u;
    // 0x17ad40: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x17ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17ad44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17ad48: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x17ad48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17ad4c: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x17ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x17ad50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ad54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17AD54u;
    {
        const bool branch_taken_0x17ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD54u;
            // 0x17ad58: 0x8c43012c  lw          $v1, 0x12C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad54) {
            ctx->pc = 0x17AD64u;
            goto label_17ad64;
        }
    }
    ctx->pc = 0x17AD5Cu;
    // 0x17ad5c: 0x0  nop
    ctx->pc = 0x17ad5cu;
    // NOP
label_17ad60:
    // 0x17ad60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17ad64:
    // 0x17ad64: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AD64u;
            // 0x17ad68: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AD20u: goto label_17ad20;
            case 0x17AD60u: goto label_17ad60;
            case 0x17AD64u: goto label_17ad64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AD6Cu;
    // 0x17ad6c: 0x0  nop
    ctx->pc = 0x17ad6cu;
    // NOP
}
