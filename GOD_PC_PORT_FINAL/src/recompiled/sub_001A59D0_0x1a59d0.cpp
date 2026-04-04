#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A59D0
// Address: 0x1a59d0 - 0x1a5b10
void sub_001A59D0_0x1a59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A59D0_0x1a59d0");
#endif

    ctx->pc = 0x1a59d0u;

    // 0x1a59d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a59d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a59d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a59d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a59d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a59dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a59e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a59e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a59e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1a59e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1a59ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a59ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a59f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a59f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a59f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a59f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a59fc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A59FCu;
    {
        const bool branch_taken_0x1a59fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59FCu;
            // 0x1a5a00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59fc) {
            ctx->pc = 0x1A5A0Cu;
            goto label_1a5a0c;
        }
    }
    ctx->pc = 0x1A5A04u;
    // 0x1a5a04: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a5a08: 0xac407378  sw          $zero, 0x7378($v0)
    ctx->pc = 0x1a5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29560), GPR_U32(ctx, 0));
label_1a5a0c:
    // 0x1a5a0c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1a5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1a5a10: 0x8c827378  lw          $v0, 0x7378($a0)
    ctx->pc = 0x1a5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29560)));
    // 0x1a5a14: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x1a5a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a5a18: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A5A18u;
    {
        const bool branch_taken_0x1a5a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A18u;
            // 0x1a5a1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a18) {
            ctx->pc = 0x1A5AE8u;
            goto label_1a5ae8;
        }
    }
    ctx->pc = 0x1A5A20u;
label_1a5a20:
    // 0x1a5a20: 0x8c827378  lw          $v0, 0x7378($a0)
    ctx->pc = 0x1a5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29560)));
    // 0x1a5a24: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x1a5a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1a5a28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5a2c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a5a30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a34: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A5A34u;
    {
        const bool branch_taken_0x1a5a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A34u;
            // 0x1a5a38: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a34) {
            ctx->pc = 0x1A5AD0u;
            goto label_1a5ad0;
        }
    }
    ctx->pc = 0x1A5A3Cu;
    // 0x1a5a3c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x1a5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a5a40: 0x10530024  beq         $v0, $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A5A40u;
    {
        const bool branch_taken_0x1a5a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A5A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A40u;
            // 0x1a5a44: 0x8e227378  lw          $v0, 0x7378($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a40) {
            ctx->pc = 0x1A5AD4u;
            goto label_1a5ad4;
        }
    }
    ctx->pc = 0x1A5A48u;
    // 0x1a5a48: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1a5a48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a5a4c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a5a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a5a50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A50u;
            // 0x1a5a54: 0xae850000  sw          $a1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5AD0u;
            goto label_1a5ad0;
        }
    }
    ctx->pc = 0x1A5A58u;
    // 0x1a5a58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a5a5c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a5a60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a5a64: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a5a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a5a68: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a5a6c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A5A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5A74u);
        ctx->pc = 0x1A5A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A6Cu;
            // 0x1a5a70: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5A74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5A0Cu: goto label_1a5a0c;
            case 0x1A5A20u: goto label_1a5a20;
            case 0x1A5AD0u: goto label_1a5ad0;
            case 0x1A5AD4u: goto label_1a5ad4;
            case 0x1A5AE8u: goto label_1a5ae8;
            case 0x1A5AECu: goto label_1a5aec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A74u; }
            if (ctx->pc != 0x1A5A74u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5A74u;
    // 0x1a5a74: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a5a74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a5a78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a5a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a5a7c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5A7Cu;
    {
        const bool branch_taken_0x1a5a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A7Cu;
            // 0x1a5a80: 0x3c07002c  lui         $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a7c) {
            ctx->pc = 0x1A5AD0u;
            goto label_1a5ad0;
        }
    }
    ctx->pc = 0x1A5A84u;
    // 0x1a5a84: 0x26060068  addiu       $a2, $s0, 0x68
    ctx->pc = 0x1a5a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1a5a88: 0x8ce37378  lw          $v1, 0x7378($a3)
    ctx->pc = 0x1a5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 29560)));
    // 0x1a5a8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a5a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a5a98: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a5a9c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a5a9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5aa0: 0xa6a30000  sh          $v1, 0x0($s5)
    ctx->pc = 0x1a5aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a5aa4: 0x8ce37378  lw          $v1, 0x7378($a3)
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 29560)));
    // 0x1a5aa8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5aac: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1a5aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a5ab0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a5ab4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a5ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a5abc: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x1a5abcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a5ac0: 0xace37378  sw          $v1, 0x7378($a3)
    ctx->pc = 0x1a5ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 29560), GPR_U32(ctx, 3));
    // 0x1a5ac4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5AC4u;
    {
        const bool branch_taken_0x1a5ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AC4u;
            // 0x1a5ac8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ac4) {
            ctx->pc = 0x1A5AECu;
            goto label_1a5aec;
        }
    }
    ctx->pc = 0x1A5ACCu;
    // 0x1a5acc: 0x0  nop
    ctx->pc = 0x1a5accu;
    // NOP
label_1a5ad0:
    // 0x1a5ad0: 0x8e227378  lw          $v0, 0x7378($s1)
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29560)));
label_1a5ad4:
    // 0x1a5ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a5adc: 0x2843000c  slti        $v1, $v0, 0xC
    ctx->pc = 0x1a5adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1a5ae0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1A5AE0u;
    {
        const bool branch_taken_0x1a5ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AE0u;
            // 0x1a5ae4: 0xae227378  sw          $v0, 0x7378($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ae0) {
            ctx->pc = 0x1A5A20u;
            runtime->cooperativeGuestYield();
            goto label_1a5a20;
        }
    }
    ctx->pc = 0x1A5AE8u;
label_1a5ae8:
    // 0x1a5ae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5aec:
    // 0x1a5aec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a5aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a5af0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a5af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5af4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a5af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5af8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5afc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a5afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5b00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1a5b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B08u;
            // 0x1a5b0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5A0Cu: goto label_1a5a0c;
            case 0x1A5A20u: goto label_1a5a20;
            case 0x1A5AD0u: goto label_1a5ad0;
            case 0x1A5AD4u: goto label_1a5ad4;
            case 0x1A5AE8u: goto label_1a5ae8;
            case 0x1A5AECu: goto label_1a5aec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5B10u;
}
