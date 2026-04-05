#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002132F0
// Address: 0x2132f0 - 0x2133f0
void sub_002132F0_0x2132f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002132F0_0x2132f0");
#endif

    ctx->pc = 0x2132f0u;

    // 0x2132f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2132f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2132f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2132f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2132f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2132f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2132fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2132fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213300: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x213300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x213304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213308: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x213308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21330c: 0xc077952  jal         func_1DE548
    ctx->pc = 0x21330Cu;
    SET_GPR_U32(ctx, 31, 0x213314u);
    ctx->pc = 0x213310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21330Cu;
            // 0x213310: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE548u;
    if (runtime->hasFunction(0x1DE548u)) {
        auto targetFn = runtime->lookupFunction(0x1DE548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213314u; }
        if (ctx->pc != 0x213314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE548_0x1de548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213314u; }
        if (ctx->pc != 0x213314u) { return; }
    }
    ctx->pc = 0x213314u;
    // 0x213314: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x213318: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x213318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21331c: 0x24429210  addiu       $v0, $v0, -0x6DF0
    ctx->pc = 0x21331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939152));
    // 0x213320: 0x8c63cb08  lw          $v1, -0x34F8($v1)
    ctx->pc = 0x213320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953736)));
    // 0x213324: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x213324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x213328: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213328u;
    {
        const bool branch_taken_0x213328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213328u;
            // 0x21332c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213328) {
            ctx->pc = 0x213340u;
            goto label_213340;
        }
    }
    ctx->pc = 0x213330u;
    // 0x213330: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x213330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x213334: 0x8c421200  lw          $v0, 0x1200($v0)
    ctx->pc = 0x213334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
    // 0x213338: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x213338u;
    {
        const bool branch_taken_0x213338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213338) {
            ctx->pc = 0x21333Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213338u;
            // 0x21333c: 0xa20401f8  sb          $a0, 0x1F8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 504), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213348u;
            goto label_213348;
        }
    }
    ctx->pc = 0x213340u;
label_213340:
    // 0x213340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213344: 0xa20401f8  sb          $a0, 0x1F8($s0)
    ctx->pc = 0x213344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 504), (uint8_t)GPR_U32(ctx, 4));
label_213348:
    // 0x213348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21334c: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x21334cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x213350: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x213350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213354: 0xc084c1a  jal         func_213068
    ctx->pc = 0x213354u;
    SET_GPR_U32(ctx, 31, 0x21335Cu);
    ctx->pc = 0x213358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213354u;
            // 0x213358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213068u;
    if (runtime->hasFunction(0x213068u)) {
        auto targetFn = runtime->lookupFunction(0x213068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21335Cu; }
        if (ctx->pc != 0x21335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213068_0x213068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21335Cu; }
        if (ctx->pc != 0x21335Cu) { return; }
    }
    ctx->pc = 0x21335Cu;
    // 0x21335c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21335cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x213360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213364: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x213364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213368: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x213368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21336c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21336cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213370: 0x3e00008  jr          $ra
    ctx->pc = 0x213370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213370u;
            // 0x213374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213340u: goto label_213340;
            case 0x213348u: goto label_213348;
            case 0x2133BCu: goto label_2133bc;
            case 0x2133E0u: goto label_2133e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213378u;
    // 0x213378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21337c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x21337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x213380: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x213380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x213384: 0x24429210  addiu       $v0, $v0, -0x6DF0
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939152));
    // 0x213388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21338c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21338cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213394: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x213394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x213398: 0x8e0301e0  lw          $v1, 0x1E0($s0)
    ctx->pc = 0x213398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x21339c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21339Cu;
    {
        const bool branch_taken_0x21339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2133A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21339Cu;
            // 0x2133a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21339c) {
            ctx->pc = 0x2133BCu;
            goto label_2133bc;
        }
    }
    ctx->pc = 0x2133A4u;
    // 0x2133a4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2133a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2133a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2133ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x2133acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2133b0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2133b4: 0x40f809  jalr        $v0
    ctx->pc = 0x2133B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2133BCu);
        ctx->pc = 0x2133B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2133B4u;
            // 0x2133b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2133BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213340u: goto label_213340;
            case 0x213348u: goto label_213348;
            case 0x2133BCu: goto label_2133bc;
            case 0x2133E0u: goto label_2133e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2133BCu; }
            if (ctx->pc != 0x2133BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2133BCu;
label_2133bc:
    // 0x2133bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2133bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2133c0: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x2133C0u;
    SET_GPR_U32(ctx, 31, 0x2133C8u);
    ctx->pc = 0x2133C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2133C0u;
            // 0x2133c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE850u;
    if (runtime->hasFunction(0x1DE850u)) {
        auto targetFn = runtime->lookupFunction(0x1DE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2133C8u; }
        if (ctx->pc != 0x2133C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE850_0x1de850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2133C8u; }
        if (ctx->pc != 0x2133C8u) { return; }
    }
    ctx->pc = 0x2133C8u;
    // 0x2133c8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2133c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2133cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2133CCu;
    {
        const bool branch_taken_0x2133cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2133cc) {
            ctx->pc = 0x2133D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2133CCu;
            // 0x2133d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2133E0u;
            goto label_2133e0;
        }
    }
    ctx->pc = 0x2133D4u;
    // 0x2133d4: 0xc084a6c  jal         func_2129B0
    ctx->pc = 0x2133D4u;
    SET_GPR_U32(ctx, 31, 0x2133DCu);
    ctx->pc = 0x2133D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2133D4u;
            // 0x2133d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2129B0u;
    if (runtime->hasFunction(0x2129B0u)) {
        auto targetFn = runtime->lookupFunction(0x2129B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2133DCu; }
        if (ctx->pc != 0x2133DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2129b0_0x2129d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2133DCu; }
        if (ctx->pc != 0x2133DCu) { return; }
    }
    ctx->pc = 0x2133DCu;
    // 0x2133dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2133dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2133e0:
    // 0x2133e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2133e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2133e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2133e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2133e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2133E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2133ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2133E8u;
            // 0x2133ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213340u: goto label_213340;
            case 0x213348u: goto label_213348;
            case 0x2133BCu: goto label_2133bc;
            case 0x2133E0u: goto label_2133e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2133F0u;
}
