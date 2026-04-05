#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_285938
// Address: 0x285938 - 0x285a10
void entry_285938_0x285a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_285938_0x285a10");
#endif

    ctx->pc = 0x285938u;

    // 0x285938: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x285938u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28593c: 0x11a00032  beqz        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x28593Cu;
    {
        const bool branch_taken_0x28593c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x285940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28593Cu;
            // 0x285940: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28593c) {
            ctx->pc = 0x285A08u;
            goto label_285a08;
        }
    }
    ctx->pc = 0x285944u;
    // 0x285944: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x285948: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x285948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x28594c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x285950: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x285950u;
    {
        const bool branch_taken_0x285950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285950u;
            // 0x285954: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285950) {
            ctx->pc = 0x2859ECu;
            goto label_2859ec;
        }
    }
    ctx->pc = 0x285958u;
    // 0x285958: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x285958u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x28595c: 0x240c000c  addiu       $t4, $zero, 0xC
    ctx->pc = 0x28595cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x285960: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x285960u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285964: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x285964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x285968: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x285968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28596c: 0x0  nop
    ctx->pc = 0x28596cu;
    // NOP
label_285970:
    // 0x285970: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x285970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x285974: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x285974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x285978: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x285978u;
    {
        const bool branch_taken_0x285978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285978) {
            ctx->pc = 0x2859C4u;
            goto label_2859c4;
        }
    }
    ctx->pc = 0x285980u;
    // 0x285980: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x285980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x285984: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x285984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x285988: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x285988u;
    {
        const bool branch_taken_0x285988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285988) {
            ctx->pc = 0x2859C4u;
            goto label_2859c4;
        }
    }
    ctx->pc = 0x285990u;
    // 0x285990: 0x110b000a  beq         $t0, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x285990u;
    {
        const bool branch_taken_0x285990 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x285994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285990u;
            // 0x285994: 0x10c1018  mult        $v0, $t0, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285990) {
            ctx->pc = 0x2859BCu;
            goto label_2859bc;
        }
    }
    ctx->pc = 0x285998u;
    // 0x285998: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x285998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x28599c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2859a0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2859a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2859a4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2859A4u;
    {
        const bool branch_taken_0x2859a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859a4) {
            ctx->pc = 0x2859A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2859A4u;
            // 0x2859a8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2859E0u;
            goto label_2859e0;
        }
    }
    ctx->pc = 0x2859ACu;
    // 0x2859ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2859acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2859b0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2859b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2859b4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2859B4u;
    {
        const bool branch_taken_0x2859b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859b4) {
            ctx->pc = 0x2859B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2859B4u;
            // 0x2859b8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2859E0u;
            goto label_2859e0;
        }
    }
    ctx->pc = 0x2859BCu;
label_2859bc:
    // 0x2859bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2859BCu;
    {
        const bool branch_taken_0x2859bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859BCu;
            // 0x2859c0: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859bc) {
            ctx->pc = 0x2859DCu;
            goto label_2859dc;
        }
    }
    ctx->pc = 0x2859C4u;
label_2859c4:
    // 0x2859c4: 0x5020006  bltzl       $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2859C4u;
    {
        const bool branch_taken_0x2859c4 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2859c4) {
            ctx->pc = 0x2859C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2859C4u;
            // 0x2859c8: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2859E0u;
            goto label_2859e0;
        }
    }
    ctx->pc = 0x2859CCu;
    // 0x2859cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2859ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2859d0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2859d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2859d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2859D4u;
    {
        const bool branch_taken_0x2859d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859D4u;
            // 0x2859d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859d4) {
            ctx->pc = 0x2859F0u;
            goto label_2859f0;
        }
    }
    ctx->pc = 0x2859DCu;
label_2859dc:
    // 0x2859dc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2859dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_2859e0:
    // 0x2859e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2859e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2859e4: 0x1449ffe2  bne         $v0, $t1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2859E4u;
    {
        const bool branch_taken_0x2859e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2859E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859E4u;
            // 0x2859e8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859e4) {
            ctx->pc = 0x285970u;
            runtime->cooperativeGuestYield();
            goto label_285970;
        }
    }
    ctx->pc = 0x2859ECu;
label_2859ec:
    // 0x2859ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2859ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2859f0:
    // 0x2859f0: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2859F0u;
    {
        const bool branch_taken_0x2859f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2859F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859F0u;
            // 0x2859f4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859f0) {
            ctx->pc = 0x285A08u;
            goto label_285a08;
        }
    }
    ctx->pc = 0x2859F8u;
    // 0x2859f8: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x2859f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2859fc: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x2859fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x285a00: 0x3e00008  jr          $ra
    ctx->pc = 0x285A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A00u;
            // 0x285a04: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285970u: goto label_285970;
            case 0x2859BCu: goto label_2859bc;
            case 0x2859C4u: goto label_2859c4;
            case 0x2859DCu: goto label_2859dc;
            case 0x2859E0u: goto label_2859e0;
            case 0x2859ECu: goto label_2859ec;
            case 0x2859F0u: goto label_2859f0;
            case 0x285A08u: goto label_285a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285A08u;
label_285a08:
    // 0x285a08: 0x3e00008  jr          $ra
    ctx->pc = 0x285A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A08u;
            // 0x285a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285970u: goto label_285970;
            case 0x2859BCu: goto label_2859bc;
            case 0x2859C4u: goto label_2859c4;
            case 0x2859DCu: goto label_2859dc;
            case 0x2859E0u: goto label_2859e0;
            case 0x2859ECu: goto label_2859ec;
            case 0x2859F0u: goto label_2859f0;
            case 0x285A08u: goto label_285a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285A10u;
}
