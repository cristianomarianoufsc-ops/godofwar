#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021EFA8
// Address: 0x21efa8 - 0x21f060
void sub_0021EFA8_0x21efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EFA8_0x21efa8");
#endif

    ctx->pc = 0x21efa8u;

    // 0x21efa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21efa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21efac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21efacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21efb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21efb4: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21EFB4u;
    SET_GPR_U32(ctx, 31, 0x21EFBCu);
    ctx->pc = 0x21EFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFB4u;
            // 0x21efb8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFBCu; }
        if (ctx->pc != 0x21EFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFBCu; }
        if (ctx->pc != 0x21EFBCu) { return; }
    }
    ctx->pc = 0x21EFBCu;
    // 0x21efbc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21efc0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21efc4: 0x8c445a2c  lw          $a0, 0x5A2C($v0)
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23084)));
    // 0x21efc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21efc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efcc: 0x8c63cb94  lw          $v1, -0x346C($v1)
    ctx->pc = 0x21efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x21efd0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x21efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21efd4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21efd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EFD8u;
    {
        const bool branch_taken_0x21efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFD8u;
            // 0x21efdc: 0x8c6301c4  lw          $v1, 0x1C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efd8) {
            ctx->pc = 0x21EFECu;
            goto label_21efec;
        }
    }
    ctx->pc = 0x21EFE0u;
    // 0x21efe0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21efe4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21efe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x21efe8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x21efe8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21efec:
    // 0x21efec: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x21EFECu;
    {
        const bool branch_taken_0x21efec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFECu;
            // 0x21eff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efec) {
            ctx->pc = 0x21F054u;
            goto label_21f054;
        }
    }
    ctx->pc = 0x21EFF4u;
    // 0x21eff4: 0xc06ef9e  jal         func_1BBE78
    ctx->pc = 0x21EFF4u;
    SET_GPR_U32(ctx, 31, 0x21EFFCu);
    ctx->pc = 0x21EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFF4u;
            // 0x21eff8: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBE78u;
    if (runtime->hasFunction(0x1BBE78u)) {
        auto targetFn = runtime->lookupFunction(0x1BBE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFFCu; }
        if (ctx->pc != 0x21EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBE78_0x1bbe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EFFCu; }
        if (ctx->pc != 0x21EFFCu) { return; }
    }
    ctx->pc = 0x21EFFCu;
    // 0x21effc: 0xc06aec0  jal         func_1ABB00
    ctx->pc = 0x21EFFCu;
    SET_GPR_U32(ctx, 31, 0x21F004u);
    ctx->pc = 0x1ABB00u;
    if (runtime->hasFunction(0x1ABB00u)) {
        auto targetFn = runtime->lookupFunction(0x1ABB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F004u; }
        if (ctx->pc != 0x21F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABB00_0x1abb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F004u; }
        if (ctx->pc != 0x21F004u) { return; }
    }
    ctx->pc = 0x21F004u;
    // 0x21f004: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f00c: 0x8e04e57c  lw          $a0, -0x1A84($s0)
    ctx->pc = 0x21f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960508)));
    // 0x21f010: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F010u;
    {
        const bool branch_taken_0x21f010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F010u;
            // 0x21f014: 0xac43e580  sw          $v1, -0x1A80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f010) {
            ctx->pc = 0x21F028u;
            goto label_21f028;
        }
    }
    ctx->pc = 0x21F018u;
    // 0x21f018: 0xc08b23e  jal         func_22C8F8
    ctx->pc = 0x21F018u;
    SET_GPR_U32(ctx, 31, 0x21F020u);
    ctx->pc = 0x22C8F8u;
    if (runtime->hasFunction(0x22C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x22C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F020u; }
        if (ctx->pc != 0x21F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022C8F8_0x22c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F020u; }
        if (ctx->pc != 0x21F020u) { return; }
    }
    ctx->pc = 0x21F020u;
    // 0x21f020: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21F020u;
    {
        const bool branch_taken_0x21f020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F020u;
            // 0x21f024: 0x8e04e57c  lw          $a0, -0x1A84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f020) {
            ctx->pc = 0x21F040u;
            goto label_21f040;
        }
    }
    ctx->pc = 0x21F028u;
label_21f028:
    // 0x21f028: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21f028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21f02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21f02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f030: 0x2484e550  addiu       $a0, $a0, -0x1AB0
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
    // 0x21f034: 0xc06efc4  jal         func_1BBF10
    ctx->pc = 0x21F034u;
    SET_GPR_U32(ctx, 31, 0x21F03Cu);
    ctx->pc = 0x21F038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F034u;
            // 0x21f038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF10u;
    if (runtime->hasFunction(0x1BBF10u)) {
        auto targetFn = runtime->lookupFunction(0x1BBF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F03Cu; }
        if (ctx->pc != 0x21F03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBF10_0x1bbf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F03Cu; }
        if (ctx->pc != 0x21F03Cu) { return; }
    }
    ctx->pc = 0x21F03Cu;
    // 0x21f03c: 0x8e04e57c  lw          $a0, -0x1A84($s0)
    ctx->pc = 0x21f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960508)));
label_21f040:
    // 0x21f040: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21f044: 0x8c45e588  lw          $a1, -0x1A78($v0)
    ctx->pc = 0x21f044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960520)));
    // 0x21f048: 0xc087c18  jal         func_21F060
    ctx->pc = 0x21F048u;
    SET_GPR_U32(ctx, 31, 0x21F050u);
    ctx->pc = 0x21F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F048u;
            // 0x21f04c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F060u;
    if (runtime->hasFunction(0x21F060u)) {
        auto targetFn = runtime->lookupFunction(0x21F060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F050u; }
        if (ctx->pc != 0x21F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F060_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F050u; }
        if (ctx->pc != 0x21F050u) { return; }
    }
    ctx->pc = 0x21F050u;
    // 0x21f050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21f050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21f054:
    // 0x21f054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f058: 0x3e00008  jr          $ra
    ctx->pc = 0x21F058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F058u;
            // 0x21f05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EFECu: goto label_21efec;
            case 0x21F028u: goto label_21f028;
            case 0x21F040u: goto label_21f040;
            case 0x21F054u: goto label_21f054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F060u;
}
