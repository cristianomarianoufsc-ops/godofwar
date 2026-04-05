#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166AC8
// Address: 0x166ac8 - 0x166b78
void sub_00166AC8_0x166ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166AC8_0x166ac8");
#endif

    ctx->pc = 0x166ac8u;

    // 0x166ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166acc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x166accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x166ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166adc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x166adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166ae0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x166AE0u;
    {
        const bool branch_taken_0x166ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AE0u;
            // 0x166ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ae0) {
            ctx->pc = 0x166B00u;
            goto label_166b00;
        }
    }
    ctx->pc = 0x166AE8u;
    // 0x166ae8: 0xc05334e  jal         func_14CD38
    ctx->pc = 0x166AE8u;
    SET_GPR_U32(ctx, 31, 0x166AF0u);
    ctx->pc = 0x14CD38u;
    if (runtime->hasFunction(0x14CD38u)) {
        auto targetFn = runtime->lookupFunction(0x14CD38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AF0u; }
        if (ctx->pc != 0x166AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CD38_0x14cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AF0u; }
        if (ctx->pc != 0x166AF0u) { return; }
    }
    ctx->pc = 0x166AF0u;
    // 0x166af0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x166af4: 0xc0533ba  jal         func_14CEE8
    ctx->pc = 0x166AF4u;
    SET_GPR_U32(ctx, 31, 0x166AFCu);
    ctx->pc = 0x166AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166AF4u;
            // 0x166af8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CEE8u;
    if (runtime->hasFunction(0x14CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x14CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AFCu; }
        if (ctx->pc != 0x166AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CEE8_0x14cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166AFCu; }
        if (ctx->pc != 0x166AFCu) { return; }
    }
    ctx->pc = 0x166AFCu;
    // 0x166afc: 0x0  nop
    ctx->pc = 0x166afcu;
    // NOP
label_166b00:
    // 0x166b00: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x166b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x166b04: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x166B04u;
    {
        const bool branch_taken_0x166b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b04) {
            ctx->pc = 0x166B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166B04u;
            // 0x166b08: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166B24u;
            goto label_166b24;
        }
    }
    ctx->pc = 0x166B0Cu;
    // 0x166b0c: 0xc05334e  jal         func_14CD38
    ctx->pc = 0x166B0Cu;
    SET_GPR_U32(ctx, 31, 0x166B14u);
    ctx->pc = 0x14CD38u;
    if (runtime->hasFunction(0x14CD38u)) {
        auto targetFn = runtime->lookupFunction(0x14CD38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B14u; }
        if (ctx->pc != 0x166B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CD38_0x14cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B14u; }
        if (ctx->pc != 0x166B14u) { return; }
    }
    ctx->pc = 0x166B14u;
    // 0x166b14: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x166b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x166b18: 0xc0533ba  jal         func_14CEE8
    ctx->pc = 0x166B18u;
    SET_GPR_U32(ctx, 31, 0x166B20u);
    ctx->pc = 0x166B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166B18u;
            // 0x166b1c: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CEE8u;
    if (runtime->hasFunction(0x14CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x14CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B20u; }
        if (ctx->pc != 0x166B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CEE8_0x14cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B20u; }
        if (ctx->pc != 0x166B20u) { return; }
    }
    ctx->pc = 0x166B20u;
    // 0x166b20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_166b24:
    // 0x166b24: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x166b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x166b28: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x166b2c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x166B2Cu;
    {
        const bool branch_taken_0x166b2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x166B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B2Cu;
            // 0x166b30: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b2c) {
            ctx->pc = 0x166B50u;
            goto label_166b50;
        }
    }
    ctx->pc = 0x166B34u;
    // 0x166b34: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x166B34u;
    {
        const bool branch_taken_0x166b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b34) {
            ctx->pc = 0x166B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166B34u;
            // 0x166b38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166B64u;
            goto label_166b64;
        }
    }
    ctx->pc = 0x166B3Cu;
    // 0x166b3c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x166b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x166b40: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x166b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x166b44: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x166B44u;
    {
        const bool branch_taken_0x166b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x166B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B44u;
            // 0x166b48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b44) {
            ctx->pc = 0x166B64u;
            goto label_166b64;
        }
    }
    ctx->pc = 0x166B4Cu;
    // 0x166b4c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x166b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_166b50:
    // 0x166b50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166B50u;
    {
        const bool branch_taken_0x166b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B50u;
            // 0x166b54: 0xae040064  sw          $a0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b50) {
            ctx->pc = 0x166B60u;
            goto label_166b60;
        }
    }
    ctx->pc = 0x166B58u;
    // 0x166b58: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x166b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x166b5c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x166b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_166b60:
    // 0x166b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166b64:
    // 0x166b64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x166b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b70: 0x3e00008  jr          $ra
    ctx->pc = 0x166B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166B70u;
            // 0x166b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166B00u: goto label_166b00;
            case 0x166B24u: goto label_166b24;
            case 0x166B50u: goto label_166b50;
            case 0x166B60u: goto label_166b60;
            case 0x166B64u: goto label_166b64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166B78u;
}
