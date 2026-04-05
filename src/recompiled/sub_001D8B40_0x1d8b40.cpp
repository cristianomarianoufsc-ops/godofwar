#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8B40
// Address: 0x1d8b40 - 0x1d8be8
void sub_001D8B40_0x1d8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8B40_0x1d8b40");
#endif

    ctx->pc = 0x1d8b40u;

    // 0x1d8b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8b44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d8b48: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B48u;
            // 0x1d8b4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8B7Cu;
            goto label_1d8b7c;
        }
    }
    ctx->pc = 0x1D8B50u;
    // 0x1d8b50: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1d8b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d8b54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8B54u;
    {
        const bool branch_taken_0x1d8b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B54u;
            // 0x1d8b58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b54) {
            ctx->pc = 0x1D8B6Cu;
            goto label_1d8b6c;
        }
    }
    ctx->pc = 0x1D8B5Cu;
    // 0x1d8b5c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D8B5Cu;
    {
        const bool branch_taken_0x1d8b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B5Cu;
            // 0x1d8b60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b5c) {
            ctx->pc = 0x1D8BD8u;
            goto label_1d8bd8;
        }
    }
    ctx->pc = 0x1D8B64u;
    // 0x1d8b64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D8B64u;
    {
        const bool branch_taken_0x1d8b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b64) {
            ctx->pc = 0x1D8BD0u;
            goto label_1d8bd0;
        }
    }
    ctx->pc = 0x1D8B6Cu;
label_1d8b6c:
    // 0x1d8b6c: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8B6Cu;
    {
        const bool branch_taken_0x1d8b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B6Cu;
            // 0x1d8b70: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b6c) {
            ctx->pc = 0x1D8B98u;
            goto label_1d8b98;
        }
    }
    ctx->pc = 0x1D8B74u;
    // 0x1d8b74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8B74u;
    {
        const bool branch_taken_0x1d8b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b74) {
            ctx->pc = 0x1D8BD0u;
            goto label_1d8bd0;
        }
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8b80: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x1d8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1d8b84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8b88: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D8B88u;
    SET_GPR_U32(ctx, 31, 0x1D8B90u);
    ctx->pc = 0x1D8B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B88u;
            // 0x1d8b8c: 0xc48c017c  lwc1        $f12, 0x17C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B90u; }
        if (ctx->pc != 0x1D8B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B90u; }
        if (ctx->pc != 0x1D8B90u) { return; }
    }
    ctx->pc = 0x1D8B90u;
    // 0x1d8b90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8B90u;
    {
        const bool branch_taken_0x1d8b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B90u;
            // 0x1d8b94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b90) {
            ctx->pc = 0x1D8BDCu;
            goto label_1d8bdc;
        }
    }
    ctx->pc = 0x1D8B98u;
label_1d8b98:
    // 0x1d8b98: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1d8b9c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d8ba0: 0x24842cc0  addiu       $a0, $a0, 0x2CC0
    ctx->pc = 0x1d8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11456));
    // 0x1d8ba4: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x1d8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x1d8ba8: 0x90820077  lbu         $v0, 0x77($a0)
    ctx->pc = 0x1d8ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 119)));
    // 0x1d8bac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d8bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8bb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8bb8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1d8bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8bbc: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x1d8bbcu;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1d8bc0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x1d8bc0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x1d8bc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BC4u;
    {
        const bool branch_taken_0x1d8bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BC4u;
            // 0x1d8bc8: 0xe481005c  swc1        $f1, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8bc4) {
            ctx->pc = 0x1D8BD8u;
            goto label_1d8bd8;
        }
    }
    ctx->pc = 0x1D8BCCu;
    // 0x1d8bcc: 0x0  nop
    ctx->pc = 0x1d8bccu;
    // NOP
label_1d8bd0:
    // 0x1d8bd0: 0xc07604c  jal         func_1D8130
    ctx->pc = 0x1D8BD0u;
    SET_GPR_U32(ctx, 31, 0x1D8BD8u);
    ctx->pc = 0x1D8BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BD0u;
            // 0x1d8bd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8130u;
    if (runtime->hasFunction(0x1D8130u)) {
        auto targetFn = runtime->lookupFunction(0x1D8130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BD8u; }
        if (ctx->pc != 0x1D8BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8130_0x1d85a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BD8u; }
        if (ctx->pc != 0x1D8BD8u) { return; }
    }
    ctx->pc = 0x1D8BD8u;
label_1d8bd8:
    // 0x1d8bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8bdc:
    // 0x1d8bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BDCu;
            // 0x1d8be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8B6Cu: goto label_1d8b6c;
            case 0x1D8B7Cu: goto label_1d8b7c;
            case 0x1D8B98u: goto label_1d8b98;
            case 0x1D8BD0u: goto label_1d8bd0;
            case 0x1D8BD8u: goto label_1d8bd8;
            case 0x1D8BDCu: goto label_1d8bdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8BE4u;
    // 0x1d8be4: 0x0  nop
    ctx->pc = 0x1d8be4u;
    // NOP
}
