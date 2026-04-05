#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AA88
// Address: 0x17aa88 - 0x17ab28
void sub_0017AA88_0x17aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA88_0x17aa88");
#endif

    ctx->pc = 0x17aa88u;

    // 0x17aa88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aa8c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x17aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x17aa90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17aa94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aa98: 0x24504c68  addiu       $s0, $v0, 0x4C68
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19560));
    // 0x17aa9c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x17AA9Cu;
    {
        const bool branch_taken_0x17aa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA9Cu;
            // 0x17aaa0: 0xa0404c68  sb          $zero, 0x4C68($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 19560), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa9c) {
            ctx->pc = 0x17AAD8u;
            goto label_17aad8;
        }
    }
    ctx->pc = 0x17AAA4u;
    // 0x17aaa4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17aaa8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17aaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17aaac: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x17aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x17aab0: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x17AAB0u;
    SET_GPR_U32(ctx, 31, 0x17AAB8u);
    ctx->pc = 0x17AAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAB0u;
            // 0x17aab4: 0x24a52948  addiu       $a1, $a1, 0x2948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAB8u; }
        if (ctx->pc != 0x17AAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAB8u; }
        if (ctx->pc != 0x17AAB8u) { return; }
    }
    ctx->pc = 0x17AAB8u;
    // 0x17aab8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AAB8u;
    {
        const bool branch_taken_0x17aab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAB8u;
            // 0x17aabc: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aab8) {
            ctx->pc = 0x17AACCu;
            goto label_17aacc;
        }
    }
    ctx->pc = 0x17AAC0u;
    // 0x17aac0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17aac4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17AAC4u;
    {
        const bool branch_taken_0x17aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAC4u;
            // 0x17aac8: 0xac40c4e4  sw          $zero, -0x3B1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aac4) {
            ctx->pc = 0x17AB10u;
            goto label_17ab10;
        }
    }
    ctx->pc = 0x17AACCu;
label_17aacc:
    // 0x17aacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aad0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17AAD0u;
    {
        const bool branch_taken_0x17aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAD0u;
            // 0x17aad4: 0xac62c4e4  sw          $v0, -0x3B1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aad0) {
            ctx->pc = 0x17AB0Cu;
            goto label_17ab0c;
        }
    }
    ctx->pc = 0x17AAD8u;
label_17aad8:
    // 0x17aad8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x17aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17aadc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x17aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x17aae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aae8: 0xac62c4e4  sw          $v0, -0x3B1C($v1)
    ctx->pc = 0x17aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952164), GPR_U32(ctx, 2));
    // 0x17aaec: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x17AAECu;
    SET_GPR_U32(ctx, 31, 0x17AAF4u);
    ctx->pc = 0x17AAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAECu;
            // 0x17aaf0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAF4u; }
        if (ctx->pc != 0x17AAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAF4u; }
        if (ctx->pc != 0x17AAF4u) { return; }
    }
    ctx->pc = 0x17AAF4u;
    // 0x17aaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aaf8: 0xa200007f  sb          $zero, 0x7F($s0)
    ctx->pc = 0x17aaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 127), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aafc: 0xc0a2589  jal         func_289624
    ctx->pc = 0x17AAFCu;
    SET_GPR_U32(ctx, 31, 0x17AB04u);
    ctx->pc = 0x17AB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAFCu;
            // 0x17ab00: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB04u; }
        if (ctx->pc != 0x17AB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB04u; }
        if (ctx->pc != 0x17AB04u) { return; }
    }
    ctx->pc = 0x17AB04u;
    // 0x17ab04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17AB04u;
    {
        const bool branch_taken_0x17ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ab04) {
            ctx->pc = 0x17AB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB04u;
            // 0x17ab08: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AB0Cu;
            goto label_17ab0c;
        }
    }
    ctx->pc = 0x17AB0Cu;
label_17ab0c:
    // 0x17ab0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17ab10:
    // 0x17ab10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ab10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ab14: 0x8c42c4e4  lw          $v0, -0x3B1C($v0)
    ctx->pc = 0x17ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
    // 0x17ab18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ab18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB1Cu;
            // 0x17ab20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AACCu: goto label_17aacc;
            case 0x17AAD8u: goto label_17aad8;
            case 0x17AB0Cu: goto label_17ab0c;
            case 0x17AB10u: goto label_17ab10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AB24u;
    // 0x17ab24: 0x0  nop
    ctx->pc = 0x17ab24u;
    // NOP
}
