#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D888
// Address: 0x21d888 - 0x21d958
void sub_0021D888_0x21d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D888_0x21d888");
#endif

    ctx->pc = 0x21d888u;

    // 0x21d888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d88c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21D88Cu;
    {
        const bool branch_taken_0x21d88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D88Cu;
            // 0x21d890: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d88c) {
            ctx->pc = 0x21D8F0u;
            goto label_21d8f0;
        }
    }
    ctx->pc = 0x21D894u;
    // 0x21d894: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d898: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21d898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d89c: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x21d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21d8a0: 0x8c621574  lw          $v0, 0x1574($v1)
    ctx->pc = 0x21d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
    // 0x21d8a4: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21D8A4u;
    {
        const bool branch_taken_0x21d8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x21D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8A4u;
            // 0x21d8a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8a4) {
            ctx->pc = 0x21D8E4u;
            goto label_21d8e4;
        }
    }
    ctx->pc = 0x21D8ACu;
    // 0x21d8ac: 0xac65020c  sw          $a1, 0x20C($v1)
    ctx->pc = 0x21d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 5));
    // 0x21d8b0: 0xac60157c  sw          $zero, 0x157C($v1)
    ctx->pc = 0x21d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5500), GPR_U32(ctx, 0));
    // 0x21d8b4: 0xac601580  sw          $zero, 0x1580($v1)
    ctx->pc = 0x21d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5504), GPR_U32(ctx, 0));
    // 0x21d8b8: 0xac60158c  sw          $zero, 0x158C($v1)
    ctx->pc = 0x21d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5516), GPR_U32(ctx, 0));
    // 0x21d8bc: 0xac601588  sw          $zero, 0x1588($v1)
    ctx->pc = 0x21d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5512), GPR_U32(ctx, 0));
    // 0x21d8c0: 0xac601584  sw          $zero, 0x1584($v1)
    ctx->pc = 0x21d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5508), GPR_U32(ctx, 0));
    // 0x21d8c4: 0xac601598  sw          $zero, 0x1598($v1)
    ctx->pc = 0x21d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5528), GPR_U32(ctx, 0));
    // 0x21d8c8: 0xac601594  sw          $zero, 0x1594($v1)
    ctx->pc = 0x21d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5524), GPR_U32(ctx, 0));
    // 0x21d8cc: 0xac601590  sw          $zero, 0x1590($v1)
    ctx->pc = 0x21d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5520), GPR_U32(ctx, 0));
    // 0x21d8d0: 0xac60159c  sw          $zero, 0x159C($v1)
    ctx->pc = 0x21d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5532), GPR_U32(ctx, 0));
    // 0x21d8d4: 0xac6015a0  sw          $zero, 0x15A0($v1)
    ctx->pc = 0x21d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5536), GPR_U32(ctx, 0));
    // 0x21d8d8: 0xac6015a4  sw          $zero, 0x15A4($v1)
    ctx->pc = 0x21d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5540), GPR_U32(ctx, 0));
    // 0x21d8dc: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D8DCu;
    SET_GPR_U32(ctx, 31, 0x21D8E4u);
    ctx->pc = 0x21D8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8DCu;
            // 0x21d8e0: 0xac651574  sw          $a1, 0x1574($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D8E4u; }
        if (ctx->pc != 0x21D8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D8E4u; }
        if (ctx->pc != 0x21D8E4u) { return; }
    }
    ctx->pc = 0x21D8E4u;
label_21d8e4:
    // 0x21d8e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d8e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21D8E8u;
    {
        const bool branch_taken_0x21d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8E8u;
            // 0x21d8ec: 0xac40f1f0  sw          $zero, -0xE10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8e8) {
            ctx->pc = 0x21D94Cu;
            goto label_21d94c;
        }
    }
    ctx->pc = 0x21D8F0u;
label_21d8f0:
    // 0x21d8f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d8f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d8f8: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x21d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21d8fc: 0x8c621574  lw          $v0, 0x1574($v1)
    ctx->pc = 0x21d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
    // 0x21d900: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x21D900u;
    {
        const bool branch_taken_0x21d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x21D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D900u;
            // 0x21d904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d900) {
            ctx->pc = 0x21D940u;
            goto label_21d940;
        }
    }
    ctx->pc = 0x21D908u;
    // 0x21d908: 0xac65020c  sw          $a1, 0x20C($v1)
    ctx->pc = 0x21d908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 5));
    // 0x21d90c: 0xac60157c  sw          $zero, 0x157C($v1)
    ctx->pc = 0x21d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5500), GPR_U32(ctx, 0));
    // 0x21d910: 0xac601580  sw          $zero, 0x1580($v1)
    ctx->pc = 0x21d910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5504), GPR_U32(ctx, 0));
    // 0x21d914: 0xac60158c  sw          $zero, 0x158C($v1)
    ctx->pc = 0x21d914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5516), GPR_U32(ctx, 0));
    // 0x21d918: 0xac601588  sw          $zero, 0x1588($v1)
    ctx->pc = 0x21d918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5512), GPR_U32(ctx, 0));
    // 0x21d91c: 0xac601584  sw          $zero, 0x1584($v1)
    ctx->pc = 0x21d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5508), GPR_U32(ctx, 0));
    // 0x21d920: 0xac601598  sw          $zero, 0x1598($v1)
    ctx->pc = 0x21d920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5528), GPR_U32(ctx, 0));
    // 0x21d924: 0xac601594  sw          $zero, 0x1594($v1)
    ctx->pc = 0x21d924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5524), GPR_U32(ctx, 0));
    // 0x21d928: 0xac601590  sw          $zero, 0x1590($v1)
    ctx->pc = 0x21d928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5520), GPR_U32(ctx, 0));
    // 0x21d92c: 0xac60159c  sw          $zero, 0x159C($v1)
    ctx->pc = 0x21d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5532), GPR_U32(ctx, 0));
    // 0x21d930: 0xac6015a0  sw          $zero, 0x15A0($v1)
    ctx->pc = 0x21d930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5536), GPR_U32(ctx, 0));
    // 0x21d934: 0xac6015a4  sw          $zero, 0x15A4($v1)
    ctx->pc = 0x21d934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5540), GPR_U32(ctx, 0));
    // 0x21d938: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D938u;
    SET_GPR_U32(ctx, 31, 0x21D940u);
    ctx->pc = 0x21D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D938u;
            // 0x21d93c: 0xac651574  sw          $a1, 0x1574($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D940u; }
        if (ctx->pc != 0x21D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D940u; }
        if (ctx->pc != 0x21D940u) { return; }
    }
    ctx->pc = 0x21D940u;
label_21d940:
    // 0x21d940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d944: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d948: 0xac43f1f0  sw          $v1, -0xE10($v0)
    ctx->pc = 0x21d948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 3));
label_21d94c:
    // 0x21d94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d950: 0x3e00008  jr          $ra
    ctx->pc = 0x21D950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D950u;
            // 0x21d954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D8E4u: goto label_21d8e4;
            case 0x21D8F0u: goto label_21d8f0;
            case 0x21D940u: goto label_21d940;
            case 0x21D94Cu: goto label_21d94c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D958u;
}
