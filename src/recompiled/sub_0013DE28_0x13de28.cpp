#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DE28
// Address: 0x13de28 - 0x13e090
void sub_0013DE28_0x13de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DE28_0x13de28");
#endif

    ctx->pc = 0x13de28u;

    // 0x13de28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13de2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13de30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13de34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13de34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13de3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13de3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13de44: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x13de44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13de48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DE48u;
    {
        const bool branch_taken_0x13de48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE48u;
            // 0x13de4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de48) {
            ctx->pc = 0x13DE60u;
            goto label_13de60;
        }
    }
    ctx->pc = 0x13DE50u;
    // 0x13de50: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x13de50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x13de54: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x13de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x13de58: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x13DE58u;
    SET_GPR_U32(ctx, 31, 0x13DE60u);
    ctx->pc = 0x13DE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE58u;
            // 0x13de5c: 0x24a516a8  addiu       $a1, $a1, 0x16A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE60u; }
        if (ctx->pc != 0x13DE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE60u; }
        if (ctx->pc != 0x13DE60u) { return; }
    }
    ctx->pc = 0x13DE60u;
label_13de60:
    // 0x13de60: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x13de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x13de64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13de68: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x13de68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x13de6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13de70: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x13de70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13de74: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13de74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13de78: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x13de78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13de7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13de7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de80: 0x10d20026  beq         $a2, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x13DE80u;
    {
        const bool branch_taken_0x13de80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x13DE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE80u;
            // 0x13de84: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de80) {
            ctx->pc = 0x13DF1Cu;
            goto label_13df1c;
        }
    }
    ctx->pc = 0x13DE88u;
    // 0x13de88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13de8c: 0x0  nop
    ctx->pc = 0x13de8cu;
    // NOP
label_13de90:
    // 0x13de90: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x13de94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13de98: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x13de98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13de9c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x13de9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13dea0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x13DEA0u;
    {
        const bool branch_taken_0x13dea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dea0) {
            ctx->pc = 0x13DEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEA0u;
            // 0x13dea4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF14u;
            goto label_13df14;
        }
    }
    ctx->pc = 0x13DEA8u;
    // 0x13dea8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x13dea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13deac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13DEACu;
    {
        const bool branch_taken_0x13deac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEACu;
            // 0x13deb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13deac) {
            ctx->pc = 0x13DEF8u;
            goto label_13def8;
        }
    }
    ctx->pc = 0x13DEB4u;
    // 0x13deb4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13deb8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13debc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13dec0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DEC0u;
    {
        const bool branch_taken_0x13dec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dec0) {
            ctx->pc = 0x13DEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEC0u;
            // 0x13dec4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DEC8u;
            goto label_13dec8;
        }
    }
    ctx->pc = 0x13DEC8u;
label_13dec8:
    // 0x13dec8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13decc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13DECCu;
    {
        const bool branch_taken_0x13decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DECCu;
            // 0x13ded0: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13decc) {
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DED4u;
    // 0x13ded4: 0x0  nop
    ctx->pc = 0x13ded4u;
    // NOP
label_13ded8:
    // 0x13ded8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DED8u;
    {
        const bool branch_taken_0x13ded8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ded8) {
            ctx->pc = 0x13DEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DED8u;
            // 0x13dedc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DEE0u;
            goto label_13dee0;
        }
    }
    ctx->pc = 0x13DEE0u;
label_13dee0:
    // 0x13dee0: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13dee4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13dee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_13dee8:
    // 0x13dee8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13dee8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13deec: 0x1010  mfhi        $v0
    ctx->pc = 0x13deecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13def0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13DEF0u;
    {
        const bool branch_taken_0x13def0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13def0) {
            ctx->pc = 0x13DEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEF0u;
            // 0x13def4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DED8u;
            runtime->cooperativeGuestYield();
            goto label_13ded8;
        }
    }
    ctx->pc = 0x13DEF8u;
label_13def8:
    // 0x13def8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x13def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13defc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x13defcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13df00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF00u;
    {
        const bool branch_taken_0x13df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df00) {
            ctx->pc = 0x13DF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF00u;
            // 0x13df04: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF14u;
            goto label_13df14;
        }
    }
    ctx->pc = 0x13DF08u;
    // 0x13df08: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x13df08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13df0c: 0xc2480b  movn        $t1, $a2, $v0
    ctx->pc = 0x13df0cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x13df10: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x13df10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_13df14:
    // 0x13df14: 0x54d2ffde  bnel        $a2, $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x13DF14u;
    {
        const bool branch_taken_0x13df14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        if (branch_taken_0x13df14) {
            ctx->pc = 0x13DF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF14u;
            // 0x13df18: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DE90u;
            runtime->cooperativeGuestYield();
            goto label_13de90;
        }
    }
    ctx->pc = 0x13DF1Cu;
label_13df1c:
    // 0x13df1c: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DF1Cu;
    {
        const bool branch_taken_0x13df1c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF1Cu;
            // 0x13df20: 0x3c0201ff  lui         $v0, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df1c) {
            ctx->pc = 0x13DF34u;
            goto label_13df34;
        }
    }
    ctx->pc = 0x13DF24u;
    // 0x13df24: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x13df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13df28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13df2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF2Cu;
    {
        const bool branch_taken_0x13df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF2Cu;
            // 0x13df30: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df2c) {
            ctx->pc = 0x13DF38u;
            goto label_13df38;
        }
    }
    ctx->pc = 0x13DF34u;
label_13df34:
    // 0x13df34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13df34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13df38:
    // 0x13df38: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x13df38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13df3c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x13DF3Cu;
    {
        const bool branch_taken_0x13df3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF3Cu;
            // 0x13df40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df3c) {
            ctx->pc = 0x13E068u;
            goto label_13e068;
        }
    }
    ctx->pc = 0x13DF44u;
    // 0x13df44: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x13df44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13df48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF48u;
            // 0x13df4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DF90u;
            goto label_13df90;
        }
    }
    ctx->pc = 0x13DF50u;
    // 0x13df50: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13df54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13df54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13df58: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x13df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x13df5c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DF5Cu;
    {
        const bool branch_taken_0x13df5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df5c) {
            ctx->pc = 0x13DF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF5Cu;
            // 0x13df60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF64u;
            goto label_13df64;
        }
    }
    ctx->pc = 0x13DF64u;
label_13df64:
    // 0x13df64: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x13df64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13df68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13DF68u;
    {
        const bool branch_taken_0x13df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF68u;
            // 0x13df6c: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df68) {
            ctx->pc = 0x13DF80u;
            goto label_13df80;
        }
    }
    ctx->pc = 0x13DF70u;
label_13df70:
    // 0x13df70: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DF70u;
    {
        const bool branch_taken_0x13df70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df70) {
            ctx->pc = 0x13DF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF70u;
            // 0x13df74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF78u;
            goto label_13df78;
        }
    }
    ctx->pc = 0x13DF78u;
label_13df78:
    // 0x13df78: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x13df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13df7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_13df80:
    // 0x13df80: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13df80u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13df84: 0x1010  mfhi        $v0
    ctx->pc = 0x13df84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13df88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13DF88u;
    {
        const bool branch_taken_0x13df88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF88u;
            // 0x13df8c: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df88) {
            ctx->pc = 0x13DF70u;
            runtime->cooperativeGuestYield();
            goto label_13df70;
        }
    }
    ctx->pc = 0x13DF90u;
label_13df90:
    // 0x13df90: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x13df90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13df94: 0x1073023  subu        $a2, $t0, $a3
    ctx->pc = 0x13df94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x13df98: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x13df98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x13df9c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13DF9Cu;
    {
        const bool branch_taken_0x13df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df9c) {
            ctx->pc = 0x13DFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF9Cu;
            // 0x13dfa0: 0x25220004  addiu       $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DFE0u;
            goto label_13dfe0;
        }
    }
    ctx->pc = 0x13DFA4u;
    // 0x13dfa4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x13dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13dfa8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x13dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13dfac: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x13dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x13dfb0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x13dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13dfb4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x13dfb8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x13dfbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x13dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x13dfc0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13dfc4: 0xaca6fffc  sw          $a2, -0x4($a1)
    ctx->pc = 0x13dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 6));
    // 0x13dfc8: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x13dfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x13dfcc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13dfd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13dfd4: 0xac83fffc  sw          $v1, -0x4($a0)
    ctx->pc = 0x13dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 3));
    // 0x13dfd8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13DFD8u;
    {
        const bool branch_taken_0x13dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFD8u;
            // 0x13dfdc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfd8) {
            ctx->pc = 0x13E068u;
            goto label_13e068;
        }
    }
    ctx->pc = 0x13DFE0u;
label_13dfe0:
    // 0x13dfe0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13DFE0u;
    {
        const bool branch_taken_0x13dfe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dfe0) {
            ctx->pc = 0x13DFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFE0u;
            // 0x13dfe4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DFE8u;
            goto label_13dfe8;
        }
    }
    ctx->pc = 0x13DFE8u;
label_13dfe8:
    // 0x13dfe8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13dfe8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13dfec: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x13dfecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dff0: 0x1010  mfhi        $v0
    ctx->pc = 0x13dff0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13dff4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13DFF4u;
    {
        const bool branch_taken_0x13dff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFF4u;
            // 0x13dff8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dff4) {
            ctx->pc = 0x13E020u;
            goto label_13e020;
        }
    }
    ctx->pc = 0x13DFFCu;
    // 0x13dffc: 0x0  nop
    ctx->pc = 0x13dffcu;
    // NOP
label_13e000:
    // 0x13e000: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13e004: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E004u;
    {
        const bool branch_taken_0x13e004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e004) {
            ctx->pc = 0x13E008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E004u;
            // 0x13e008: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E00Cu;
            goto label_13e00c;
        }
    }
    ctx->pc = 0x13E00Cu;
label_13e00c:
    // 0x13e00c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x13e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13e010: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13e010u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13e014: 0x1010  mfhi        $v0
    ctx->pc = 0x13e014u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13e018: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13E018u;
    {
        const bool branch_taken_0x13e018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E018u;
            // 0x13e01c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e018) {
            ctx->pc = 0x13E000u;
            runtime->cooperativeGuestYield();
            goto label_13e000;
        }
    }
    ctx->pc = 0x13E020u;
label_13e020:
    // 0x13e020: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x13e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x13e024: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13e028: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x13e028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x13e02c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x13e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x13e030: 0x72640  sll         $a0, $a3, 25
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 25));
    // 0x13e034: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13e038: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x13e038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x13e03c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x13e03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13e040: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x13e040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x13e044: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x13e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x13e048: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x13e048u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x13e04c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x13e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13e050: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13e050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13e054: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x13e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x13e058: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x13e058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13e05c: 0xac64fffc  sw          $a0, -0x4($v1)
    ctx->pc = 0x13e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
    // 0x13e060: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x13e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x13e064: 0x0  nop
    ctx->pc = 0x13e064u;
    // NOP
label_13e068:
    // 0x13e068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13e068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e06c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e070: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13e070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e078: 0x3e00008  jr          $ra
    ctx->pc = 0x13E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E078u;
            // 0x13e07c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DE60u: goto label_13de60;
            case 0x13DE90u: goto label_13de90;
            case 0x13DEC8u: goto label_13dec8;
            case 0x13DED8u: goto label_13ded8;
            case 0x13DEE0u: goto label_13dee0;
            case 0x13DEE8u: goto label_13dee8;
            case 0x13DEF8u: goto label_13def8;
            case 0x13DF14u: goto label_13df14;
            case 0x13DF1Cu: goto label_13df1c;
            case 0x13DF34u: goto label_13df34;
            case 0x13DF38u: goto label_13df38;
            case 0x13DF64u: goto label_13df64;
            case 0x13DF70u: goto label_13df70;
            case 0x13DF78u: goto label_13df78;
            case 0x13DF80u: goto label_13df80;
            case 0x13DF90u: goto label_13df90;
            case 0x13DFE0u: goto label_13dfe0;
            case 0x13DFE8u: goto label_13dfe8;
            case 0x13E000u: goto label_13e000;
            case 0x13E00Cu: goto label_13e00c;
            case 0x13E020u: goto label_13e020;
            case 0x13E068u: goto label_13e068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E080u;
    // 0x13e080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13e084: 0x0  nop
    ctx->pc = 0x13e084u;
    // NOP
    // 0x13e088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e08c: 0x0  nop
    ctx->pc = 0x13e08cu;
    // NOP
}
