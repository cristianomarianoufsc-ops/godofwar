#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288FC8
// Address: 0x288fc8 - 0x289180
void sub_00288FC8_0x288fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288FC8_0x288fc8");
#endif

    ctx->pc = 0x288fc8u;

    // 0x288fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288fd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x288fd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x288fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x288fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288fdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x288fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fe0: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x288fe0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x288fe4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x288fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288fe8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x288fe8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x288fec: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x288fecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x288ff0: 0xd11024  and         $v0, $a2, $s1
    ctx->pc = 0x288ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x288ff4: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x288ff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x288ff8: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x288FF8u;
    {
        const bool branch_taken_0x288ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x288FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FF8u;
            // 0x288ffc: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ff8) {
            ctx->pc = 0x28905Cu;
            goto label_28905c;
        }
    }
    ctx->pc = 0x289000u;
    // 0x289000: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x289000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x289004: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x289004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x289008: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x289008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x28900c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x28900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x289010: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x289010u;
    {
        const bool branch_taken_0x289010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289010u;
            // 0x289014: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289010) {
            ctx->pc = 0x289168u;
            goto label_289168;
        }
    }
    ctx->pc = 0x289018u;
    // 0x289018: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x289018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x28901c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x28901cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x289020: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x289020u;
    SET_GPR_U32(ctx, 31, 0x289028u);
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289028u; }
        if (ctx->pc != 0x289028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289028u; }
        if (ctx->pc != 0x289028u) { return; }
    }
    ctx->pc = 0x289028u;
    // 0x289028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28902c: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x28902cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x289030: 0xd11824  and         $v1, $a2, $s1
    ctx->pc = 0x289030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x289034: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x289034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x289038: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x289038u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x28903c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x28903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x289040: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x289040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x289044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289044u;
    {
        const bool branch_taken_0x289044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289044u;
            // 0x289048: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289044) {
            ctx->pc = 0x289058u;
            goto label_289058;
        }
    }
    ctx->pc = 0x28904Cu;
    // 0x28904c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x289050: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x289050u;
    {
        const bool branch_taken_0x289050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289050u;
            // 0x289054: 0xdc455a08  ld          $a1, 0x5A08($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 23048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289050) {
            ctx->pc = 0x289160u;
            goto label_289160;
        }
    }
    ctx->pc = 0x289058u;
label_289058:
    // 0x289058: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x289058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_28905c:
    // 0x28905c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28905Cu;
    {
        const bool branch_taken_0x28905c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28905Cu;
            // 0x289060: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28905c) {
            ctx->pc = 0x289074u;
            goto label_289074;
        }
    }
    ctx->pc = 0x289064u;
    // 0x289064: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x289064u;
    SET_GPR_U32(ctx, 31, 0x28906Cu);
    ctx->pc = 0x289068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289064u;
            // 0x289068: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28906Cu; }
        if (ctx->pc != 0x28906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28906Cu; }
        if (ctx->pc != 0x28906Cu) { return; }
    }
    ctx->pc = 0x28906Cu;
    // 0x28906c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x28906Cu;
    {
        const bool branch_taken_0x28906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28906Cu;
            // 0x289070: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28906c) {
            ctx->pc = 0x28916Cu;
            goto label_28916c;
        }
    }
    ctx->pc = 0x289074u;
label_289074:
    // 0x289074: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x289074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x289078: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289078u;
    {
        const bool branch_taken_0x289078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289078u;
            // 0x28907c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289078) {
            ctx->pc = 0x28909Cu;
            goto label_28909c;
        }
    }
    ctx->pc = 0x289080u;
    // 0x289080: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x289080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289084: 0xdc505a10  ld          $s0, 0x5A10($v0)
    ctx->pc = 0x289084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 23056)));
    // 0x289088: 0xc0a246a  jal         func_2891A8
    ctx->pc = 0x289088u;
    SET_GPR_U32(ctx, 31, 0x289090u);
    ctx->pc = 0x28908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289088u;
            // 0x28908c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2891A8u;
    if (runtime->hasFunction(0x2891A8u)) {
        auto targetFn = runtime->lookupFunction(0x2891A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289090u; }
        if (ctx->pc != 0x289090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891a8_0x2891f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289090u; }
        if (ctx->pc != 0x289090u) { return; }
    }
    ctx->pc = 0x289090u;
    // 0x289090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289094: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x289094u;
    {
        const bool branch_taken_0x289094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289094u;
            // 0x289098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289094) {
            ctx->pc = 0x289160u;
            goto label_289160;
        }
    }
    ctx->pc = 0x28909Cu;
label_28909c:
    // 0x28909c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28909Cu;
    {
        const bool branch_taken_0x28909c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2890A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28909Cu;
            // 0x2890a0: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28909c) {
            ctx->pc = 0x2890D8u;
            goto label_2890d8;
        }
    }
    ctx->pc = 0x2890A4u;
    // 0x2890a4: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x2890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x2890a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2890a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2890ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2890acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890b0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2890b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2890b4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2890b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2890b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2890b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2890bc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2890bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2890c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2890c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2890c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2890c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2890c8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2890c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2890cc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2890CCu;
    {
        const bool branch_taken_0x2890cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890CCu;
            // 0x2890d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890cc) {
            ctx->pc = 0x289168u;
            goto label_289168;
        }
    }
    ctx->pc = 0x2890D4u;
    // 0x2890d4: 0x0  nop
    ctx->pc = 0x2890d4u;
    // NOP
label_2890d8:
    // 0x2890d8: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x2890d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x2890dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2890DCu;
    {
        const bool branch_taken_0x2890dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890DCu;
            // 0x2890e0: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890dc) {
            ctx->pc = 0x28912Cu;
            goto label_28912c;
        }
    }
    ctx->pc = 0x2890E4u;
    // 0x2890e4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2890e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2890e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2890E8u;
    {
        const bool branch_taken_0x2890e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890E8u;
            // 0x2890ec: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890e8) {
            ctx->pc = 0x28910Cu;
            goto label_28910c;
        }
    }
    ctx->pc = 0x2890F0u;
    // 0x2890f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2890f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890f4: 0xdc505a10  ld          $s0, 0x5A10($v0)
    ctx->pc = 0x2890f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 23056)));
    // 0x2890f8: 0xc0a246a  jal         func_2891A8
    ctx->pc = 0x2890F8u;
    SET_GPR_U32(ctx, 31, 0x289100u);
    ctx->pc = 0x2890FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2890F8u;
            // 0x2890fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2891A8u;
    if (runtime->hasFunction(0x2891A8u)) {
        auto targetFn = runtime->lookupFunction(0x2891A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289100u; }
        if (ctx->pc != 0x289100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891a8_0x2891f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289100u; }
        if (ctx->pc != 0x289100u) { return; }
    }
    ctx->pc = 0x289100u;
    // 0x289100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289104: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x289104u;
    {
        const bool branch_taken_0x289104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289104u;
            // 0x289108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289104) {
            ctx->pc = 0x289160u;
            goto label_289160;
        }
    }
    ctx->pc = 0x28910Cu;
label_28910c:
    // 0x28910c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28910cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x289110: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x289110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289114: 0xdc505a08  ld          $s0, 0x5A08($v0)
    ctx->pc = 0x289114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 23048)));
    // 0x289118: 0xc0a246a  jal         func_2891A8
    ctx->pc = 0x289118u;
    SET_GPR_U32(ctx, 31, 0x289120u);
    ctx->pc = 0x28911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289118u;
            // 0x28911c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2891A8u;
    if (runtime->hasFunction(0x2891A8u)) {
        auto targetFn = runtime->lookupFunction(0x2891A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289120u; }
        if (ctx->pc != 0x289120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2891a8_0x2891f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289120u; }
        if (ctx->pc != 0x289120u) { return; }
    }
    ctx->pc = 0x289120u;
    // 0x289120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x289124u;
    {
        const bool branch_taken_0x289124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289124u;
            // 0x289128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289124) {
            ctx->pc = 0x289160u;
            goto label_289160;
        }
    }
    ctx->pc = 0x28912Cu;
label_28912c:
    // 0x28912c: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x28912cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x289130: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x289130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x289134: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x289134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x289138: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x289138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x28913c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x28913cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x289140: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x289140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x289144: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x289144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x289148: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x289148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x28914c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x28914cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x289150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x289150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x289154: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x289154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x289158: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x289158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x28915c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28915cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_289160:
    // 0x289160: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x289160u;
    SET_GPR_U32(ctx, 31, 0x289168u);
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289168u; }
        if (ctx->pc != 0x289168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289168u; }
        if (ctx->pc != 0x289168u) { return; }
    }
    ctx->pc = 0x289168u;
label_289168:
    // 0x289168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28916c:
    // 0x28916c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28916cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289174: 0x3e00008  jr          $ra
    ctx->pc = 0x289174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289174u;
            // 0x289178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289058u: goto label_289058;
            case 0x28905Cu: goto label_28905c;
            case 0x289074u: goto label_289074;
            case 0x28909Cu: goto label_28909c;
            case 0x2890D8u: goto label_2890d8;
            case 0x28910Cu: goto label_28910c;
            case 0x28912Cu: goto label_28912c;
            case 0x289160u: goto label_289160;
            case 0x289168u: goto label_289168;
            case 0x28916Cu: goto label_28916c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28917Cu;
    // 0x28917c: 0x0  nop
    ctx->pc = 0x28917cu;
    // NOP
}
