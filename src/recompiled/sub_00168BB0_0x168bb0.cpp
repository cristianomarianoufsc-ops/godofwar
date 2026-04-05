#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168BB0
// Address: 0x168bb0 - 0x168c98
void sub_00168BB0_0x168bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168BB0_0x168bb0");
#endif

    ctx->pc = 0x168bb0u;

    // 0x168bb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x168bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x168bb4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x168bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x168bb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x168bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x168bbc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x168bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x168bc0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x168bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x168bc4: 0x244249a8  addiu       $v0, $v0, 0x49A8
    ctx->pc = 0x168bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x168bc8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x168bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x168bcc: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x168bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x168bd0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x168bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x168bd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x168bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x168bd8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x168bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x168bdc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x168bdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168be0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x168be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x168be4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x168be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x168be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168bec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x168becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168bf0: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x168bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x168bf4: 0x24740002  addiu       $s4, $v1, 0x2
    ctx->pc = 0x168bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x168bf8: 0x1291001d  beq         $s4, $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x168BF8u;
    {
        const bool branch_taken_0x168bf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 17));
        ctx->pc = 0x168BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BF8u;
            // 0x168bfc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bf8) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168C00u;
    // 0x168c00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x168c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c04: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x168c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_168c08:
    // 0x168c08: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x168c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x168c0c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x168c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x168c10: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x168c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c14: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x168c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x168c18: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x168c18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x168c1c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x168C1Cu;
    {
        const bool branch_taken_0x168c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C1Cu;
            // 0x168c20: 0x449821  addu        $s3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c1c) {
            ctx->pc = 0x168C60u;
            goto label_168c60;
        }
    }
    ctx->pc = 0x168C24u;
    // 0x168c24: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_168c28:
    // 0x168c28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x168c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x168c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168c30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x168c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168c34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168C34u;
    {
        const bool branch_taken_0x168c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C34u;
            // 0x168c38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c34) {
            ctx->pc = 0x168C54u;
            goto label_168c54;
        }
    }
    ctx->pc = 0x168C3Cu;
    // 0x168c3c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x168c40: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x168c44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168C44u;
    {
        const bool branch_taken_0x168c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c44) {
            ctx->pc = 0x168C54u;
            goto label_168c54;
        }
    }
    ctx->pc = 0x168C4Cu;
    // 0x168c4c: 0xc059afa  jal         func_166BE8
    ctx->pc = 0x168C4Cu;
    SET_GPR_U32(ctx, 31, 0x168C54u);
    ctx->pc = 0x166BE8u;
    if (runtime->hasFunction(0x166BE8u)) {
        auto targetFn = runtime->lookupFunction(0x166BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C54u; }
        if (ctx->pc != 0x168C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166BE8_0x166be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C54u; }
        if (ctx->pc != 0x168C54u) { return; }
    }
    ctx->pc = 0x168C54u;
label_168c54:
    // 0x168c54: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x168c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x168c58: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x168C58u;
    {
        const bool branch_taken_0x168c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168c58) {
            ctx->pc = 0x168C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168C58u;
            // 0x168c5c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168C28u;
            runtime->cooperativeGuestYield();
            goto label_168c28;
        }
    }
    ctx->pc = 0x168C60u;
label_168c60:
    // 0x168c60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x168c64: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x168c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x168c68: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x168C68u;
    {
        const bool branch_taken_0x168c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C68u;
            // 0x168c6c: 0x151100  sll         $v0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c68) {
            ctx->pc = 0x168C08u;
            runtime->cooperativeGuestYield();
            goto label_168c08;
        }
    }
    ctx->pc = 0x168C70u;
label_168c70:
    // 0x168c70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x168c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168c74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x168c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168c78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x168c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168c7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x168c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168c80: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x168c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168c84: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x168c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168c88: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x168c88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168c90: 0x3e00008  jr          $ra
    ctx->pc = 0x168C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C90u;
            // 0x168c94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168C08u: goto label_168c08;
            case 0x168C28u: goto label_168c28;
            case 0x168C54u: goto label_168c54;
            case 0x168C60u: goto label_168c60;
            case 0x168C70u: goto label_168c70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168C98u;
}
