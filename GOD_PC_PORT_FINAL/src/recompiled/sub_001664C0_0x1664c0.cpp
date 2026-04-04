#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001664C0
// Address: 0x1664c0 - 0x1665e0
void sub_001664C0_0x1664c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001664C0_0x1664c0");
#endif

    ctx->pc = 0x1664c0u;

    // 0x1664c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1664c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1664c4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1664c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1664c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1664cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1664ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1664d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1664d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1664d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1664d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1664d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1664dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1664e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1664e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1664e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1664e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1664e8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1664e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1664ec: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x1664ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1664f0: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1664f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1664f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1664f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1664f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1664f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1664fc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1664fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x166500: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x166504: 0x9e230054  lwu         $v1, 0x54($s1)
    ctx->pc = 0x166504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x166508: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x166508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16650c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x16650cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x166510: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x166510u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x166514: 0xfe000028  sd          $zero, 0x28($s0)
    ctx->pc = 0x166514u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 0));
    // 0x166518: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x166518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16651c: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x16651cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x166520: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166520u;
    {
        const bool branch_taken_0x166520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166520u;
            // 0x166524: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166520) {
            ctx->pc = 0x166548u;
            goto label_166548;
        }
    }
    ctx->pc = 0x166528u;
    // 0x166528: 0xc05d656  jal         func_175958
    ctx->pc = 0x166528u;
    SET_GPR_U32(ctx, 31, 0x166530u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166530u; }
        if (ctx->pc != 0x166530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166530u; }
        if (ctx->pc != 0x166530u) { return; }
    }
    ctx->pc = 0x166530u;
    // 0x166530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166534: 0xc05d6a4  jal         func_175A90
    ctx->pc = 0x166534u;
    SET_GPR_U32(ctx, 31, 0x16653Cu);
    ctx->pc = 0x166538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166534u;
            // 0x166538: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A90u;
    if (runtime->hasFunction(0x175A90u)) {
        auto targetFn = runtime->lookupFunction(0x175A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16653Cu; }
        if (ctx->pc != 0x16653Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A90_0x175a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16653Cu; }
        if (ctx->pc != 0x16653Cu) { return; }
    }
    ctx->pc = 0x16653Cu;
    // 0x16653c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x166540: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x166540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x166544: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x166544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_166548:
    // 0x166548: 0x8222001c  lb          $v0, 0x1C($s1)
    ctx->pc = 0x166548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16654c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16654Cu;
    {
        const bool branch_taken_0x16654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16654Cu;
            // 0x166550: 0x2632001c  addiu       $s2, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16654c) {
            ctx->pc = 0x166578u;
            goto label_166578;
        }
    }
    ctx->pc = 0x166554u;
    // 0x166554: 0xc05d656  jal         func_175958
    ctx->pc = 0x166554u;
    SET_GPR_U32(ctx, 31, 0x16655Cu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16655Cu; }
        if (ctx->pc != 0x16655Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16655Cu; }
        if (ctx->pc != 0x16655Cu) { return; }
    }
    ctx->pc = 0x16655Cu;
    // 0x16655c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166560: 0xc05d6a4  jal         func_175A90
    ctx->pc = 0x166560u;
    SET_GPR_U32(ctx, 31, 0x166568u);
    ctx->pc = 0x166564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166560u;
            // 0x166564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A90u;
    if (runtime->hasFunction(0x175A90u)) {
        auto targetFn = runtime->lookupFunction(0x175A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166568u; }
        if (ctx->pc != 0x166568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A90_0x175a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166568u; }
        if (ctx->pc != 0x166568u) { return; }
    }
    ctx->pc = 0x166568u;
    // 0x166568: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x166568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x16656c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x16656cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x166570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166570u;
    {
        const bool branch_taken_0x166570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166570u;
            // 0x166574: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166570) {
            ctx->pc = 0x16657Cu;
            goto label_16657c;
        }
    }
    ctx->pc = 0x166578u;
label_166578:
    // 0x166578: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x166578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_16657c:
    // 0x16657c: 0x82220034  lb          $v0, 0x34($s1)
    ctx->pc = 0x16657cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x166580: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166580u;
    {
        const bool branch_taken_0x166580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166580u;
            // 0x166584: 0x26320034  addiu       $s2, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166580) {
            ctx->pc = 0x1665A8u;
            goto label_1665a8;
        }
    }
    ctx->pc = 0x166588u;
    // 0x166588: 0xc05d656  jal         func_175958
    ctx->pc = 0x166588u;
    SET_GPR_U32(ctx, 31, 0x166590u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166590u; }
        if (ctx->pc != 0x166590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166590u; }
        if (ctx->pc != 0x166590u) { return; }
    }
    ctx->pc = 0x166590u;
    // 0x166590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166594: 0xc05d6a4  jal         func_175A90
    ctx->pc = 0x166594u;
    SET_GPR_U32(ctx, 31, 0x16659Cu);
    ctx->pc = 0x166598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166594u;
            // 0x166598: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A90u;
    if (runtime->hasFunction(0x175A90u)) {
        auto targetFn = runtime->lookupFunction(0x175A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16659Cu; }
        if (ctx->pc != 0x16659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A90_0x175a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16659Cu; }
        if (ctx->pc != 0x16659Cu) { return; }
    }
    ctx->pc = 0x16659Cu;
    // 0x16659c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16659Cu;
    {
        const bool branch_taken_0x16659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16659Cu;
            // 0x1665a0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16659c) {
            ctx->pc = 0x1665ACu;
            goto label_1665ac;
        }
    }
    ctx->pc = 0x1665A4u;
    // 0x1665a4: 0x0  nop
    ctx->pc = 0x1665a4u;
    // NOP
label_1665a8:
    // 0x1665a8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1665a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1665ac:
    // 0x1665ac: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x1665acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1665b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1665b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665b4: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1665b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1665b8: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x1665b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1665bc: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1665bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1665c0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1665c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1665c4: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x1665c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x1665c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1665c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1665cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1665ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1665d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1665d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1665d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1665d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1665d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1665D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1665D8u;
            // 0x1665dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166548u: goto label_166548;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1665E0u;
}
