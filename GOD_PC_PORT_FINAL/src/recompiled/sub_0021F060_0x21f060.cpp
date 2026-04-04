#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F060
// Address: 0x21f060 - 0x21f138
void sub_0021F060_0x21f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F060_0x21f060");
#endif

    ctx->pc = 0x21f060u;

    // 0x21f060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f064: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21f068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f06c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f07c: 0xc06f9c6  jal         func_1BE718
    ctx->pc = 0x21F07Cu;
    SET_GPR_U32(ctx, 31, 0x21F084u);
    ctx->pc = 0x21F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F07Cu;
            // 0x21f080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE718u;
    if (runtime->hasFunction(0x1BE718u)) {
        auto targetFn = runtime->lookupFunction(0x1BE718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F084u; }
        if (ctx->pc != 0x21F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE718_0x1be718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F084u; }
        if (ctx->pc != 0x21F084u) { return; }
    }
    ctx->pc = 0x21F084u;
    // 0x21f084: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F084u;
    {
        const bool branch_taken_0x21f084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F084u;
            // 0x21f088: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f084) {
            ctx->pc = 0x21F09Cu;
            goto label_21f09c;
        }
    }
    ctx->pc = 0x21F08Cu;
    // 0x21f08c: 0xc087622  jal         func_21D888
    ctx->pc = 0x21F08Cu;
    SET_GPR_U32(ctx, 31, 0x21F094u);
    ctx->pc = 0x21F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F08Cu;
            // 0x21f090: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D888u;
    if (runtime->hasFunction(0x21D888u)) {
        auto targetFn = runtime->lookupFunction(0x21D888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F094u; }
        if (ctx->pc != 0x21F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D888_0x21d888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F094u; }
        if (ctx->pc != 0x21F094u) { return; }
    }
    ctx->pc = 0x21F094u;
    // 0x21f094: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21F094u;
    {
        const bool branch_taken_0x21f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F094u;
            // 0x21f098: 0x3c06002a  lui         $a2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f094) {
            ctx->pc = 0x21F0F4u;
            goto label_21f0f4;
        }
    }
    ctx->pc = 0x21F09Cu;
label_21f09c:
    // 0x21f09c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f0a0: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x21f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21f0a4: 0x8c621574  lw          $v0, 0x1574($v1)
    ctx->pc = 0x21f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
    // 0x21f0a8: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21F0A8u;
    {
        const bool branch_taken_0x21f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x21F0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0A8u;
            // 0x21f0ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0a8) {
            ctx->pc = 0x21F0E8u;
            goto label_21f0e8;
        }
    }
    ctx->pc = 0x21F0B0u;
    // 0x21f0b0: 0xac65020c  sw          $a1, 0x20C($v1)
    ctx->pc = 0x21f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 5));
    // 0x21f0b4: 0xac60157c  sw          $zero, 0x157C($v1)
    ctx->pc = 0x21f0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5500), GPR_U32(ctx, 0));
    // 0x21f0b8: 0xac601580  sw          $zero, 0x1580($v1)
    ctx->pc = 0x21f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5504), GPR_U32(ctx, 0));
    // 0x21f0bc: 0xac60158c  sw          $zero, 0x158C($v1)
    ctx->pc = 0x21f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5516), GPR_U32(ctx, 0));
    // 0x21f0c0: 0xac601588  sw          $zero, 0x1588($v1)
    ctx->pc = 0x21f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5512), GPR_U32(ctx, 0));
    // 0x21f0c4: 0xac601584  sw          $zero, 0x1584($v1)
    ctx->pc = 0x21f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5508), GPR_U32(ctx, 0));
    // 0x21f0c8: 0xac601598  sw          $zero, 0x1598($v1)
    ctx->pc = 0x21f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5528), GPR_U32(ctx, 0));
    // 0x21f0cc: 0xac601594  sw          $zero, 0x1594($v1)
    ctx->pc = 0x21f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5524), GPR_U32(ctx, 0));
    // 0x21f0d0: 0xac601590  sw          $zero, 0x1590($v1)
    ctx->pc = 0x21f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5520), GPR_U32(ctx, 0));
    // 0x21f0d4: 0xac60159c  sw          $zero, 0x159C($v1)
    ctx->pc = 0x21f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5532), GPR_U32(ctx, 0));
    // 0x21f0d8: 0xac6015a0  sw          $zero, 0x15A0($v1)
    ctx->pc = 0x21f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5536), GPR_U32(ctx, 0));
    // 0x21f0dc: 0xac6015a4  sw          $zero, 0x15A4($v1)
    ctx->pc = 0x21f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5540), GPR_U32(ctx, 0));
    // 0x21f0e0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21F0E0u;
    SET_GPR_U32(ctx, 31, 0x21F0E8u);
    ctx->pc = 0x21F0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0E0u;
            // 0x21f0e4: 0xac651574  sw          $a1, 0x1574($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0E8u; }
        if (ctx->pc != 0x21F0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0E8u; }
        if (ctx->pc != 0x21F0E8u) { return; }
    }
    ctx->pc = 0x21F0E8u;
label_21f0e8:
    // 0x21f0e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21f0ec: 0xac40f1f0  sw          $zero, -0xE10($v0)
    ctx->pc = 0x21f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 0));
    // 0x21f0f0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_21f0f4:
    // 0x21f0f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21f0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f0f8: 0xacd1e58c  sw          $s1, -0x1A74($a2)
    ctx->pc = 0x21f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960524), GPR_U32(ctx, 17));
    // 0x21f0fc: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x21f0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x21f100: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x21f100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x21f104: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21f108: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21f108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21f10c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x21f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f110: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f114: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21f114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f120: 0xace3e59c  sw          $v1, -0x1A64($a3)
    ctx->pc = 0x21f120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960540), GPR_U32(ctx, 3));
    // 0x21f124: 0xac88e5a0  sw          $t0, -0x1A60($a0)
    ctx->pc = 0x21f124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960544), GPR_U32(ctx, 8));
    // 0x21f128: 0xac45e560  sw          $a1, -0x1AA0($v0)
    ctx->pc = 0x21f128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960480), GPR_U32(ctx, 5));
    // 0x21f12c: 0xad28e574  sw          $t0, -0x1A8C($t1)
    ctx->pc = 0x21f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294960500), GPR_U32(ctx, 8));
    // 0x21f130: 0x3e00008  jr          $ra
    ctx->pc = 0x21F130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F130u;
            // 0x21f134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F09Cu: goto label_21f09c;
            case 0x21F0E8u: goto label_21f0e8;
            case 0x21F0F4u: goto label_21f0f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F138u;
}
