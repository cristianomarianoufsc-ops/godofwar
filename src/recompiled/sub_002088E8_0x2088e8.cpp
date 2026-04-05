#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002088E8
// Address: 0x2088e8 - 0x208d78
void sub_002088E8_0x2088e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002088E8_0x2088e8");
#endif

    ctx->pc = 0x2088e8u;

    // 0x2088e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2088ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2088ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2088f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2088f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2088f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2088f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2088f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088fc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2088fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x208900: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x208900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x208904: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x208904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x208908: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x208908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20890c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x208910: 0xc08235e  jal         func_208D78
    ctx->pc = 0x208910u;
    SET_GPR_U32(ctx, 31, 0x208918u);
    ctx->pc = 0x208914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208910u;
            // 0x208914: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208918u; }
        if (ctx->pc != 0x208918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208918u; }
        if (ctx->pc != 0x208918u) { return; }
    }
    ctx->pc = 0x208918u;
    // 0x208918: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20891c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x20891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x208920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208920u;
    {
        const bool branch_taken_0x208920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208920u;
            // 0x208924: 0x2403fbff  addiu       $v1, $zero, -0x401 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208920) {
            ctx->pc = 0x208934u;
            goto label_208934;
        }
    }
    ctx->pc = 0x208928u;
    // 0x208928: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x208928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x20892c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20892cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x208930: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x208930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
label_208934:
    // 0x208934: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208938: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x208938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20893c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20893Cu;
    {
        const bool branch_taken_0x20893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20893Cu;
            // 0x208940: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20893c) {
            ctx->pc = 0x208950u;
            goto label_208950;
        }
    }
    ctx->pc = 0x208944u;
    // 0x208944: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x208944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x208948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x208948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20894c: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x20894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
label_208950:
    // 0x208950: 0x86440006  lh          $a0, 0x6($s2)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x208954: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208958: 0x108200fd  beq         $a0, $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x208958u;
    {
        const bool branch_taken_0x208958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208958u;
            // 0x20895c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208958) {
            ctx->pc = 0x208D50u;
            goto label_208d50;
        }
    }
    ctx->pc = 0x208960u;
    // 0x208960: 0x8243001c  lb          $v1, 0x1C($s2)
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x208964: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x208964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x208968: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20896c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20896Cu;
    {
        const bool branch_taken_0x20896c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20896Cu;
            // 0x208970: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20896c) {
            ctx->pc = 0x2089F0u;
            goto label_2089f0;
        }
    }
    ctx->pc = 0x208974u;
    // 0x208974: 0xc081be6  jal         func_206F98
    ctx->pc = 0x208974u;
    SET_GPR_U32(ctx, 31, 0x20897Cu);
    ctx->pc = 0x208978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208974u;
            // 0x208978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20897Cu; }
        if (ctx->pc != 0x20897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20897Cu; }
        if (ctx->pc != 0x20897Cu) { return; }
    }
    ctx->pc = 0x20897Cu;
    // 0x20897c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20897cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208980: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x208980u;
    {
        const bool branch_taken_0x208980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208980) {
            ctx->pc = 0x208A24u;
            goto label_208a24;
        }
    }
    ctx->pc = 0x208988u;
    // 0x208988: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20898c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x208990: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x208994: 0x40f809  jalr        $v0
    ctx->pc = 0x208994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20899Cu);
        ctx->pc = 0x208998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208994u;
            // 0x208998: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20899Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208934u: goto label_208934;
            case 0x208950u: goto label_208950;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089F0u: goto label_2089f0;
            case 0x208A18u: goto label_208a18;
            case 0x208A24u: goto label_208a24;
            case 0x208AC0u: goto label_208ac0;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208BB8u: goto label_208bb8;
            case 0x208C3Cu: goto label_208c3c;
            case 0x208C40u: goto label_208c40;
            case 0x208C48u: goto label_208c48;
            case 0x208C84u: goto label_208c84;
            case 0x208C88u: goto label_208c88;
            case 0x208CC0u: goto label_208cc0;
            case 0x208CE0u: goto label_208ce0;
            case 0x208CF8u: goto label_208cf8;
            case 0x208D08u: goto label_208d08;
            case 0x208D0Cu: goto label_208d0c;
            case 0x208D14u: goto label_208d14;
            case 0x208D18u: goto label_208d18;
            case 0x208D44u: goto label_208d44;
            case 0x208D48u: goto label_208d48;
            case 0x208D50u: goto label_208d50;
            case 0x208D54u: goto label_208d54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20899Cu; }
            if (ctx->pc != 0x20899Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20899Cu;
    // 0x20899c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20899cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089a0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2089a4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2089A4u;
    {
        const bool branch_taken_0x2089a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089a4) {
            ctx->pc = 0x208A24u;
            goto label_208a24;
        }
    }
    ctx->pc = 0x2089ACu;
    // 0x2089ac: 0x8c730058  lw          $s3, 0x58($v1)
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2089b0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2089b4: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2089b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2089B8u;
    {
        const bool branch_taken_0x2089b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089B8u;
            // 0x2089bc: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089b8) {
            ctx->pc = 0x2089C8u;
            goto label_2089c8;
        }
    }
    ctx->pc = 0x2089C0u;
    // 0x2089c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2089C0u;
    {
        const bool branch_taken_0x2089c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089C0u;
            // 0x2089c4: 0xc46d001c  lwc1        $f13, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089c0) {
            ctx->pc = 0x2089CCu;
            goto label_2089cc;
        }
    }
    ctx->pc = 0x2089C8u;
label_2089c8:
    // 0x2089c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2089c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2089cc:
    // 0x2089cc: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x2089ccu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x2089d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2089d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2089d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2089d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2089d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2089dc: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2089dcu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2089e0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2089e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2089e4: 0x46020529  min.s       $f20, $f0, $f2
    ctx->pc = 0x2089e4u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[2]);
    // 0x2089e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2089E8u;
    {
        const bool branch_taken_0x2089e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2089E8u;
            // 0x2089ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089e8) {
            ctx->pc = 0x208A18u;
            goto label_208a18;
        }
    }
    ctx->pc = 0x2089F0u;
label_2089f0:
    // 0x2089f0: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x2089f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2089f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2089f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089f8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2089f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2089fc: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2089fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x208a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x208a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x208a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208a0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208a10: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x208a14: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x208a14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_208a18:
    // 0x208a18: 0xc080818  jal         func_202060
    ctx->pc = 0x208A18u;
    SET_GPR_U32(ctx, 31, 0x208A20u);
    ctx->pc = 0x202060u;
    if (runtime->hasFunction(0x202060u)) {
        auto targetFn = runtime->lookupFunction(0x202060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A20u; }
        if (ctx->pc != 0x208A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202060_0x202060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A20u; }
        if (ctx->pc != 0x208A20u) { return; }
    }
    ctx->pc = 0x208A20u;
    // 0x208a20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x208a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208a24:
    // 0x208a24: 0x528000cb  beql        $s4, $zero, . + 4 + (0xCB << 2)
    ctx->pc = 0x208A24u;
    {
        const bool branch_taken_0x208a24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a24) {
            ctx->pc = 0x208A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208A24u;
            // 0x208a28: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208D54u;
            goto label_208d54;
        }
    }
    ctx->pc = 0x208A2Cu;
    // 0x208a2c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x208a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x208a30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x208a34: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x208a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x208a38: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x208a3c: 0x40f809  jalr        $v0
    ctx->pc = 0x208A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208A44u);
        ctx->pc = 0x208A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A3Cu;
            // 0x208a40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208A44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208934u: goto label_208934;
            case 0x208950u: goto label_208950;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089F0u: goto label_2089f0;
            case 0x208A18u: goto label_208a18;
            case 0x208A24u: goto label_208a24;
            case 0x208AC0u: goto label_208ac0;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208BB8u: goto label_208bb8;
            case 0x208C3Cu: goto label_208c3c;
            case 0x208C40u: goto label_208c40;
            case 0x208C48u: goto label_208c48;
            case 0x208C84u: goto label_208c84;
            case 0x208C88u: goto label_208c88;
            case 0x208CC0u: goto label_208cc0;
            case 0x208CE0u: goto label_208ce0;
            case 0x208CF8u: goto label_208cf8;
            case 0x208D08u: goto label_208d08;
            case 0x208D0Cu: goto label_208d0c;
            case 0x208D14u: goto label_208d14;
            case 0x208D18u: goto label_208d18;
            case 0x208D44u: goto label_208d44;
            case 0x208D48u: goto label_208d48;
            case 0x208D50u: goto label_208d50;
            case 0x208D54u: goto label_208d54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208A44u; }
            if (ctx->pc != 0x208A44u) { return; }
        }
        }
    }
    ctx->pc = 0x208A44u;
    // 0x208a44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a4c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x208a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x208a50: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x208a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x208a54: 0xc090ed4  jal         func_243B50
    ctx->pc = 0x208A54u;
    SET_GPR_U32(ctx, 31, 0x208A5Cu);
    ctx->pc = 0x208A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A54u;
            // 0x208a58: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243B50u;
    if (runtime->hasFunction(0x243B50u)) {
        auto targetFn = runtime->lookupFunction(0x243B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A5Cu; }
        if (ctx->pc != 0x208A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243b50_0x243b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A5Cu; }
        if (ctx->pc != 0x208A5Cu) { return; }
    }
    ctx->pc = 0x208A5Cu;
    // 0x208a5c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x208a60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x208a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a64: 0xc07dbf8  jal         func_1F6FE0
    ctx->pc = 0x208A64u;
    SET_GPR_U32(ctx, 31, 0x208A6Cu);
    ctx->pc = 0x208A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A64u;
            // 0x208a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FE0u;
    if (runtime->hasFunction(0x1F6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A6Cu; }
        if (ctx->pc != 0x208A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6FE0_0x1f6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A6Cu; }
        if (ctx->pc != 0x208A6Cu) { return; }
    }
    ctx->pc = 0x208A6Cu;
    // 0x208a6c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x208a70: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x208a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x208a74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x208a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a7c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x208a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208a80: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x208A80u;
    SET_GPR_U32(ctx, 31, 0x208A88u);
    ctx->pc = 0x208A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208A80u;
            // 0x208a84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A88u; }
        if (ctx->pc != 0x208A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208A88u; }
        if (ctx->pc != 0x208A88u) { return; }
    }
    ctx->pc = 0x208A88u;
    // 0x208a88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x208a8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x208a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208a90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x208a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x208a94: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x208A94u;
    {
        const bool branch_taken_0x208a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208A94u;
            // 0x208a98: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a94) {
            ctx->pc = 0x208D44u;
            goto label_208d44;
        }
    }
    ctx->pc = 0x208A9Cu;
    // 0x208a9c: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x208a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x208aa0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x208aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x208aa4: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x208aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208aa8: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x208aac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x208aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x208ab0: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x208ab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x208ab4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x208AB4u;
    {
        const bool branch_taken_0x208ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208AB4u;
            // 0x208ab8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ab4) {
            ctx->pc = 0x208B2Cu;
            goto label_208b2c;
        }
    }
    ctx->pc = 0x208ABCu;
    // 0x208abc: 0x0  nop
    ctx->pc = 0x208abcu;
    // NOP
label_208ac0:
    // 0x208ac0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208ac4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x208ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x208ac8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x208acc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x208accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x208ad0: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x208ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x208ad4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x208ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x208ad8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x208AD8u;
    {
        const bool branch_taken_0x208ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ad8) {
            ctx->pc = 0x208ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208AD8u;
            // 0x208adc: 0x94a20012  lhu         $v0, 0x12($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208B1Cu;
            goto label_208b1c;
        }
    }
    ctx->pc = 0x208AE0u;
    // 0x208ae0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x208ae4: 0x41443  sra         $v0, $a0, 17
    ctx->pc = 0x208ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 17));
    // 0x208ae8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x208ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x208aec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x208aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x208af0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x208AF0u;
    {
        const bool branch_taken_0x208af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208AF0u;
            // 0x208af4: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208af0) {
            ctx->pc = 0x208B2Cu;
            goto label_208b2c;
        }
    }
    ctx->pc = 0x208AF8u;
    // 0x208af8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x208AF8u;
    {
        const bool branch_taken_0x208af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208af8) {
            ctx->pc = 0x208AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208AF8u;
            // 0x208afc: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208B0Cu;
            goto label_208b0c;
        }
    }
    ctx->pc = 0x208B00u;
    // 0x208b00: 0x55000001  bnel        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x208B00u;
    {
        const bool branch_taken_0x208b00 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x208b00) {
            ctx->pc = 0x208B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208B00u;
            // 0x208b04: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208B08u;
            goto label_208b08;
        }
    }
    ctx->pc = 0x208B08u;
label_208b08:
    // 0x208b08: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x208b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_208b0c:
    // 0x208b0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x208b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208b10: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x208b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x208b14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208B14u;
    {
        const bool branch_taken_0x208b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208B14u;
            // 0x208b18: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b14) {
            ctx->pc = 0x208B30u;
            goto label_208b30;
        }
    }
    ctx->pc = 0x208B1Cu;
label_208b1c:
    // 0x208b1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x208b20: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x208b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x208b24: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x208B24u;
    {
        const bool branch_taken_0x208b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208B24u;
            // 0x208b28: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b24) {
            ctx->pc = 0x208AC0u;
            runtime->cooperativeGuestYield();
            goto label_208ac0;
        }
    }
    ctx->pc = 0x208B2Cu;
label_208b2c:
    // 0x208b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x208b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208b30:
    // 0x208b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208b34: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x208b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x208b38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x208B38u;
    {
        const bool branch_taken_0x208b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208b38) {
            ctx->pc = 0x208B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208B38u;
            // 0x208b3c: 0x9683000c  lhu         $v1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208B4Cu;
            goto label_208b4c;
        }
    }
    ctx->pc = 0x208B40u;
    // 0x208b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b44: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x208b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x208b48: 0x9683000c  lhu         $v1, 0xC($s4)
    ctx->pc = 0x208b48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_208b4c:
    // 0x208b4c: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x208b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x208b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208b58: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x208b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x208b5c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x208b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x208b60: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x208b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x208b64: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x208b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x208b68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x208b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x208b6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x208b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208b70: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x208b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x208b74: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x208b74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x208b78: 0xc07d904  jal         func_1F6410
    ctx->pc = 0x208B78u;
    SET_GPR_U32(ctx, 31, 0x208B80u);
    ctx->pc = 0x208B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208B78u;
            // 0x208b7c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6410u;
    if (runtime->hasFunction(0x1F6410u)) {
        auto targetFn = runtime->lookupFunction(0x1F6410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B80u; }
        if (ctx->pc != 0x208B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6410_0x1f6410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208B80u; }
        if (ctx->pc != 0x208B80u) { return; }
    }
    ctx->pc = 0x208B80u;
    // 0x208b80: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x208b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x208b84: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x208b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x208b88: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x208b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x208b8c: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208B8Cu;
    {
        const bool branch_taken_0x208b8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x208b8c) {
            ctx->pc = 0x208B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208B8Cu;
            // 0x208b90: 0xde030070  ld          $v1, 0x70($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208BB8u;
            goto label_208bb8;
        }
    }
    ctx->pc = 0x208B94u;
    // 0x208b94: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x208b94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x208b98: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x208b9c: 0x24842d50  addiu       $a0, $a0, 0x2D50
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
    // 0x208ba0: 0xc076ef0  jal         func_1DBBC0
    ctx->pc = 0x208BA0u;
    SET_GPR_U32(ctx, 31, 0x208BA8u);
    ctx->pc = 0x208BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208BA0u;
            // 0x208ba4: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC0u;
    if (runtime->hasFunction(0x1DBBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BA8u; }
        if (ctx->pc != 0x208BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dbbc0_0x1dbc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BA8u; }
        if (ctx->pc != 0x208BA8u) { return; }
    }
    ctx->pc = 0x208BA8u;
    // 0x208ba8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x208ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x208bac: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x208bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x208bb0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x208bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x208bb4: 0xde030070  ld          $v1, 0x70($s0)
    ctx->pc = 0x208bb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
label_208bb8:
    // 0x208bb8: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x208bbc: 0x8ea5ed58  lw          $a1, -0x12A8($s5)
    ctx->pc = 0x208bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962520)));
    // 0x208bc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x208bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x208bc4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x208bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x208bc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x208bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208bcc: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x208bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x208bd0: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x208bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x208bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208bd8: 0xae130058  sw          $s3, 0x58($s0)
    ctx->pc = 0x208bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    // 0x208bdc: 0xfe000078  sd          $zero, 0x78($s0)
    ctx->pc = 0x208bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 0));
    // 0x208be0: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x208be0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x208be4: 0xc082436  jal         func_2090D8
    ctx->pc = 0x208BE4u;
    SET_GPR_U32(ctx, 31, 0x208BECu);
    ctx->pc = 0x208BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208BE4u;
            // 0x208be8: 0xae050050  sw          $a1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2090D8u;
    if (runtime->hasFunction(0x2090D8u)) {
        auto targetFn = runtime->lookupFunction(0x2090D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BECu; }
        if (ctx->pc != 0x208BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2090d8_0x209100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208BECu; }
        if (ctx->pc != 0x208BECu) { return; }
    }
    ctx->pc = 0x208BECu;
    // 0x208bec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x208bf0: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x208bf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x208bf4: 0x30620060  andi        $v0, $v1, 0x60
    ctx->pc = 0x208bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x208bf8: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x208BF8u;
    {
        const bool branch_taken_0x208bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208BF8u;
            // 0x208bfc: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bf8) {
            ctx->pc = 0x208D14u;
            goto label_208d14;
        }
    }
    ctx->pc = 0x208C00u;
    // 0x208c00: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x208C00u;
    {
        const bool branch_taken_0x208c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c00) {
            ctx->pc = 0x208D18u;
            goto label_208d18;
        }
    }
    ctx->pc = 0x208C08u;
    // 0x208c08: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x208c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x208c0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x208C0Cu;
    {
        const bool branch_taken_0x208c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C0Cu;
            // 0x208c10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c0c) {
            ctx->pc = 0x208C48u;
            goto label_208c48;
        }
    }
    ctx->pc = 0x208C14u;
    // 0x208c14: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x208c18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x208c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208c1c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x208c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x208c20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208C20u;
    {
        const bool branch_taken_0x208c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C20u;
            // 0x208c24: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c20) {
            ctx->pc = 0x208C3Cu;
            goto label_208c3c;
        }
    }
    ctx->pc = 0x208C28u;
    // 0x208c28: 0xc090d56  jal         func_243558
    ctx->pc = 0x208C28u;
    SET_GPR_U32(ctx, 31, 0x208C30u);
    ctx->pc = 0x208C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208C28u;
            // 0x208c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C30u; }
        if (ctx->pc != 0x208C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208C30u; }
        if (ctx->pc != 0x208C30u) { return; }
    }
    ctx->pc = 0x208C30u;
    // 0x208c30: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x208c30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x208c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208C34u;
    {
        const bool branch_taken_0x208c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C34u;
            // 0x208c38: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c34) {
            ctx->pc = 0x208C40u;
            goto label_208c40;
        }
    }
    ctx->pc = 0x208C3Cu;
label_208c3c:
    // 0x208c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x208c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208c40:
    // 0x208c40: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x208C40u;
    {
        const bool branch_taken_0x208c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208c40) {
            ctx->pc = 0x208C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x208C40u;
            // 0x208c44: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x208C48u;
            goto label_208c48;
        }
    }
    ctx->pc = 0x208C48u;
label_208c48:
    // 0x208c48: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x208c4c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x208c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x208c50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x208C50u;
    {
        const bool branch_taken_0x208c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C50u;
            // 0x208c54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c50) {
            ctx->pc = 0x208C88u;
            goto label_208c88;
        }
    }
    ctx->pc = 0x208C58u;
    // 0x208c58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x208c5c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x208c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x208c60: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x208c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x208c64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x208c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x208c68: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x208c6c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x208c70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x208c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208c78: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208C78u;
    {
        const bool branch_taken_0x208c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x208C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C78u;
            // 0x208c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c78) {
            ctx->pc = 0x208C84u;
            goto label_208c84;
        }
    }
    ctx->pc = 0x208C80u;
    // 0x208c80: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_208c84:
    // 0x208c84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x208c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208c88:
    // 0x208c88: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x208C88u;
    {
        const bool branch_taken_0x208c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c88) {
            ctx->pc = 0x208D18u;
            goto label_208d18;
        }
    }
    ctx->pc = 0x208C90u;
    // 0x208c90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x208c94: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x208c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x208c98: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x208c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x208c9c: 0x40f809  jalr        $v0
    ctx->pc = 0x208C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208CA4u);
        ctx->pc = 0x208CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208C9Cu;
            // 0x208ca0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x208CA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208934u: goto label_208934;
            case 0x208950u: goto label_208950;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089F0u: goto label_2089f0;
            case 0x208A18u: goto label_208a18;
            case 0x208A24u: goto label_208a24;
            case 0x208AC0u: goto label_208ac0;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208BB8u: goto label_208bb8;
            case 0x208C3Cu: goto label_208c3c;
            case 0x208C40u: goto label_208c40;
            case 0x208C48u: goto label_208c48;
            case 0x208C84u: goto label_208c84;
            case 0x208C88u: goto label_208c88;
            case 0x208CC0u: goto label_208cc0;
            case 0x208CE0u: goto label_208ce0;
            case 0x208CF8u: goto label_208cf8;
            case 0x208D08u: goto label_208d08;
            case 0x208D0Cu: goto label_208d0c;
            case 0x208D14u: goto label_208d14;
            case 0x208D18u: goto label_208d18;
            case 0x208D44u: goto label_208d44;
            case 0x208D48u: goto label_208d48;
            case 0x208D50u: goto label_208d50;
            case 0x208D54u: goto label_208d54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208CA4u; }
            if (ctx->pc != 0x208CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x208CA4u;
    // 0x208ca4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x208CA4u;
    {
        const bool branch_taken_0x208ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208CA4u;
            // 0x208ca8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ca4) {
            ctx->pc = 0x208CC0u;
            goto label_208cc0;
        }
    }
    ctx->pc = 0x208CACu;
    // 0x208cac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x208cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x208cb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x208cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x208cb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x208cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208cb8: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x208cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x208cbc: 0xe4c001bc  swc1        $f0, 0x1BC($a2)
    ctx->pc = 0x208cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 444), bits); }
label_208cc0:
    // 0x208cc0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x208cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x208cc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208cc8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x208ccc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x208CCCu;
    {
        const bool branch_taken_0x208ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208CCCu;
            // 0x208cd0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ccc) {
            ctx->pc = 0x208D08u;
            goto label_208d08;
        }
    }
    ctx->pc = 0x208CD4u;
    // 0x208cd4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x208cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x208cd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x208CD8u;
    {
        const bool branch_taken_0x208cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208CD8u;
            // 0x208cdc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cd8) {
            ctx->pc = 0x208CF8u;
            goto label_208cf8;
        }
    }
    ctx->pc = 0x208CE0u;
label_208ce0:
    // 0x208ce0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x208ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x208ce4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x208ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x208ce8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208CE8u;
    {
        const bool branch_taken_0x208ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208CE8u;
            // 0x208cec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ce8) {
            ctx->pc = 0x208D0Cu;
            goto label_208d0c;
        }
    }
    ctx->pc = 0x208CF0u;
    // 0x208cf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x208cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x208cf4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x208cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_208cf8:
    // 0x208cf8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x208cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x208cfc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x208cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x208d00: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x208D00u;
    {
        const bool branch_taken_0x208d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D00u;
            // 0x208d04: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d00) {
            ctx->pc = 0x208CE0u;
            runtime->cooperativeGuestYield();
            goto label_208ce0;
        }
    }
    ctx->pc = 0x208D08u;
label_208d08:
    // 0x208d08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x208d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208d0c:
    // 0x208d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208D0Cu;
    {
        const bool branch_taken_0x208d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D0Cu;
            // 0x208d10: 0xacc20084  sw          $v0, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d0c) {
            ctx->pc = 0x208D18u;
            goto label_208d18;
        }
    }
    ctx->pc = 0x208D14u;
label_208d14:
    // 0x208d14: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x208d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_208d18:
    // 0x208d18: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x208d1c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x208d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x208d20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x208d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x208d24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208D24u;
    {
        const bool branch_taken_0x208d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D24u;
            // 0x208d28: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d24) {
            ctx->pc = 0x208D44u;
            goto label_208d44;
        }
    }
    ctx->pc = 0x208D2Cu;
    // 0x208d2c: 0x8ea2ed58  lw          $v0, -0x12A8($s5)
    ctx->pc = 0x208d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962520)));
    // 0x208d30: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x208D30u;
    {
        const bool branch_taken_0x208d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D30u;
            // 0x208d34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d30) {
            ctx->pc = 0x208D48u;
            goto label_208d48;
        }
    }
    ctx->pc = 0x208D38u;
    // 0x208d38: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x208d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x208d3c: 0xc081522  jal         func_205488
    ctx->pc = 0x208D3Cu;
    SET_GPR_U32(ctx, 31, 0x208D44u);
    ctx->pc = 0x208D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D3Cu;
            // 0x208d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D44u; }
        if (ctx->pc != 0x208D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D44u; }
        if (ctx->pc != 0x208D44u) { return; }
    }
    ctx->pc = 0x208D44u;
label_208d44:
    // 0x208d44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208d48:
    // 0x208d48: 0xc062ec0  jal         func_18BB00
    ctx->pc = 0x208D48u;
    SET_GPR_U32(ctx, 31, 0x208D50u);
    ctx->pc = 0x208D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208D48u;
            // 0x208d4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BB00u;
    if (runtime->hasFunction(0x18BB00u)) {
        auto targetFn = runtime->lookupFunction(0x18BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D50u; }
        if (ctx->pc != 0x208D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BB00_0x18bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208D50u; }
        if (ctx->pc != 0x208D50u) { return; }
    }
    ctx->pc = 0x208D50u;
label_208d50:
    // 0x208d50: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x208d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_208d54:
    // 0x208d54: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x208d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x208d58: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x208d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x208d5c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x208d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x208d60: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x208d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208d64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x208d64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x208d68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x208d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208d6c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x208d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x208d70: 0x3e00008  jr          $ra
    ctx->pc = 0x208D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208D70u;
            // 0x208d74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208934u: goto label_208934;
            case 0x208950u: goto label_208950;
            case 0x2089C8u: goto label_2089c8;
            case 0x2089CCu: goto label_2089cc;
            case 0x2089F0u: goto label_2089f0;
            case 0x208A18u: goto label_208a18;
            case 0x208A24u: goto label_208a24;
            case 0x208AC0u: goto label_208ac0;
            case 0x208B08u: goto label_208b08;
            case 0x208B0Cu: goto label_208b0c;
            case 0x208B1Cu: goto label_208b1c;
            case 0x208B2Cu: goto label_208b2c;
            case 0x208B30u: goto label_208b30;
            case 0x208B4Cu: goto label_208b4c;
            case 0x208BB8u: goto label_208bb8;
            case 0x208C3Cu: goto label_208c3c;
            case 0x208C40u: goto label_208c40;
            case 0x208C48u: goto label_208c48;
            case 0x208C84u: goto label_208c84;
            case 0x208C88u: goto label_208c88;
            case 0x208CC0u: goto label_208cc0;
            case 0x208CE0u: goto label_208ce0;
            case 0x208CF8u: goto label_208cf8;
            case 0x208D08u: goto label_208d08;
            case 0x208D0Cu: goto label_208d0c;
            case 0x208D14u: goto label_208d14;
            case 0x208D18u: goto label_208d18;
            case 0x208D44u: goto label_208d44;
            case 0x208D48u: goto label_208d48;
            case 0x208D50u: goto label_208d50;
            case 0x208D54u: goto label_208d54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208D78u;
}
