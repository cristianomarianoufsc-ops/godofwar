#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DBF60
// Address: 0x1dbf60 - 0x1dc008
void sub_001DBF60_0x1dbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBF60_0x1dbf60");
#endif

    ctx->pc = 0x1dbf60u;

    // 0x1dbf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbf64: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1dbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1dbf68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dbf6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dbf70: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x1dbf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1dbf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbf78: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1dbf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbf7c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1dbf7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbf80: 0x0  nop
    ctx->pc = 0x1dbf80u;
    // NOP
    // 0x1dbf84: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1DBF84u;
    {
        const bool branch_taken_0x1dbf84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF84u;
            // 0x1dbf88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf84) {
            ctx->pc = 0x1DBFF4u;
            goto label_1dbff4;
        }
    }
    ctx->pc = 0x1DBF8Cu;
    // 0x1dbf8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dbf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbf90: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1DBF90u;
    SET_GPR_U32(ctx, 31, 0x1DBF98u);
    ctx->pc = 0x1DBF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF90u;
            // 0x1dbf94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF98u; }
        if (ctx->pc != 0x1DBF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBF98u; }
        if (ctx->pc != 0x1DBF98u) { return; }
    }
    ctx->pc = 0x1DBF98u;
    // 0x1dbf98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DBF98u;
    {
        const bool branch_taken_0x1dbf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF98u;
            // 0x1dbf9c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf98) {
            ctx->pc = 0x1DBFC0u;
            goto label_1dbfc0;
        }
    }
    ctx->pc = 0x1DBFA0u;
    // 0x1dbfa0: 0x9203007d  lbu         $v1, 0x7D($s0)
    ctx->pc = 0x1dbfa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
    // 0x1dbfa4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1dbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1dbfa8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1dbfa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dbfac: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x1dbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x1dbfb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dbfb4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1dbfb8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBFB8u;
    {
        const bool branch_taken_0x1dbfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbfb8) {
            ctx->pc = 0x1DBFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFB8u;
            // 0x1dbfbc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBFE8u;
            goto label_1dbfe8;
        }
    }
    ctx->pc = 0x1DBFC0u;
label_1dbfc0:
    // 0x1dbfc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dbfc4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1dbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1dbfc8: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1dbfcc: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x1dbfd0: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1dbfd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1dbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1dbfd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbfdc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dbfe0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DBFE0u;
    {
        const bool branch_taken_0x1dbfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbfe0) {
            ctx->pc = 0x1DBFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFE0u;
            // 0x1dbfe4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBFE8u;
            goto label_1dbfe8;
        }
    }
    ctx->pc = 0x1DBFE8u;
label_1dbfe8:
    // 0x1dbfe8: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DBFE8u;
    {
        const bool branch_taken_0x1dbfe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBFE8u;
            // 0x1dbfec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbfe8) {
            ctx->pc = 0x1DBFF4u;
            goto label_1dbff4;
        }
    }
    ctx->pc = 0x1DBFF0u;
    // 0x1dbff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbff4:
    // 0x1dbff4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dbff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dbff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc000: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC000u;
            // 0x1dc004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBFC0u: goto label_1dbfc0;
            case 0x1DBFE8u: goto label_1dbfe8;
            case 0x1DBFF4u: goto label_1dbff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC008u;
}
