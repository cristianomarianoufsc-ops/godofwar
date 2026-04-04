#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5E88
// Address: 0x1e5e88 - 0x1e5f88
void sub_001E5E88_0x1e5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5E88_0x1e5e88");
#endif

    ctx->pc = 0x1e5e88u;

    // 0x1e5e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5e8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e5e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5e94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e5e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5ea0: 0x1015c2  srl         $v0, $s0, 23
    ctx->pc = 0x1e5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
    // 0x1e5ea4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e5ea8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e5ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e5eac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e5eb0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e5eb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5eb8: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5EB8u;
    {
        const bool branch_taken_0x1e5eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E5EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EB8u;
            // 0x1e5ebc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5eb8) {
            ctx->pc = 0x1E5EC8u;
            goto label_1e5ec8;
        }
    }
    ctx->pc = 0x1E5EC0u;
    // 0x1e5ec0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5ec4: 0x0  nop
    ctx->pc = 0x1e5ec4u;
    // NOP
label_1e5ec8:
    // 0x1e5ec8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E5EC8u;
    {
        const bool branch_taken_0x1e5ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EC8u;
            // 0x1e5ecc: 0x102dc2  srl         $a1, $s0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ec8) {
            ctx->pc = 0x1E5F38u;
            goto label_1e5f38;
        }
    }
    ctx->pc = 0x1E5ED0u;
    // 0x1e5ed0: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x1e5ed4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5ed8: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5ED8u;
    {
        const bool branch_taken_0x1e5ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5ED8u;
            // 0x1e5edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ed8) {
            ctx->pc = 0x1E5F04u;
            goto label_1e5f04;
        }
    }
    ctx->pc = 0x1E5EE0u;
    // 0x1e5ee0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5ee4: 0x0  nop
    ctx->pc = 0x1e5ee4u;
    // NOP
label_1e5ee8:
    // 0x1e5ee8: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5EE8u;
    {
        const bool branch_taken_0x1e5ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e5ee8) {
            ctx->pc = 0x1E5EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EE8u;
            // 0x1e5eec: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5EF8u;
            goto label_1e5ef8;
        }
    }
    ctx->pc = 0x1E5EF0u;
    // 0x1e5ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5EF0u;
    {
        const bool branch_taken_0x1e5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EF0u;
            // 0x1e5ef4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ef0) {
            ctx->pc = 0x1E5F04u;
            goto label_1e5f04;
        }
    }
    ctx->pc = 0x1E5EF8u;
label_1e5ef8:
    // 0x1e5ef8: 0x54a3fffb  bnel        $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E5EF8u;
    {
        const bool branch_taken_0x1e5ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5ef8) {
            ctx->pc = 0x1E5EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5EF8u;
            // 0x1e5efc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5EE8u;
            runtime->cooperativeGuestYield();
            goto label_1e5ee8;
        }
    }
    ctx->pc = 0x1E5F00u;
    // 0x1e5f00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f04:
    // 0x1e5f04: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e5f08: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e5f0c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1e5f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e5f10: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e5f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f14: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x1e5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x1e5f18: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1e5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1e5f1c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e5f20: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e5f24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1e5f28: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1e5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1e5f2c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1E5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F34u);
    ctx->pc = 0x1E5F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F2Cu;
            // 0x1e5f30: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F34u; }
        if (ctx->pc != 0x1E5F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F34u; }
        if (ctx->pc != 0x1E5F34u) { return; }
    }
    ctx->pc = 0x1E5F34u;
    // 0x1e5f34: 0x102dc2  srl         $a1, $s0, 23
    ctx->pc = 0x1e5f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
label_1e5f38:
    // 0x1e5f38: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1e5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e5f3c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1e5f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5f40: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1e5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1e5f44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e5f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5f4c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e5f50: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1e5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1e5f54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e5f5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e5f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e5f60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5f64: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e5f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e5f68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5f6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e5f70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e5f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e5f74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5f78: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1e5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1e5f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5f80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F80u;
            // 0x1e5f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5EC8u: goto label_1e5ec8;
            case 0x1E5EE8u: goto label_1e5ee8;
            case 0x1E5EF8u: goto label_1e5ef8;
            case 0x1E5F04u: goto label_1e5f04;
            case 0x1E5F38u: goto label_1e5f38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5F88u;
}
