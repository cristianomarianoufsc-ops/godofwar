#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15ddb0
// Address: 0x15ddb0 - 0x15ece8
void entry_15ddb0_0x15ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15ddb0_0x15ece8");
#endif

    ctx->pc = 0x15ddb0u;

    // 0x15ddb0: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x15ddb4: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x15ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x15ddb8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x15ddb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15ddbc: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x15ddbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15ddc0: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x15ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x15ddc4: 0x7fb10360  sq          $s1, 0x360($sp)
    ctx->pc = 0x15ddc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 17));
    // 0x15ddc8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15ddc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddcc: 0x7fb20350  sq          $s2, 0x350($sp)
    ctx->pc = 0x15ddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 18));
    // 0x15ddd0: 0x24a5013c  addiu       $a1, $a1, 0x13C
    ctx->pc = 0x15ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 316));
    // 0x15ddd4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x15ddd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15dddc: 0x7fb00370  sq          $s0, 0x370($sp)
    ctx->pc = 0x15dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 16));
    // 0x15dde0: 0x7fb30340  sq          $s3, 0x340($sp)
    ctx->pc = 0x15dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 19));
    // 0x15dde4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15dde8: 0x7fb40330  sq          $s4, 0x330($sp)
    ctx->pc = 0x15dde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 20));
    // 0x15ddec: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x15ddecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15ddf0: 0x7fb50320  sq          $s5, 0x320($sp)
    ctx->pc = 0x15ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 21));
    // 0x15ddf4: 0x7fb60310  sq          $s6, 0x310($sp)
    ctx->pc = 0x15ddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 22));
    // 0x15ddf8: 0x7fb70300  sq          $s7, 0x300($sp)
    ctx->pc = 0x15ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 23));
    // 0x15ddfc: 0x7fbe02f0  sq          $fp, 0x2F0($sp)
    ctx->pc = 0x15ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 30));
    // 0x15de00: 0xffbf02e0  sd          $ra, 0x2E0($sp)
    ctx->pc = 0x15de00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 31));
    // 0x15de04: 0xe7b40380  swc1        $f20, 0x380($sp)
    ctx->pc = 0x15de04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x15de08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15de0c: 0x104003a8  beqz        $v0, . + 4 + (0x3A8 << 2)
    ctx->pc = 0x15DE0Cu;
    {
        const bool branch_taken_0x15de0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE0Cu;
            // 0x15de10: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de0c) {
            ctx->pc = 0x15ECB0u;
            goto label_15ecb0;
        }
    }
    ctx->pc = 0x15DE14u;
    // 0x15de14: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x15DE14u;
    SET_GPR_U32(ctx, 31, 0x15DE1Cu);
    ctx->pc = 0x15DE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE14u;
            // 0x15de18: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE1Cu; }
        if (ctx->pc != 0x15DE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE1Cu; }
        if (ctx->pc != 0x15DE1Cu) { return; }
    }
    ctx->pc = 0x15DE1Cu;
    // 0x15de1c: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15de20: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x15de20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x15de24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x15de24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x15de28: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x15de28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x15de2c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15de30: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15de34: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x15DE34u;
    SET_GPR_U32(ctx, 31, 0x15DE3Cu);
    ctx->pc = 0x15DE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DE34u;
            // 0x15de38: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE3Cu; }
        if (ctx->pc != 0x15DE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DE3Cu; }
        if (ctx->pc != 0x15DE3Cu) { return; }
    }
    ctx->pc = 0x15DE3Cu;
    // 0x15de3c: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15de40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15de44: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15de48: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15de48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x15de4c: 0xac821010  sw          $v0, 0x1010($a0)
    ctx->pc = 0x15de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4112), GPR_U32(ctx, 2));
    // 0x15de50: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15de54: 0xacc31014  sw          $v1, 0x1014($a2)
    ctx->pc = 0x15de54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4116), GPR_U32(ctx, 3));
    // 0x15de58: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15de5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x15de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x15de60: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x15de60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x15de64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x15de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x15de68: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x15de68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x15de6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x15de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x15de70: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15de74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15de74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15de78: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x15de78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x15de7c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x15de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x15de80: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x15de80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15de84: 0xa5478  dsll        $t2, $t2, 17
    ctx->pc = 0x15de84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 17);
    // 0x15de88: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15de8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15de90: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15de94: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x15de94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x15de98: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x15de98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x15de9c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x15de9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x15dea0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x15dea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x15dea4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x15dea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x15dea8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x15dea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x15deac: 0x2e290007  sltiu       $t1, $s1, 0x7
    ctx->pc = 0x15deacu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x15deb0: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x15deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x15deb4: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x15deb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15deb8: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x15deb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15debc: 0xae0bf168  sw          $t3, -0xE98($s0)
    ctx->pc = 0x15debcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 11));
    // 0x15dec0: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x15dec0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x15dec4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15dec8: 0x9c62f19c  lwu         $v0, -0xE64($v1)
    ctx->pc = 0x15dec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x15decc: 0x9ca3f1a0  lwu         $v1, -0xE60($a1)
    ctx->pc = 0x15deccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294963616)));
    // 0x15ded0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x15ded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x15ded4: 0xfc860028  sd          $a2, 0x28($a0)
    ctx->pc = 0x15ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 6));
    // 0x15ded8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15ded8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15dedc: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x15dedcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x15dee0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x15dee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x15dee4: 0xfc880020  sd          $t0, 0x20($a0)
    ctx->pc = 0x15dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
    // 0x15dee8: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15DEE8u;
    {
        const bool branch_taken_0x15dee8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DEE8u;
            // 0x15deec: 0xfc830010  sd          $v1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dee8) {
            ctx->pc = 0x15DF48u;
            goto label_15df48;
        }
    }
    ctx->pc = 0x15DEF0u;
    // 0x15def0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x15def4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15def8: 0x24422340  addiu       $v0, $v0, 0x2340
    ctx->pc = 0x15def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    // 0x15defc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15df00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15df04: 0x400008  jr          $v0
    ctx->pc = 0x15DF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DF10u: goto label_15df10;
            case 0x15DF24u: goto label_15df24;
            case 0x15DF38u: goto label_15df38;
            case 0x15DF48u: goto label_15df48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DF0Cu;
    // 0x15df0c: 0x0  nop
    ctx->pc = 0x15df0cu;
    // NOP
label_15df10:
    // 0x15df10: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15df14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15df18: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x15df18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x15df1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15DF1Cu;
    {
        const bool branch_taken_0x15df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF1Cu;
            // 0x15df20: 0xfd620030  sd          $v0, 0x30($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df1c) {
            ctx->pc = 0x15DF48u;
            goto label_15df48;
        }
    }
    ctx->pc = 0x15DF24u;
label_15df24:
    // 0x15df24: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15df28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15df2c: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x15df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x15df30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15DF30u;
    {
        const bool branch_taken_0x15df30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF30u;
            // 0x15df34: 0xfd620030  sd          $v0, 0x30($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df30) {
            ctx->pc = 0x15DF48u;
            goto label_15df48;
        }
    }
    ctx->pc = 0x15DF38u;
label_15df38:
    // 0x15df38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15df3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15df40: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x15df40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x15df44: 0xfd620030  sd          $v0, 0x30($t3)
    ctx->pc = 0x15df44u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 2));
label_15df48:
    // 0x15df48: 0x25640040  addiu       $a0, $t3, 0x40
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x15df4c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15df50: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x15df50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x15df54: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x15DF54u;
    SET_GPR_U32(ctx, 31, 0x15DF5Cu);
    ctx->pc = 0x15DF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DF54u;
            // 0x15df58: 0xfd620038  sd          $v0, 0x38($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF5Cu; }
        if (ctx->pc != 0x15DF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF5Cu; }
        if (ctx->pc != 0x15DF5Cu) { return; }
    }
    ctx->pc = 0x15DF5Cu;
    // 0x15df5c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x15DF5Cu;
    SET_GPR_U32(ctx, 31, 0x15DF64u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF64u; }
        if (ctx->pc != 0x15DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF64u; }
        if (ctx->pc != 0x15DF64u) { return; }
    }
    ctx->pc = 0x15DF64u;
    // 0x15df64: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x15DF64u;
    SET_GPR_U32(ctx, 31, 0x15DF6Cu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF6Cu; }
        if (ctx->pc != 0x15DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF6Cu; }
        if (ctx->pc != 0x15DF6Cu) { return; }
    }
    ctx->pc = 0x15DF6Cu;
    // 0x15df6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15df70: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15df74: 0x8c43f1ac  lw          $v1, -0xE54($v0)
    ctx->pc = 0x15df74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x15df78: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15df7c: 0x8c82dd58  lw          $v0, -0x22A8($a0)
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958424)));
    // 0x15df80: 0x3c072400  lui         $a3, 0x2400
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9216 << 16));
    // 0x15df84: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x15df88: 0x9ca4f1a8  lwu         $a0, -0xE58($a1)
    ctx->pc = 0x15df88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294963624)));
    // 0x15df8c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x15df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x15df90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15df94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x15df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15df98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15df98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15df9c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x15df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x15dfa0: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x15dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x15dfa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15dfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15dfa8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x15dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x15dfac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x15dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15dfb0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15dfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15dfb4: 0x8c46c298  lw          $a2, -0x3D68($v0)
    ctx->pc = 0x15dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951576)));
    // 0x15dfb8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x15dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x15dfbc: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x15dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x15dfc0: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x15dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x15dfc4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x15dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x15dfc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15dfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15dfcc: 0x24846200  addiu       $a0, $a0, 0x6200
    ctx->pc = 0x15dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25088));
    // 0x15dfd0: 0xffa30208  sd          $v1, 0x208($sp)
    ctx->pc = 0x15dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 3));
    // 0x15dfd4: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DFD4u;
    {
        const bool branch_taken_0x15dfd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x15DFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFD4u;
            // 0x15dfd8: 0xaca0c294  sw          $zero, -0x3D6C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294951572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfd4) {
            ctx->pc = 0x15DFF0u;
            goto label_15dff0;
        }
    }
    ctx->pc = 0x15DFDCu;
    // 0x15dfdc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x15dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x15dfe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15dfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfe4: 0x24a58e38  addiu       $a1, $a1, -0x71C8
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
    // 0x15dfe8: 0xc05875c  jal         func_161D70
    ctx->pc = 0x15DFE8u;
    SET_GPR_U32(ctx, 31, 0x15DFF0u);
    ctx->pc = 0x15DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFE8u;
            // 0x15dfec: 0x24070119  addiu       $a3, $zero, 0x119 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D70u;
    if (runtime->hasFunction(0x161D70u)) {
        auto targetFn = runtime->lookupFunction(0x161D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFF0u; }
        if (ctx->pc != 0x15DFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_161d70_0x161df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFF0u; }
        if (ctx->pc != 0x15DFF0u) { return; }
    }
    ctx->pc = 0x15DFF0u;
label_15dff0:
    // 0x15dff0: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x15dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x15dff4: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x15dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x15dff8: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x15dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x15dffc: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15e000: 0x12400313  beqz        $s2, . + 4 + (0x313 << 2)
    ctx->pc = 0x15E000u;
    {
        const bool branch_taken_0x15e000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E000u;
            // 0x15e004: 0xafb20280  sw          $s2, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e000) {
            ctx->pc = 0x15EC50u;
            goto label_15ec50;
        }
    }
    ctx->pc = 0x15E008u;
label_15e008:
    // 0x15e008: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15e008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e00c: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x15e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
    // 0x15e010: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x15e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x15e014: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15e014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15e018: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x15e018u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x15e01c: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x15e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x15e020: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15e024: 0xafa00290  sw          $zero, 0x290($sp)
    ctx->pc = 0x15e024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
    // 0x15e028: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x15e02c: 0x8c470058  lw          $a3, 0x58($v0)
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x15e030: 0xafa70288  sw          $a3, 0x288($sp)
    ctx->pc = 0x15e030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 7));
    // 0x15e034: 0x8c540054  lw          $s4, 0x54($v0)
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15e038: 0x32820080  andi        $v0, $s4, 0x80
    ctx->pc = 0x15e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
    // 0x15e03c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15E03Cu;
    {
        const bool branch_taken_0x15e03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E03Cu;
            // 0x15e040: 0xafa20294  sw          $v0, 0x294($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e03c) {
            ctx->pc = 0x15E088u;
            goto label_15e088;
        }
    }
    ctx->pc = 0x15E044u;
    // 0x15e044: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x15e048: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e04c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e050: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x15e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x15e054: 0x8c500038  lw          $s0, 0x38($v0)
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x15e058: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15e05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e060: 0xc059b16  jal         func_166C58
    ctx->pc = 0x15E060u;
    SET_GPR_U32(ctx, 31, 0x15E068u);
    ctx->pc = 0x15E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E060u;
            // 0x15e064: 0xafa30290  sw          $v1, 0x290($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166C58u;
    if (runtime->hasFunction(0x166C58u)) {
        auto targetFn = runtime->lookupFunction(0x166C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E068u; }
        if (ctx->pc != 0x15E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C58_0x166c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E068u; }
        if (ctx->pc != 0x15E068u) { return; }
    }
    ctx->pc = 0x15E068u;
    // 0x15e068: 0xc059d5a  jal         func_167568
    ctx->pc = 0x15E068u;
    SET_GPR_U32(ctx, 31, 0x15E070u);
    ctx->pc = 0x15E06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E068u;
            // 0x15e06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167568u;
    if (runtime->hasFunction(0x167568u)) {
        auto targetFn = runtime->lookupFunction(0x167568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E070u; }
        if (ctx->pc != 0x15E070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167568_0x167568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E070u; }
        if (ctx->pc != 0x15E070u) { return; }
    }
    ctx->pc = 0x15E070u;
    // 0x15e070: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x15e074: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E074u;
    {
        const bool branch_taken_0x15e074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e074) {
            ctx->pc = 0x15E078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E074u;
            // 0x15e078: 0xafb00214  sw          $s0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E088u;
            goto label_15e088;
        }
    }
    ctx->pc = 0x15E07Cu;
    // 0x15e07c: 0xc059ade  jal         func_166B78
    ctx->pc = 0x15E07Cu;
    SET_GPR_U32(ctx, 31, 0x15E084u);
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E084u; }
        if (ctx->pc != 0x15E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E084u; }
        if (ctx->pc != 0x15E084u) { return; }
    }
    ctx->pc = 0x15E084u;
    // 0x15e084: 0xafb00214  sw          $s0, 0x214($sp)
    ctx->pc = 0x15e084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 16));
label_15e088:
    // 0x15e088: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x15e088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x15e08c: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x15e08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x15e090: 0x8cb10018  lw          $s1, 0x18($a1)
    ctx->pc = 0x15e090u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x15e094: 0x12260070  beq         $s1, $a2, . + 4 + (0x70 << 2)
    ctx->pc = 0x15E094u;
    {
        const bool branch_taken_0x15e094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x15E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E094u;
            // 0x15e098: 0x26220360  addiu       $v0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e094) {
            ctx->pc = 0x15E258u;
            goto label_15e258;
        }
    }
    ctx->pc = 0x15E09Cu;
    // 0x15e09c: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x15e0a0: 0xafb10218  sw          $s1, 0x218($sp)
    ctx->pc = 0x15e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 17));
    // 0x15e0a4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E0A4u;
    {
        const bool branch_taken_0x15e0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0A4u;
            // 0x15e0a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0a4) {
            ctx->pc = 0x15E0B0u;
            goto label_15e0b0;
        }
    }
    ctx->pc = 0x15E0ACu;
    // 0x15e0ac: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15e0b0:
    // 0x15e0b0: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x15e0b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e0b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E0B8u;
    {
        const bool branch_taken_0x15e0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0B8u;
            // 0x15e0bc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0b8) {
            ctx->pc = 0x15E0C8u;
            goto label_15e0c8;
        }
    }
    ctx->pc = 0x15E0C0u;
    // 0x15e0c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E0C0u;
    {
        const bool branch_taken_0x15e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0C0u;
            // 0x15e0c4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0c0) {
            ctx->pc = 0x15E0E4u;
            goto label_15e0e4;
        }
    }
    ctx->pc = 0x15E0C8u;
label_15e0c8:
    // 0x15e0c8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x15e0c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x15e0cc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x15e0ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x15e0d0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E0D0u;
    {
        const bool branch_taken_0x15e0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15e0d0) {
            ctx->pc = 0x15E0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0D0u;
            // 0x15e0d4: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E0E8u;
            goto label_15e0e8;
        }
    }
    ctx->pc = 0x15E0D8u;
    // 0x15e0d8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x15E0D8u;
    SET_GPR_U32(ctx, 31, 0x15E0E0u);
    ctx->pc = 0x15E0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0D8u;
            // 0x15e0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E0E0u; }
        if (ctx->pc != 0x15E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E0E0u; }
        if (ctx->pc != 0x15E0E0u) { return; }
    }
    ctx->pc = 0x15E0E0u;
    // 0x15e0e0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15e0e4:
    // 0x15e0e4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x15e0e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_15e0e8:
    // 0x15e0e8: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x15e0e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x15e0ec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x15e0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15e0f0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15E0F0u;
    {
        const bool branch_taken_0x15e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e0f0) {
            ctx->pc = 0x15E0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0F0u;
            // 0x15e0f4: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E134u;
            goto label_15e134;
        }
    }
    ctx->pc = 0x15E0F8u;
    // 0x15e0f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e0fc: 0xc0614c6  jal         func_185318
    ctx->pc = 0x15E0FCu;
    SET_GPR_U32(ctx, 31, 0x15E104u);
    ctx->pc = 0x15E100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0FCu;
            // 0x15e100: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E104u; }
        if (ctx->pc != 0x15E104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E104u; }
        if (ctx->pc != 0x15E104u) { return; }
    }
    ctx->pc = 0x15E104u;
    // 0x15e104: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x15e104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e10c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e110: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x15e110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x15e114: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15e114u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e118: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x15e118u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x15e11c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x15e11cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e120: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x15e120u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x15e124: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x15e124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e128: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x15E128u;
    SET_GPR_U32(ctx, 31, 0x15E130u);
    ctx->pc = 0x15E12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E128u;
            // 0x15e12c: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E130u; }
        if (ctx->pc != 0x15E130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E130u; }
        if (ctx->pc != 0x15E130u) { return; }
    }
    ctx->pc = 0x15E130u;
    // 0x15e130: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x15e130u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_15e134:
    // 0x15e134: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x15e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x15e138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e13c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x15e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x15e140: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x15e140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15e144: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x15e144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x15e148: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15e148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15e14c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x15e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x15e150: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x15e150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15e154: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E154u;
    SET_GPR_U32(ctx, 31, 0x15E15Cu);
    ctx->pc = 0x15E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E154u;
            // 0x15e158: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E15Cu; }
        if (ctx->pc != 0x15E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E15Cu; }
        if (ctx->pc != 0x15E15Cu) { return; }
    }
    ctx->pc = 0x15E15Cu;
    // 0x15e15c: 0x7a270340  lq          $a3, 0x340($s1)
    ctx->pc = 0x15e15cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x15e160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e164: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E164u;
    SET_GPR_U32(ctx, 31, 0x15E16Cu);
    ctx->pc = 0x15E168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E164u;
            // 0x15e168: 0x7fa70220  sq          $a3, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E16Cu; }
        if (ctx->pc != 0x15E16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E16Cu; }
        if (ctx->pc != 0x15E16Cu) { return; }
    }
    ctx->pc = 0x15E16Cu;
    // 0x15e16c: 0x7a220350  lq          $v0, 0x350($s1)
    ctx->pc = 0x15e16cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 848)));
    // 0x15e170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e174: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E174u;
    SET_GPR_U32(ctx, 31, 0x15E17Cu);
    ctx->pc = 0x15E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E174u;
            // 0x15e178: 0x7fa20230  sq          $v0, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E17Cu; }
        if (ctx->pc != 0x15E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E17Cu; }
        if (ctx->pc != 0x15E17Cu) { return; }
    }
    ctx->pc = 0x15E17Cu;
    // 0x15e17c: 0x7a230310  lq          $v1, 0x310($s1)
    ctx->pc = 0x15e17cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x15e180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e184: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E184u;
    SET_GPR_U32(ctx, 31, 0x15E18Cu);
    ctx->pc = 0x15E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E184u;
            // 0x15e188: 0x7fa30240  sq          $v1, 0x240($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E18Cu; }
        if (ctx->pc != 0x15E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E18Cu; }
        if (ctx->pc != 0x15E18Cu) { return; }
    }
    ctx->pc = 0x15E18Cu;
    // 0x15e18c: 0x7a240320  lq          $a0, 0x320($s1)
    ctx->pc = 0x15e18cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x15e190: 0x7fa40250  sq          $a0, 0x250($sp)
    ctx->pc = 0x15e190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 4));
    // 0x15e194: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E194u;
    SET_GPR_U32(ctx, 31, 0x15E19Cu);
    ctx->pc = 0x15E198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E194u;
            // 0x15e198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E19Cu; }
        if (ctx->pc != 0x15E19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E19Cu; }
        if (ctx->pc != 0x15E19Cu) { return; }
    }
    ctx->pc = 0x15E19Cu;
    // 0x15e19c: 0x7a220140  lq          $v0, 0x140($s1)
    ctx->pc = 0x15e19cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x15e1a0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15e1a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1a8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x15e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x15e1ac: 0x7a220150  lq          $v0, 0x150($s1)
    ctx->pc = 0x15e1acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x15e1b0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x15e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x15e1b4: 0x7a220160  lq          $v0, 0x160($s1)
    ctx->pc = 0x15e1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x15e1b8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x15e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x15e1bc: 0x7a220170  lq          $v0, 0x170($s1)
    ctx->pc = 0x15e1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x15e1c0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x15e1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x15e1c4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x15e1c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15e1c8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x15e1c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15e1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1d0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x15e1d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15e1d4: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x15e1d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15e1d8: 0x70032fc9  prot3w      $a1, $v1
    ctx->pc = 0x15e1d8u;
    SET_GPR_VEC(ctx, 5, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15e1dc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15e1dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1e0: 0x70022f89  pexew       $a1, $v0
    ctx->pc = 0x15e1e0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15e1e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15e1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1e8: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x15e1e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x15e1ec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15e1ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15e1f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x15e1f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15e1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1f8: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x15e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    // 0x15e1fc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x15e1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x15e200: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E200u;
    SET_GPR_U32(ctx, 31, 0x15E208u);
    ctx->pc = 0x15E204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E200u;
            // 0x15e204: 0x7fa201e0  sq          $v0, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E208u; }
        if (ctx->pc != 0x15E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E208u; }
        if (ctx->pc != 0x15E208u) { return; }
    }
    ctx->pc = 0x15E208u;
    // 0x15e208: 0x7a300300  lq          $s0, 0x300($s1)
    ctx->pc = 0x15e208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x15e20c: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x15E20Cu;
    SET_GPR_U32(ctx, 31, 0x15E214u);
    ctx->pc = 0x15E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E20Cu;
            // 0x15e210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E214u; }
        if (ctx->pc != 0x15E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E214u; }
        if (ctx->pc != 0x15E214u) { return; }
    }
    ctx->pc = 0x15E214u;
    // 0x15e214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15e218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15e218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e21c: 0x701017c9  prot3w      $v0, $s0
    ctx->pc = 0x15e21cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15e220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e224: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x15e224u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15e228: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15e228u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x15e22c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x15e22cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x15e230: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15e230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15e234: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x15e234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15e238: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x15e238u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x15e23c: 0x8e270388  lw          $a3, 0x388($s1)
    ctx->pc = 0x15e23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x15e240: 0x8e260384  lw          $a2, 0x384($s1)
    ctx->pc = 0x15e240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 900)));
    // 0x15e244: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x15e244u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x15e248: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x15e248u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15e24c: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x15e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    // 0x15e250: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x15e250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x15e254: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x15e254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_15e258:
    // 0x15e258: 0x32820030  andi        $v0, $s4, 0x30
    ctx->pc = 0x15e258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)48);
    // 0x15e25c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15E25Cu;
    {
        const bool branch_taken_0x15e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E25Cu;
            // 0x15e260: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e25c) {
            ctx->pc = 0x15E318u;
            goto label_15e318;
        }
    }
    ctx->pc = 0x15E264u;
    // 0x15e264: 0xde630068  ld          $v1, 0x68($s3)
    ctx->pc = 0x15e264u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x15e268: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x15e268u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x15e26c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E26Cu;
    {
        const bool branch_taken_0x15e26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x15E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E26Cu;
            // 0x15e270: 0x26620070  addiu       $v0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e26c) {
            ctx->pc = 0x15E280u;
            goto label_15e280;
        }
    }
    ctx->pc = 0x15E274u;
    // 0x15e274: 0xc056f5e  jal         func_15BD78
    ctx->pc = 0x15E274u;
    SET_GPR_U32(ctx, 31, 0x15E27Cu);
    ctx->pc = 0x15E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E274u;
            // 0x15e278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD78u;
    if (runtime->hasFunction(0x15BD78u)) {
        auto targetFn = runtime->lookupFunction(0x15BD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E27Cu; }
        if (ctx->pc != 0x15E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BD78_0x15bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E27Cu; }
        if (ctx->pc != 0x15E27Cu) { return; }
    }
    ctx->pc = 0x15E27Cu;
    // 0x15e27c: 0x26620070  addiu       $v0, $s3, 0x70
    ctx->pc = 0x15e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_15e280:
    // 0x15e280: 0xdba60000  lqc2        $vf6, 0x0($sp)
    ctx->pc = 0x15e280u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e284: 0xdba70010  lqc2        $vf7, 0x10($sp)
    ctx->pc = 0x15e284u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e288: 0xdba80020  lqc2        $vf8, 0x20($sp)
    ctx->pc = 0x15e288u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e28c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x15e28cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e290: 0xda610070  lqc2        $vf1, 0x70($s3)
    ctx->pc = 0x15e290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x15e294: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x15e294u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15e298: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x15e298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15e29c: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x15e29cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15e2a0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x15e2a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15e2a4: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x15e2a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2a8: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x15e2a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2ac: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x15e2acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15e2b0: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x15e2b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15e2b4: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x15e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e2b8: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x15e2b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2bc: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x15e2bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2c0: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x15e2c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15e2c4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x15e2c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15e2c8: 0xfba20170  sqc2        $vf2, 0x170($sp)
    ctx->pc = 0x15e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15e2cc: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x15e2ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2d0: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x15e2d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2d4: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x15e2d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15e2d8: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x15e2d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15e2dc: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x15e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15e2e0: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x15e2e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2e4: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x15e2e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e2e8: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x15e2e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15e2ec: 0xfba40190  sqc2        $vf4, 0x190($sp)
    ctx->pc = 0x15e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15e2f0: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x15e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e2f4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x15e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e2f8: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x15e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15e2fc: 0xfba30100  sqc2        $vf3, 0x100($sp)
    ctx->pc = 0x15e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15e300: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x15e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15e304: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x15e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15e308: 0xfba30140  sqc2        $vf3, 0x140($sp)
    ctx->pc = 0x15e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15e30c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15E30Cu;
    {
        const bool branch_taken_0x15e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E30Cu;
            // 0x15e310: 0xfba40150  sqc2        $vf4, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e30c) {
            ctx->pc = 0x15E338u;
            goto label_15e338;
        }
    }
    ctx->pc = 0x15E314u;
    // 0x15e314: 0x0  nop
    ctx->pc = 0x15e314u;
    // NOP
label_15e318:
    // 0x15e318: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x15e318u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e31c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x15e31cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e320: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x15e320u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e324: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x15e324u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e328: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x15e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x15e32c: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x15e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x15e330: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x15e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x15e334: 0x7fa50110  sq          $a1, 0x110($sp)
    ctx->pc = 0x15e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 5));
label_15e338:
    // 0x15e338: 0xde6200c0  ld          $v0, 0xC0($s3)
    ctx->pc = 0x15e338u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x15e33c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15e33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e340: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x15e340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x15e344: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15e348: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E348u;
    {
        const bool branch_taken_0x15e348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e348) {
            ctx->pc = 0x15E34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E348u;
            // 0x15e34c: 0x8e620164  lw          $v0, 0x164($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E360u;
            goto label_15e360;
        }
    }
    ctx->pc = 0x15E350u;
    // 0x15e350: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x15e350u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x15e354: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x15e354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e358: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x15e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x15e35c: 0x0  nop
    ctx->pc = 0x15e35cu;
    // NOP
label_15e360:
    // 0x15e360: 0x26670148  addiu       $a3, $s3, 0x148
    ctx->pc = 0x15e360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
    // 0x15e364: 0xafa70298  sw          $a3, 0x298($sp)
    ctx->pc = 0x15e364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 7));
    // 0x15e368: 0x24030109  addiu       $v1, $zero, 0x109
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x15e36c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e370: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15e370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e374: 0x90f5000a  lbu         $s5, 0xA($a3)
    ctx->pc = 0x15e374u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15e378: 0x75001a  div         $zero, $v1, $s5
    ctx->pc = 0x15e378u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15e37c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15E37Cu;
    {
        const bool branch_taken_0x15e37c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e37c) {
            ctx->pc = 0x15E380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E37Cu;
            // 0x15e380: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E384u;
            goto label_15e384;
        }
    }
    ctx->pc = 0x15E384u;
label_15e384:
    // 0x15e384: 0x8e72017c  lw          $s2, 0x17C($s3)
    ctx->pc = 0x15e384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x15e388: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x15e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
    // 0x15e38c: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x15e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
    // 0x15e390: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x15e390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    // 0x15e394: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x15e394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
    // 0x15e398: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x15e398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
    // 0x15e39c: 0x1812  mflo        $v1
    ctx->pc = 0x15e39cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x15e3a0: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x15e3a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3a4: 0x12400220  beqz        $s2, . + 4 + (0x220 << 2)
    ctx->pc = 0x15E3A4u;
    {
        const bool branch_taken_0x15e3a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3A4u;
            // 0x15e3a8: 0xafb7029c  sw          $s7, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3a4) {
            ctx->pc = 0x15EC28u;
            goto label_15ec28;
        }
    }
    ctx->pc = 0x15E3ACu;
    // 0x15e3ac: 0x8643002c  lh          $v1, 0x2C($s2)
    ctx->pc = 0x15e3acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_15e3b0:
    // 0x15e3b0: 0x86420028  lh          $v0, 0x28($s2)
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x15e3b4: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x15e3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e3b8: 0x12c00218  beqz        $s6, . + 4 + (0x218 << 2)
    ctx->pc = 0x15E3B8u;
    {
        const bool branch_taken_0x15e3b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3B8u;
            // 0x15e3bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3b8) {
            ctx->pc = 0x15EC1Cu;
            goto label_15ec1c;
        }
    }
    ctx->pc = 0x15E3C0u;
    // 0x15e3c0: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x15e3c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x15e3c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15e3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e3c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15e3c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15e3cc: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x15e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x15e3d0: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x15e3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15e3d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15e3d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e3dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e3e0: 0x0  nop
    ctx->pc = 0x15e3e0u;
    // NOP
    // 0x15e3e4: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x15E3E4u;
    {
        const bool branch_taken_0x15e3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E3E4u;
            // 0x15e3e8: 0x8fa20284  lw          $v0, 0x284($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3e4) {
            ctx->pc = 0x15E608u;
            goto label_15e608;
        }
    }
    ctx->pc = 0x15E3ECu;
    // 0x15e3ec: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x15e3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15e3f0: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x15e3f0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x15e3f4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x15e3f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15e3f8: 0x26220360  addiu       $v0, $s1, 0x360
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x15e3fc: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x15e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
    // 0x15e400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15e400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e404: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x15e408: 0xdba202d0  lqc2        $vf2, 0x2D0($sp)
    ctx->pc = 0x15e408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x15e40c: 0x4a220b3c  vmove.w     $vf2, $vf1
    ctx->pc = 0x15e40cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[1];
    // 0x15e410: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E410u;
    {
        const bool branch_taken_0x15e410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E410u;
            // 0x15e414: 0xfba202d0  sqc2        $vf2, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e410) {
            ctx->pc = 0x15E420u;
            goto label_15e420;
        }
    }
    ctx->pc = 0x15E418u;
    // 0x15e418: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x15e418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e41c: 0x0  nop
    ctx->pc = 0x15e41cu;
    // NOP
label_15e420:
    // 0x15e420: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x15e420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x15e424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e428: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E428u;
    {
        const bool branch_taken_0x15e428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E428u;
            // 0x15e42c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e428) {
            ctx->pc = 0x15E438u;
            goto label_15e438;
        }
    }
    ctx->pc = 0x15E430u;
    // 0x15e430: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E430u;
    {
        const bool branch_taken_0x15e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E430u;
            // 0x15e434: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e430) {
            ctx->pc = 0x15E454u;
            goto label_15e454;
        }
    }
    ctx->pc = 0x15E438u;
label_15e438:
    // 0x15e438: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x15e438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x15e43c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x15e43cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x15e440: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E440u;
    {
        const bool branch_taken_0x15e440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15e440) {
            ctx->pc = 0x15E444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E440u;
            // 0x15e444: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E458u;
            goto label_15e458;
        }
    }
    ctx->pc = 0x15E448u;
    // 0x15e448: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x15E448u;
    SET_GPR_U32(ctx, 31, 0x15E450u);
    ctx->pc = 0x15E44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E448u;
            // 0x15e44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E450u; }
        if (ctx->pc != 0x15E450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E450u; }
        if (ctx->pc != 0x15E450u) { return; }
    }
    ctx->pc = 0x15E450u;
    // 0x15e450: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15e454:
    // 0x15e454: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x15e454u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_15e458:
    // 0x15e458: 0xde0200f0  ld          $v0, 0xF0($s0)
    ctx->pc = 0x15e458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x15e45c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x15e45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15e460: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15E460u;
    {
        const bool branch_taken_0x15e460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E460u;
            // 0x15e464: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e460) {
            ctx->pc = 0x15E49Cu;
            goto label_15e49c;
        }
    }
    ctx->pc = 0x15E468u;
    // 0x15e468: 0xc0614c6  jal         func_185318
    ctx->pc = 0x15E468u;
    SET_GPR_U32(ctx, 31, 0x15E470u);
    ctx->pc = 0x15E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E468u;
            // 0x15e46c: 0xfe0300f0  sd          $v1, 0xF0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E470u; }
        if (ctx->pc != 0x15E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E470u; }
        if (ctx->pc != 0x15E470u) { return; }
    }
    ctx->pc = 0x15E470u;
    // 0x15e470: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x15e470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15e474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e47c: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x15e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x15e480: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x15e480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x15e484: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x15e484u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x15e488: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x15e488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x15e48c: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x15e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x15e490: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x15e490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x15e494: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x15E494u;
    SET_GPR_U32(ctx, 31, 0x15E49Cu);
    ctx->pc = 0x15E498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E494u;
            // 0x15e498: 0x7e0200e0  sq          $v0, 0xE0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E49Cu; }
        if (ctx->pc != 0x15E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E49Cu; }
        if (ctx->pc != 0x15E49Cu) { return; }
    }
    ctx->pc = 0x15E49Cu;
label_15e49c:
    // 0x15e49c: 0xdba302d0  lqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x15e49cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x15e4a0: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x15e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x15e4a4: 0xda0100b0  lqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x15e4a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x15e4a8: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x15e4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15e4ac: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x15e4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15e4b0: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x15e4b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e4b4: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x15e4b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15e4b8: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x15e4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15e4bc: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x15e4bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15e4c0: 0x4be3084b  vmaddw.xyzw $vf1, $vf1, $vf3w
    ctx->pc = 0x15e4c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15e4c4: 0xdba302c0  lqc2        $vf3, 0x2C0($sp)
    ctx->pc = 0x15e4c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x15e4c8: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x15e4cc: 0x4a23089b  vmulw.w     $vf2, $vf1, $vf3w
    ctx->pc = 0x15e4ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15e4d0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x15e4d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e4d4: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x15e4d4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x15e4d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15e4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15e4dc: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x15e4dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15e4e0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x15e4e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15e4e4: 0xc6250384  lwc1        $f5, 0x384($s1)
    ctx->pc = 0x15e4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15e4e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15e4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15e4ec: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15e4f0: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x15e4f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x15e4f4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x15e4f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15e4f8: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x15e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x15e4fc: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x15e4fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15e500: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x15e500u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x15e504: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x15e504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x15e508: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x15e508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e50c: 0x0  nop
    ctx->pc = 0x15e50cu;
    // NOP
    // 0x15e510: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x15E510u;
    {
        const bool branch_taken_0x15e510 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E510u;
            // 0x15e514: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e510) {
            ctx->pc = 0x15E5C8u;
            goto label_15e5c8;
        }
    }
    ctx->pc = 0x15E518u;
    // 0x15e518: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x15e518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x15e51c: 0xc6210388  lwc1        $f1, 0x388($s1)
    ctx->pc = 0x15e51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15e520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e524: 0x0  nop
    ctx->pc = 0x15e524u;
    // NOP
    // 0x15e528: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
    ctx->pc = 0x15E528u;
    {
        const bool branch_taken_0x15e528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e528) {
            ctx->pc = 0x15E52Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E528u;
            // 0x15e52c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E604u;
            goto label_15e604;
        }
    }
    ctx->pc = 0x15E530u;
    // 0x15e530: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x15e530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e534: 0x0  nop
    ctx->pc = 0x15e534u;
    // NOP
    // 0x15e538: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E538u;
    {
        const bool branch_taken_0x15e538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e538) {
            ctx->pc = 0x15E53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E538u;
            // 0x15e53c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E540u;
            goto label_15e540;
        }
    }
    ctx->pc = 0x15E540u;
label_15e540:
    // 0x15e540: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x15e540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e544: 0x0  nop
    ctx->pc = 0x15e544u;
    // NOP
    // 0x15e548: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E548u;
    {
        const bool branch_taken_0x15e548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e548) {
            ctx->pc = 0x15E54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E548u;
            // 0x15e54c: 0x34630010  ori         $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E550u;
            goto label_15e550;
        }
    }
    ctx->pc = 0x15E550u;
label_15e550:
    // 0x15e550: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x15e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e554: 0xc62102c8  lwc1        $f1, 0x2C8($s1)
    ctx->pc = 0x15e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e558: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x15e558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x15e55c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x15e55cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x15e560: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15e560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15e564: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15e564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15e568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e56c: 0x0  nop
    ctx->pc = 0x15e56cu;
    // NOP
    // 0x15e570: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x15E570u;
    {
        const bool branch_taken_0x15e570 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E570u;
            // 0x15e574: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e570) {
            ctx->pc = 0x15E604u;
            goto label_15e604;
        }
    }
    ctx->pc = 0x15E578u;
    // 0x15e578: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x15e578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15e57c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15e57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e580: 0x0  nop
    ctx->pc = 0x15e580u;
    // NOP
    // 0x15e584: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E584u;
    {
        const bool branch_taken_0x15e584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e584) {
            ctx->pc = 0x15E588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E584u;
            // 0x15e588: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E58Cu;
            goto label_15e58c;
        }
    }
    ctx->pc = 0x15E58Cu;
label_15e58c:
    // 0x15e58c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x15e58cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x15e590: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15e590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e594: 0x0  nop
    ctx->pc = 0x15e594u;
    // NOP
    // 0x15e598: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E598u;
    {
        const bool branch_taken_0x15e598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e598) {
            ctx->pc = 0x15E59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E598u;
            // 0x15e59c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E5A0u;
            goto label_15e5a0;
        }
    }
    ctx->pc = 0x15E5A0u;
label_15e5a0:
    // 0x15e5a0: 0xc62002d4  lwc1        $f0, 0x2D4($s1)
    ctx->pc = 0x15e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e5a4: 0xc62102d8  lwc1        $f1, 0x2D8($s1)
    ctx->pc = 0x15e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e5a8: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x15e5a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x15e5ac: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x15e5acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x15e5b0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x15e5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15e5b4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15e5b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15e5b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e5b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e5bc: 0x0  nop
    ctx->pc = 0x15e5bcu;
    // NOP
    // 0x15e5c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x15E5C0u;
    {
        const bool branch_taken_0x15e5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e5c0) {
            ctx->pc = 0x15E5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5C0u;
            // 0x15e5c4: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E5D0u;
            goto label_15e5d0;
        }
    }
    ctx->pc = 0x15E5C8u;
label_15e5c8:
    // 0x15e5c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15E5C8u;
    {
        const bool branch_taken_0x15e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5C8u;
            // 0x15e5cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5c8) {
            ctx->pc = 0x15E604u;
            goto label_15e604;
        }
    }
    ctx->pc = 0x15E5D0u;
label_15e5d0:
    // 0x15e5d0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15e5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e5d4: 0x0  nop
    ctx->pc = 0x15e5d4u;
    // NOP
    // 0x15e5d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E5D8u;
    {
        const bool branch_taken_0x15e5d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e5d8) {
            ctx->pc = 0x15E5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5D8u;
            // 0x15e5dc: 0x34630008  ori         $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E5E0u;
            goto label_15e5e0;
        }
    }
    ctx->pc = 0x15E5E0u;
label_15e5e0:
    // 0x15e5e0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x15e5e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x15e5e4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x15e5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e5e8: 0x0  nop
    ctx->pc = 0x15e5e8u;
    // NOP
    // 0x15e5ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E5ECu;
    {
        const bool branch_taken_0x15e5ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e5ec) {
            ctx->pc = 0x15E5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5ECu;
            // 0x15e5f0: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E5F4u;
            goto label_15e5f4;
        }
    }
    ctx->pc = 0x15E5F4u;
label_15e5f4:
    // 0x15e5f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e5f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15e600: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15e600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_15e604:
    // 0x15e604: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15e604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e608:
    // 0x15e608: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E608u;
    {
        const bool branch_taken_0x15e608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E608u;
            // 0x15e60c: 0x8fa50288  lw          $a1, 0x288($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e608) {
            ctx->pc = 0x15E618u;
            goto label_15e618;
        }
    }
    ctx->pc = 0x15E610u;
    // 0x15e610: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x15E610u;
    {
        const bool branch_taken_0x15e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E610u;
            // 0x15e614: 0xafa5028c  sw          $a1, 0x28C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e610) {
            ctx->pc = 0x15EC1Cu;
            goto label_15ec1c;
        }
    }
    ctx->pc = 0x15E618u;
label_15e618:
    // 0x15e618: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x15E618u;
    {
        const bool branch_taken_0x15e618 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E618u;
            // 0x15e61c: 0x8fa6028c  lw          $a2, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e618) {
            ctx->pc = 0x15E658u;
            goto label_15e658;
        }
    }
    ctx->pc = 0x15E620u;
    // 0x15e620: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E620u;
    {
        const bool branch_taken_0x15e620 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E620u;
            // 0x15e624: 0x8fa702a4  lw          $a3, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e620) {
            ctx->pc = 0x15E648u;
            goto label_15e648;
        }
    }
    ctx->pc = 0x15E628u;
    // 0x15e628: 0x2f6102a  slt         $v0, $s7, $s6
    ctx->pc = 0x15e628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15e62c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E62Cu;
    {
        const bool branch_taken_0x15e62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e62c) {
            ctx->pc = 0x15E630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E62Cu;
            // 0x15e630: 0xafc70014  sw          $a3, 0x14($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E64Cu;
            goto label_15e64c;
        }
    }
    ctx->pc = 0x15E634u;
    // 0x15e634: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x15e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e638: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15e638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e63c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15E63Cu;
    {
        const bool branch_taken_0x15e63c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e63c) {
            ctx->pc = 0x15E650u;
            goto label_15e650;
        }
    }
    ctx->pc = 0x15E644u;
    // 0x15e644: 0x0  nop
    ctx->pc = 0x15e644u;
    // NOP
label_15e648:
    // 0x15e648: 0xafc70014  sw          $a3, 0x14($fp)
    ctx->pc = 0x15e648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 7));
label_15e64c:
    // 0x15e64c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15e64cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e650:
    // 0x15e650: 0x17c00140  bnez        $fp, . + 4 + (0x140 << 2)
    ctx->pc = 0x15E650u;
    {
        const bool branch_taken_0x15e650 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E650u;
            // 0x15e654: 0x8fa402a0  lw          $a0, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e650) {
            ctx->pc = 0x15EB54u;
            goto label_15eb54;
        }
    }
    ctx->pc = 0x15E658u;
label_15e658:
    // 0x15e658: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x15E658u;
    SET_GPR_U32(ctx, 31, 0x15E660u);
    ctx->pc = 0x15E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E658u;
            // 0x15e65c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E660u; }
        if (ctx->pc != 0x15E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E660u; }
        if (ctx->pc != 0x15E660u) { return; }
    }
    ctx->pc = 0x15E660u;
    // 0x15e660: 0xc057b3a  jal         func_15ECE8
    ctx->pc = 0x15E660u;
    SET_GPR_U32(ctx, 31, 0x15E668u);
    ctx->pc = 0x15ECE8u;
    if (runtime->hasFunction(0x15ECE8u)) {
        auto targetFn = runtime->lookupFunction(0x15ECE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E668u; }
        if (ctx->pc != 0x15E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ece8_0x15ed28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E668u; }
        if (ctx->pc != 0x15E668u) { return; }
    }
    ctx->pc = 0x15E668u;
    // 0x15e668: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15E668u;
    {
        const bool branch_taken_0x15e668 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E668u;
            // 0x15e66c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e668) {
            ctx->pc = 0x15E694u;
            goto label_15e694;
        }
    }
    ctx->pc = 0x15E670u;
    // 0x15e670: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x15e674: 0x8c85f168  lw          $a1, -0xE98($a0)
    ctx->pc = 0x15e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x15e678: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x15e67c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15e67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15e680: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15e680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15e684: 0x8c82f168  lw          $v0, -0xE98($a0)
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x15e688: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15e68c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E68Cu;
    {
        const bool branch_taken_0x15e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E68Cu;
            // 0x15e690: 0xac82f168  sw          $v0, -0xE98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e68c) {
            ctx->pc = 0x15E6B0u;
            goto label_15e6b0;
        }
    }
    ctx->pc = 0x15E694u;
label_15e694:
    // 0x15e694: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15e698: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15e698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15e69c: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x15e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x15e6a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15e6a4: 0x8c62f168  lw          $v0, -0xE98($v1)
    ctx->pc = 0x15e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x15e6a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15e6ac: 0xac62f168  sw          $v0, -0xE98($v1)
    ctx->pc = 0x15e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 2));
label_15e6b0:
    // 0x15e6b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15e6b4: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x15e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x15e6b8: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x15E6B8u;
    SET_GPR_U32(ctx, 31, 0x15E6C0u);
    ctx->pc = 0x15E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6B8u;
            // 0x15e6bc: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6C0u; }
        if (ctx->pc != 0x15E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6C0u; }
        if (ctx->pc != 0x15E6C0u) { return; }
    }
    ctx->pc = 0x15E6C0u;
    // 0x15e6c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15e6c4: 0x8c5ef168  lw          $fp, -0xE98($v0)
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963560)));
    // 0x15e6c8: 0x27c30020  addiu       $v1, $fp, 0x20
    ctx->pc = 0x15e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x15e6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6d0: 0x8fb7029c  lw          $s7, 0x29C($sp)
    ctx->pc = 0x15e6d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x15e6d4: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x15e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x15e6d8: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x15e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x15e6dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15e6e0: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x15E6E0u;
    SET_GPR_U32(ctx, 31, 0x15E6E8u);
    ctx->pc = 0x15E6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6E0u;
            // 0x15e6e4: 0xafa202a8  sw          $v0, 0x2A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6E8u; }
        if (ctx->pc != 0x15E6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6E8u; }
        if (ctx->pc != 0x15E6E8u) { return; }
    }
    ctx->pc = 0x15E6E8u;
    // 0x15e6e8: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x15E6E8u;
    SET_GPR_U32(ctx, 31, 0x15E6F0u);
    ctx->pc = 0x15E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6E8u;
            // 0x15e6ec: 0xafa002a0  sw          $zero, 0x2A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6F0u; }
        if (ctx->pc != 0x15E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E6F0u; }
        if (ctx->pc != 0x15E6F0u) { return; }
    }
    ctx->pc = 0x15E6F0u;
    // 0x15e6f0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x15e6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15e6f4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15e6f8: 0xc460c658  lwc1        $f0, -0x39A8($v1)
    ctx->pc = 0x15e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e6fc: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x15e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x15e700: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x15e700u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x15e704: 0xe7c00018  swc1        $f0, 0x18($fp)
    ctx->pc = 0x15e704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 24), bits); }
    // 0x15e708: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x15e708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15e70c: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x15e710: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x15e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e714: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x15e714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
    // 0x15e718: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x15e718u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x15e71c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15e71cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15e720: 0x1060010b  beqz        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x15E720u;
    {
        const bool branch_taken_0x15e720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E720u;
            // 0x15e724: 0xe7c0001c  swc1        $f0, 0x1C($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e720) {
            ctx->pc = 0x15EB50u;
            goto label_15eb50;
        }
    }
    ctx->pc = 0x15E728u;
    // 0x15e728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e72c: 0x148200ce  bne         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x15E72Cu;
    {
        const bool branch_taken_0x15e72c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E72Cu;
            // 0x15e730: 0x8fa702b0  lw          $a3, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e72c) {
            ctx->pc = 0x15EA68u;
            goto label_15ea68;
        }
    }
    ctx->pc = 0x15E734u;
    // 0x15e734: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x15E734u;
    SET_GPR_U32(ctx, 31, 0x15E73Cu);
    ctx->pc = 0x15E738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E734u;
            // 0x15e738: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E73Cu; }
        if (ctx->pc != 0x15E73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E73Cu; }
        if (ctx->pc != 0x15E73Cu) { return; }
    }
    ctx->pc = 0x15E73Cu;
    // 0x15e73c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15e740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e744: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x15e744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x15e748: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x15e748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e74c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15e750: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15e754: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15e758: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x15E758u;
    SET_GPR_U32(ctx, 31, 0x15E760u);
    ctx->pc = 0x15E75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E758u;
            // 0x15e75c: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E760u; }
        if (ctx->pc != 0x15E760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E760u; }
        if (ctx->pc != 0x15E760u) { return; }
    }
    ctx->pc = 0x15E760u;
    // 0x15e760: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15e764: 0x32840100  andi        $a0, $s4, 0x100
    ctx->pc = 0x15e764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
    // 0x15e768: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x15e768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15e76c: 0xafa502ac  sw          $a1, 0x2AC($sp)
    ctx->pc = 0x15e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 5));
    // 0x15e770: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x15e770u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x15e774: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15e778: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x15e778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15e77c: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x15e780: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x15e780u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x15e784: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x15e784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x15e788: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x15e788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15e78c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x15e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x15e790: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x15e790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15e794: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15E794u;
    {
        const bool branch_taken_0x15e794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E794u;
            // 0x15e798: 0x7ca20030  sq          $v0, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e794) {
            ctx->pc = 0x15E7B8u;
            goto label_15e7b8;
        }
    }
    ctx->pc = 0x15E79Cu;
    // 0x15e79c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x15e79cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x15e7a0: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x15e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x15e7a4: 0xae02f168  sw          $v0, -0xE98($s0)
    ctx->pc = 0x15e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
    // 0x15e7a8: 0x7ca60040  sq          $a2, 0x40($a1)
    ctx->pc = 0x15e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 6));
    // 0x15e7ac: 0x7ba70230  lq          $a3, 0x230($sp)
    ctx->pc = 0x15e7acu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x15e7b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15E7B0u;
    {
        const bool branch_taken_0x15e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7B0u;
            // 0x15e7b4: 0x7ca70050  sq          $a3, 0x50($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7b0) {
            ctx->pc = 0x15E7D0u;
            goto label_15e7d0;
        }
    }
    ctx->pc = 0x15E7B8u;
label_15e7b8:
    // 0x15e7b8: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x15e7b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x15e7bc: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x15e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x15e7c0: 0xae02f168  sw          $v0, -0xE98($s0)
    ctx->pc = 0x15e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
    // 0x15e7c4: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x15e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
    // 0x15e7c8: 0x7ba40250  lq          $a0, 0x250($sp)
    ctx->pc = 0x15e7c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x15e7cc: 0x7ca40050  sq          $a0, 0x50($a1)
    ctx->pc = 0x15e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 4));
label_15e7d0:
    // 0x15e7d0: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15e7d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15e7d8: 0x7ba60260  lq          $a2, 0x260($sp)
    ctx->pc = 0x15e7d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x15e7dc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15e7e0: 0xaca21010  sw          $v0, 0x1010($a1)
    ctx->pc = 0x15e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4112), GPR_U32(ctx, 2));
    // 0x15e7e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x15e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x15e7e8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x15e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x15e7ec: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x15e7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e7f0: 0x7ba30270  lq          $v1, 0x270($sp)
    ctx->pc = 0x15e7f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x15e7f4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x15e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15e7f8: 0x8fa70284  lw          $a3, 0x284($sp)
    ctx->pc = 0x15e7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x15e7fc: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x15e7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x15e800: 0x8e07f168  lw          $a3, -0xE98($s0)
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15e804: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x15e804u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x15e808: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x15e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x15e80c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15e810: 0xac621014  sw          $v0, 0x1014($v1)
    ctx->pc = 0x15e810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4116), GPR_U32(ctx, 2));
    // 0x15e814: 0xace50020  sw          $a1, 0x20($a3)
    ctx->pc = 0x15e814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 5));
    // 0x15e818: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x15e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x15e81c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x15e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x15e820: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x15e820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e824: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x15e824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x15e828: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x15e828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x15e82c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x15e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x15e830: 0x1088000b  beq         $a0, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E830u;
    {
        const bool branch_taken_0x15e830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x15E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E830u;
            // 0x15e834: 0xae03f168  sw          $v1, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e830) {
            ctx->pc = 0x15E860u;
            goto label_15e860;
        }
    }
    ctx->pc = 0x15E838u;
    // 0x15e838: 0xdd020058  ld          $v0, 0x58($t0)
    ctx->pc = 0x15e838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x15e83c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15e840: 0xafa80210  sw          $t0, 0x210($sp)
    ctx->pc = 0x15e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 8));
    // 0x15e844: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x15e844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x15e848: 0xfce20030  sd          $v0, 0x30($a3)
    ctx->pc = 0x15e848u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 2));
    // 0x15e84c: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x15e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x15e850: 0xdd020050  ld          $v0, 0x50($t0)
    ctx->pc = 0x15e850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x15e854: 0xfd440018  sd          $a0, 0x18($t2)
    ctx->pc = 0x15e854u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 4));
    // 0x15e858: 0xfd420010  sd          $v0, 0x10($t2)
    ctx->pc = 0x15e858u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 2));
    // 0x15e85c: 0x24ea0050  addiu       $t2, $a3, 0x50
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_15e860:
    // 0x15e860: 0x141a83  sra         $v1, $s4, 10
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 10));
    // 0x15e864: 0x3282000c  andi        $v0, $s4, 0xC
    ctx->pc = 0x15e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)12);
    // 0x15e868: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15e868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15e86c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x15e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x15e870: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x15e870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x15e874: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x15e874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x15e878: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x15e87c: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15E87Cu;
    {
        const bool branch_taken_0x15e87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E87Cu;
            // 0x15e880: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e87c) {
            ctx->pc = 0x15E918u;
            goto label_15e918;
        }
    }
    ctx->pc = 0x15E884u;
    // 0x15e884: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x15e888: 0x3442360b  ori         $v0, $v0, 0x360B
    ctx->pc = 0x15e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13835);
    // 0x15e88c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x15e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15e890: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x15e890u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x15e894: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15e894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15e898: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x15e898u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x15e89c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e8a0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15e8a4: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x15e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x15e8a8: 0x8fa70290  lw          $a3, 0x290($sp)
    ctx->pc = 0x15e8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x15e8ac: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x15e8acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15e8b0: 0xfd440018  sd          $a0, 0x18($t2)
    ctx->pc = 0x15e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 4));
    // 0x15e8b4: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x15e8b8: 0x2404ffe3  addiu       $a0, $zero, -0x1D
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x15e8bc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e8c0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e8c4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e8c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e8cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e8d0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x15e8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x15e8d4: 0xfd420010  sd          $v0, 0x10($t2)
    ctx->pc = 0x15e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 2));
    // 0x15e8d8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x15e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x15e8dc: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x15e8dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15e8e0: 0xfd430028  sd          $v1, 0x28($t2)
    ctx->pc = 0x15e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 3));
    // 0x15e8e4: 0xfd420020  sd          $v0, 0x20($t2)
    ctx->pc = 0x15e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
    // 0x15e8e8: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x15e8e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15e8ec: 0xfd450038  sd          $a1, 0x38($t2)
    ctx->pc = 0x15e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 5));
    // 0x15e8f0: 0xfd420030  sd          $v0, 0x30($t2)
    ctx->pc = 0x15e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 2));
    // 0x15e8f4: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x15e8f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x15e8f8: 0xfd460048  sd          $a2, 0x48($t2)
    ctx->pc = 0x15e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 72), GPR_U64(ctx, 6));
    // 0x15e8fc: 0xfd420040  sd          $v0, 0x40($t2)
    ctx->pc = 0x15e8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 2));
    // 0x15e900: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x15e900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15e904: 0xfd470058  sd          $a3, 0x58($t2)
    ctx->pc = 0x15e904u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 88), GPR_U64(ctx, 7));
    // 0x15e908: 0xfd420050  sd          $v0, 0x50($t2)
    ctx->pc = 0x15e908u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 80), GPR_U64(ctx, 2));
    // 0x15e90c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15E90Cu;
    {
        const bool branch_taken_0x15e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E90Cu;
            // 0x15e910: 0x254a0060  addiu       $t2, $t2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e90c) {
            ctx->pc = 0x15E960u;
            goto label_15e960;
        }
    }
    ctx->pc = 0x15E914u;
    // 0x15e914: 0x0  nop
    ctx->pc = 0x15e914u;
    // NOP
label_15e918:
    // 0x15e918: 0xdfa50208  ld          $a1, 0x208($sp)
    ctx->pc = 0x15e918u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x15e91c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x15e920: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15e924: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15e928: 0xa84825  or          $t1, $a1, $t0
    ctx->pc = 0x15e928u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x15e92c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15e92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e930: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15e934: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x15e934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x15e938: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x15e938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15e93c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x15e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x15e940: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x15e940u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x15e944: 0xfd490010  sd          $t1, 0x10($t2)
    ctx->pc = 0x15e944u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 9));
    // 0x15e948: 0xfd440018  sd          $a0, 0x18($t2)
    ctx->pc = 0x15e948u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 4));
    // 0x15e94c: 0xfd450020  sd          $a1, 0x20($t2)
    ctx->pc = 0x15e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 5));
    // 0x15e950: 0xfd460028  sd          $a2, 0x28($t2)
    ctx->pc = 0x15e950u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 6));
    // 0x15e954: 0xfd470030  sd          $a3, 0x30($t2)
    ctx->pc = 0x15e954u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 7));
    // 0x15e958: 0xfd480038  sd          $t0, 0x38($t2)
    ctx->pc = 0x15e958u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 8));
    // 0x15e95c: 0x254a0040  addiu       $t2, $t2, 0x40
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
label_15e960:
    // 0x15e960: 0x32826040  andi        $v0, $s4, 0x6040
    ctx->pc = 0x15e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)24640);
    // 0x15e964: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E964u;
    {
        const bool branch_taken_0x15e964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E964u;
            // 0x15e968: 0x32830003  andi        $v1, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e964) {
            ctx->pc = 0x15E9DCu;
            goto label_15e9dc;
        }
    }
    ctx->pc = 0x15E96Cu;
    // 0x15e96c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e970: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15E970u;
    {
        const bool branch_taken_0x15e970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E970u;
            // 0x15e974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e970) {
            ctx->pc = 0x15E9DCu;
            goto label_15e9dc;
        }
    }
    ctx->pc = 0x15E978u;
    // 0x15e978: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15E978u;
    {
        const bool branch_taken_0x15e978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e978) {
            ctx->pc = 0x15E9ACu;
            goto label_15e9ac;
        }
    }
    ctx->pc = 0x15E980u;
    // 0x15e980: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E980u;
    {
        const bool branch_taken_0x15e980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E980u;
            // 0x15e984: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e980) {
            ctx->pc = 0x15E998u;
            goto label_15e998;
        }
    }
    ctx->pc = 0x15E988u;
    // 0x15e988: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E988u;
    {
        const bool branch_taken_0x15e988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E988u;
            // 0x15e98c: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e988) {
            ctx->pc = 0x15E9C0u;
            goto label_15e9c0;
        }
    }
    ctx->pc = 0x15E990u;
    // 0x15e990: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15E990u;
    {
        const bool branch_taken_0x15e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E990u;
            // 0x15e994: 0xfd420008  sd          $v0, 0x8($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e990) {
            ctx->pc = 0x15E9D8u;
            goto label_15e9d8;
        }
    }
    ctx->pc = 0x15E998u;
label_15e998:
    // 0x15e998: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15e99c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15e9a0: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x15e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x15e9a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15E9A4u;
    {
        const bool branch_taken_0x15e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9A4u;
            // 0x15e9a8: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9a4) {
            ctx->pc = 0x15E9D0u;
            goto label_15e9d0;
        }
    }
    ctx->pc = 0x15E9ACu;
label_15e9ac:
    // 0x15e9ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15e9b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15e9b4: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x15e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x15e9b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E9B8u;
    {
        const bool branch_taken_0x15e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9B8u;
            // 0x15e9bc: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9b8) {
            ctx->pc = 0x15E9D0u;
            goto label_15e9d0;
        }
    }
    ctx->pc = 0x15E9C0u;
label_15e9c0:
    // 0x15e9c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15e9c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15e9c8: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x15e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x15e9cc: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x15e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_15e9d0:
    // 0x15e9d0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x15e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15e9d4: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x15e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
label_15e9d8:
    // 0x15e9d8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x15e9d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_15e9dc:
    // 0x15e9dc: 0x143443  sra         $a2, $s4, 17
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 17));
    // 0x15e9e0: 0x8fa70204  lw          $a3, 0x204($sp)
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x15e9e4: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x15e9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x15e9e8: 0x10c7000e  beq         $a2, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x15E9E8u;
    {
        const bool branch_taken_0x15e9e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x15E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9E8u;
            // 0x15e9ec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9e8) {
            ctx->pc = 0x15EA24u;
            goto label_15ea24;
        }
    }
    ctx->pc = 0x15E9F0u;
    // 0x15e9f0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15e9f4: 0x9c43f19c  lwu         $v1, -0xE64($v0)
    ctx->pc = 0x15e9f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963612)));
    // 0x15e9f8: 0x38c40001  xori        $a0, $a2, 0x1
    ctx->pc = 0x15e9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x15e9fc: 0x9ca2f1a0  lwu         $v0, -0xE60($a1)
    ctx->pc = 0x15e9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294963616)));
    // 0x15ea00: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15ea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15ea04: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15ea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15ea08: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x15ea0c: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x15ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x15ea10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15ea14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15ea14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15ea18: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x15ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
    // 0x15ea1c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x15ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x15ea20: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_15ea24:
    // 0x15ea24: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x15ea24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x15ea28: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ea2c: 0xae0af168  sw          $t2, -0xE98($s0)
    ctx->pc = 0x15ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 10));
    // 0x15ea30: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x15ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x15ea34: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x15ea34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x15ea38: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ea3c: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x15ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x15ea40: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x15ea40u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x15ea44: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x15ea44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15ea48: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x15EA48u;
    SET_GPR_U32(ctx, 31, 0x15EA50u);
    ctx->pc = 0x15EA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA48u;
            // 0x15ea4c: 0xafa302b0  sw          $v1, 0x2B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA50u; }
        if (ctx->pc != 0x15EA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA50u; }
        if (ctx->pc != 0x15EA50u) { return; }
    }
    ctx->pc = 0x15EA50u;
    // 0x15ea50: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x15EA50u;
    SET_GPR_U32(ctx, 31, 0x15EA58u);
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA58u; }
        if (ctx->pc != 0x15EA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA58u; }
        if (ctx->pc != 0x15EA58u) { return; }
    }
    ctx->pc = 0x15EA58u;
    // 0x15ea58: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x15EA58u;
    SET_GPR_U32(ctx, 31, 0x15EA60u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA60u; }
        if (ctx->pc != 0x15EA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA60u; }
        if (ctx->pc != 0x15EA60u) { return; }
    }
    ctx->pc = 0x15EA60u;
    // 0x15ea60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15EA60u;
    {
        const bool branch_taken_0x15ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA60u;
            // 0x15ea64: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea60) {
            ctx->pc = 0x15EADCu;
            goto label_15eadc;
        }
    }
    ctx->pc = 0x15EA68u;
label_15ea68:
    // 0x15ea68: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x15ea6c: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x15ea70: 0xe22825  or          $a1, $a3, $v0
    ctx->pc = 0x15ea70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x15ea74: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x15ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x15ea78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15EA78u;
    {
        const bool branch_taken_0x15ea78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA78u;
            // 0x15ea7c: 0x8fa602b0  lw          $a2, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea78) {
            ctx->pc = 0x15EAA8u;
            goto label_15eaa8;
        }
    }
    ctx->pc = 0x15EA80u;
    // 0x15ea80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15ea84: 0x0  nop
    ctx->pc = 0x15ea84u;
    // NOP
label_15ea88:
    // 0x15ea88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x15ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x15ea8c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x15ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x15ea90: 0x0  nop
    ctx->pc = 0x15ea90u;
    // NOP
    // 0x15ea94: 0x0  nop
    ctx->pc = 0x15ea94u;
    // NOP
    // 0x15ea98: 0x0  nop
    ctx->pc = 0x15ea98u;
    // NOP
    // 0x15ea9c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15EA9Cu;
    {
        const bool branch_taken_0x15ea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ea9c) {
            ctx->pc = 0x15EAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA9Cu;
            // 0x15eaa0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15EA88u;
            runtime->cooperativeGuestYield();
            goto label_15ea88;
        }
    }
    ctx->pc = 0x15EAA4u;
    // 0x15eaa4: 0x8fa602b0  lw          $a2, 0x2B0($sp)
    ctx->pc = 0x15eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_15eaa8:
    // 0x15eaa8: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x15eaac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15eab0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x15eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15eab4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15eab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15eab8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x15eabc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15eabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15eac0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x15eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x15eac4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15eac8: 0xae02f168  sw          $v0, -0xE98($s0)
    ctx->pc = 0x15eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
    // 0x15eacc: 0x8fa702ac  lw          $a3, 0x2AC($sp)
    ctx->pc = 0x15eaccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x15ead0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15ead4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x15ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x15ead8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_15eadc:
    // 0x15eadc: 0x8c47006c  lw          $a3, 0x6C($v0)
    ctx->pc = 0x15eadcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x15eae0: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x15eae4: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x15eae8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x15eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x15eaec: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15eaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x15eaf0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x15eaf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15eaf4: 0x8cc4f168  lw          $a0, -0xE98($a2)
    ctx->pc = 0x15eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x15eaf8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x15eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x15eafc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15EAFCu;
    {
        const bool branch_taken_0x15eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAFCu;
            // 0x15eb00: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eafc) {
            ctx->pc = 0x15EB28u;
            goto label_15eb28;
        }
    }
    ctx->pc = 0x15EB04u;
    // 0x15eb04: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_15eb08:
    // 0x15eb08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x15eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x15eb0c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x15eb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x15eb10: 0x0  nop
    ctx->pc = 0x15eb10u;
    // NOP
    // 0x15eb14: 0x0  nop
    ctx->pc = 0x15eb14u;
    // NOP
    // 0x15eb18: 0x0  nop
    ctx->pc = 0x15eb18u;
    // NOP
    // 0x15eb1c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15EB1Cu;
    {
        const bool branch_taken_0x15eb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eb1c) {
            ctx->pc = 0x15EB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB1Cu;
            // 0x15eb20: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15EB08u;
            runtime->cooperativeGuestYield();
            goto label_15eb08;
        }
    }
    ctx->pc = 0x15EB24u;
    // 0x15eb24: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15eb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15eb28:
    // 0x15eb28: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x15eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15eb2c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x15eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x15eb30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x15eb34: 0x34638016  ori         $v1, $v1, 0x8016
    ctx->pc = 0x15eb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32790);
    // 0x15eb38: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x15eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x15eb3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15eb40: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15eb44: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15eb48: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x15eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x15eb4c: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x15eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
label_15eb50:
    // 0x15eb50: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_15eb54:
    // 0x15eb54: 0x2d53018  mult        $a2, $s6, $s5
    ctx->pc = 0x15eb54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15eb58: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x15eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x15eb5c: 0x2f6b823  subu        $s7, $s7, $s6
    ctx->pc = 0x15eb5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x15eb60: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x15eb64: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x15eb64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15eb68: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x15eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
    // 0x15eb6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15eb70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EB70u;
    {
        const bool branch_taken_0x15eb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EB70u;
            // 0x15eb74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb70) {
            ctx->pc = 0x15EB7Cu;
            goto label_15eb7c;
        }
    }
    ctx->pc = 0x15EB78u;
    // 0x15eb78: 0x8e640158  lw          $a0, 0x158($s3)
    ctx->pc = 0x15eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
label_15eb7c:
    // 0x15eb7c: 0x8642002e  lh          $v0, 0x2E($s2)
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x15eb80: 0x86430028  lh          $v1, 0x28($s2)
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x15eb84: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x15eb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15eb88: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x15eb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15eb8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15eb90: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15eb94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15eb98: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15eb9c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x15eb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15eba0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x15eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x15eba4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x15eba8: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x15eba8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x15ebac: 0x8d25f168  lw          $a1, -0xE98($t1)
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294963560)));
    // 0x15ebb0: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x15ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x15ebb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15EBB4u;
    {
        const bool branch_taken_0x15ebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBB4u;
            // 0x15ebb8: 0x8fa402a4  lw          $a0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebb4) {
            ctx->pc = 0x15EBE0u;
            goto label_15ebe0;
        }
    }
    ctx->pc = 0x15EBBCu;
    // 0x15ebbc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_15ebc0:
    // 0x15ebc0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15ebc4: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x15ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x15ebc8: 0x0  nop
    ctx->pc = 0x15ebc8u;
    // NOP
    // 0x15ebcc: 0x0  nop
    ctx->pc = 0x15ebccu;
    // NOP
    // 0x15ebd0: 0x0  nop
    ctx->pc = 0x15ebd0u;
    // NOP
    // 0x15ebd4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15EBD4u;
    {
        const bool branch_taken_0x15ebd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ebd4) {
            ctx->pc = 0x15EBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EBD4u;
            // 0x15ebd8: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15EBC0u;
            runtime->cooperativeGuestYield();
            goto label_15ebc0;
        }
    }
    ctx->pc = 0x15EBDCu;
    // 0x15ebdc: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x15ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_15ebe0:
    // 0x15ebe0: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x15ebe4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x15ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x15ebe8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15ebec: 0x8fa702a4  lw          $a3, 0x2A4($sp)
    ctx->pc = 0x15ebecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x15ebf0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x15ebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15ebf4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15ebf8: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15ebfc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x15ec00: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15ec04: 0xafa702a4  sw          $a3, 0x2A4($sp)
    ctx->pc = 0x15ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 7));
    // 0x15ec08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15ec0c: 0xad24f168  sw          $a0, -0xE98($t1)
    ctx->pc = 0x15ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294963560), GPR_U32(ctx, 4));
    // 0x15ec10: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x15ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x15ec14: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x15ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x15ec18: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_15ec1c:
    // 0x15ec1c: 0x8e520020  lw          $s2, 0x20($s2)
    ctx->pc = 0x15ec1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x15ec20: 0x5640fde3  bnel        $s2, $zero, . + 4 + (-0x21D << 2)
    ctx->pc = 0x15EC20u;
    {
        const bool branch_taken_0x15ec20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec20) {
            ctx->pc = 0x15EC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC20u;
            // 0x15ec24: 0x8643002c  lh          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E3B0u;
            runtime->cooperativeGuestYield();
            goto label_15e3b0;
        }
    }
    ctx->pc = 0x15EC28u;
label_15ec28:
    // 0x15ec28: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EC28u;
    {
        const bool branch_taken_0x15ec28 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC28u;
            // 0x15ec2c: 0x8fa202a0  lw          $v0, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec28) {
            ctx->pc = 0x15EC40u;
            goto label_15ec40;
        }
    }
    ctx->pc = 0x15EC30u;
    // 0x15ec30: 0x551818  mult        $v1, $v0, $s5
    ctx->pc = 0x15ec30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ec34: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x15ec38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ec3c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x15ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_15ec40:
    // 0x15ec40: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15ec44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ec48: 0x1460fcef  bnez        $v1, . + 4 + (-0x311 << 2)
    ctx->pc = 0x15EC48u;
    {
        const bool branch_taken_0x15ec48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC48u;
            // 0x15ec4c: 0xafa30280  sw          $v1, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec48) {
            ctx->pc = 0x15E008u;
            runtime->cooperativeGuestYield();
            goto label_15e008;
        }
    }
    ctx->pc = 0x15EC50u;
label_15ec50:
    // 0x15ec50: 0xc057b3a  jal         func_15ECE8
    ctx->pc = 0x15EC50u;
    SET_GPR_U32(ctx, 31, 0x15EC58u);
    ctx->pc = 0x15ECE8u;
    if (runtime->hasFunction(0x15ECE8u)) {
        auto targetFn = runtime->lookupFunction(0x15ECE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC58u; }
        if (ctx->pc != 0x15EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ece8_0x15ed28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC58u; }
        if (ctx->pc != 0x15EC58u) { return; }
    }
    ctx->pc = 0x15EC58u;
    // 0x15ec58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ec58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec5c: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15EC5Cu;
    {
        const bool branch_taken_0x15ec5c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x15EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC5Cu;
            // 0x15ec60: 0x8fa40214  lw          $a0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec5c) {
            ctx->pc = 0x15ECA0u;
            goto label_15eca0;
        }
    }
    ctx->pc = 0x15EC64u;
    // 0x15ec64: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x15EC64u;
    SET_GPR_U32(ctx, 31, 0x15EC6Cu);
    ctx->pc = 0x15EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC64u;
            // 0x15ec68: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC6Cu; }
        if (ctx->pc != 0x15EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC6Cu; }
        if (ctx->pc != 0x15EC6Cu) { return; }
    }
    ctx->pc = 0x15EC6Cu;
    // 0x15ec6c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15ec70: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x15ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x15ec74: 0x8c85f168  lw          $a1, -0xE98($a0)
    ctx->pc = 0x15ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x15ec78: 0x1018c2  srl         $v1, $s0, 3
    ctx->pc = 0x15ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x15ec7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15ec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15ec80: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x15ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
    // 0x15ec84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x15ec88: 0x8c82f168  lw          $v0, -0xE98($a0)
    ctx->pc = 0x15ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x15ec8c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x15ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15ec90: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x15ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x15ec94: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x15EC94u;
    SET_GPR_U32(ctx, 31, 0x15EC9Cu);
    ctx->pc = 0x15EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EC94u;
            // 0x15ec98: 0xac83f168  sw          $v1, -0xE98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC9Cu; }
        if (ctx->pc != 0x15EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EC9Cu; }
        if (ctx->pc != 0x15EC9Cu) { return; }
    }
    ctx->pc = 0x15EC9Cu;
    // 0x15ec9c: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x15ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_15eca0:
    // 0x15eca0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ECA0u;
    {
        const bool branch_taken_0x15eca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECA0u;
            // 0x15eca4: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eca0) {
            ctx->pc = 0x15ECB4u;
            goto label_15ecb4;
        }
    }
    ctx->pc = 0x15ECA8u;
    // 0x15eca8: 0xc059ade  jal         func_166B78
    ctx->pc = 0x15ECA8u;
    SET_GPR_U32(ctx, 31, 0x15ECB0u);
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECB0u; }
        if (ctx->pc != 0x15ECB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ECB0u; }
        if (ctx->pc != 0x15ECB0u) { return; }
    }
    ctx->pc = 0x15ECB0u;
label_15ecb0:
    // 0x15ecb0: 0x7bb00370  lq          $s0, 0x370($sp)
    ctx->pc = 0x15ecb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_15ecb4:
    // 0x15ecb4: 0x7bb10360  lq          $s1, 0x360($sp)
    ctx->pc = 0x15ecb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x15ecb8: 0x7bb20350  lq          $s2, 0x350($sp)
    ctx->pc = 0x15ecb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x15ecbc: 0x7bb30340  lq          $s3, 0x340($sp)
    ctx->pc = 0x15ecbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x15ecc0: 0x7bb40330  lq          $s4, 0x330($sp)
    ctx->pc = 0x15ecc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x15ecc4: 0x7bb50320  lq          $s5, 0x320($sp)
    ctx->pc = 0x15ecc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x15ecc8: 0x7bb60310  lq          $s6, 0x310($sp)
    ctx->pc = 0x15ecc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x15eccc: 0x7bb70300  lq          $s7, 0x300($sp)
    ctx->pc = 0x15ecccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x15ecd0: 0x7bbe02f0  lq          $fp, 0x2F0($sp)
    ctx->pc = 0x15ecd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x15ecd4: 0xdfbf02e0  ld          $ra, 0x2E0($sp)
    ctx->pc = 0x15ecd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x15ecd8: 0xc7b40380  lwc1        $f20, 0x380($sp)
    ctx->pc = 0x15ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15ecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x15ECDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ECDCu;
            // 0x15ece0: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DF10u: goto label_15df10;
            case 0x15DF24u: goto label_15df24;
            case 0x15DF38u: goto label_15df38;
            case 0x15DF48u: goto label_15df48;
            case 0x15DFF0u: goto label_15dff0;
            case 0x15E008u: goto label_15e008;
            case 0x15E088u: goto label_15e088;
            case 0x15E0B0u: goto label_15e0b0;
            case 0x15E0C8u: goto label_15e0c8;
            case 0x15E0E4u: goto label_15e0e4;
            case 0x15E0E8u: goto label_15e0e8;
            case 0x15E134u: goto label_15e134;
            case 0x15E258u: goto label_15e258;
            case 0x15E280u: goto label_15e280;
            case 0x15E318u: goto label_15e318;
            case 0x15E338u: goto label_15e338;
            case 0x15E360u: goto label_15e360;
            case 0x15E384u: goto label_15e384;
            case 0x15E3B0u: goto label_15e3b0;
            case 0x15E420u: goto label_15e420;
            case 0x15E438u: goto label_15e438;
            case 0x15E454u: goto label_15e454;
            case 0x15E458u: goto label_15e458;
            case 0x15E49Cu: goto label_15e49c;
            case 0x15E540u: goto label_15e540;
            case 0x15E550u: goto label_15e550;
            case 0x15E58Cu: goto label_15e58c;
            case 0x15E5A0u: goto label_15e5a0;
            case 0x15E5C8u: goto label_15e5c8;
            case 0x15E5D0u: goto label_15e5d0;
            case 0x15E5E0u: goto label_15e5e0;
            case 0x15E5F4u: goto label_15e5f4;
            case 0x15E604u: goto label_15e604;
            case 0x15E608u: goto label_15e608;
            case 0x15E618u: goto label_15e618;
            case 0x15E648u: goto label_15e648;
            case 0x15E64Cu: goto label_15e64c;
            case 0x15E650u: goto label_15e650;
            case 0x15E658u: goto label_15e658;
            case 0x15E694u: goto label_15e694;
            case 0x15E6B0u: goto label_15e6b0;
            case 0x15E7B8u: goto label_15e7b8;
            case 0x15E7D0u: goto label_15e7d0;
            case 0x15E860u: goto label_15e860;
            case 0x15E918u: goto label_15e918;
            case 0x15E960u: goto label_15e960;
            case 0x15E998u: goto label_15e998;
            case 0x15E9ACu: goto label_15e9ac;
            case 0x15E9C0u: goto label_15e9c0;
            case 0x15E9D0u: goto label_15e9d0;
            case 0x15E9D8u: goto label_15e9d8;
            case 0x15E9DCu: goto label_15e9dc;
            case 0x15EA24u: goto label_15ea24;
            case 0x15EA68u: goto label_15ea68;
            case 0x15EA88u: goto label_15ea88;
            case 0x15EAA8u: goto label_15eaa8;
            case 0x15EADCu: goto label_15eadc;
            case 0x15EB08u: goto label_15eb08;
            case 0x15EB28u: goto label_15eb28;
            case 0x15EB50u: goto label_15eb50;
            case 0x15EB54u: goto label_15eb54;
            case 0x15EB7Cu: goto label_15eb7c;
            case 0x15EBC0u: goto label_15ebc0;
            case 0x15EBE0u: goto label_15ebe0;
            case 0x15EC1Cu: goto label_15ec1c;
            case 0x15EC28u: goto label_15ec28;
            case 0x15EC40u: goto label_15ec40;
            case 0x15EC50u: goto label_15ec50;
            case 0x15ECA0u: goto label_15eca0;
            case 0x15ECB0u: goto label_15ecb0;
            case 0x15ECB4u: goto label_15ecb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15ECE4u;
    // 0x15ece4: 0x0  nop
    ctx->pc = 0x15ece4u;
    // NOP
}
