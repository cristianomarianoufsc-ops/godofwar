#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002925D0
// Address: 0x2925d0 - 0x292768
void sub_002925D0_0x2925d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002925D0_0x2925d0");
#endif

    ctx->pc = 0x2925d0u;

    // 0x2925d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2925d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2925d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2925d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2925d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2925d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2925dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2925dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2925e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2925e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2925e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2925e8: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2925E8u;
    {
        const bool branch_taken_0x2925e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2925ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2925E8u;
            // 0x2925ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2925e8) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x2925F0u;
    // 0x2925f0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2925f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2925f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2925F4u;
    {
        const bool branch_taken_0x2925f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2925f4) {
            ctx->pc = 0x2925F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2925F4u;
            // 0x2925f8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292610u;
            goto label_292610;
        }
    }
    ctx->pc = 0x2925FCu;
    // 0x2925fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2925fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x292600: 0x8c434294  lw          $v1, 0x4294($v0)
    ctx->pc = 0x292600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x292604: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x292604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x292608: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x292608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x29260c: 0x0  nop
    ctx->pc = 0x29260cu;
    // NOP
label_292610:
    // 0x292610: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x292610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x292614: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x292614u;
    {
        const bool branch_taken_0x292614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292614) {
            ctx->pc = 0x292618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292614u;
            // 0x292618: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292628u;
            goto label_292628;
        }
    }
    ctx->pc = 0x29261Cu;
    // 0x29261c: 0xc0a48fe  jal         func_2923F8
    ctx->pc = 0x29261Cu;
    SET_GPR_U32(ctx, 31, 0x292624u);
    ctx->pc = 0x2923F8u;
    if (runtime->hasFunction(0x2923F8u)) {
        auto targetFn = runtime->lookupFunction(0x2923F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292624u; }
        if (ctx->pc != 0x292624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2923f8_0x292488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292624u; }
        if (ctx->pc != 0x292624u) { return; }
    }
    ctx->pc = 0x292624u;
    // 0x292624: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x292624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_292628:
    // 0x292628: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x292628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x29262c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x29262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x292630: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x292630u;
    {
        const bool branch_taken_0x292630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292630u;
            // 0x292634: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292630) {
            ctx->pc = 0x29267Cu;
            goto label_29267c;
        }
    }
    ctx->pc = 0x292638u;
    // 0x292638: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x292638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x29263c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29263Cu;
    {
        const bool branch_taken_0x29263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29263Cu;
            // 0x292640: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29263c) {
            ctx->pc = 0x2926B0u;
            goto label_2926b0;
        }
    }
    ctx->pc = 0x292644u;
    // 0x292644: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x292644u;
    {
        const bool branch_taken_0x292644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292644) {
            ctx->pc = 0x292648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292644u;
            // 0x292648: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292674u;
            goto label_292674;
        }
    }
    ctx->pc = 0x29264Cu;
    // 0x29264c: 0xc0a48a0  jal         func_292280
    ctx->pc = 0x29264Cu;
    SET_GPR_U32(ctx, 31, 0x292654u);
    ctx->pc = 0x292650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29264Cu;
            // 0x292650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292280u;
    if (runtime->hasFunction(0x292280u)) {
        auto targetFn = runtime->lookupFunction(0x292280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292654u; }
        if (ctx->pc != 0x292654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292280_0x292280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292654u; }
        if (ctx->pc != 0x292654u) { return; }
    }
    ctx->pc = 0x292654u;
    // 0x292654: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x292654u;
    {
        const bool branch_taken_0x292654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292654u;
            // 0x292658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292654) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x29265Cu;
    // 0x29265c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x29265cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x292660: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x292660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x292664: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x292664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x292668: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x292668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x29266c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x29266cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x292670: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x292670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_292674:
    // 0x292674: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x292674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x292678: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x292678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_29267c:
    // 0x29267c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x292680: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x292680u;
    {
        const bool branch_taken_0x292680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292680u;
            // 0x292684: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292680) {
            ctx->pc = 0x2926D8u;
            goto label_2926d8;
        }
    }
    ctx->pc = 0x292688u;
    // 0x292688: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x292688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29268c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x29268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x292690: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x292690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x292694: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x292694u;
    {
        const bool branch_taken_0x292694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292694) {
            ctx->pc = 0x292698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292694u;
            // 0x292698: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2926B8u;
            goto label_2926b8;
        }
    }
    ctx->pc = 0x29269Cu;
    // 0x29269c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x29269cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2926a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2926a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2926a4: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x2926a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x2926a8: 0xc0a507a  jal         func_2941E8
    ctx->pc = 0x2926A8u;
    SET_GPR_U32(ctx, 31, 0x2926B0u);
    ctx->pc = 0x2926ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2926A8u;
            // 0x2926ac: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2941E8u;
    if (runtime->hasFunction(0x2941E8u)) {
        auto targetFn = runtime->lookupFunction(0x2941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2926B0u; }
        if (ctx->pc != 0x2926B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002941E8_0x2941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2926B0u; }
        if (ctx->pc != 0x2926B0u) { return; }
    }
    ctx->pc = 0x2926B0u;
label_2926b0:
    // 0x2926b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2926B0u;
    {
        const bool branch_taken_0x2926b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2926B0u;
            // 0x2926b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926b0) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x2926B8u;
label_2926b8:
    // 0x2926b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2926b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2926bc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2926bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2926c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2926c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2926c4: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x2926c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x2926c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2926c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2926cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2926ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2926d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2926D0u;
    {
        const bool branch_taken_0x2926d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2926D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2926D0u;
            // 0x2926d4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2926d0) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x2926D8u;
label_2926d8:
    // 0x2926d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2926dc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2926DCu;
    {
        const bool branch_taken_0x2926dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2926dc) {
            ctx->pc = 0x2926E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2926DCu;
            // 0x2926e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29271Cu;
            goto label_29271c;
        }
    }
    ctx->pc = 0x2926E4u;
    // 0x2926e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2926e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2926e8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2926e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2926ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2926ECu;
    {
        const bool branch_taken_0x2926ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2926ec) {
            ctx->pc = 0x2926F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2926ECu;
            // 0x2926f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29271Cu;
            goto label_29271c;
        }
    }
    ctx->pc = 0x2926F4u;
    // 0x2926f4: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x2926f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x2926f8: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2926F8u;
    {
        const bool branch_taken_0x2926f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2926f8) {
            ctx->pc = 0x2926FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2926F8u;
            // 0x2926fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29271Cu;
            goto label_29271c;
        }
    }
    ctx->pc = 0x292700u;
    // 0x292700: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292704: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x292704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x292708: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x292708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29270c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x292710: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x292710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292714: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x292714u;
    {
        const bool branch_taken_0x292714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292714u;
            // 0x292718: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292714) {
            ctx->pc = 0x292750u;
            goto label_292750;
        }
    }
    ctx->pc = 0x29271Cu;
label_29271c:
    // 0x29271c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292720: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x292720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292724: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x292724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x292728: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29272c: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x29272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x292730: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x292730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x292734: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x292734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x292738: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x292738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29273c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x29273cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x292740: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x292740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x292744: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x292744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x292748: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x292748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x29274c: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x29274cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_292750:
    // 0x292750: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29275c: 0x3e00008  jr          $ra
    ctx->pc = 0x29275Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29275Cu;
            // 0x292760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292610u: goto label_292610;
            case 0x292628u: goto label_292628;
            case 0x292674u: goto label_292674;
            case 0x29267Cu: goto label_29267c;
            case 0x2926B0u: goto label_2926b0;
            case 0x2926B8u: goto label_2926b8;
            case 0x2926D8u: goto label_2926d8;
            case 0x29271Cu: goto label_29271c;
            case 0x292750u: goto label_292750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292764u;
    // 0x292764: 0x0  nop
    ctx->pc = 0x292764u;
    // NOP
}
