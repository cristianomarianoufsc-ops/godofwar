#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286A00
// Address: 0x286a00 - 0x286ae8
void sub_00286A00_0x286a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286A00_0x286a00");
#endif

    ctx->pc = 0x286a00u;

    // 0x286a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286a04: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x286a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286a0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286a10: 0x8c506990  lw          $s0, 0x6990($v0)
    ctx->pc = 0x286a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27024)));
    // 0x286a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286a1c: 0x0  nop
    ctx->pc = 0x286a1cu;
    // NOP
label_286a20:
    // 0x286a20: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x286A20u;
    {
        const bool branch_taken_0x286a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A20u;
            // 0x286a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a20) {
            ctx->pc = 0x286AD0u;
            goto label_286ad0;
        }
    }
    ctx->pc = 0x286A28u;
    // 0x286a28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286a2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286A2Cu;
    {
        const bool branch_taken_0x286a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A2Cu;
            // 0x286a30: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a2c) {
            ctx->pc = 0x286A44u;
            goto label_286a44;
        }
    }
    ctx->pc = 0x286A34u;
    // 0x286a34: 0xc0a1a30  jal         func_2868C0
    ctx->pc = 0x286A34u;
    SET_GPR_U32(ctx, 31, 0x286A3Cu);
    ctx->pc = 0x286A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286A34u;
            // 0x286a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868C0u;
    if (runtime->hasFunction(0x2868C0u)) {
        auto targetFn = runtime->lookupFunction(0x2868C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A3Cu; }
        if (ctx->pc != 0x286A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868C0_0x2868c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286A3Cu; }
        if (ctx->pc != 0x286A3Cu) { return; }
    }
    ctx->pc = 0x286A3Cu;
    // 0x286a3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286a40: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x286a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_286a44:
    // 0x286a44: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x286A44u;
    {
        const bool branch_taken_0x286a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286a44) {
            ctx->pc = 0x286A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286A44u;
            // 0x286a48: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286A20u;
            runtime->cooperativeGuestYield();
            goto label_286a20;
        }
    }
    ctx->pc = 0x286A4Cu;
    // 0x286a4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x286a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x286a50: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x286a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x286a54: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x286A54u;
    {
        const bool branch_taken_0x286a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286a54) {
            ctx->pc = 0x286A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286A54u;
            // 0x286a58: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286A20u;
            runtime->cooperativeGuestYield();
            goto label_286a20;
        }
    }
    ctx->pc = 0x286A5Cu;
    // 0x286a5c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286A5Cu;
    {
        const bool branch_taken_0x286a5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x286a5c) {
            ctx->pc = 0x286A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286A5Cu;
            // 0x286a60: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286A74u;
            goto label_286a74;
        }
    }
    ctx->pc = 0x286A64u;
    // 0x286a64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x286A64u;
    {
        const bool branch_taken_0x286a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A64u;
            // 0x286a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a64) {
            ctx->pc = 0x286AD0u;
            goto label_286ad0;
        }
    }
    ctx->pc = 0x286A6Cu;
label_286a6c:
    // 0x286a6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x286A6Cu;
    {
        const bool branch_taken_0x286a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A6Cu;
            // 0x286a70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a6c) {
            ctx->pc = 0x286AD0u;
            goto label_286ad0;
        }
    }
    ctx->pc = 0x286A74u;
label_286a74:
    // 0x286a74: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x286A74u;
    {
        const bool branch_taken_0x286a74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286A74u;
            // 0x286a78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a74) {
            ctx->pc = 0x286ACCu;
            goto label_286acc;
        }
    }
    ctx->pc = 0x286A7Cu;
    // 0x286a7c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x286a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x286a80: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x286a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x286a84: 0x0  nop
    ctx->pc = 0x286a84u;
    // NOP
label_286a88:
    // 0x286a88: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286a8c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x286a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x286a90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286a94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x286a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286a98: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x286a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286a9c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x286a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286aa0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x286AA0u;
    {
        const bool branch_taken_0x286aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286aa0) {
            ctx->pc = 0x286AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286AA0u;
            // 0x286aa4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286AB0u;
            goto label_286ab0;
        }
    }
    ctx->pc = 0x286AA8u;
    // 0x286aa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x286AA8u;
    {
        const bool branch_taken_0x286aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AA8u;
            // 0x286aac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286aa8) {
            ctx->pc = 0x286AC0u;
            goto label_286ac0;
        }
    }
    ctx->pc = 0x286AB0u;
label_286ab0:
    // 0x286ab0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286ab4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x286ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x286ab8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x286AB8u;
    {
        const bool branch_taken_0x286ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AB8u;
            // 0x286abc: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ab8) {
            ctx->pc = 0x286A6Cu;
            runtime->cooperativeGuestYield();
            goto label_286a6c;
        }
    }
    ctx->pc = 0x286AC0u;
label_286ac0:
    // 0x286ac0: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x286ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x286ac4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x286AC4u;
    {
        const bool branch_taken_0x286ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286AC4u;
            // 0x286ac8: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ac4) {
            ctx->pc = 0x286A88u;
            runtime->cooperativeGuestYield();
            goto label_286a88;
        }
    }
    ctx->pc = 0x286ACCu;
label_286acc:
    // 0x286acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286ad0:
    // 0x286ad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286ad4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286adc: 0x3e00008  jr          $ra
    ctx->pc = 0x286ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286ADCu;
            // 0x286ae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286A20u: goto label_286a20;
            case 0x286A44u: goto label_286a44;
            case 0x286A6Cu: goto label_286a6c;
            case 0x286A74u: goto label_286a74;
            case 0x286A88u: goto label_286a88;
            case 0x286AB0u: goto label_286ab0;
            case 0x286AC0u: goto label_286ac0;
            case 0x286ACCu: goto label_286acc;
            case 0x286AD0u: goto label_286ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286AE4u;
    // 0x286ae4: 0x0  nop
    ctx->pc = 0x286ae4u;
    // NOP
}
