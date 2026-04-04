#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289294
// Address: 0x289294 - 0x289340
void entry_289294_0x289340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289294_0x289340");
#endif

    ctx->pc = 0x289294u;

    // 0x289294: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x289294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289298: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x289298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x28929c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28929Cu;
    {
        const bool branch_taken_0x28929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2892A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28929Cu;
            // 0x2892a0: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28929c) {
            ctx->pc = 0x289310u;
            goto label_289310;
        }
    }
    ctx->pc = 0x2892A4u;
    // 0x2892a4: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x2892a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x2892a8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2892a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2892ac: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2892ACu;
    {
        const bool branch_taken_0x2892ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2892ac) {
            ctx->pc = 0x2892B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2892ACu;
            // 0x2892b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289314u;
            goto label_289314;
        }
    }
    ctx->pc = 0x2892B4u;
    // 0x2892b4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2892b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2892b8:
    // 0x2892b8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2892b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2892bc: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x2892bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x2892c0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2892c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2892c4: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x2892c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2892c8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2892c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2892cc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2892ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2892d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2892d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2892d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2892d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2892d8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x2892d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2892dc: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2892DCu;
    {
        const bool branch_taken_0x2892dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2892E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892DCu;
            // 0x2892e0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892dc) {
            ctx->pc = 0x2892B8u;
            runtime->cooperativeGuestYield();
            goto label_2892b8;
        }
    }
    ctx->pc = 0x2892E4u;
    // 0x2892e4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2892e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2892e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2892E8u;
    {
        const bool branch_taken_0x2892e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2892ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2892E8u;
            // 0x2892ec: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892e8) {
            ctx->pc = 0x289310u;
            goto label_289310;
        }
    }
    ctx->pc = 0x2892F0u;
label_2892f0:
    // 0x2892f0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2892f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2892f4: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x2892f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x2892f8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2892f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2892fc: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2892fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x289300: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x289300u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x289304: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x289304u;
    {
        const bool branch_taken_0x289304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289304u;
            // 0x289308: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289304) {
            ctx->pc = 0x2892F0u;
            runtime->cooperativeGuestYield();
            goto label_2892f0;
        }
    }
    ctx->pc = 0x28930Cu;
    // 0x28930c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x28930cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289310:
    // 0x289310: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_289314:
    // 0x289314: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x289314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289318: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289318u;
    {
        const bool branch_taken_0x289318 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x28931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289318u;
            // 0x28931c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289318) {
            ctx->pc = 0x289338u;
            goto label_289338;
        }
    }
    ctx->pc = 0x289320u;
label_289320:
    // 0x289320: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x289320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289324: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289328: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28932c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x28932cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x289330: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289330u;
    {
        const bool branch_taken_0x289330 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x289334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289330u;
            // 0x289334: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289330) {
            ctx->pc = 0x289320u;
            runtime->cooperativeGuestYield();
            goto label_289320;
        }
    }
    ctx->pc = 0x289338u;
label_289338:
    // 0x289338: 0x3e00008  jr          $ra
    ctx->pc = 0x289338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289338u;
            // 0x28933c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2892B8u: goto label_2892b8;
            case 0x2892F0u: goto label_2892f0;
            case 0x289310u: goto label_289310;
            case 0x289314u: goto label_289314;
            case 0x289320u: goto label_289320;
            case 0x289338u: goto label_289338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289340u;
}
