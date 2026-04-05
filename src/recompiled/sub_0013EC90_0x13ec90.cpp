#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EC90
// Address: 0x13ec90 - 0x13eff0
void sub_0013EC90_0x13ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EC90_0x13ec90");
#endif

    ctx->pc = 0x13ec90u;

    // 0x13ec90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ec94: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x13ec94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x13ec98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ec9c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x13ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x13eca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13eca4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13eca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ecac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ecacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecb0: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x13ecb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x13ecb4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x13ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x13ecb8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x13ecb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ecbc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13ecc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x13ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x13ecc4: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x13ecc8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x13ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x13eccc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13ecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13ecd0: 0xa6270004  sh          $a3, 0x4($s1)
    ctx->pc = 0x13ecd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x13ecd4: 0xa6280000  sh          $t0, 0x0($s1)
    ctx->pc = 0x13ecd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x13ecd8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x13ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x13ecdc: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x13ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x13ece0: 0xc08e222  jal         func_238888
    ctx->pc = 0x13ECE0u;
    SET_GPR_U32(ctx, 31, 0x13ECE8u);
    ctx->pc = 0x13ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECE0u;
            // 0x13ece4: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ECE8u; }
        if (ctx->pc != 0x13ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ECE8u; }
        if (ctx->pc != 0x13ECE8u) { return; }
    }
    ctx->pc = 0x13ECE8u;
    // 0x13ece8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13ecec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ececu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecf4: 0xc08e222  jal         func_238888
    ctx->pc = 0x13ECF4u;
    SET_GPR_U32(ctx, 31, 0x13ECFCu);
    ctx->pc = 0x13ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECF4u;
            // 0x13ecf8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ECFCu; }
        if (ctx->pc != 0x13ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ECFCu; }
        if (ctx->pc != 0x13ECFCu) { return; }
    }
    ctx->pc = 0x13ECFCu;
    // 0x13ecfc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13ed00: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x13ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x13ed04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13ed08: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x13ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x13ed0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13ed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13ed10: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x13ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x13ed14: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x13ed18: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x13ed1c: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x13ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x13ed20: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x13ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x13ed24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13ed28: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x13ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x13ed2c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x13ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x13ed30: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x13ED30u;
    SET_GPR_U32(ctx, 31, 0x13ED38u);
    ctx->pc = 0x13ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED30u;
            // 0x13ed34: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED38u; }
        if (ctx->pc != 0x13ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED38u; }
        if (ctx->pc != 0x13ED38u) { return; }
    }
    ctx->pc = 0x13ED38u;
    // 0x13ed38: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x13ed38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ed3c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13ed40: 0x2442bb08  addiu       $v0, $v0, -0x44F8
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949640));
    // 0x13ed44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13ed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13ed48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ed4c: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x13ed4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x13ed50: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x13ed50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x13ed54: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x13ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    // 0x13ed58: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x13ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x13ed5c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x13ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x13ed60: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13ed64: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x13ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x13ed68: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13ed6c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x13ed6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13ed70: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x13ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x13ed74: 0x40f809  jalr        $v0
    ctx->pc = 0x13ED74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13ED7Cu);
        ctx->pc = 0x13ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED74u;
            // 0x13ed78: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13ED7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13ED7Cu; }
            if (ctx->pc != 0x13ED7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13ED7Cu;
    // 0x13ed7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed80: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13ed80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed84: 0x0  nop
    ctx->pc = 0x13ed84u;
    // NOP
label_13ed88:
    // 0x13ed88: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x13ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x13ed8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13ED8Cu;
    {
        const bool branch_taken_0x13ed8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed8c) {
            ctx->pc = 0x13ED90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED8Cu;
            // 0x13ed90: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13ED9Cu;
            goto label_13ed9c;
        }
    }
    ctx->pc = 0x13ED94u;
    // 0x13ed94: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x13ED94u;
    {
        const bool branch_taken_0x13ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED94u;
            // 0x13ed98: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed94) {
            ctx->pc = 0x13ED88u;
            runtime->cooperativeGuestYield();
            goto label_13ed88;
        }
    }
    ctx->pc = 0x13ED9Cu;
label_13ed9c:
    // 0x13ed9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13eda0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13eda4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x13eda8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EDA8u;
    {
        const bool branch_taken_0x13eda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eda8) {
            ctx->pc = 0x13EDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDA8u;
            // 0x13edac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EDD0u;
            goto label_13edd0;
        }
    }
    ctx->pc = 0x13EDB0u;
    // 0x13edb0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13edb4: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x13edb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x13edb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13edb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edbc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x13edbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13edc0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x13EDC0u;
    SET_GPR_U32(ctx, 31, 0x13EDC8u);
    ctx->pc = 0x13EDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDC0u;
            // 0x13edc4: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDC8u; }
        if (ctx->pc != 0x13EDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDC8u; }
        if (ctx->pc != 0x13EDC8u) { return; }
    }
    ctx->pc = 0x13EDC8u;
    // 0x13edc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EDC8u;
    {
        const bool branch_taken_0x13edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDC8u;
            // 0x13edcc: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edc8) {
            ctx->pc = 0x13EDD8u;
            goto label_13edd8;
        }
    }
    ctx->pc = 0x13EDD0u;
label_13edd0:
    // 0x13edd0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13edd4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x13edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_13edd8:
    // 0x13edd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13edd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eddc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13eddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ede0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ede0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ede4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDE8u;
            // 0x13edec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EDF0u;
    // 0x13edf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13edf4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13edf8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13edfc: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x13ee00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13ee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13ee04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ee08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ee08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ee10: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x13ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x13ee14: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x13ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x13ee18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13ee18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee1c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x13ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x13ee20: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x13ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x13ee24: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13EE24u;
    {
        const bool branch_taken_0x13ee24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x13EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE24u;
            // 0x13ee28: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee24) {
            ctx->pc = 0x13EE54u;
            goto label_13ee54;
        }
    }
    ctx->pc = 0x13EE2Cu;
    // 0x13ee2c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x13ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13ee30:
    // 0x13ee30: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13ee34: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x13ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x13ee38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ee3c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x13EE3Cu;
    SET_GPR_U32(ctx, 31, 0x13EE44u);
    ctx->pc = 0x13EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE3Cu;
            // 0x13ee40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE44u; }
        if (ctx->pc != 0x13EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE44u; }
        if (ctx->pc != 0x13EE44u) { return; }
    }
    ctx->pc = 0x13EE44u;
    // 0x13ee44: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x13ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13ee48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee4c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13EE4Cu;
    {
        const bool branch_taken_0x13ee4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13EE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE4Cu;
            // 0x13ee50: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee4c) {
            ctx->pc = 0x13EE30u;
            runtime->cooperativeGuestYield();
            goto label_13ee30;
        }
    }
    ctx->pc = 0x13EE54u;
label_13ee54:
    // 0x13ee54: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13ee58: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x13ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x13ee5c: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x13ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x13ee60: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x13ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x13ee64: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x13ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x13ee68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee6c: 0xc08e218  jal         func_238860
    ctx->pc = 0x13EE6Cu;
    SET_GPR_U32(ctx, 31, 0x13EE74u);
    ctx->pc = 0x13EE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE6Cu;
            // 0x13ee70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE74u; }
        if (ctx->pc != 0x13EE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE74u; }
        if (ctx->pc != 0x13EE74u) { return; }
    }
    ctx->pc = 0x13EE74u;
    // 0x13ee74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13ee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ee78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13ee78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ee7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ee84: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE84u;
            // 0x13ee88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EE8Cu;
    // 0x13ee8c: 0x0  nop
    ctx->pc = 0x13ee8cu;
    // NOP
    // 0x13ee90: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x13ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x13ee94: 0x0  nop
    ctx->pc = 0x13ee94u;
    // NOP
    // 0x13ee98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ee98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ee9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13eea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13eea4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13eea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eeac: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13EEACu;
    SET_GPR_U32(ctx, 31, 0x13EEB4u);
    ctx->pc = 0x13EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEACu;
            // 0x13eeb0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEB4u; }
        if (ctx->pc != 0x13EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEB4u; }
        if (ctx->pc != 0x13EEB4u) { return; }
    }
    ctx->pc = 0x13EEB4u;
    // 0x13eeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eeb8: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x13eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x13eebc: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x13EEBCu;
    SET_GPR_U32(ctx, 31, 0x13EEC4u);
    ctx->pc = 0x13EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEBCu;
            // 0x13eec0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEC4u; }
        if (ctx->pc != 0x13EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEC4u; }
        if (ctx->pc != 0x13EEC4u) { return; }
    }
    ctx->pc = 0x13EEC4u;
    // 0x13eec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13eec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eec8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13eec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eecc: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x13EECCu;
    SET_GPR_U32(ctx, 31, 0x13EED4u);
    ctx->pc = 0x13EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EECCu;
            // 0x13eed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EED4u; }
        if (ctx->pc != 0x13EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EED4u; }
        if (ctx->pc != 0x13EED4u) { return; }
    }
    ctx->pc = 0x13EED4u;
    // 0x13eed4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13eed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13eed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13eedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eee0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEE0u;
            // 0x13eee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EEE8u;
    // 0x13eee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eeec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13eef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eef4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13eef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eef8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x13EEF8u;
    SET_GPR_U32(ctx, 31, 0x13EF00u);
    ctx->pc = 0x13EEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEF8u;
            // 0x13eefc: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF00u; }
        if (ctx->pc != 0x13EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF00u; }
        if (ctx->pc != 0x13EF00u) { return; }
    }
    ctx->pc = 0x13EF00u;
    // 0x13ef00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ef00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef04: 0xc04fa96  jal         func_13EA58
    ctx->pc = 0x13EF04u;
    SET_GPR_U32(ctx, 31, 0x13EF0Cu);
    ctx->pc = 0x13EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF04u;
            // 0x13ef08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EA58u;
    if (runtime->hasFunction(0x13EA58u)) {
        auto targetFn = runtime->lookupFunction(0x13EA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF0Cu; }
        if (ctx->pc != 0x13EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EA58_0x13ea58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF0Cu; }
        if (ctx->pc != 0x13EF0Cu) { return; }
    }
    ctx->pc = 0x13EF0Cu;
    // 0x13ef0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13ef0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ef10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef14: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF14u;
            // 0x13ef18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EF1Cu;
    // 0x13ef1c: 0x0  nop
    ctx->pc = 0x13ef1cu;
    // NOP
    // 0x13ef20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ef24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13ef28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ef2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ef2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ef30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ef38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef3c: 0xc04fad2  jal         func_13EB48
    ctx->pc = 0x13EF3Cu;
    SET_GPR_U32(ctx, 31, 0x13EF44u);
    ctx->pc = 0x13EF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF3Cu;
            // 0x13ef40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EB48u;
    if (runtime->hasFunction(0x13EB48u)) {
        auto targetFn = runtime->lookupFunction(0x13EB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF44u; }
        if (ctx->pc != 0x13EF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EB48_0x13eb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF44u; }
        if (ctx->pc != 0x13EF44u) { return; }
    }
    ctx->pc = 0x13EF44u;
    // 0x13ef44: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13ef48: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x13EF48u;
    SET_GPR_U32(ctx, 31, 0x13EF50u);
    ctx->pc = 0x13EF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF48u;
            // 0x13ef4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF50u; }
        if (ctx->pc != 0x13EF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF50u; }
        if (ctx->pc != 0x13EF50u) { return; }
    }
    ctx->pc = 0x13EF50u;
    // 0x13ef50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ef50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ef54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ef54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ef58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef5c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF5Cu;
            // 0x13ef60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EF64u;
    // 0x13ef64: 0x0  nop
    ctx->pc = 0x13ef64u;
    // NOP
    // 0x13ef68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ef6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13ef70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13ef74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ef74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ef7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13ef80: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x13ef84: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x13EF84u;
    {
        const bool branch_taken_0x13ef84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ef84) {
            ctx->pc = 0x13EF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF84u;
            // 0x13ef88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EFDCu;
            goto label_13efdc;
        }
    }
    ctx->pc = 0x13EF8Cu;
    // 0x13ef8c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_13ef90:
    // 0x13ef90: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x13ef90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ef94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ef94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef98: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x13ef98u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x13ef9c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x13ef9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13efa0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x13efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13efa4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13EFA4u;
    {
        const bool branch_taken_0x13efa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFA4u;
            // 0x13efa8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efa4) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EFACu;
    // 0x13efac: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x13efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13efb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EFB0u;
    {
        const bool branch_taken_0x13efb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13efb0) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EFB8u;
    // 0x13efb8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x13efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x13efbc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x13efc0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x13efc4: 0x40f809  jalr        $v0
    ctx->pc = 0x13EFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EFCCu);
        ctx->pc = 0x13EFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFC4u;
            // 0x13efc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13EFCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EFCCu; }
            if (ctx->pc != 0x13EFCCu) { return; }
        }
        }
    }
    ctx->pc = 0x13EFCCu;
    // 0x13efcc: 0x0  nop
    ctx->pc = 0x13efccu;
    // NOP
label_13efd0:
    // 0x13efd0: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13EFD0u;
    {
        const bool branch_taken_0x13efd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFD0u;
            // 0x13efd4: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efd0) {
            ctx->pc = 0x13EF90u;
            runtime->cooperativeGuestYield();
            goto label_13ef90;
        }
    }
    ctx->pc = 0x13EFD8u;
    // 0x13efd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13efd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13efdc:
    // 0x13efdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13efdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13efe0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13efe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13efe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13efe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13efe8: 0x3e00008  jr          $ra
    ctx->pc = 0x13EFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFE8u;
            // 0x13efec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFDCu: goto label_13efdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EFF0u;
}
