#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216018
// Address: 0x216018 - 0x216428
void sub_00216018_0x216018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216018_0x216018");
#endif

    ctx->pc = 0x216018u;

    // 0x216018: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x216018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21601c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x21601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x216020: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x216020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x216024: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x216024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x216028: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x216028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21602c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21602cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216030: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x216030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x216034: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x216034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216038: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x216038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21603c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21603cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216040: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x216040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x216044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x216048: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x216048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x21604c: 0xc0909c8  jal         func_242720
    ctx->pc = 0x21604Cu;
    SET_GPR_U32(ctx, 31, 0x216054u);
    ctx->pc = 0x216050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21604Cu;
            // 0x216050: 0x8e850018  lw          $a1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242720u;
    if (runtime->hasFunction(0x242720u)) {
        auto targetFn = runtime->lookupFunction(0x242720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216054u; }
        if (ctx->pc != 0x216054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242720_0x242728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216054u; }
        if (ctx->pc != 0x216054u) { return; }
    }
    ctx->pc = 0x216054u;
    // 0x216054: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x216054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x216058: 0x24428998  addiu       $v0, $v0, -0x7668
    ctx->pc = 0x216058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936984));
    // 0x21605c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x21605cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x216060: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x216060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x216064: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x216064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_216068:
    // 0x216068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21606c: 0xc091350  jal         func_244D40
    ctx->pc = 0x21606Cu;
    SET_GPR_U32(ctx, 31, 0x216074u);
    ctx->pc = 0x216070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21606Cu;
            // 0x216070: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244D40u;
    if (runtime->hasFunction(0x244D40u)) {
        auto targetFn = runtime->lookupFunction(0x244D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216074u; }
        if (ctx->pc != 0x216074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244d40_0x244dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216074u; }
        if (ctx->pc != 0x216074u) { return; }
    }
    ctx->pc = 0x216074u;
    // 0x216074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x216074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216078: 0x1642fffb  bne         $s2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216078u;
    {
        const bool branch_taken_0x216078 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x21607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216078u;
            // 0x21607c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216078) {
            ctx->pc = 0x216068u;
            runtime->cooperativeGuestYield();
            goto label_216068;
        }
    }
    ctx->pc = 0x216080u;
    // 0x216080: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x216080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x216084: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x216084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x216088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21608c: 0xae330384  sw          $s3, 0x384($s1)
    ctx->pc = 0x21608cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 900), GPR_U32(ctx, 19));
    // 0x216090: 0xae220380  sw          $v0, 0x380($s1)
    ctx->pc = 0x216090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 2));
    // 0x216094: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x216098: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x216098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x21609c: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x21609cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x2160a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2160a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2160a4: 0x8c42ec9c  lw          $v0, -0x1364($v0)
    ctx->pc = 0x2160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962332)));
    // 0x2160a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2160a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2160ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2160b0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2160b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2160b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2160B4u;
    {
        const bool branch_taken_0x2160b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160B4u;
            // 0x2160b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160b4) {
            ctx->pc = 0x2160FCu;
            goto label_2160fc;
        }
    }
    ctx->pc = 0x2160BCu;
    // 0x2160bc: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2160BCu;
    {
        const bool branch_taken_0x2160bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2160bc) {
            ctx->pc = 0x2160C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2160BCu;
            // 0x2160c0: 0x96820046  lhu         $v0, 0x46($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216100u;
            goto label_216100;
        }
    }
    ctx->pc = 0x2160C4u;
    // 0x2160c4: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x2160c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
label_2160c8:
    // 0x2160c8: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x2160c8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2160cc: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2160ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2160d0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2160d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2160D4u;
    {
        const bool branch_taken_0x2160d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2160d4) {
            ctx->pc = 0x2160D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2160D4u;
            // 0x2160d8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2160F4u;
            goto label_2160f4;
        }
    }
    ctx->pc = 0x2160DCu;
    // 0x2160dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2160dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2160e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2160e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2160e4: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x2160e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2160e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2160e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2160ec: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x2160ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x2160f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2160f4:
    // 0x2160f4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2160F4u;
    {
        const bool branch_taken_0x2160f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2160F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160F4u;
            // 0x2160f8: 0x24a2ffec  addiu       $v0, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160f4) {
            ctx->pc = 0x2160C8u;
            runtime->cooperativeGuestYield();
            goto label_2160c8;
        }
    }
    ctx->pc = 0x2160FCu;
label_2160fc:
    // 0x2160fc: 0x96820046  lhu         $v0, 0x46($s4)
    ctx->pc = 0x2160fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 70)));
label_216100:
    // 0x216100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x216104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216108: 0xc09139a  jal         func_244E68
    ctx->pc = 0x216108u;
    SET_GPR_U32(ctx, 31, 0x216110u);
    ctx->pc = 0x21610Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216108u;
            // 0x21610c: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244E68u;
    if (runtime->hasFunction(0x244E68u)) {
        auto targetFn = runtime->lookupFunction(0x244E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216110u; }
        if (ctx->pc != 0x216110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_244e68_0x244ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216110u; }
        if (ctx->pc != 0x216110u) { return; }
    }
    ctx->pc = 0x216110u;
    // 0x216110: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x216110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x216114: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x216114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216118: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x216118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21611c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x21611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x216120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216128: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x216128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21612c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21612Cu;
    {
        const bool branch_taken_0x21612c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21612Cu;
            // 0x216130: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21612c) {
            ctx->pc = 0x216140u;
            goto label_216140;
        }
    }
    ctx->pc = 0x216134u;
    // 0x216134: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x216134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x216138u;
    {
        const bool branch_taken_0x216138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21613Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216138u;
            // 0x21613c: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216138) {
            ctx->pc = 0x216144u;
            goto label_216144;
        }
    }
    ctx->pc = 0x216140u;
label_216140:
    // 0x216140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x216140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216144:
    // 0x216144: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x216148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21614c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216150: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x216154: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x216154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x216158: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x216158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x21615c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21615Cu;
    {
        const bool branch_taken_0x21615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21615Cu;
            // 0x216160: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21615c) {
            ctx->pc = 0x216170u;
            goto label_216170;
        }
    }
    ctx->pc = 0x216164u;
    // 0x216164: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x216164u;
    {
        const bool branch_taken_0x216164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216164u;
            // 0x216168: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216164) {
            ctx->pc = 0x21618Cu;
            goto label_21618c;
        }
    }
    ctx->pc = 0x21616Cu;
    // 0x21616c: 0x0  nop
    ctx->pc = 0x21616cu;
    // NOP
label_216170:
    // 0x216170: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x216170u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x216174: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x216174u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x216178: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x216178u;
    {
        const bool branch_taken_0x216178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x21617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216178u;
            // 0x21617c: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216178) {
            ctx->pc = 0x21618Cu;
            goto label_21618c;
        }
    }
    ctx->pc = 0x216180u;
    // 0x216180: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x216180u;
    SET_GPR_U32(ctx, 31, 0x216188u);
    ctx->pc = 0x216184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216180u;
            // 0x216184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216188u; }
        if (ctx->pc != 0x216188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216188u; }
        if (ctx->pc != 0x216188u) { return; }
    }
    ctx->pc = 0x216188u;
    // 0x216188: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x216188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_21618c:
    // 0x21618c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x21618cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x216190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216194: 0xc08590a  jal         func_216428
    ctx->pc = 0x216194u;
    SET_GPR_U32(ctx, 31, 0x21619Cu);
    ctx->pc = 0x216198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216194u;
            // 0x216198: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216428u;
    if (runtime->hasFunction(0x216428u)) {
        auto targetFn = runtime->lookupFunction(0x216428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21619Cu; }
        if (ctx->pc != 0x21619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00216428_0x216428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21619Cu; }
        if (ctx->pc != 0x21619Cu) { return; }
    }
    ctx->pc = 0x21619Cu;
    // 0x21619c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2161a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2161a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2161a4: 0x8c44d2ac  lw          $a0, -0x2D54($v0)
    ctx->pc = 0x2161a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2161a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2161a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161ac: 0xc07974c  jal         func_1E5D30
    ctx->pc = 0x2161ACu;
    SET_GPR_U32(ctx, 31, 0x2161B4u);
    ctx->pc = 0x2161B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2161ACu;
            // 0x2161b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D30u;
    if (runtime->hasFunction(0x1E5D30u)) {
        auto targetFn = runtime->lookupFunction(0x1E5D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161B4u; }
        if (ctx->pc != 0x2161B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e5d30_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2161B4u; }
        if (ctx->pc != 0x2161B4u) { return; }
    }
    ctx->pc = 0x2161B4u;
    // 0x2161b4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2161b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2161b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2161b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2161bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2161bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2161c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161c4: 0xe620037c  swc1        $f0, 0x37C($s1)
    ctx->pc = 0x2161c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
label_2161c8:
    // 0x2161c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2161c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2161cc: 0x8e230384  lw          $v1, 0x384($s1)
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x2161d0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2161d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2161d4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2161d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2161d8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2161d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2161dc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2161dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2161e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2161e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2161e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2161e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2161e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2161e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2161ECu;
    {
        const bool branch_taken_0x2161ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2161ec) {
            ctx->pc = 0x2161F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2161ECu;
            // 0x2161f0: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x216200u;
            goto label_216200;
        }
    }
    ctx->pc = 0x2161F4u;
    // 0x2161f4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2161f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2161f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2161f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161fc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2161fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_216200:
    // 0x216200: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x216200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x216204: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x216204u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216208: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21620c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x21620cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x216210: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x216210u;
    {
        const bool branch_taken_0x216210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216210u;
            // 0x216214: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216210) {
            ctx->pc = 0x2161C8u;
            runtime->cooperativeGuestYield();
            goto label_2161c8;
        }
    }
    ctx->pc = 0x216218u;
    // 0x216218: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21621c: 0xae200370  sw          $zero, 0x370($s1)
    ctx->pc = 0x21621cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 0));
    // 0x216220: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x216220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x216224: 0xae200374  sw          $zero, 0x374($s1)
    ctx->pc = 0x216224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 0));
    // 0x216228: 0xae200378  sw          $zero, 0x378($s1)
    ctx->pc = 0x216228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
    // 0x21622c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x21622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x216230: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216230u;
    {
        const bool branch_taken_0x216230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216230u;
            // 0x216234: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216230) {
            ctx->pc = 0x216250u;
            goto label_216250;
        }
    }
    ctx->pc = 0x216238u;
    // 0x216238: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x216238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
    // 0x21623c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216240: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x216240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x216244: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x216244u;
    {
        const bool branch_taken_0x216244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216244u;
            // 0x216248: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216244) {
            ctx->pc = 0x2162ECu;
            goto label_2162ec;
        }
    }
    ctx->pc = 0x21624Cu;
    // 0x21624c: 0x0  nop
    ctx->pc = 0x21624cu;
    // NOP
label_216250:
    // 0x216250: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x216250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x216254: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x216254u;
    {
        const bool branch_taken_0x216254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216254) {
            ctx->pc = 0x216258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216254u;
            // 0x216258: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2162E4u;
            goto label_2162e4;
        }
    }
    ctx->pc = 0x21625Cu;
    // 0x21625c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x21625cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x216260: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x216260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216264: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x216264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216268: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x216268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21626c: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x21626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216270: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x216270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x216274: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x216274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x216278: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x216278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21627c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x21627cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x216280: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x216280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x216284: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x216284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x216288: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x216288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x21628c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x21628cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x216290: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x216290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x216294: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x216294u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x216298: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x216298u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21629c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21629cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2162a0: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x2162a0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2162a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2162a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2162a8: 0xc085e3a  jal         func_2178E8
    ctx->pc = 0x2162A8u;
    SET_GPR_U32(ctx, 31, 0x2162B0u);
    ctx->pc = 0x2162ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2162A8u;
            // 0x2162ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2178E8u;
    if (runtime->hasFunction(0x2178E8u)) {
        auto targetFn = runtime->lookupFunction(0x2178E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2162B0u; }
        if (ctx->pc != 0x2162B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_002178e8_0x2178e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2162B0u; }
        if (ctx->pc != 0x2162B0u) { return; }
    }
    ctx->pc = 0x2162B0u;
    // 0x2162b0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2162b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2162B4u;
    {
        const bool branch_taken_0x2162b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162B4u;
            // 0x2162b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162b4) {
            ctx->pc = 0x2162D8u;
            goto label_2162d8;
        }
    }
    ctx->pc = 0x2162BCu;
    // 0x2162bc: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x2162bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x2162c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2162c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2162c4: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x2162c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
    // 0x2162c8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2162c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2162cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2162CCu;
    {
        const bool branch_taken_0x2162cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162CCu;
            // 0x2162d0: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162cc) {
            ctx->pc = 0x2162ECu;
            goto label_2162ec;
        }
    }
    ctx->pc = 0x2162D4u;
    // 0x2162d4: 0x0  nop
    ctx->pc = 0x2162d4u;
    // NOP
label_2162d8:
    // 0x2162d8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2162d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2162dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2162DCu;
    {
        const bool branch_taken_0x2162dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162DCu;
            // 0x2162e0: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162dc) {
            ctx->pc = 0x2162ECu;
            goto label_2162ec;
        }
    }
    ctx->pc = 0x2162E4u;
label_2162e4:
    // 0x2162e4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2162e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2162e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2162e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2162ec:
    // 0x2162ec: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x2162ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
    // 0x2162f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2162f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2162f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2162f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2162f8: 0x8c44e4b4  lw          $a0, -0x1B4C($v0)
    ctx->pc = 0x2162f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960308)));
    // 0x2162fc: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x2162FCu;
    SET_GPR_U32(ctx, 31, 0x216304u);
    ctx->pc = 0x216300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2162FCu;
            // 0x216300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216304u; }
        if (ctx->pc != 0x216304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216304u; }
        if (ctx->pc != 0x216304u) { return; }
    }
    ctx->pc = 0x216304u;
    // 0x216304: 0xae220388  sw          $v0, 0x388($s1)
    ctx->pc = 0x216304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 904), GPR_U32(ctx, 2));
    // 0x216308: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x216308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x21630c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x216310: 0x9042463c  lbu         $v0, 0x463C($v0)
    ctx->pc = 0x216310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17980)));
    // 0x216314: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216314u;
    {
        const bool branch_taken_0x216314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216314u;
            // 0x216318: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216314) {
            ctx->pc = 0x216330u;
            goto label_216330;
        }
    }
    ctx->pc = 0x21631Cu;
    // 0x21631c: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x216320: 0x90424642  lbu         $v0, 0x4642($v0)
    ctx->pc = 0x216320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17986)));
    // 0x216324: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x216324u;
    {
        const bool branch_taken_0x216324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216324u;
            // 0x216328: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216324) {
            ctx->pc = 0x21634Cu;
            goto label_21634c;
        }
    }
    ctx->pc = 0x21632Cu;
    // 0x21632c: 0x0  nop
    ctx->pc = 0x21632cu;
    // NOP
label_216330:
    // 0x216330: 0x0  nop
    ctx->pc = 0x216330u;
    // NOP
    // 0x216334: 0x0  nop
    ctx->pc = 0x216334u;
    // NOP
    // 0x216338: 0x0  nop
    ctx->pc = 0x216338u;
    // NOP
    // 0x21633c: 0x0  nop
    ctx->pc = 0x21633cu;
    // NOP
    // 0x216340: 0x0  nop
    ctx->pc = 0x216340u;
    // NOP
    // 0x216344: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x216344u;
    {
        const bool branch_taken_0x216344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216344) {
            ctx->pc = 0x216330u;
            runtime->cooperativeGuestYield();
            goto label_216330;
        }
    }
    ctx->pc = 0x21634Cu;
label_21634c:
    // 0x21634c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21634cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216350: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x216350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216354: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x216354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216358: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x216358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21635c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x21635cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x216360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216364: 0x3e00008  jr          $ra
    ctx->pc = 0x216364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216364u;
            // 0x216368: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216068u: goto label_216068;
            case 0x2160C8u: goto label_2160c8;
            case 0x2160F4u: goto label_2160f4;
            case 0x2160FCu: goto label_2160fc;
            case 0x216100u: goto label_216100;
            case 0x216140u: goto label_216140;
            case 0x216144u: goto label_216144;
            case 0x216170u: goto label_216170;
            case 0x21618Cu: goto label_21618c;
            case 0x2161C8u: goto label_2161c8;
            case 0x216200u: goto label_216200;
            case 0x216250u: goto label_216250;
            case 0x2162D8u: goto label_2162d8;
            case 0x2162E4u: goto label_2162e4;
            case 0x2162ECu: goto label_2162ec;
            case 0x216330u: goto label_216330;
            case 0x21634Cu: goto label_21634c;
            case 0x2163B8u: goto label_2163b8;
            case 0x2163E0u: goto label_2163e0;
            case 0x2163E4u: goto label_2163e4;
            case 0x216410u: goto label_216410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21636Cu;
    // 0x21636c: 0x0  nop
    ctx->pc = 0x21636cu;
    // NOP
    // 0x216370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216374: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x216374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x216378: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x216378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21637c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x216380: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x216380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x216384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21638c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21638cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216390: 0x24428998  addiu       $v0, $v0, -0x7668
    ctx->pc = 0x216390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936984));
    // 0x216394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216398: 0x8c8500fc  lw          $a1, 0xFC($a0)
    ctx->pc = 0x216398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x21639c: 0x8c64d2ac  lw          $a0, -0x2D54($v1)
    ctx->pc = 0x21639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x2163a0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2163A0u;
    {
        const bool branch_taken_0x2163a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2163A0u;
            // 0x2163a4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163a0) {
            ctx->pc = 0x2163E0u;
            goto label_2163e0;
        }
    }
    ctx->pc = 0x2163A8u;
    // 0x2163a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2163a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2163ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2163acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2163b0: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2163B0u;
    {
        const bool branch_taken_0x2163b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2163B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2163B0u;
            // 0x2163b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163b0) {
            ctx->pc = 0x2163E0u;
            goto label_2163e0;
        }
    }
    ctx->pc = 0x2163B8u;
label_2163b8:
    // 0x2163b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2163b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2163bc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2163bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2163c0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2163c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2163c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2163c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2163c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2163C8u;
    {
        const bool branch_taken_0x2163c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2163c8) {
            ctx->pc = 0x2163E4u;
            goto label_2163e4;
        }
    }
    ctx->pc = 0x2163D0u;
    // 0x2163d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2163d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2163d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2163d8: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2163D8u;
    {
        const bool branch_taken_0x2163d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2163DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2163D8u;
            // 0x2163dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163d8) {
            ctx->pc = 0x2163B8u;
            runtime->cooperativeGuestYield();
            goto label_2163b8;
        }
    }
    ctx->pc = 0x2163E0u;
label_2163e0:
    // 0x2163e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2163e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2163e4:
    // 0x2163e4: 0xc0797a2  jal         func_1E5E88
    ctx->pc = 0x2163E4u;
    SET_GPR_U32(ctx, 31, 0x2163ECu);
    ctx->pc = 0x1E5E88u;
    if (runtime->hasFunction(0x1E5E88u)) {
        auto targetFn = runtime->lookupFunction(0x1E5E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163ECu; }
        if (ctx->pc != 0x2163ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5E88_0x1e5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163ECu; }
        if (ctx->pc != 0x2163ECu) { return; }
    }
    ctx->pc = 0x2163ECu;
    // 0x2163ec: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x2163ECu;
    SET_GPR_U32(ctx, 31, 0x2163F4u);
    ctx->pc = 0x2163F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163ECu;
            // 0x2163f0: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163F4u; }
        if (ctx->pc != 0x2163F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163F4u; }
        if (ctx->pc != 0x2163F4u) { return; }
    }
    ctx->pc = 0x2163F4u;
    // 0x2163f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2163f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2163f8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2163f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2163fc: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x2163fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x216400: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216400u;
    {
        const bool branch_taken_0x216400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x216404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216400u;
            // 0x216404: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216400) {
            ctx->pc = 0x216410u;
            goto label_216410;
        }
    }
    ctx->pc = 0x216408u;
    // 0x216408: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x216408u;
    SET_GPR_U32(ctx, 31, 0x216410u);
    ctx->pc = 0x21640Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216408u;
            // 0x21640c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216410u; }
        if (ctx->pc != 0x216410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216410u; }
        if (ctx->pc != 0x216410u) { return; }
    }
    ctx->pc = 0x216410u;
label_216410:
    // 0x216410: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x216410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216414: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x216414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21641c: 0x3e00008  jr          $ra
    ctx->pc = 0x21641Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21641Cu;
            // 0x216420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216068u: goto label_216068;
            case 0x2160C8u: goto label_2160c8;
            case 0x2160F4u: goto label_2160f4;
            case 0x2160FCu: goto label_2160fc;
            case 0x216100u: goto label_216100;
            case 0x216140u: goto label_216140;
            case 0x216144u: goto label_216144;
            case 0x216170u: goto label_216170;
            case 0x21618Cu: goto label_21618c;
            case 0x2161C8u: goto label_2161c8;
            case 0x216200u: goto label_216200;
            case 0x216250u: goto label_216250;
            case 0x2162D8u: goto label_2162d8;
            case 0x2162E4u: goto label_2162e4;
            case 0x2162ECu: goto label_2162ec;
            case 0x216330u: goto label_216330;
            case 0x21634Cu: goto label_21634c;
            case 0x2163B8u: goto label_2163b8;
            case 0x2163E0u: goto label_2163e0;
            case 0x2163E4u: goto label_2163e4;
            case 0x216410u: goto label_216410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216424u;
    // 0x216424: 0x0  nop
    ctx->pc = 0x216424u;
    // NOP
}
