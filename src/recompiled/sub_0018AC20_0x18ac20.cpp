#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018AC20
// Address: 0x18ac20 - 0x18ae60
void sub_0018AC20_0x18ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AC20_0x18ac20");
#endif

    ctx->pc = 0x18ac20u;

    // 0x18ac20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18ac24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18ac28: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18ac2c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18ac30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18ac34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ac38: 0x8e034f20  lw          $v1, 0x4F20($s0)
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18ac3c: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x18ac40: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x18AC40u;
    {
        const bool branch_taken_0x18ac40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC40u;
            // 0x18ac44: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac40) {
            ctx->pc = 0x18ACDCu;
            goto label_18acdc;
        }
    }
    ctx->pc = 0x18AC48u;
    // 0x18ac48: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x18ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x18ac4c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18AC4Cu;
    {
        const bool branch_taken_0x18ac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC4Cu;
            // 0x18ac50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac4c) {
            ctx->pc = 0x18AC98u;
            goto label_18ac98;
        }
    }
    ctx->pc = 0x18AC54u;
    // 0x18ac54: 0x8e034f20  lw          $v1, 0x4F20($s0)
    ctx->pc = 0x18ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18ac58: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x18ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x18ac5c: 0x0  nop
    ctx->pc = 0x18ac5cu;
    // NOP
label_18ac60:
    // 0x18ac60: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x18ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x18ac64: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x18ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x18ac68: 0x40f809  jalr        $v0
    ctx->pc = 0x18AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AC70u);
        ctx->pc = 0x18AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC68u;
            // 0x18ac6c: 0x8c660068  lw          $a2, 0x68($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18AC70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AC60u: goto label_18ac60;
            case 0x18AC94u: goto label_18ac94;
            case 0x18AC98u: goto label_18ac98;
            case 0x18ACDCu: goto label_18acdc;
            case 0x18ACF8u: goto label_18acf8;
            case 0x18AD08u: goto label_18ad08;
            case 0x18AD18u: goto label_18ad18;
            case 0x18AD20u: goto label_18ad20;
            case 0x18AD24u: goto label_18ad24;
            case 0x18AD58u: goto label_18ad58;
            case 0x18AD68u: goto label_18ad68;
            case 0x18AD6Cu: goto label_18ad6c;
            case 0x18ADD8u: goto label_18add8;
            case 0x18ADFCu: goto label_18adfc;
            case 0x18AE08u: goto label_18ae08;
            case 0x18AE38u: goto label_18ae38;
            case 0x18AE48u: goto label_18ae48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18AC70u; }
            if (ctx->pc != 0x18AC70u) { return; }
        }
        }
    }
    ctx->pc = 0x18AC70u;
    // 0x18ac70: 0x8e044f20  lw          $a0, 0x4F20($s0)
    ctx->pc = 0x18ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18ac74: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18AC74u;
    {
        const bool branch_taken_0x18ac74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC74u;
            // 0x18ac78: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac74) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC7Cu;
    // 0x18ac7c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AC7Cu;
    {
        const bool branch_taken_0x18ac7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ac7c) {
            ctx->pc = 0x18AC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC7Cu;
            // 0x18ac80: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AC94u;
            goto label_18ac94;
        }
    }
    ctx->pc = 0x18AC84u;
    // 0x18ac84: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x18AC84u;
    {
        const bool branch_taken_0x18ac84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC84u;
            // 0x18ac88: 0x8e034f20  lw          $v1, 0x4F20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac84) {
            ctx->pc = 0x18AD18u;
            goto label_18ad18;
        }
    }
    ctx->pc = 0x18AC8Cu;
    // 0x18ac8c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x18AC8Cu;
    {
        const bool branch_taken_0x18ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC8Cu;
            // 0x18ac90: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac8c) {
            ctx->pc = 0x18AC60u;
            runtime->cooperativeGuestYield();
            goto label_18ac60;
        }
    }
    ctx->pc = 0x18AC94u;
label_18ac94:
    // 0x18ac94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18ac94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18ac98:
    // 0x18ac98: 0x8e024f20  lw          $v0, 0x4F20($s0)
    ctx->pc = 0x18ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18ac9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18ac9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18aca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18aca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x18aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x18acac: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x18acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x18acb0: 0xc0629e2  jal         func_18A788
    ctx->pc = 0x18ACB0u;
    SET_GPR_U32(ctx, 31, 0x18ACB8u);
    ctx->pc = 0x18ACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACB0u;
            // 0x18acb4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A788u;
    if (runtime->hasFunction(0x18A788u)) {
        auto targetFn = runtime->lookupFunction(0x18A788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACB8u; }
        if (ctx->pc != 0x18ACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A788_0x18a788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACB8u; }
        if (ctx->pc != 0x18ACB8u) { return; }
    }
    ctx->pc = 0x18ACB8u;
    // 0x18acb8: 0x8e054f20  lw          $a1, 0x4F20($s0)
    ctx->pc = 0x18acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18acbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18acbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acc0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x18acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18acc4: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18acc8: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x18acc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x18accc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18acccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18acd0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18acd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acd4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x18ACD4u;
    {
        const bool branch_taken_0x18acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACD4u;
            // 0x18acd8: 0xaca3004c  sw          $v1, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acd4) {
            ctx->pc = 0x18AE48u;
            goto label_18ae48;
        }
    }
    ctx->pc = 0x18ACDCu;
label_18acdc:
    // 0x18acdc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x18acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x18ace0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x18ACE0u;
    {
        const bool branch_taken_0x18ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ace0) {
            ctx->pc = 0x18ACE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACE0u;
            // 0x18ace4: 0x8e034f20  lw          $v1, 0x4F20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AD20u;
            goto label_18ad20;
        }
    }
    ctx->pc = 0x18ACE8u;
    // 0x18ace8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x18acec: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x18acecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x18acf0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18ACF0u;
    {
        const bool branch_taken_0x18acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACF0u;
            // 0x18acf4: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acf0) {
            ctx->pc = 0x18AD58u;
            goto label_18ad58;
        }
    }
    ctx->pc = 0x18ACF8u;
label_18acf8:
    // 0x18acf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18acfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18acfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad00: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x18AD00u;
    {
        const bool branch_taken_0x18ad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD00u;
            // 0x18ad04: 0xac830154  sw          $v1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad00) {
            ctx->pc = 0x18AE48u;
            goto label_18ae48;
        }
    }
    ctx->pc = 0x18AD08u;
label_18ad08:
    // 0x18ad08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ad0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ad0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad10: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x18AD10u;
    {
        const bool branch_taken_0x18ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD10u;
            // 0x18ad14: 0xaca30154  sw          $v1, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad10) {
            ctx->pc = 0x18AE48u;
            goto label_18ae48;
        }
    }
    ctx->pc = 0x18AD18u;
label_18ad18:
    // 0x18ad18: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x18AD18u;
    {
        const bool branch_taken_0x18ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD18u;
            // 0x18ad1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad18) {
            ctx->pc = 0x18AE48u;
            goto label_18ae48;
        }
    }
    ctx->pc = 0x18AD20u;
label_18ad20:
    // 0x18ad20: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_18ad24:
    // 0x18ad24: 0x8c660068  lw          $a2, 0x68($v1)
    ctx->pc = 0x18ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x18ad28: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x18ad2c: 0x40f809  jalr        $v0
    ctx->pc = 0x18AD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18AD34u);
        ctx->pc = 0x18AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD2Cu;
            // 0x18ad30: 0x8c640048  lw          $a0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18AD34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AC60u: goto label_18ac60;
            case 0x18AC94u: goto label_18ac94;
            case 0x18AC98u: goto label_18ac98;
            case 0x18ACDCu: goto label_18acdc;
            case 0x18ACF8u: goto label_18acf8;
            case 0x18AD08u: goto label_18ad08;
            case 0x18AD18u: goto label_18ad18;
            case 0x18AD20u: goto label_18ad20;
            case 0x18AD24u: goto label_18ad24;
            case 0x18AD58u: goto label_18ad58;
            case 0x18AD68u: goto label_18ad68;
            case 0x18AD6Cu: goto label_18ad6c;
            case 0x18ADD8u: goto label_18add8;
            case 0x18ADFCu: goto label_18adfc;
            case 0x18AE08u: goto label_18ae08;
            case 0x18AE38u: goto label_18ae38;
            case 0x18AE48u: goto label_18ae48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18AD34u; }
            if (ctx->pc != 0x18AD34u) { return; }
        }
        }
    }
    ctx->pc = 0x18AD34u;
    // 0x18ad34: 0x8e054f20  lw          $a1, 0x4F20($s0)
    ctx->pc = 0x18ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18ad38: 0x440fff3  bltz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18AD38u;
    {
        const bool branch_taken_0x18ad38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD38u;
            // 0x18ad3c: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad38) {
            ctx->pc = 0x18AD08u;
            runtime->cooperativeGuestYield();
            goto label_18ad08;
        }
    }
    ctx->pc = 0x18AD40u;
    // 0x18ad40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AD40u;
    {
        const bool branch_taken_0x18ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ad40) {
            ctx->pc = 0x18AD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD40u;
            // 0x18ad44: 0x8cb20048  lw          $s2, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18AD58u;
            goto label_18ad58;
        }
    }
    ctx->pc = 0x18AD48u;
    // 0x18ad48: 0x1220fff3  beqz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18AD48u;
    {
        const bool branch_taken_0x18ad48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD48u;
            // 0x18ad4c: 0x8e034f20  lw          $v1, 0x4F20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad48) {
            ctx->pc = 0x18AD18u;
            runtime->cooperativeGuestYield();
            goto label_18ad18;
        }
    }
    ctx->pc = 0x18AD50u;
    // 0x18ad50: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x18AD50u;
    {
        const bool branch_taken_0x18ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD50u;
            // 0x18ad54: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad50) {
            ctx->pc = 0x18AD24u;
            runtime->cooperativeGuestYield();
            goto label_18ad24;
        }
    }
    ctx->pc = 0x18AD58u;
label_18ad58:
    // 0x18ad58: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18ad5c: 0x8c424f20  lw          $v0, 0x4F20($v0)
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20256)));
    // 0x18ad60: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x18ad60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x18ad64: 0x0  nop
    ctx->pc = 0x18ad64u;
    // NOP
label_18ad68:
    // 0x18ad68: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18ad68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_18ad6c:
    // 0x18ad6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18ad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad70: 0x8e044f20  lw          $a0, 0x4F20($s0)
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
    // 0x18ad74: 0xc09d034  jal         func_2740D0
    ctx->pc = 0x18AD74u;
    SET_GPR_U32(ctx, 31, 0x18AD7Cu);
    ctx->pc = 0x18AD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD74u;
            // 0x18ad78: 0x8c86004c  lw          $a2, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2740D0u;
    if (runtime->hasFunction(0x2740D0u)) {
        auto targetFn = runtime->lookupFunction(0x2740D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD7Cu; }
        if (ctx->pc != 0x18AD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002740D0_0x2740d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD7Cu; }
        if (ctx->pc != 0x18AD7Cu) { return; }
    }
    ctx->pc = 0x18AD7Cu;
    // 0x18ad7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ad7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad80: 0x14c0002d  bnez        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x18AD80u;
    {
        const bool branch_taken_0x18ad80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD80u;
            // 0x18ad84: 0x8e044f20  lw          $a0, 0x4F20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad80) {
            ctx->pc = 0x18AE38u;
            goto label_18ae38;
        }
    }
    ctx->pc = 0x18AD88u;
    // 0x18ad88: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x18AD88u;
    {
        const bool branch_taken_0x18ad88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD88u;
            // 0x18ad8c: 0x8e074f20  lw          $a3, 0x4F20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad88) {
            ctx->pc = 0x18AE38u;
            goto label_18ae38;
        }
    }
    ctx->pc = 0x18AD90u;
    // 0x18ad90: 0x8ce20134  lw          $v0, 0x134($a3)
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 308)));
    // 0x18ad94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x18AD94u;
    {
        const bool branch_taken_0x18ad94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD94u;
            // 0x18ad98: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad94) {
            ctx->pc = 0x18AE38u;
            goto label_18ae38;
        }
    }
    ctx->pc = 0x18AD9Cu;
    // 0x18ad9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ada0: 0x8ca30144  lw          $v1, 0x144($a1)
    ctx->pc = 0x18ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x18ada4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18ADA4u;
    {
        const bool branch_taken_0x18ada4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18ADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADA4u;
            // 0x18ada8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ada4) {
            ctx->pc = 0x18ADD8u;
            goto label_18add8;
        }
    }
    ctx->pc = 0x18ADACu;
    // 0x18adac: 0x8ca40108  lw          $a0, 0x108($a1)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x18adb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18adb4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x18adb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18adb8: 0x248203ff  addiu       $v0, $a0, 0x3FF
    ctx->pc = 0x18adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x18adbc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x18adbcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x18adc0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x18adc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x18adc4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x18adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x18adc8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x18adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18adcc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x18ADCCu;
    {
        const bool branch_taken_0x18adcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADCCu;
            // 0x18add0: 0xaca40108  sw          $a0, 0x108($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adcc) {
            ctx->pc = 0x18AD68u;
            runtime->cooperativeGuestYield();
            goto label_18ad68;
        }
    }
    ctx->pc = 0x18ADD4u;
    // 0x18add4: 0x0  nop
    ctx->pc = 0x18add4u;
    // NOP
label_18add8:
    // 0x18add8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18ADD8u;
    {
        const bool branch_taken_0x18add8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18ADDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADD8u;
            // 0x18addc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18add8) {
            ctx->pc = 0x18AE08u;
            goto label_18ae08;
        }
    }
    ctx->pc = 0x18ADE0u;
    // 0x18ade0: 0x8ca20120  lw          $v0, 0x120($a1)
    ctx->pc = 0x18ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x18ade4: 0x8ca4011c  lw          $a0, 0x11C($a1)
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x18ade8: 0x8ca30108  lw          $v1, 0x108($a1)
    ctx->pc = 0x18ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x18adec: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x18adecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18adf0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18adf0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18adf4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18ADF4u;
    {
        const bool branch_taken_0x18adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18adf4) {
            ctx->pc = 0x18ADF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADF4u;
            // 0x18adf8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18ADFCu;
            goto label_18adfc;
        }
    }
    ctx->pc = 0x18ADFCu;
label_18adfc:
    // 0x18adfc: 0x1810  mfhi        $v1
    ctx->pc = 0x18adfcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18ae00: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x18AE00u;
    {
        const bool branch_taken_0x18ae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE00u;
            // 0x18ae04: 0xaca30108  sw          $v1, 0x108($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae00) {
            ctx->pc = 0x18AD68u;
            runtime->cooperativeGuestYield();
            goto label_18ad68;
        }
    }
    ctx->pc = 0x18AE08u;
label_18ae08:
    // 0x18ae08: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x18AE08u;
    {
        const bool branch_taken_0x18ae08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE08u;
            // 0x18ae0c: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae08) {
            ctx->pc = 0x18AD6Cu;
            runtime->cooperativeGuestYield();
            goto label_18ad6c;
        }
    }
    ctx->pc = 0x18AE10u;
    // 0x18ae10: 0x8ce40108  lw          $a0, 0x108($a3)
    ctx->pc = 0x18ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x18ae14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ae18: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x18ae18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18ae1c: 0x248201ff  addiu       $v0, $a0, 0x1FF
    ctx->pc = 0x18ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 511));
    // 0x18ae20: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x18ae20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x18ae24: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x18ae24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x18ae28: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x18ae2c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18ae30: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x18AE30u;
    {
        const bool branch_taken_0x18ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE30u;
            // 0x18ae34: 0xace40108  sw          $a0, 0x108($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae30) {
            ctx->pc = 0x18AD6Cu;
            runtime->cooperativeGuestYield();
            goto label_18ad6c;
        }
    }
    ctx->pc = 0x18AE38u;
label_18ae38:
    // 0x18ae38: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18ae38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae3c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x18ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x18ae40: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18ae44: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x18ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_18ae48:
    // 0x18ae48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18ae48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ae4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18ae4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ae50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18ae50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ae58: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE58u;
            // 0x18ae5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AC60u: goto label_18ac60;
            case 0x18AC94u: goto label_18ac94;
            case 0x18AC98u: goto label_18ac98;
            case 0x18ACDCu: goto label_18acdc;
            case 0x18ACF8u: goto label_18acf8;
            case 0x18AD08u: goto label_18ad08;
            case 0x18AD18u: goto label_18ad18;
            case 0x18AD20u: goto label_18ad20;
            case 0x18AD24u: goto label_18ad24;
            case 0x18AD58u: goto label_18ad58;
            case 0x18AD68u: goto label_18ad68;
            case 0x18AD6Cu: goto label_18ad6c;
            case 0x18ADD8u: goto label_18add8;
            case 0x18ADFCu: goto label_18adfc;
            case 0x18AE08u: goto label_18ae08;
            case 0x18AE38u: goto label_18ae38;
            case 0x18AE48u: goto label_18ae48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AE60u;
}
