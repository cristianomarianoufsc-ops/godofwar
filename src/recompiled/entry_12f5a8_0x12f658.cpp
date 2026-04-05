#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f5a8
// Address: 0x12f5a8 - 0x12f658
void entry_12f5a8_0x12f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f5a8_0x12f658");
#endif

    ctx->pc = 0x12f5a8u;

    // 0x12f5a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12f5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5ac: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x12f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x12f5b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12F5B0u;
    {
        const bool branch_taken_0x12f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5B0u;
            // 0x12f5b4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5b0) {
            ctx->pc = 0x12F608u;
            goto label_12f608;
        }
    }
    ctx->pc = 0x12F5B8u;
    // 0x12f5b8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x12f5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f5bc: 0x0  nop
    ctx->pc = 0x12f5bcu;
    // NOP
label_12f5c0:
    // 0x12f5c0: 0x8ccb0014  lw          $t3, 0x14($a2)
    ctx->pc = 0x12f5c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x12f5c4: 0x1960000b  blez        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x12F5C4u;
    {
        const bool branch_taken_0x12f5c4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x12F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5C4u;
            // 0x12f5c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5c4) {
            ctx->pc = 0x12F5F4u;
            goto label_12f5f4;
        }
    }
    ctx->pc = 0x12F5CCu;
    // 0x12f5cc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x12f5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12f5d0:
    // 0x12f5d0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x12f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12f5d4: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x12f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x12f5d8: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x12f5d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f5dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12f5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12f5e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f5e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12f5e8: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x12f5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x12f5ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12F5ECu;
    {
        const bool branch_taken_0x12f5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5ECu;
            // 0x12f5f0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5ec) {
            ctx->pc = 0x12F5D0u;
            runtime->cooperativeGuestYield();
            goto label_12f5d0;
        }
    }
    ctx->pc = 0x12F5F4u;
label_12f5f4:
    // 0x12f5f4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12f5f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12f5f8: 0x541fff1  bgez        $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x12F5F8u;
    {
        const bool branch_taken_0x12f5f8 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x12F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5F8u;
            // 0x12f5fc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5f8) {
            ctx->pc = 0x12F5C0u;
            runtime->cooperativeGuestYield();
            goto label_12f5c0;
        }
    }
    ctx->pc = 0x12F600u;
    // 0x12f600: 0x3e00008  jr          $ra
    ctx->pc = 0x12F600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F600u;
            // 0x12f604: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F5C0u: goto label_12f5c0;
            case 0x12F5D0u: goto label_12f5d0;
            case 0x12F5F4u: goto label_12f5f4;
            case 0x12F608u: goto label_12f608;
            case 0x12F630u: goto label_12f630;
            case 0x12F64Cu: goto label_12f64c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F608u;
label_12f608:
    // 0x12f608: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x12f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f60c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x12f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12f610: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x12f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12f614: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x12f614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x12f618: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x12f618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12f61c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x12f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x12f620: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x12F620u;
    {
        const bool branch_taken_0x12f620 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x12F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F620u;
            // 0x12f624: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f620) {
            ctx->pc = 0x12F64Cu;
            goto label_12f64c;
        }
    }
    ctx->pc = 0x12F628u;
    // 0x12f628: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x12f628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f62c: 0x0  nop
    ctx->pc = 0x12f62cu;
    // NOP
label_12f630:
    // 0x12f630: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12f630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f638: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12f63c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12f63cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12f640: 0x0  nop
    ctx->pc = 0x12f640u;
    // NOP
    // 0x12f644: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F644u;
    {
        const bool branch_taken_0x12f644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F644u;
            // 0x12f648: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f644) {
            ctx->pc = 0x12F630u;
            runtime->cooperativeGuestYield();
            goto label_12f630;
        }
    }
    ctx->pc = 0x12F64Cu;
label_12f64c:
    // 0x12f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F5C0u: goto label_12f5c0;
            case 0x12F5D0u: goto label_12f5d0;
            case 0x12F5F4u: goto label_12f5f4;
            case 0x12F608u: goto label_12f608;
            case 0x12F630u: goto label_12f630;
            case 0x12F64Cu: goto label_12f64c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F654u;
    // 0x12f654: 0x0  nop
    ctx->pc = 0x12f654u;
    // NOP
}
