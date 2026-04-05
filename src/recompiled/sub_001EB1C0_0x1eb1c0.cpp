#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB1C0
// Address: 0x1eb1c0 - 0x1ec6e0
void sub_001EB1C0_0x1eb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB1C0_0x1eb1c0");
#endif

    ctx->pc = 0x1eb1c0u;

    // 0x1eb1c0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x1eb1c4: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x1eb1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
    // 0x1eb1c8: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x1eb1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
    // 0x1eb1cc: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x1eb1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
    // 0x1eb1d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eb1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1d4: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x1eb1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
    // 0x1eb1d8: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x1eb1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
    // 0x1eb1dc: 0x7fb50450  sq          $s5, 0x450($sp)
    ctx->pc = 0x1eb1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 21));
    // 0x1eb1e0: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x1eb1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
    // 0x1eb1e4: 0xe7b604c0  swc1        $f22, 0x4C0($sp)
    ctx->pc = 0x1eb1e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
    // 0x1eb1e8: 0xe7b504b8  swc1        $f21, 0x4B8($sp)
    ctx->pc = 0x1eb1e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1208), bits); }
    // 0x1eb1ec: 0xe7b404b0  swc1        $f20, 0x4B0($sp)
    ctx->pc = 0x1eb1ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
    // 0x1eb1f0: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1eb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb1f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB1F4u;
    {
        const bool branch_taken_0x1eb1f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EB1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB1F4u;
            // 0x1eb1f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb1f4) {
            ctx->pc = 0x1EB204u;
            goto label_1eb204;
        }
    }
    ctx->pc = 0x1EB1FCu;
    // 0x1eb1fc: 0xc07988e  jal         func_1E6238
    ctx->pc = 0x1EB1FCu;
    SET_GPR_U32(ctx, 31, 0x1EB204u);
    ctx->pc = 0x1E6238u;
    if (runtime->hasFunction(0x1E6238u)) {
        auto targetFn = runtime->lookupFunction(0x1E6238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB204u; }
        if (ctx->pc != 0x1EB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6238_0x1e6238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB204u; }
        if (ctx->pc != 0x1EB204u) { return; }
    }
    ctx->pc = 0x1EB204u;
label_1eb204:
    // 0x1eb204: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1eb204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1eb208: 0x9262e446  lbu         $v0, -0x1BBA($s3)
    ctx->pc = 0x1eb208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294960198)));
    // 0x1eb20c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EB20Cu;
    {
        const bool branch_taken_0x1eb20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb20c) {
            ctx->pc = 0x1EB250u;
            goto label_1eb250;
        }
    }
    ctx->pc = 0x1EB214u;
    // 0x1eb214: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB214u;
    {
        const bool branch_taken_0x1eb214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB214u;
            // 0x1eb218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb214) {
            ctx->pc = 0x1EB250u;
            goto label_1eb250;
        }
    }
    ctx->pc = 0x1EB21Cu;
    // 0x1eb21c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1eb220:
    // 0x1eb220: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1eb224: 0x2442e448  addiu       $v0, $v0, -0x1BB8
    ctx->pc = 0x1eb224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960200));
    // 0x1eb228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb22c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb230: 0xc07814c  jal         func_1E0530
    ctx->pc = 0x1EB230u;
    SET_GPR_U32(ctx, 31, 0x1EB238u);
    ctx->pc = 0x1EB234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB230u;
            // 0x1eb234: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0530u;
    if (runtime->hasFunction(0x1E0530u)) {
        auto targetFn = runtime->lookupFunction(0x1E0530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB238u; }
        if (ctx->pc != 0x1EB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0530_0x1e0530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB238u; }
        if (ctx->pc != 0x1EB238u) { return; }
    }
    ctx->pc = 0x1EB238u;
    // 0x1eb238: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1eb238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eb23c: 0x9262e446  lbu         $v0, -0x1BBA($s3)
    ctx->pc = 0x1eb23cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294960198)));
    // 0x1eb240: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1eb240u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb244: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1eb244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eb248: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1EB248u;
    {
        const bool branch_taken_0x1eb248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB248u;
            // 0x1eb24c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb248) {
            ctx->pc = 0x1EB220u;
            runtime->cooperativeGuestYield();
            goto label_1eb220;
        }
    }
    ctx->pc = 0x1EB250u;
label_1eb250:
    // 0x1eb250: 0xc0781ec  jal         func_1E07B0
    ctx->pc = 0x1EB250u;
    SET_GPR_U32(ctx, 31, 0x1EB258u);
    ctx->pc = 0x1EB254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB250u;
            // 0x1eb254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E07B0u;
    if (runtime->hasFunction(0x1E07B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E07B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB258u; }
        if (ctx->pc != 0x1EB258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E07B0_0x1e07b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB258u; }
        if (ctx->pc != 0x1EB258u) { return; }
    }
    ctx->pc = 0x1EB258u;
    // 0x1eb258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eb25c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB25Cu;
    {
        const bool branch_taken_0x1eb25c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB25Cu;
            // 0x1eb260: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb25c) {
            ctx->pc = 0x1EB274u;
            goto label_1eb274;
        }
    }
    ctx->pc = 0x1EB264u;
    // 0x1eb264: 0xc07b1d2  jal         func_1EC748
    ctx->pc = 0x1EB264u;
    SET_GPR_U32(ctx, 31, 0x1EB26Cu);
    ctx->pc = 0x1EB268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB264u;
            // 0x1eb268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC748u;
    if (runtime->hasFunction(0x1EC748u)) {
        auto targetFn = runtime->lookupFunction(0x1EC748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB26Cu; }
        if (ctx->pc != 0x1EB26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC748_0x1ec748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB26Cu; }
        if (ctx->pc != 0x1EB26Cu) { return; }
    }
    ctx->pc = 0x1EB26Cu;
    // 0x1eb26c: 0x10000510  b           . + 4 + (0x510 << 2)
    ctx->pc = 0x1EB26Cu;
    {
        const bool branch_taken_0x1eb26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB26Cu;
            // 0x1eb270: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb26c) {
            ctx->pc = 0x1EC6B0u;
            goto label_1ec6b0;
        }
    }
    ctx->pc = 0x1EB274u;
label_1eb274:
    // 0x1eb274: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EB274u;
    {
        const bool branch_taken_0x1eb274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB274u;
            // 0x1eb278: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb274) {
            ctx->pc = 0x1EB2D8u;
            goto label_1eb2d8;
        }
    }
    ctx->pc = 0x1EB27Cu;
    // 0x1eb27c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1eb27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1eb280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB280u;
    {
        const bool branch_taken_0x1eb280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB280u;
            // 0x1eb284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb280) {
            ctx->pc = 0x1EB290u;
            goto label_1eb290;
        }
    }
    ctx->pc = 0x1EB288u;
    // 0x1eb288: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1EB288u;
    SET_GPR_U32(ctx, 31, 0x1EB290u);
    ctx->pc = 0x1EB28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB288u;
            // 0x1eb28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
        if (ctx->pc != 0x1EB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB290u; }
        if (ctx->pc != 0x1EB290u) { return; }
    }
    ctx->pc = 0x1EB290u;
label_1eb290:
    // 0x1eb290: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1EB290u;
    SET_GPR_U32(ctx, 31, 0x1EB298u);
    ctx->pc = 0x1EB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB290u;
            // 0x1eb294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB298u; }
        if (ctx->pc != 0x1EB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB298u; }
        if (ctx->pc != 0x1EB298u) { return; }
    }
    ctx->pc = 0x1EB298u;
    // 0x1eb298: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1eb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb29c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb2a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB2A0u;
    {
        const bool branch_taken_0x1eb2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2A0u;
            // 0x1eb2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2a0) {
            ctx->pc = 0x1EB2B0u;
            goto label_1eb2b0;
        }
    }
    ctx->pc = 0x1EB2A8u;
    // 0x1eb2a8: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1EB2A8u;
    SET_GPR_U32(ctx, 31, 0x1EB2B0u);
    ctx->pc = 0x1EB2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2A8u;
            // 0x1eb2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B0u; }
        if (ctx->pc != 0x1EB2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B0u; }
        if (ctx->pc != 0x1EB2B0u) { return; }
    }
    ctx->pc = 0x1EB2B0u;
label_1eb2b0:
    // 0x1eb2b0: 0xc07a022  jal         func_1E8088
    ctx->pc = 0x1EB2B0u;
    SET_GPR_U32(ctx, 31, 0x1EB2B8u);
    ctx->pc = 0x1EB2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2B0u;
            // 0x1eb2b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8088u;
    if (runtime->hasFunction(0x1E8088u)) {
        auto targetFn = runtime->lookupFunction(0x1E8088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B8u; }
        if (ctx->pc != 0x1EB2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8088_0x1e8088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2B8u; }
        if (ctx->pc != 0x1EB2B8u) { return; }
    }
    ctx->pc = 0x1EB2B8u;
    // 0x1eb2b8: 0xc07b1b8  jal         func_1EC6E0
    ctx->pc = 0x1EB2B8u;
    SET_GPR_U32(ctx, 31, 0x1EB2C0u);
    ctx->pc = 0x1EB2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2B8u;
            // 0x1eb2bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6E0u;
    if (runtime->hasFunction(0x1EC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2C0u; }
        if (ctx->pc != 0x1EB2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC6E0_0x1ec6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB2C0u; }
        if (ctx->pc != 0x1EB2C0u) { return; }
    }
    ctx->pc = 0x1EB2C0u;
    // 0x1eb2c0: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1eb2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1eb2c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1eb2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1eb2c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb2cc: 0xa48300e2  sh          $v1, 0xE2($a0)
    ctx->pc = 0x1eb2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 226), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eb2d0: 0x100004f6  b           . + 4 + (0x4F6 << 2)
    ctx->pc = 0x1EB2D0u;
    {
        const bool branch_taken_0x1eb2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2D0u;
            // 0x1eb2d4: 0xa48300de  sh          $v1, 0xDE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 222), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2d0) {
            ctx->pc = 0x1EC6ACu;
            goto label_1ec6ac;
        }
    }
    ctx->pc = 0x1EB2D8u;
label_1eb2d8:
    // 0x1eb2d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1eb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1eb2dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eb2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eb2e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EB2E0u;
    {
        const bool branch_taken_0x1eb2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB2E0u;
            // 0x1eb2e4: 0x264402e0  addiu       $a0, $s2, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb2e0) {
            ctx->pc = 0x1EB328u;
            goto label_1eb328;
        }
    }
    ctx->pc = 0x1EB2E8u;
    // 0x1eb2e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eb2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1eb2ec: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1eb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eb2f0: 0x3442e008  ori         $v0, $v0, 0xE008
    ctx->pc = 0x1eb2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57352);
    // 0x1eb2f4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1eb2f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb2f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1eb2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb2fc: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1eb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1eb300: 0xda420070  lqc2        $vf2, 0x70($s2)
    ctx->pc = 0x1eb300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1eb304: 0xfba20320  sqc2        $vf2, 0x320($sp)
    ctx->pc = 0x1eb304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb308: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1eb308u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb30c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1eb30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb310: 0xfa4102e0  sqc2        $vf1, 0x2E0($s2)
    ctx->pc = 0x1eb310u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 736), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb314: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1eb314u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb318: 0xda410300  lqc2        $vf1, 0x300($s2)
    ctx->pc = 0x1eb318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 768)));
    // 0x1eb31c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1eb31cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb320: 0xfa410300  sqc2        $vf1, 0x300($s2)
    ctx->pc = 0x1eb320u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb324: 0x0  nop
    ctx->pc = 0x1eb324u;
    // NOP
label_1eb328:
    // 0x1eb328: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1eb328u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb32c: 0xfba103d0  sqc2        $vf1, 0x3D0($sp)
    ctx->pc = 0x1eb32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb330: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1eb330u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb334: 0x7fa203c0  sq          $v0, 0x3C0($sp)
    ctx->pc = 0x1eb334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 2));
    // 0x1eb338: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1eb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1eb33c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1eb340: 0x50400092  beql        $v0, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x1EB340u;
    {
        const bool branch_taken_0x1eb340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb340) {
            ctx->pc = 0x1EB344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB340u;
            // 0x1eb344: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB58Cu;
            goto label_1eb58c;
        }
    }
    ctx->pc = 0x1EB348u;
    // 0x1eb348: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x1eb348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
    // 0x1eb34c: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1eb350: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x1eb350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1eb354: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1eb354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1eb358: 0x78620060  lq          $v0, 0x60($v1)
    ctx->pc = 0x1eb358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1eb35c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1eb35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1eb360: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x1eb360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1eb364: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1eb364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1eb368: 0x78620080  lq          $v0, 0x80($v1)
    ctx->pc = 0x1eb368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1eb36c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1eb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1eb370: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1eb374: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1eb374u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1eb378: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1eb378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1eb37c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1EB37Cu;
    {
        const bool branch_taken_0x1eb37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB37Cu;
            // 0x1eb380: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb37c) {
            ctx->pc = 0x1EB4DCu;
            goto label_1eb4dc;
        }
    }
    ctx->pc = 0x1EB384u;
    // 0x1eb384: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x1eb384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1eb388: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1eb388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1eb38c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EB38Cu;
    {
        const bool branch_taken_0x1eb38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB38Cu;
            // 0x1eb390: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb38c) {
            ctx->pc = 0x1EB3C4u;
            goto label_1eb3c4;
        }
    }
    ctx->pc = 0x1EB394u;
    // 0x1eb394: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1eb394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eb398: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1eb398u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1eb39c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1eb39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eb3a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1eb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1eb3a4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1eb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1eb3a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1eb3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1eb3ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1eb3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb3b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1eb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb3b4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB3B4u;
    {
        const bool branch_taken_0x1eb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EB3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3B4u;
            // 0x1eb3b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3b4) {
            ctx->pc = 0x1EB3C0u;
            goto label_1eb3c0;
        }
    }
    ctx->pc = 0x1EB3BCu;
    // 0x1eb3bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1eb3c0:
    // 0x1eb3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb3c4:
    // 0x1eb3c4: 0x8e500324  lw          $s0, 0x324($s2)
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1eb3c8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1eb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1eb3cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB3CCu;
    {
        const bool branch_taken_0x1eb3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3CCu;
            // 0x1eb3d0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3cc) {
            ctx->pc = 0x1EB3F0u;
            goto label_1eb3f0;
        }
    }
    ctx->pc = 0x1EB3D4u;
    // 0x1eb3d4: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1eb3d8: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1eb3dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB3DCu;
    {
        const bool branch_taken_0x1eb3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EB3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3DCu;
            // 0x1eb3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3dc) {
            ctx->pc = 0x1EB3F4u;
            goto label_1eb3f4;
        }
    }
    ctx->pc = 0x1EB3E4u;
    // 0x1eb3e4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1eb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1eb3e8: 0xc081522  jal         func_205488
    ctx->pc = 0x1EB3E8u;
    SET_GPR_U32(ctx, 31, 0x1EB3F0u);
    ctx->pc = 0x1EB3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3E8u;
            // 0x1eb3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3F0u; }
        if (ctx->pc != 0x1EB3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3F0u; }
        if (ctx->pc != 0x1EB3F0u) { return; }
    }
    ctx->pc = 0x1EB3F0u;
label_1eb3f0:
    // 0x1eb3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb3f4:
    // 0x1eb3f4: 0xc090d5c  jal         func_243570
    ctx->pc = 0x1EB3F4u;
    SET_GPR_U32(ctx, 31, 0x1EB3FCu);
    ctx->pc = 0x1EB3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3F4u;
            // 0x1eb3f8: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3FCu; }
        if (ctx->pc != 0x1EB3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3FCu; }
        if (ctx->pc != 0x1EB3FCu) { return; }
    }
    ctx->pc = 0x1EB3FCu;
    // 0x1eb3fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EB3FCu;
    {
        const bool branch_taken_0x1eb3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB3FCu;
            // 0x1eb400: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb3fc) {
            ctx->pc = 0x1EB434u;
            goto label_1eb434;
        }
    }
    ctx->pc = 0x1EB404u;
    // 0x1eb404: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EB404u;
    {
        const bool branch_taken_0x1eb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB404u;
            // 0x1eb408: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb404) {
            ctx->pc = 0x1EB4DCu;
            goto label_1eb4dc;
        }
    }
    ctx->pc = 0x1EB40Cu;
    // 0x1eb40c: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1EB40Cu;
    {
        const bool branch_taken_0x1eb40c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB40Cu;
            // 0x1eb410: 0x26430050  addiu       $v1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb40c) {
            ctx->pc = 0x1EB4E0u;
            goto label_1eb4e0;
        }
    }
    ctx->pc = 0x1EB414u;
    // 0x1eb414: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eb414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eb418: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1eb418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1eb41c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1eb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1eb420: 0x40f809  jalr        $v0
    ctx->pc = 0x1EB420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB428u);
        ctx->pc = 0x1EB424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB420u;
            // 0x1eb424: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB428u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB428u; }
            if (ctx->pc != 0x1EB428u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB428u;
    // 0x1eb428: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x1eb428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb42c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1EB42Cu;
    {
        const bool branch_taken_0x1eb42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB42Cu;
            // 0x1eb430: 0x7fa203c0  sq          $v0, 0x3C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb42c) {
            ctx->pc = 0x1EB4D8u;
            goto label_1eb4d8;
        }
    }
    ctx->pc = 0x1EB434u;
label_1eb434:
    // 0x1eb434: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1eb438: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1eb438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb43c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EB43Cu;
    {
        const bool branch_taken_0x1eb43c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB43Cu;
            // 0x1eb440: 0x7fa203c0  sq          $v0, 0x3C0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb43c) {
            ctx->pc = 0x1EB4D8u;
            goto label_1eb4d8;
        }
    }
    ctx->pc = 0x1EB444u;
    // 0x1eb444: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eb448: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1eb448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1eb44c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1eb450: 0x40f809  jalr        $v0
    ctx->pc = 0x1EB450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB458u);
        ctx->pc = 0x1EB454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB450u;
            // 0x1eb454: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB458u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB458u; }
            if (ctx->pc != 0x1EB458u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB458u;
    // 0x1eb458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb45c: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EB45Cu;
    {
        const bool branch_taken_0x1eb45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB45Cu;
            // 0x1eb460: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb45c) {
            ctx->pc = 0x1EB4DCu;
            goto label_1eb4dc;
        }
    }
    ctx->pc = 0x1EB464u;
    // 0x1eb464: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1eb464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1eb468: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB468u;
    {
        const bool branch_taken_0x1eb468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB468u;
            // 0x1eb46c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb468) {
            ctx->pc = 0x1EB48Cu;
            goto label_1eb48c;
        }
    }
    ctx->pc = 0x1EB470u;
    // 0x1eb470: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1eb474: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1eb478: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB478u;
    {
        const bool branch_taken_0x1eb478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EB47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB478u;
            // 0x1eb47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb478) {
            ctx->pc = 0x1EB490u;
            goto label_1eb490;
        }
    }
    ctx->pc = 0x1EB480u;
    // 0x1eb480: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1eb480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1eb484: 0xc081522  jal         func_205488
    ctx->pc = 0x1EB484u;
    SET_GPR_U32(ctx, 31, 0x1EB48Cu);
    ctx->pc = 0x1EB488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB484u;
            // 0x1eb488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB48Cu; }
        if (ctx->pc != 0x1EB48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB48Cu; }
        if (ctx->pc != 0x1EB48Cu) { return; }
    }
    ctx->pc = 0x1EB48Cu;
label_1eb48c:
    // 0x1eb48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eb490:
    // 0x1eb490: 0xc090d5c  jal         func_243570
    ctx->pc = 0x1EB490u;
    SET_GPR_U32(ctx, 31, 0x1EB498u);
    ctx->pc = 0x1EB494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB490u;
            // 0x1eb494: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB498u; }
        if (ctx->pc != 0x1EB498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB498u; }
        if (ctx->pc != 0x1EB498u) { return; }
    }
    ctx->pc = 0x1EB498u;
    // 0x1eb498: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EB498u;
    {
        const bool branch_taken_0x1eb498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB498u;
            // 0x1eb49c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb498) {
            ctx->pc = 0x1EB4D8u;
            goto label_1eb4d8;
        }
    }
    ctx->pc = 0x1EB4A0u;
    // 0x1eb4a0: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x1eb4a0u;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x1eb4a4: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x1eb4a4u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1eb4a8: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1eb4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb4ac: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x1eb4acu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x1eb4b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1eb4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb4b4: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x1eb4b4u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1eb4b8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1eb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb4bc: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1eb4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb4c0: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1eb4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb4c4: 0xf8430030  sqc2        $vf3, 0x30($v0)
    ctx->pc = 0x1eb4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb4c8: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1eb4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb4cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1EB4CCu;
    {
        const bool branch_taken_0x1eb4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB4CCu;
            // 0x1eb4d0: 0xf8440020  sqc2        $vf4, 0x20($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4cc) {
            ctx->pc = 0x1EB588u;
            goto label_1eb588;
        }
    }
    ctx->pc = 0x1EB4D4u;
    // 0x1eb4d4: 0x0  nop
    ctx->pc = 0x1eb4d4u;
    // NOP
label_1eb4d8:
    // 0x1eb4d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1eb4dc:
    // 0x1eb4dc: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x1eb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1eb4e0:
    // 0x1eb4e0: 0xda460050  lqc2        $vf6, 0x50($s2)
    ctx->pc = 0x1eb4e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1eb4e4: 0xd8670010  lqc2        $vf7, 0x10($v1)
    ctx->pc = 0x1eb4e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1eb4e8: 0xd8680020  lqc2        $vf8, 0x20($v1)
    ctx->pc = 0x1eb4e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1eb4ec: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1eb4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1eb4f0: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1eb4f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb4f4: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1eb4f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1eb4f8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1eb4f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb4fc: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1eb4fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1eb500: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1eb500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eb504: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1eb504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb508: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1eb508u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb50c: 0x4be5114b  vmaddw.xyzw $vf5, $vf2, $vf5w
    ctx->pc = 0x1eb50cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eb510: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1eb510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eb514: 0xfba500d0  sqc2        $vf5, 0xD0($sp)
    ctx->pc = 0x1eb514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eb518: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1eb518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb51c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1eb51cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb520: 0x4be310cb  vmaddw.xyzw $vf3, $vf2, $vf3w
    ctx->pc = 0x1eb520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eb524: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1eb524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eb528: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x1eb528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb52c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1eb52cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb530: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1eb530u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb534: 0x4be4110b  vmaddw.xyzw $vf4, $vf2, $vf4w
    ctx->pc = 0x1eb534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eb538: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1eb538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1eb53c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1eb53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb540: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1eb540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb544: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1eb544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1eb548: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x1eb548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1eb54c: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1eb54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb550: 0xfba50090  sqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1eb550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eb554: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1eb554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb558: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1eb558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb55c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1eb55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb560: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1eb560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1eb564: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1eb564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb568: 0xdba603c0  lqc2        $vf6, 0x3C0($sp)
    ctx->pc = 0x1eb568u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1eb56c: 0x4be231a8  vadd.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x1eb56cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1eb570: 0xfba603c0  sqc2        $vf6, 0x3C0($sp)
    ctx->pc = 0x1eb570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1eb574: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1eb574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb578: 0xfa450050  sqc2        $vf5, 0x50($s2)
    ctx->pc = 0x1eb578u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1eb57c: 0xfa430060  sqc2        $vf3, 0x60($s2)
    ctx->pc = 0x1eb57cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb580: 0xfa440070  sqc2        $vf4, 0x70($s2)
    ctx->pc = 0x1eb580u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb584: 0xfa410080  sqc2        $vf1, 0x80($s2)
    ctx->pc = 0x1eb584u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_1eb588:
    // 0x1eb588: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1eb588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1eb58c:
    // 0x1eb58c: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1eb58cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1eb590: 0xc6b4c658  lwc1        $f20, -0x39A8($s5)
    ctx->pc = 0x1eb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1eb594: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1eb598: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1eb598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1eb59c: 0x40f809  jalr        $v0
    ctx->pc = 0x1EB59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB5A4u);
        ctx->pc = 0x1EB5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB59Cu;
            // 0x1eb5a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB5A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB5A4u; }
            if (ctx->pc != 0x1EB5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB5A4u;
    // 0x1eb5a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1eb5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1eb5a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb5a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb5ac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1eb5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1eb5b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb5b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb5b8: 0xc641016c  lwc1        $f1, 0x16C($s2)
    ctx->pc = 0x1eb5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb5bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1eb5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1eb5c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb5c4: 0x7ba203d0  lq          $v0, 0x3D0($sp)
    ctx->pc = 0x1eb5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1eb5c8: 0x7fa203e0  sq          $v0, 0x3E0($sp)
    ctx->pc = 0x1eb5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 2));
    // 0x1eb5cc: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1eb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb5d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1eb5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eb5d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB5D4u;
    {
        const bool branch_taken_0x1eb5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5D4u;
            // 0x1eb5d8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5d4) {
            ctx->pc = 0x1EB5E8u;
            goto label_1eb5e8;
        }
    }
    ctx->pc = 0x1EB5DCu;
    // 0x1eb5dc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1eb5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1eb5e0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EB5E0u;
    {
        const bool branch_taken_0x1eb5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5E0u;
            // 0x1eb5e4: 0x30620030  andi        $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5e0) {
            ctx->pc = 0x1EB658u;
            goto label_1eb658;
        }
    }
    ctx->pc = 0x1EB5E8u;
label_1eb5e8:
    // 0x1eb5e8: 0x8e430234  lw          $v1, 0x234($s2)
    ctx->pc = 0x1eb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x1eb5ec: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1EB5ECu;
    {
        const bool branch_taken_0x1eb5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB5ECu;
            // 0x1eb5f0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5ec) {
            ctx->pc = 0x1EB6E0u;
            goto label_1eb6e0;
        }
    }
    ctx->pc = 0x1EB5F4u;
    // 0x1eb5f4: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x1eb5f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb5fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1eb600: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb604: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x1eb604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x1eb608: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1EB608u;
    SET_GPR_U32(ctx, 31, 0x1EB610u);
    ctx->pc = 0x1EB60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB608u;
            // 0x1eb60c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB610u; }
        if (ctx->pc != 0x1EB610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB610u; }
        if (ctx->pc != 0x1EB610u) { return; }
    }
    ctx->pc = 0x1EB610u;
    // 0x1eb610: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1eb610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1eb614: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb618: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x1eb618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb61c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1eb61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb620: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1eb620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1eb624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1eb624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1eb628: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1eb628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1eb62c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1eb62cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1eb630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb634: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1eb634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1eb638: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1eb638u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1eb63c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1eb63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1eb640: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1eb640u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1eb644: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1eb644u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1eb648: 0x7fa203e0  sq          $v0, 0x3E0($sp)
    ctx->pc = 0x1eb648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 2));
    // 0x1eb64c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1eb64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1eb650: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EB650u;
    {
        const bool branch_taken_0x1eb650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB650u;
            // 0x1eb654: 0x7fa20330  sq          $v0, 0x330($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb650) {
            ctx->pc = 0x1EB6E0u;
            goto label_1eb6e0;
        }
    }
    ctx->pc = 0x1EB658u;
label_1eb658:
    // 0x1eb658: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EB658u;
    {
        const bool branch_taken_0x1eb658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb658) {
            ctx->pc = 0x1EB65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB658u;
            // 0x1eb65c: 0x8e420324  lw          $v0, 0x324($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB6E8u;
            goto label_1eb6e8;
        }
    }
    ctx->pc = 0x1EB660u;
    // 0x1eb660: 0x8e430238  lw          $v1, 0x238($s2)
    ctx->pc = 0x1eb660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x1eb664: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EB664u;
    {
        const bool branch_taken_0x1eb664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB664u;
            // 0x1eb668: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb664) {
            ctx->pc = 0x1EB6E0u;
            goto label_1eb6e0;
        }
    }
    ctx->pc = 0x1EB66Cu;
    // 0x1eb66c: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x1eb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x1eb670: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb674: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1eb674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1eb678: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb67c: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x1eb680: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1EB680u;
    SET_GPR_U32(ctx, 31, 0x1EB688u);
    ctx->pc = 0x1EB684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB680u;
            // 0x1eb684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB688u; }
        if (ctx->pc != 0x1EB688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB688u; }
        if (ctx->pc != 0x1EB688u) { return; }
    }
    ctx->pc = 0x1EB688u;
    // 0x1eb688: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1eb68c: 0xda430050  lqc2        $vf3, 0x50($s2)
    ctx->pc = 0x1eb68cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1eb690: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1eb690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eb694: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1eb694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eb698: 0xfba30340  sqc2        $vf3, 0x340($sp)
    ctx->pc = 0x1eb698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb69c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1eb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1eb6a0: 0x48a32800  qmtc2.ni    $v1, $vf5
    ctx->pc = 0x1eb6a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eb6a4: 0x4be518d8  vmulx.xyzw  $vf3, $vf3, $vf5x
    ctx->pc = 0x1eb6a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eb6a8: 0xfba30350  sqc2        $vf3, 0x350($sp)
    ctx->pc = 0x1eb6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb6ac: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x1eb6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1eb6b0: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1eb6b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1eb6b4: 0x4be418d8  vmulx.xyzw  $vf3, $vf3, $vf4x
    ctx->pc = 0x1eb6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eb6b8: 0xda410060  lqc2        $vf1, 0x60($s2)
    ctx->pc = 0x1eb6b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1eb6bc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1eb6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1eb6c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1eb6c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1eb6c4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1eb6c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb6c8: 0xfba10360  sqc2        $vf1, 0x360($sp)
    ctx->pc = 0x1eb6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb6cc: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x1eb6ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb6d0: 0xfba10370  sqc2        $vf1, 0x370($sp)
    ctx->pc = 0x1eb6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb6d4: 0x4be40858  vmulx.xyzw  $vf1, $vf1, $vf4x
    ctx->pc = 0x1eb6d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb6d8: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1eb6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb6dc: 0xfba203e0  sqc2        $vf2, 0x3E0($sp)
    ctx->pc = 0x1eb6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[2]));
label_1eb6e0:
    // 0x1eb6e0: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x1eb6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1eb6e4: 0x0  nop
    ctx->pc = 0x1eb6e4u;
    // NOP
label_1eb6e8:
    // 0x1eb6e8: 0x7ba303d0  lq          $v1, 0x3D0($sp)
    ctx->pc = 0x1eb6e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1eb6ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1eb6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1eb6f0: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x1eb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1eb6f4: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x1eb6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x1eb6f8: 0xc07a022  jal         func_1E8088
    ctx->pc = 0x1EB6F8u;
    SET_GPR_U32(ctx, 31, 0x1EB700u);
    ctx->pc = 0x1EB6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB6F8u;
            // 0x1eb6fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8088u;
    if (runtime->hasFunction(0x1E8088u)) {
        auto targetFn = runtime->lookupFunction(0x1E8088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB700u; }
        if (ctx->pc != 0x1EB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8088_0x1e8088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB700u; }
        if (ctx->pc != 0x1EB700u) { return; }
    }
    ctx->pc = 0x1EB700u;
    // 0x1eb700: 0xc07a82e  jal         func_1EA0B8
    ctx->pc = 0x1EB700u;
    SET_GPR_U32(ctx, 31, 0x1EB708u);
    ctx->pc = 0x1EB704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB700u;
            // 0x1eb704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA0B8u;
    if (runtime->hasFunction(0x1EA0B8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB708u; }
        if (ctx->pc != 0x1EB708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA0B8_0x1ea0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB708u; }
        if (ctx->pc != 0x1EB708u) { return; }
    }
    ctx->pc = 0x1EB708u;
    // 0x1eb708: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1eb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb70c: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB70Cu;
    {
        const bool branch_taken_0x1eb70c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1eb70c) {
            ctx->pc = 0x1EB710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB70Cu;
            // 0x1eb710: 0x8e4202d8  lw          $v0, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB738u;
            goto label_1eb738;
        }
    }
    ctx->pc = 0x1EB714u;
    // 0x1eb714: 0x8e4202dc  lw          $v0, 0x2DC($s2)
    ctx->pc = 0x1eb714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
    // 0x1eb718: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1eb718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1eb71c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB71Cu;
    {
        const bool branch_taken_0x1eb71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb71c) {
            ctx->pc = 0x1EB720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB71Cu;
            // 0x1eb720: 0x8e4202d8  lw          $v0, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB738u;
            goto label_1eb738;
        }
    }
    ctx->pc = 0x1EB724u;
    // 0x1eb724: 0xc072954  jal         func_1CA550
    ctx->pc = 0x1EB724u;
    SET_GPR_U32(ctx, 31, 0x1EB72Cu);
    ctx->pc = 0x1EB728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB724u;
            // 0x1eb728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA550u;
    if (runtime->hasFunction(0x1CA550u)) {
        auto targetFn = runtime->lookupFunction(0x1CA550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB72Cu; }
        if (ctx->pc != 0x1EB72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA550_0x1ca550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB72Cu; }
        if (ctx->pc != 0x1EB72Cu) { return; }
    }
    ctx->pc = 0x1EB72Cu;
    // 0x1eb72c: 0x1000031a  b           . + 4 + (0x31A << 2)
    ctx->pc = 0x1EB72Cu;
    {
        const bool branch_taken_0x1eb72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb72c) {
            ctx->pc = 0x1EC398u;
            goto label_1ec398;
        }
    }
    ctx->pc = 0x1EB734u;
    // 0x1eb734: 0x0  nop
    ctx->pc = 0x1eb734u;
    // NOP
label_1eb738:
    // 0x1eb738: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x1eb738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x1eb73c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1eb73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1eb740: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1eb744: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eb744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eb748: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x1eb748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1eb74c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB74Cu;
    {
        const bool branch_taken_0x1eb74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB74Cu;
            // 0x1eb750: 0xae4202d8  sw          $v0, 0x2D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb74c) {
            ctx->pc = 0x1EB760u;
            goto label_1eb760;
        }
    }
    ctx->pc = 0x1EB754u;
    // 0x1eb754: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1eb758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB758u;
    {
        const bool branch_taken_0x1eb758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB758u;
            // 0x1eb75c: 0x30500010  andi        $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb758) {
            ctx->pc = 0x1EB764u;
            goto label_1eb764;
        }
    }
    ctx->pc = 0x1EB760u;
label_1eb760:
    // 0x1eb760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eb760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb764:
    // 0x1eb764: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1eb764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1eb768: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1eb768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1eb76c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB76Cu;
    {
        const bool branch_taken_0x1eb76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb76c) {
            ctx->pc = 0x1EB784u;
            goto label_1eb784;
        }
    }
    ctx->pc = 0x1EB774u;
    // 0x1eb774: 0xc090d56  jal         func_243558
    ctx->pc = 0x1EB774u;
    SET_GPR_U32(ctx, 31, 0x1EB77Cu);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB77Cu; }
        if (ctx->pc != 0x1EB77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB77Cu; }
        if (ctx->pc != 0x1EB77Cu) { return; }
    }
    ctx->pc = 0x1EB77Cu;
    // 0x1eb77c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB77Cu;
    {
        const bool branch_taken_0x1eb77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB77Cu;
            // 0x1eb780: 0x90420012  lbu         $v0, 0x12($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb77c) {
            ctx->pc = 0x1EB790u;
            goto label_1eb790;
        }
    }
    ctx->pc = 0x1EB784u;
label_1eb784:
    // 0x1eb784: 0xc090d54  jal         func_243550
    ctx->pc = 0x1EB784u;
    SET_GPR_U32(ctx, 31, 0x1EB78Cu);
    ctx->pc = 0x243550u;
    if (runtime->hasFunction(0x243550u)) {
        auto targetFn = runtime->lookupFunction(0x243550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB78Cu; }
        if (ctx->pc != 0x1EB78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243550_0x243558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB78Cu; }
        if (ctx->pc != 0x1EB78Cu) { return; }
    }
    ctx->pc = 0x1EB78Cu;
    // 0x1eb78c: 0x94420038  lhu         $v0, 0x38($v0)
    ctx->pc = 0x1eb78cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1eb790:
    // 0x1eb790: 0x160001f1  bnez        $s0, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x1EB790u;
    {
        const bool branch_taken_0x1eb790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB790u;
            // 0x1eb794: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb790) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EB798u;
    // 0x1eb798: 0x3262001c  andi        $v0, $s3, 0x1C
    ctx->pc = 0x1eb798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28);
    // 0x1eb79c: 0x10400282  beqz        $v0, . + 4 + (0x282 << 2)
    ctx->pc = 0x1EB79Cu;
    {
        const bool branch_taken_0x1eb79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB79Cu;
            // 0x1eb7a0: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb79c) {
            ctx->pc = 0x1EC1A8u;
            goto label_1ec1a8;
        }
    }
    ctx->pc = 0x1EB7A4u;
    // 0x1eb7a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB7A4u;
    {
        const bool branch_taken_0x1eb7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7A4u;
            // 0x1eb7a8: 0x7ba403d0  lq          $a0, 0x3D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7a4) {
            ctx->pc = 0x1EB7B0u;
            goto label_1eb7b0;
        }
    }
    ctx->pc = 0x1EB7ACu;
    // 0x1eb7ac: 0x7fa403c0  sq          $a0, 0x3C0($sp)
    ctx->pc = 0x1eb7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 4));
label_1eb7b0:
    // 0x1eb7b0: 0xda4202e0  lqc2        $vf2, 0x2E0($s2)
    ctx->pc = 0x1eb7b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x1eb7b4: 0x265002e0  addiu       $s0, $s2, 0x2E0
    ctx->pc = 0x1eb7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x1eb7b8: 0x7a060010  lq          $a2, 0x10($s0)
    ctx->pc = 0x1eb7b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1eb7bc: 0x7a140020  lq          $s4, 0x20($s0)
    ctx->pc = 0x1eb7bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eb7c0: 0xfba20430  sqc2        $vf2, 0x430($sp)
    ctx->pc = 0x1eb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1eb7c4: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1EB7C4u;
    SET_GPR_U32(ctx, 31, 0x1EB7CCu);
    ctx->pc = 0x1EB7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7C4u;
            // 0x1eb7c8: 0x7fa603f0  sq          $a2, 0x3F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7CCu; }
        if (ctx->pc != 0x1EB7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7CCu; }
        if (ctx->pc != 0x1EB7CCu) { return; }
    }
    ctx->pc = 0x1EB7CCu;
    // 0x1eb7cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB7CCu;
    {
        const bool branch_taken_0x1eb7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7CCu;
            // 0x1eb7d0: 0xdba20430  lqc2        $vf2, 0x430($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7cc) {
            ctx->pc = 0x1EB7F8u;
            goto label_1eb7f8;
        }
    }
    ctx->pc = 0x1EB7D4u;
    // 0x1eb7d4: 0xda410070  lqc2        $vf1, 0x70($s2)
    ctx->pc = 0x1eb7d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1eb7d8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1eb7d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb7dc: 0xfba10380  sqc2        $vf1, 0x380($sp)
    ctx->pc = 0x1eb7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb7e0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1eb7e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb7e4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1eb7e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb7e8: 0xdba103f0  lqc2        $vf1, 0x3F0($sp)
    ctx->pc = 0x1eb7e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1eb7ec: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1eb7ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb7f0: 0xfba103f0  sqc2        $vf1, 0x3F0($sp)
    ctx->pc = 0x1eb7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb7f4: 0x0  nop
    ctx->pc = 0x1eb7f4u;
    // NOP
label_1eb7f8:
    // 0x1eb7f8: 0xc64102ac  lwc1        $f1, 0x2AC($s2)
    ctx->pc = 0x1eb7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb7fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1eb7fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb800: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1eb800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb804: 0x0  nop
    ctx->pc = 0x1eb804u;
    // NOP
    // 0x1eb808: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
    ctx->pc = 0x1EB808u;
    {
        const bool branch_taken_0x1eb808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb808) {
            ctx->pc = 0x1EB80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB808u;
            // 0x1eb80c: 0x8e4302d8  lw          $v1, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB8DCu;
            goto label_1eb8dc;
        }
    }
    ctx->pc = 0x1EB810u;
    // 0x1eb810: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1eb810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1eb814: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1eb814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb818: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EB818u;
    {
        const bool branch_taken_0x1eb818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EB81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB818u;
            // 0x1eb81c: 0x8c8200b4  lw          $v0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb818) {
            ctx->pc = 0x1EB88Cu;
            goto label_1eb88c;
        }
    }
    ctx->pc = 0x1EB820u;
    // 0x1eb820: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EB820u;
    {
        const bool branch_taken_0x1eb820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb820) {
            ctx->pc = 0x1EB824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB820u;
            // 0x1eb824: 0x46140841  sub.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB890u;
            goto label_1eb890;
        }
    }
    ctx->pc = 0x1EB828u;
    // 0x1eb828: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eb828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eb82c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1eb82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1eb830: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EB830u;
    {
        const bool branch_taken_0x1eb830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb830) {
            ctx->pc = 0x1EB834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB830u;
            // 0x1eb834: 0x46140841  sub.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB890u;
            goto label_1eb890;
        }
    }
    ctx->pc = 0x1EB838u;
    // 0x1eb838: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1eb838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eb83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb840: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1eb840u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb848: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1eb848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb84c: 0x0  nop
    ctx->pc = 0x1eb84cu;
    // NOP
    // 0x1eb850: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB850u;
    {
        const bool branch_taken_0x1eb850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb850) {
            ctx->pc = 0x1EB854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB850u;
            // 0x1eb854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB878u;
            goto label_1eb878;
        }
    }
    ctx->pc = 0x1EB858u;
    // 0x1eb858: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1eb858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eb85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb860: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB860u;
    {
        const bool branch_taken_0x1eb860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb860) {
            ctx->pc = 0x1EB864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB860u;
            // 0x1eb864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB878u;
            goto label_1eb878;
        }
    }
    ctx->pc = 0x1EB868u;
    // 0x1eb868: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1eb868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1eb86c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb870: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EB870u;
    {
        const bool branch_taken_0x1eb870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb870) {
            ctx->pc = 0x1EB874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB870u;
            // 0x1eb874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB878u;
            goto label_1eb878;
        }
    }
    ctx->pc = 0x1EB878u;
label_1eb878:
    // 0x1eb878: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB878u;
    {
        const bool branch_taken_0x1eb878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb878) {
            ctx->pc = 0x1EB87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB878u;
            // 0x1eb87c: 0x46140841  sub.s       $f1, $f1, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB890u;
            goto label_1eb890;
        }
    }
    ctx->pc = 0x1EB880u;
    // 0x1eb880: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x1eb880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x1eb884: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB884u;
    {
        const bool branch_taken_0x1eb884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB884u;
            // 0x1eb888: 0xae4002ac  sw          $zero, 0x2AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb884) {
            ctx->pc = 0x1EB8D8u;
            goto label_1eb8d8;
        }
    }
    ctx->pc = 0x1EB88Cu;
label_1eb88c:
    // 0x1eb88c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1eb88cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_1eb890:
    // 0x1eb890: 0xda410070  lqc2        $vf1, 0x70($s2)
    ctx->pc = 0x1eb890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1eb894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb898: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1eb898u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb89c: 0xfba10390  sqc2        $vf1, 0x390($sp)
    ctx->pc = 0x1eb89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb8a0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1eb8a0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1eb8a4: 0xe64002ac  swc1        $f0, 0x2AC($s2)
    ctx->pc = 0x1eb8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
    // 0x1eb8a8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1eb8a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb8ac: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1eb8acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1eb8b0: 0xdba303f0  lqc2        $vf3, 0x3F0($sp)
    ctx->pc = 0x1eb8b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1eb8b4: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1eb8b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1eb8b8: 0xfba303f0  sqc2        $vf3, 0x3F0($sp)
    ctx->pc = 0x1eb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1eb8bc: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x1eb8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    // 0x1eb8c0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1eb8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eb8c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1eb8c8: 0x3442e008  ori         $v0, $v0, 0xE008
    ctx->pc = 0x1eb8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57352);
    // 0x1eb8cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1eb8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb8d0: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1eb8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1eb8d4: 0x0  nop
    ctx->pc = 0x1eb8d4u;
    // NOP
label_1eb8d8:
    // 0x1eb8d8: 0x8e4302d8  lw          $v1, 0x2D8($s2)
    ctx->pc = 0x1eb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
label_1eb8dc:
    // 0x1eb8dc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1eb8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1eb8e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB8E0u;
    {
        const bool branch_taken_0x1eb8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb8e0) {
            ctx->pc = 0x1EB8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8E0u;
            // 0x1eb8e4: 0xc64002a8  lwc1        $f0, 0x2A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB91Cu;
            goto label_1eb91c;
        }
    }
    ctx->pc = 0x1EB8E8u;
    // 0x1eb8e8: 0xc64002a0  lwc1        $f0, 0x2A0($s2)
    ctx->pc = 0x1eb8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb8ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1eb8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb8f0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1eb8f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1eb8f4: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1eb8f4u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1eb8f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eb8f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb8fc: 0x0  nop
    ctx->pc = 0x1eb8fcu;
    // NOP
    // 0x1eb900: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB900u;
    {
        const bool branch_taken_0x1eb900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB900u;
            // 0x1eb904: 0xe64002a0  swc1        $f0, 0x2A0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb900) {
            ctx->pc = 0x1EB918u;
            goto label_1eb918;
        }
    }
    ctx->pc = 0x1EB908u;
    // 0x1eb908: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1eb90c: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x1eb90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x1eb910: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb914: 0xae4202d8  sw          $v0, 0x2D8($s2)
    ctx->pc = 0x1eb914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
label_1eb918:
    // 0x1eb918: 0xc64002a8  lwc1        $f0, 0x2A8($s2)
    ctx->pc = 0x1eb918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb91c:
    // 0x1eb91c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1eb91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb924: 0x0  nop
    ctx->pc = 0x1eb924u;
    // NOP
    // 0x1eb928: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB928u;
    {
        const bool branch_taken_0x1eb928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb928) {
            ctx->pc = 0x1EB92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB928u;
            // 0x1eb92c: 0xc64002b4  lwc1        $f0, 0x2B4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB940u;
            goto label_1eb940;
        }
    }
    ctx->pc = 0x1EB930u;
    // 0x1eb930: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1eb930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1eb934: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1eb934u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1eb938: 0xe64002a8  swc1        $f0, 0x2A8($s2)
    ctx->pc = 0x1eb938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 680), bits); }
    // 0x1eb93c: 0xc64002b4  lwc1        $f0, 0x2B4($s2)
    ctx->pc = 0x1eb93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eb940:
    // 0x1eb940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb944: 0x0  nop
    ctx->pc = 0x1eb944u;
    // NOP
    // 0x1eb948: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB948u;
    {
        const bool branch_taken_0x1eb948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB948u;
            // 0x1eb94c: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb948) {
            ctx->pc = 0x1EB95Cu;
            goto label_1eb95c;
        }
    }
    ctx->pc = 0x1EB950u;
    // 0x1eb950: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1eb950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1eb954: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1eb954u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1eb958: 0xe64002b4  swc1        $f0, 0x2B4($s2)
    ctx->pc = 0x1eb958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 692), bits); }
label_1eb95c:
    // 0x1eb95c: 0xc0795a4  jal         func_1E5690
    ctx->pc = 0x1EB95Cu;
    SET_GPR_U32(ctx, 31, 0x1EB964u);
    ctx->pc = 0x1EB960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB95Cu;
            // 0x1eb960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5690u;
    if (runtime->hasFunction(0x1E5690u)) {
        auto targetFn = runtime->lookupFunction(0x1E5690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB964u; }
        if (ctx->pc != 0x1EB964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5690_0x1e5690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB964u; }
        if (ctx->pc != 0x1EB964u) { return; }
    }
    ctx->pc = 0x1EB964u;
    // 0x1eb964: 0x700284a9  por         $s0, $zero, $v0
    ctx->pc = 0x1eb964u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1eb968: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1eb968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb96c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1eb96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1eb970: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EB970u;
    {
        const bool branch_taken_0x1eb970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb970) {
            ctx->pc = 0x1EB974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB970u;
            // 0x1eb974: 0x8e4202dc  lw          $v0, 0x2DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E0u;
            goto label_1eb9e0;
        }
    }
    ctx->pc = 0x1EB978u;
    // 0x1eb978: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1eb978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1eb97c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EB97Cu;
    {
        const bool branch_taken_0x1eb97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb97c) {
            ctx->pc = 0x1EB980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB97Cu;
            // 0x1eb980: 0x8e4202dc  lw          $v0, 0x2DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E0u;
            goto label_1eb9e0;
        }
    }
    ctx->pc = 0x1EB984u;
    // 0x1eb984: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1eb988: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eb988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eb98c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB98Cu;
    {
        const bool branch_taken_0x1eb98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb98c) {
            ctx->pc = 0x1EB990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB98Cu;
            // 0x1eb990: 0x8e4202dc  lw          $v0, 0x2DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E0u;
            goto label_1eb9e0;
        }
    }
    ctx->pc = 0x1EB994u;
    // 0x1eb994: 0x8e4402dc  lw          $a0, 0x2DC($s2)
    ctx->pc = 0x1eb994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
    // 0x1eb998: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1eb998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb99c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x1eb99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x1eb9a0: 0x30850200  andi        $a1, $a0, 0x200
    ctx->pc = 0x1eb9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1eb9a4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1eb9a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1eb9a8: 0x30860400  andi        $a2, $a0, 0x400
    ctx->pc = 0x1eb9a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1eb9ac: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x1eb9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1eb9b0: 0x30840800  andi        $a0, $a0, 0x800
    ctx->pc = 0x1eb9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x1eb9b4: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x1eb9b4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1eb9b8: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x1eb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1eb9bc: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x1eb9bcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1eb9c0: 0x34450080  ori         $a1, $v0, 0x80
    ctx->pc = 0x1eb9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1eb9c4: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x1eb9c4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1eb9c8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB9C8u;
    {
        const bool branch_taken_0x1eb9c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9c8) {
            ctx->pc = 0x1EB9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9C8u;
            // 0x1eb9cc: 0x8e4202dc  lw          $v0, 0x2DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E0u;
            goto label_1eb9e0;
        }
    }
    ctx->pc = 0x1EB9D0u;
    // 0x1eb9d0: 0xc071416  jal         func_1C5058
    ctx->pc = 0x1EB9D0u;
    SET_GPR_U32(ctx, 31, 0x1EB9D8u);
    ctx->pc = 0x1EB9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9D0u;
            // 0x1eb9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5058u;
    if (runtime->hasFunction(0x1C5058u)) {
        auto targetFn = runtime->lookupFunction(0x1C5058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9D8u; }
        if (ctx->pc != 0x1EB9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5058_0x1c5058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB9D8u; }
        if (ctx->pc != 0x1EB9D8u) { return; }
    }
    ctx->pc = 0x1EB9D8u;
    // 0x1eb9d8: 0x8e4202dc  lw          $v0, 0x2DC($s2)
    ctx->pc = 0x1eb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 732)));
    // 0x1eb9dc: 0x0  nop
    ctx->pc = 0x1eb9dcu;
    // NOP
label_1eb9e0:
    // 0x1eb9e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1eb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1eb9e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eb9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eb9e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1EB9E8u;
    {
        const bool branch_taken_0x1eb9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9e8) {
            ctx->pc = 0x1EB9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9E8u;
            // 0x1eb9ec: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBA20u;
            goto label_1eba20;
        }
    }
    ctx->pc = 0x1EB9F0u;
    // 0x1eb9f0: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1eb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eb9f4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1eb9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1eb9f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB9F8u;
    {
        const bool branch_taken_0x1eb9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9f8) {
            ctx->pc = 0x1EB9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9F8u;
            // 0x1eb9fc: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBA20u;
            goto label_1eba20;
        }
    }
    ctx->pc = 0x1EBA00u;
    // 0x1eba00: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1eba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1eba04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1eba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1eba08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBA08u;
    {
        const bool branch_taken_0x1eba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eba08) {
            ctx->pc = 0x1EBA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA08u;
            // 0x1eba0c: 0x8e440174  lw          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBA20u;
            goto label_1eba20;
        }
    }
    ctx->pc = 0x1EBA10u;
    // 0x1eba10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba14: 0xc070d10  jal         func_1C3440
    ctx->pc = 0x1EBA14u;
    SET_GPR_U32(ctx, 31, 0x1EBA1Cu);
    ctx->pc = 0x1EBA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA14u;
            // 0x1eba18: 0x70102ca9  por         $a1, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3440u;
    if (runtime->hasFunction(0x1C3440u)) {
        auto targetFn = runtime->lookupFunction(0x1C3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA1Cu; }
        if (ctx->pc != 0x1EBA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3440_0x1c3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA1Cu; }
        if (ctx->pc != 0x1EBA1Cu) { return; }
    }
    ctx->pc = 0x1EBA1Cu;
    // 0x1eba1c: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1eba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1eba20:
    // 0x1eba20: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x1eba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1eba24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBA24u;
    {
        const bool branch_taken_0x1eba24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA24u;
            // 0x1eba28: 0xafa003a0  sw          $zero, 0x3A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba24) {
            ctx->pc = 0x1EBA44u;
            goto label_1eba44;
        }
    }
    ctx->pc = 0x1EBA2Cu;
    // 0x1eba2c: 0x7ba603f0  lq          $a2, 0x3F0($sp)
    ctx->pc = 0x1eba2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1eba30: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1eba30u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1eba34: 0xc071510  jal         func_1C5440
    ctx->pc = 0x1EBA34u;
    SET_GPR_U32(ctx, 31, 0x1EBA3Cu);
    ctx->pc = 0x1EBA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA34u;
            // 0x1eba38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5440u;
    if (runtime->hasFunction(0x1C5440u)) {
        auto targetFn = runtime->lookupFunction(0x1C5440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA3Cu; }
        if (ctx->pc != 0x1EBA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5440_0x1c5440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA3Cu; }
        if (ctx->pc != 0x1EBA3Cu) { return; }
    }
    ctx->pc = 0x1EBA3Cu;
    // 0x1eba3c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1EBA3Cu;
    {
        const bool branch_taken_0x1eba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA3Cu;
            // 0x1eba40: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba3c) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBA44u;
label_1eba44:
    // 0x1eba44: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x1eba44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1eba48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBA48u;
    {
        const bool branch_taken_0x1eba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA48u;
            // 0x1eba4c: 0x7ba603e0  lq          $a2, 0x3E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba48) {
            ctx->pc = 0x1EBA64u;
            goto label_1eba64;
        }
    }
    ctx->pc = 0x1EBA50u;
    // 0x1eba50: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1eba50u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1eba54: 0xc070da4  jal         func_1C3690
    ctx->pc = 0x1EBA54u;
    SET_GPR_U32(ctx, 31, 0x1EBA5Cu);
    ctx->pc = 0x1EBA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA54u;
            // 0x1eba58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3690u;
    if (runtime->hasFunction(0x1C3690u)) {
        auto targetFn = runtime->lookupFunction(0x1C3690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA5Cu; }
        if (ctx->pc != 0x1EBA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3690_0x1c3690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA5Cu; }
        if (ctx->pc != 0x1EBA5Cu) { return; }
    }
    ctx->pc = 0x1EBA5Cu;
    // 0x1eba5c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1EBA5Cu;
    {
        const bool branch_taken_0x1eba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA5Cu;
            // 0x1eba60: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba5c) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBA64u;
label_1eba64:
    // 0x1eba64: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1eba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1eba68: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x1eba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x1eba6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1eba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1eba70: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x1eba70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1eba74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1eba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1eba78: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBA78u;
    {
        const bool branch_taken_0x1eba78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA78u;
            // 0x1eba7c: 0xae4202d8  sw          $v0, 0x2D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba78) {
            ctx->pc = 0x1EBA9Cu;
            goto label_1eba9c;
        }
    }
    ctx->pc = 0x1EBA80u;
    // 0x1eba80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba84: 0xc071094  jal         func_1C4250
    ctx->pc = 0x1EBA84u;
    SET_GPR_U32(ctx, 31, 0x1EBA8Cu);
    ctx->pc = 0x1EBA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA84u;
            // 0x1eba88: 0x70102ca9  por         $a1, $zero, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4250u;
    if (runtime->hasFunction(0x1C4250u)) {
        auto targetFn = runtime->lookupFunction(0x1C4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA8Cu; }
        if (ctx->pc != 0x1EBA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4250_0x1c4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA8Cu; }
        if (ctx->pc != 0x1EBA8Cu) { return; }
    }
    ctx->pc = 0x1EBA8Cu;
    // 0x1eba8c: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1eba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1eba90: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1eba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1eba94: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1EBA94u;
    {
        const bool branch_taken_0x1eba94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA94u;
            // 0x1eba98: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba94) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBA9Cu;
label_1eba9c:
    // 0x1eba9c: 0x32710018  andi        $s1, $s3, 0x18
    ctx->pc = 0x1eba9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)24);
    // 0x1ebaa0: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ebaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1ebaa4: 0x3a230008  xori        $v1, $s1, 0x8
    ctx->pc = 0x1ebaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8);
    // 0x1ebaa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ebaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebaac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBAB0u;
    {
        const bool branch_taken_0x1ebab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAB0u;
            // 0x1ebab4: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebab0) {
            ctx->pc = 0x1EBAC0u;
            goto label_1ebac0;
        }
    }
    ctx->pc = 0x1EBAB8u;
    // 0x1ebab8: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x1ebab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x1ebabc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1ebabcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ebac0:
    // 0x1ebac0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBAC0u;
    {
        const bool branch_taken_0x1ebac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebac0) {
            ctx->pc = 0x1EBAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAC0u;
            // 0x1ebac4: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBAD4u;
            goto label_1ebad4;
        }
    }
    ctx->pc = 0x1EBAC8u;
    // 0x1ebac8: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EBAC8u;
    {
        const bool branch_taken_0x1ebac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebac8) {
            ctx->pc = 0x1EBACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAC8u;
            // 0x1ebacc: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBB50u;
            goto label_1ebb50;
        }
    }
    ctx->pc = 0x1EBAD0u;
    // 0x1ebad0: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ebad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1ebad4:
    // 0x1ebad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebad8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EBAD8u;
    {
        const bool branch_taken_0x1ebad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebad8) {
            ctx->pc = 0x1EBADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAD8u;
            // 0x1ebadc: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBB50u;
            goto label_1ebb50;
        }
    }
    ctx->pc = 0x1EBAE0u;
    // 0x1ebae0: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1ebae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1ebae4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1ebae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1ebae8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBAE8u;
    {
        const bool branch_taken_0x1ebae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBAE8u;
            // 0x1ebaec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebae8) {
            ctx->pc = 0x1EBB04u;
            goto label_1ebb04;
        }
    }
    ctx->pc = 0x1EBAF0u;
    // 0x1ebaf0: 0xc090d56  jal         func_243558
    ctx->pc = 0x1EBAF0u;
    SET_GPR_U32(ctx, 31, 0x1EBAF8u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAF8u; }
        if (ctx->pc != 0x1EBAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAF8u; }
        if (ctx->pc != 0x1EBAF8u) { return; }
    }
    ctx->pc = 0x1EBAF8u;
    // 0x1ebaf8: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1ebaf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1ebafc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1ebafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1ebb00: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1ebb00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ebb04:
    // 0x1ebb04: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EBB04u;
    {
        const bool branch_taken_0x1ebb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb04) {
            ctx->pc = 0x1EBB08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB04u;
            // 0x1ebb08: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBB50u;
            goto label_1ebb50;
        }
    }
    ctx->pc = 0x1EBB0Cu;
    // 0x1ebb0c: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ebb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ebb10: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ebb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ebb14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ebb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ebb18: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1EBB18u;
    {
        const bool branch_taken_0x1ebb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb18) {
            ctx->pc = 0x1EBB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB18u;
            // 0x1ebb1c: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBB50u;
            goto label_1ebb50;
        }
    }
    ctx->pc = 0x1EBB20u;
    // 0x1ebb20: 0xdba603c0  lqc2        $vf6, 0x3C0($sp)
    ctx->pc = 0x1ebb20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1ebb24: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ebb24u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ebb28: 0xdba103e0  lqc2        $vf1, 0x3E0($sp)
    ctx->pc = 0x1ebb28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1ebb2c: 0x701434a9  por         $a2, $zero, $s4
    ctx->pc = 0x1ebb2cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x1ebb30: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x1ebb30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1ebb34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb38: 0x48273000  qmfc2.ni    $a3, $vf6
    ctx->pc = 0x1ebb38u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1ebb3c: 0xc07a8c4  jal         func_1EA310
    ctx->pc = 0x1EBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1EBB44u);
    ctx->pc = 0x1EBB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB3Cu;
            // 0x1ebb40: 0x27a803a0  addiu       $t0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA310u;
    if (runtime->hasFunction(0x1EA310u)) {
        auto targetFn = runtime->lookupFunction(0x1EA310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB44u; }
        if (ctx->pc != 0x1EBB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA310_0x1ea310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB44u; }
        if (ctx->pc != 0x1EBB44u) { return; }
    }
    ctx->pc = 0x1EBB44u;
    // 0x1ebb44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1EBB44u;
    {
        const bool branch_taken_0x1ebb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB44u;
            // 0x1ebb48: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb44) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBB4Cu;
    // 0x1ebb4c: 0x0  nop
    ctx->pc = 0x1ebb4cu;
    // NOP
label_1ebb50:
    // 0x1ebb50: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x1ebb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x1ebb54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBB54u;
    {
        const bool branch_taken_0x1ebb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB54u;
            // 0x1ebb58: 0x7ba603c0  lq          $a2, 0x3C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb54) {
            ctx->pc = 0x1EBB70u;
            goto label_1ebb70;
        }
    }
    ctx->pc = 0x1EBB5Cu;
    // 0x1ebb5c: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ebb5cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ebb60: 0xc072622  jal         func_1C9888
    ctx->pc = 0x1EBB60u;
    SET_GPR_U32(ctx, 31, 0x1EBB68u);
    ctx->pc = 0x1EBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB60u;
            // 0x1ebb64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9888u;
    if (runtime->hasFunction(0x1C9888u)) {
        auto targetFn = runtime->lookupFunction(0x1C9888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB68u; }
        if (ctx->pc != 0x1EBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9888_0x1c9888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB68u; }
        if (ctx->pc != 0x1EBB68u) { return; }
    }
    ctx->pc = 0x1EBB68u;
    // 0x1ebb68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EBB68u;
    {
        const bool branch_taken_0x1ebb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB68u;
            // 0x1ebb6c: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb68) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBB70u;
label_1ebb70:
    // 0x1ebb70: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1ebb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1ebb74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EBB74u;
    {
        const bool branch_taken_0x1ebb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB74u;
            // 0x1ebb78: 0xdba603c0  lqc2        $vf6, 0x3C0($sp) (Delay Slot)
        ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb74) {
            ctx->pc = 0x1EBBA8u;
            goto label_1ebba8;
        }
    }
    ctx->pc = 0x1EBB7Cu;
    // 0x1ebb7c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBB7Cu;
    {
        const bool branch_taken_0x1ebb7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB7Cu;
            // 0x1ebb80: 0xdba203c0  lqc2        $vf2, 0x3C0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb7c) {
            ctx->pc = 0x1EBBA8u;
            goto label_1ebba8;
        }
    }
    ctx->pc = 0x1EBB84u;
    // 0x1ebb84: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ebb84u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ebb88: 0xdba303e0  lqc2        $vf3, 0x3E0($sp)
    ctx->pc = 0x1ebb88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1ebb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb90: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1ebb90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ebb94: 0x7ba603f0  lq          $a2, 0x3F0($sp)
    ctx->pc = 0x1ebb94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1ebb98: 0xc071f4a  jal         func_1C7D28
    ctx->pc = 0x1EBB98u;
    SET_GPR_U32(ctx, 31, 0x1EBBA0u);
    ctx->pc = 0x1EBB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB98u;
            // 0x1ebb9c: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D28u;
    if (runtime->hasFunction(0x1C7D28u)) {
        auto targetFn = runtime->lookupFunction(0x1C7D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBA0u; }
        if (ctx->pc != 0x1EBBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D28_0x1c7d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBA0u; }
        if (ctx->pc != 0x1EBBA0u) { return; }
    }
    ctx->pc = 0x1EBBA0u;
    // 0x1ebba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EBBA0u;
    {
        const bool branch_taken_0x1ebba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBA0u;
            // 0x1ebba4: 0x7fa20400  sq          $v0, 0x400($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebba0) {
            ctx->pc = 0x1EBBD0u;
            goto label_1ebbd0;
        }
    }
    ctx->pc = 0x1EBBA8u;
label_1ebba8:
    // 0x1ebba8: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x1ebba8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x1ebbac: 0xdba103e0  lqc2        $vf1, 0x3E0($sp)
    ctx->pc = 0x1ebbacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1ebbb0: 0x701434a9  por         $a2, $zero, $s4
    ctx->pc = 0x1ebbb0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
    // 0x1ebbb4: 0x4be131a8  vadd.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x1ebbb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1ebbb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ebbb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbbc: 0x48273000  qmfc2.ni    $a3, $vf6
    ctx->pc = 0x1ebbbcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1ebbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbc4: 0xc07aa08  jal         func_1EA820
    ctx->pc = 0x1EBBC4u;
    SET_GPR_U32(ctx, 31, 0x1EBBCCu);
    ctx->pc = 0x1EBBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBC4u;
            // 0x1ebbc8: 0x27a903a0  addiu       $t1, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA820u;
    if (runtime->hasFunction(0x1EA820u)) {
        auto targetFn = runtime->lookupFunction(0x1EA820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBCCu; }
        if (ctx->pc != 0x1EBBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA820_0x1ea820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBCCu; }
        if (ctx->pc != 0x1EBBCCu) { return; }
    }
    ctx->pc = 0x1EBBCCu;
    // 0x1ebbcc: 0x7fa20400  sq          $v0, 0x400($sp)
    ctx->pc = 0x1ebbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 2));
label_1ebbd0:
    // 0x1ebbd0: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1ebbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ebbd4: 0x30820380  andi        $v0, $a0, 0x380
    ctx->pc = 0x1ebbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)896);
    // 0x1ebbd8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBBD8u;
    {
        const bool branch_taken_0x1ebbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBD8u;
            // 0x1ebbdc: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbd8) {
            ctx->pc = 0x1EBBF4u;
            goto label_1ebbf4;
        }
    }
    ctx->pc = 0x1EBBE0u;
    // 0x1ebbe0: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1ebbe4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1ebbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1ebbe8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ebbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ebbec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBBECu;
    {
        const bool branch_taken_0x1ebbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBECu;
            // 0x1ebbf0: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbec) {
            ctx->pc = 0x1EBC10u;
            goto label_1ebc10;
        }
    }
    ctx->pc = 0x1EBBF4u;
label_1ebbf4:
    // 0x1ebbf4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBBF4u;
    {
        const bool branch_taken_0x1ebbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBF4u;
            // 0x1ebbf8: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbf4) {
            ctx->pc = 0x1EBC14u;
            goto label_1ebc14;
        }
    }
    ctx->pc = 0x1EBBFCu;
    // 0x1ebbfc: 0x7ba50400  lq          $a1, 0x400($sp)
    ctx->pc = 0x1ebbfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ebc00: 0xc0723ae  jal         func_1C8EB8
    ctx->pc = 0x1EBC00u;
    SET_GPR_U32(ctx, 31, 0x1EBC08u);
    ctx->pc = 0x1EBC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC00u;
            // 0x1ebc04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8EB8u;
    if (runtime->hasFunction(0x1C8EB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC08u; }
        if (ctx->pc != 0x1EBC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8EB8_0x1c8eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC08u; }
        if (ctx->pc != 0x1EBC08u) { return; }
    }
    ctx->pc = 0x1EBC08u;
    // 0x1ebc08: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1EBC08u;
    {
        const bool branch_taken_0x1ebc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC08u;
            // 0x1ebc0c: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc08) {
            ctx->pc = 0x1EBCB0u;
            goto label_1ebcb0;
        }
    }
    ctx->pc = 0x1EBC10u;
label_1ebc10:
    // 0x1ebc10: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x1ebc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_1ebc14:
    // 0x1ebc14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBC14u;
    {
        const bool branch_taken_0x1ebc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC14u;
            // 0x1ebc18: 0x7ba50400  lq          $a1, 0x400($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc14) {
            ctx->pc = 0x1EBC2Cu;
            goto label_1ebc2c;
        }
    }
    ctx->pc = 0x1EBC1Cu;
    // 0x1ebc1c: 0xc0711e0  jal         func_1C4780
    ctx->pc = 0x1EBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC24u);
    ctx->pc = 0x1EBC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC1Cu;
            // 0x1ebc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4780u;
    if (runtime->hasFunction(0x1C4780u)) {
        auto targetFn = runtime->lookupFunction(0x1C4780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC24u; }
        if (ctx->pc != 0x1EBC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4780_0x1c4780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC24u; }
        if (ctx->pc != 0x1EBC24u) { return; }
    }
    ctx->pc = 0x1EBC24u;
    // 0x1ebc24: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1EBC24u;
    {
        const bool branch_taken_0x1ebc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC24u;
            // 0x1ebc28: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc24) {
            ctx->pc = 0x1EBCB0u;
            goto label_1ebcb0;
        }
    }
    ctx->pc = 0x1EBC2Cu;
label_1ebc2c:
    // 0x1ebc2c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ebc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x1ebc30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBC30u;
    {
        const bool branch_taken_0x1ebc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC30u;
            // 0x1ebc34: 0x26510050  addiu       $s1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc30) {
            ctx->pc = 0x1EBC78u;
            goto label_1ebc78;
        }
    }
    ctx->pc = 0x1EBC38u;
    // 0x1ebc38: 0x7a470050  lq          $a3, 0x50($s2)
    ctx->pc = 0x1ebc38u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ebc3c: 0x7a480060  lq          $t0, 0x60($s2)
    ctx->pc = 0x1ebc3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ebc40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc44: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x1ebc44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ebc48: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1ebc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ebc4c: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x1ebc4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ebc50: 0x7a300030  lq          $s0, 0x30($s1)
    ctx->pc = 0x1ebc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ebc54: 0x7ba50400  lq          $a1, 0x400($sp)
    ctx->pc = 0x1ebc54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ebc58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ebc58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ebc5c: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1ebc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
    // 0x1ebc60: 0x7fa80130  sq          $t0, 0x130($sp)
    ctx->pc = 0x1ebc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 8));
    // 0x1ebc64: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x1ebc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x1ebc68: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1EBC68u;
    SET_GPR_U32(ctx, 31, 0x1EBC70u);
    ctx->pc = 0x1EBC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC68u;
            // 0x1ebc6c: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC70u; }
        if (ctx->pc != 0x1EBC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC70u; }
        if (ctx->pc != 0x1EBC70u) { return; }
    }
    ctx->pc = 0x1EBC70u;
    // 0x1ebc70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EBC70u;
    {
        const bool branch_taken_0x1ebc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC70u;
            // 0x1ebc74: 0x7e300030  sq          $s0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc70) {
            ctx->pc = 0x1EBCACu;
            goto label_1ebcac;
        }
    }
    ctx->pc = 0x1EBC78u;
label_1ebc78:
    // 0x1ebc78: 0x7a480050  lq          $t0, 0x50($s2)
    ctx->pc = 0x1ebc78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ebc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc80: 0x7a470060  lq          $a3, 0x60($s2)
    ctx->pc = 0x1ebc80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ebc84: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1ebc88: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x1ebc88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ebc8c: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x1ebc8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ebc90: 0x7ba50400  lq          $a1, 0x400($sp)
    ctx->pc = 0x1ebc90u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ebc94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ebc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ebc98: 0x7fa80160  sq          $t0, 0x160($sp)
    ctx->pc = 0x1ebc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 8));
    // 0x1ebc9c: 0x7fa70170  sq          $a3, 0x170($sp)
    ctx->pc = 0x1ebc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 7));
    // 0x1ebca0: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x1ebca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x1ebca4: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1EBCA4u;
    SET_GPR_U32(ctx, 31, 0x1EBCACu);
    ctx->pc = 0x1EBCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCA4u;
            // 0x1ebca8: 0x7fa20190  sq          $v0, 0x190($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCACu; }
        if (ctx->pc != 0x1EBCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCACu; }
        if (ctx->pc != 0x1EBCACu) { return; }
    }
    ctx->pc = 0x1EBCACu;
label_1ebcac:
    // 0x1ebcac: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ebcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1ebcb0:
    // 0x1ebcb0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1ebcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1ebcb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBCB4u;
    {
        const bool branch_taken_0x1ebcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcb4) {
            ctx->pc = 0x1EBCE0u;
            goto label_1ebce0;
        }
    }
    ctx->pc = 0x1EBCBCu;
    // 0x1ebcbc: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1ebcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x1ebcc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebcc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBCC4u;
    {
        const bool branch_taken_0x1ebcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCC4u;
            // 0x1ebcc8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcc4) {
            ctx->pc = 0x1EBCE0u;
            goto label_1ebce0;
        }
    }
    ctx->pc = 0x1EBCCCu;
    // 0x1ebccc: 0xdba20400  lqc2        $vf2, 0x400($sp)
    ctx->pc = 0x1ebcccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ebcd0: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1ebcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
    // 0x1ebcd4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ebcd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ebcd8: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ebcd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ebcdc: 0xfa410100  sqc2        $vf1, 0x100($s2)
    ctx->pc = 0x1ebcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 256), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ebce0:
    // 0x1ebce0: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x1EBCE0u;
    SET_GPR_U32(ctx, 31, 0x1EBCE8u);
    ctx->pc = 0x1EBCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCE0u;
            // 0x1ebce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (runtime->hasFunction(0x1E5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCE8u; }
        if (ctx->pc != 0x1EBCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5AB0_0x1e5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCE8u; }
        if (ctx->pc != 0x1EBCE8u) { return; }
    }
    ctx->pc = 0x1EBCE8u;
    // 0x1ebce8: 0xde420340  ld          $v0, 0x340($s2)
    ctx->pc = 0x1ebce8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 832)));
    // 0x1ebcec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebcf0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ebcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ebcf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ebcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ebcf8: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EBCF8u;
    {
        const bool branch_taken_0x1ebcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ebcf8) {
            ctx->pc = 0x1EBD4Cu;
            goto label_1ebd4c;
        }
    }
    ctx->pc = 0x1EBD00u;
    // 0x1ebd00: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1ebd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ebd04: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ebd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ebd08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBD08u;
    {
        const bool branch_taken_0x1ebd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD08u;
            // 0x1ebd0c: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd08) {
            ctx->pc = 0x1EBD1Cu;
            goto label_1ebd1c;
        }
    }
    ctx->pc = 0x1EBD10u;
    // 0x1ebd10: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ebd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ebd14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EBD14u;
    {
        const bool branch_taken_0x1ebd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD14u;
            // 0x1ebd18: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd14) {
            ctx->pc = 0x1EBD4Cu;
            goto label_1ebd4c;
        }
    }
    ctx->pc = 0x1EBD1Cu;
label_1ebd1c:
    // 0x1ebd1c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBD1Cu;
    {
        const bool branch_taken_0x1ebd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd1c) {
            ctx->pc = 0x1EBD20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD1Cu;
            // 0x1ebd20: 0xda410080  lqc2        $vf1, 0x80($s2) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBD38u;
            goto label_1ebd38;
        }
    }
    ctx->pc = 0x1EBD24u;
    // 0x1ebd24: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1ebd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x1ebd28: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ebd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ebd2c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBD2Cu;
    {
        const bool branch_taken_0x1ebd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd2c) {
            ctx->pc = 0x1EBD4Cu;
            goto label_1ebd4c;
        }
    }
    ctx->pc = 0x1EBD34u;
    // 0x1ebd34: 0xda410080  lqc2        $vf1, 0x80($s2)
    ctx->pc = 0x1ebd34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_1ebd38:
    // 0x1ebd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd3c: 0xdba30400  lqc2        $vf3, 0x400($sp)
    ctx->pc = 0x1ebd3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ebd40: 0x4a8100c1  vaddy.y     $vf3, $vf0, $vf1y
    ctx->pc = 0x1ebd40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ebd44: 0xc07b22e  jal         func_1EC8B8
    ctx->pc = 0x1EBD44u;
    SET_GPR_U32(ctx, 31, 0x1EBD4Cu);
    ctx->pc = 0x1EBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD44u;
            // 0x1ebd48: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC8B8u;
    if (runtime->hasFunction(0x1EC8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1EC8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD4Cu; }
        if (ctx->pc != 0x1EBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC8B8_0x1ec8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD4Cu; }
        if (ctx->pc != 0x1EBD4Cu) { return; }
    }
    ctx->pc = 0x1EBD4Cu;
label_1ebd4c:
    // 0x1ebd4c: 0xc07b1b8  jal         func_1EC6E0
    ctx->pc = 0x1EBD4Cu;
    SET_GPR_U32(ctx, 31, 0x1EBD54u);
    ctx->pc = 0x1EBD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD4Cu;
            // 0x1ebd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6E0u;
    if (runtime->hasFunction(0x1EC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD54u; }
        if (ctx->pc != 0x1EBD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC6E0_0x1ec6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD54u; }
        if (ctx->pc != 0x1EBD54u) { return; }
    }
    ctx->pc = 0x1EBD54u;
    // 0x1ebd54: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1ebd54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1ebd58: 0x48233000  qmfc2.ni    $v1, $vf6
    ctx->pc = 0x1ebd58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1ebd5c: 0x7a4200f0  lq          $v0, 0xF0($s2)
    ctx->pc = 0x1ebd5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ebd60: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x1ebd60u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ebd64: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1ebd64u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ebd68: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ebd68u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ebd6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ebd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebd70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ebd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ebd74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ebd74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ebd78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBD78u;
    {
        const bool branch_taken_0x1ebd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd78) {
            ctx->pc = 0x1EBD88u;
            goto label_1ebd88;
        }
    }
    ctx->pc = 0x1EBD80u;
    // 0x1ebd80: 0xc07a0f2  jal         func_1E83C8
    ctx->pc = 0x1EBD80u;
    SET_GPR_U32(ctx, 31, 0x1EBD88u);
    ctx->pc = 0x1EBD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD80u;
            // 0x1ebd84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E83C8u;
    if (runtime->hasFunction(0x1E83C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E83C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD88u; }
        if (ctx->pc != 0x1EBD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E83C8_0x1e83c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD88u; }
        if (ctx->pc != 0x1EBD88u) { return; }
    }
    ctx->pc = 0x1EBD88u;
label_1ebd88:
    // 0x1ebd88: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1ebd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ebd8c: 0xc64c0170  lwc1        $f12, 0x170($s2)
    ctx->pc = 0x1ebd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ebd90: 0xc64d02bc  lwc1        $f13, 0x2BC($s2)
    ctx->pc = 0x1ebd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ebd94: 0x46007b86  mov.s       $f14, $f15
    ctx->pc = 0x1ebd94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[15]);
    // 0x1ebd98: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1EBD98u;
    {
        const bool branch_taken_0x1ebd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD98u;
            // 0x1ebd9c: 0x46007c86  mov.s       $f18, $f15 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd98) {
            ctx->pc = 0x1EBEF4u;
            goto label_1ebef4;
        }
    }
    ctx->pc = 0x1EBDA0u;
label_1ebda0:
    // 0x1ebda0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EBDA0u;
    {
        const bool branch_taken_0x1ebda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDA0u;
            // 0x1ebda4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebda0) {
            ctx->pc = 0x1EBE70u;
            goto label_1ebe70;
        }
    }
    ctx->pc = 0x1EBDA8u;
    // 0x1ebda8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ebda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ebdac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBDACu;
    {
        const bool branch_taken_0x1ebdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDACu;
            // 0x1ebdb0: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdac) {
            ctx->pc = 0x1EBDD8u;
            goto label_1ebdd8;
        }
    }
    ctx->pc = 0x1EBDB4u;
    // 0x1ebdb4: 0xda410260  lqc2        $vf1, 0x260($s2)
    ctx->pc = 0x1ebdb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1ebdb8: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1ebdb8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ebdbc: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1ebdc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ebdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebdc4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ebdc4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ebdc8: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1ebdc8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1ebdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebdd0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1EBDD0u;
    {
        const bool branch_taken_0x1ebdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDD0u;
            // 0x1ebdd4: 0x46010482  mul.s       $f18, $f0, $f1 (Delay Slot)
        ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdd0) {
            ctx->pc = 0x1EBEC8u;
            goto label_1ebec8;
        }
    }
    ctx->pc = 0x1EBDD8u;
label_1ebdd8:
    // 0x1ebdd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ebdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ebddc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1EBDDCu;
    {
        const bool branch_taken_0x1ebddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDDCu;
            // 0x1ebde0: 0x46000c86  mov.s       $f18, $f1 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebddc) {
            ctx->pc = 0x1EBEC8u;
            goto label_1ebec8;
        }
    }
    ctx->pc = 0x1EBDE4u;
    // 0x1ebde4: 0xda410260  lqc2        $vf1, 0x260($s2)
    ctx->pc = 0x1ebde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1ebde8: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x1ebde8u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ebdec: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1ebdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1ebdf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ebdf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebdf4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1ebdf4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ebdf8: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1ebdf8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1ebdfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe00: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1EBE00u;
    {
        const bool branch_taken_0x1ebe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE00u;
            // 0x1ebe04: 0x46010482  mul.s       $f18, $f0, $f1 (Delay Slot)
        ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe00) {
            ctx->pc = 0x1EBEC8u;
            goto label_1ebec8;
        }
    }
    ctx->pc = 0x1EBE08u;
label_1ebe08:
    // 0x1ebe08: 0xda410260  lqc2        $vf1, 0x260($s2)
    ctx->pc = 0x1ebe08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 608)));
label_1ebe0c:
    // 0x1ebe0c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1ebe0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ebe10: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1ebe10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ebe14: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1ebe14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ebe18: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1ebe18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x1ebe1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ebe1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebe20: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1ebe20u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ebe24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ebe24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe28: 0x46000004  c1          0x4
    ctx->pc = 0x1ebe28u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ebe2c: 0x30820380  andi        $v0, $a0, 0x380
    ctx->pc = 0x1ebe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)896);
    // 0x1ebe30: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EBE30u;
    {
        const bool branch_taken_0x1ebe30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE30u;
            // 0x1ebe34: 0x46010482  mul.s       $f18, $f0, $f1 (Delay Slot)
        ctx->f[18] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe30) {
            ctx->pc = 0x1EBEB4u;
            goto label_1ebeb4;
        }
    }
    ctx->pc = 0x1EBE38u;
    // 0x1ebe38: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ebe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ebe3c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ebe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ebe40: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EBE40u;
    {
        const bool branch_taken_0x1ebe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe40) {
            ctx->pc = 0x1EBE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE40u;
            // 0x1ebe44: 0x8e420320  lw          $v0, 0x320($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBEB8u;
            goto label_1ebeb8;
        }
    }
    ctx->pc = 0x1EBE48u;
    // 0x1ebe48: 0xc64002c0  lwc1        $f0, 0x2C0($s2)
    ctx->pc = 0x1ebe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ebe4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ebe50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ebe50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ebe54: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x1ebe54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1ebe58: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ebe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ebe5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ebe5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebe60: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1ebe60u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1ebe64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBE64u;
    {
        const bool branch_taken_0x1ebe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE64u;
            // 0x1ebe68: 0x46020369  min.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = std::min(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe64) {
            ctx->pc = 0x1EBEB4u;
            goto label_1ebeb4;
        }
    }
    ctx->pc = 0x1EBE6Cu;
    // 0x1ebe6c: 0x0  nop
    ctx->pc = 0x1ebe6cu;
    // NOP
label_1ebe70:
    // 0x1ebe70: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x1ebe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x1ebe74: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1EBE74u;
    {
        const bool branch_taken_0x1ebe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE74u;
            // 0x1ebe78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe74) {
            ctx->pc = 0x1EBE08u;
            runtime->cooperativeGuestYield();
            goto label_1ebe08;
        }
    }
    ctx->pc = 0x1EBE7Cu;
    // 0x1ebe7c: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x1ebe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1ebe80: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1ebe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1ebe84: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1EBE84u;
    {
        const bool branch_taken_0x1ebe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe84) {
            ctx->pc = 0x1EBE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE84u;
            // 0x1ebe88: 0xda410260  lqc2        $vf1, 0x260($s2) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE0Cu;
            runtime->cooperativeGuestYield();
            goto label_1ebe0c;
        }
    }
    ctx->pc = 0x1EBE8Cu;
    // 0x1ebe8c: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x1ebe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1ebe90: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1ebe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ebe94: 0x844200de  lh          $v0, 0xDE($v0)
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 222)));
    // 0x1ebe98: 0x5443ffdc  bnel        $v0, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1EBE98u;
    {
        const bool branch_taken_0x1ebe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ebe98) {
            ctx->pc = 0x1EBE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE98u;
            // 0x1ebe9c: 0xda410260  lqc2        $vf1, 0x260($s2) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBE0Cu;
            runtime->cooperativeGuestYield();
            goto label_1ebe0c;
        }
    }
    ctx->pc = 0x1EBEA0u;
    // 0x1ebea0: 0x8e420188  lw          $v0, 0x188($s2)
    ctx->pc = 0x1ebea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
    // 0x1ebea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ebea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ebea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ebea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebeac: 0xc44001e4  lwc1        $f0, 0x1E4($v0)
    ctx->pc = 0x1ebeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebeb0: 0x46010329  min.s       $f12, $f0, $f1
    ctx->pc = 0x1ebeb0u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[1]);
label_1ebeb4:
    // 0x1ebeb4: 0x8e420320  lw          $v0, 0x320($s2)
    ctx->pc = 0x1ebeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_1ebeb8:
    // 0x1ebeb8: 0xc64102b4  lwc1        $f1, 0x2B4($s2)
    ctx->pc = 0x1ebeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebebc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ebec0: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x1ebec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebec4: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x1ebec4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[15] = ctx->f[1] / ctx->f[0];
label_1ebec8:
    // 0x1ebec8: 0xc6a0c658  lwc1        $f0, -0x39A8($s5)
    ctx->pc = 0x1ebec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebecc:
    // 0x1ebecc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ebeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebed0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1ebed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1ebed4: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1ebed4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x1ebed8: 0xc6530168  lwc1        $f19, 0x168($s2)
    ctx->pc = 0x1ebed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1ebedc: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1ebee0: 0x46008446  mov.s       $f17, $f16
    ctx->pc = 0x1ebee0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[16]);
    // 0x1ebee4: 0xc07da14  jal         func_1F6850
    ctx->pc = 0x1EBEE4u;
    SET_GPR_U32(ctx, 31, 0x1EBEECu);
    ctx->pc = 0x1EBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEE4u;
            // 0x1ebee8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6850u;
    if (runtime->hasFunction(0x1F6850u)) {
        auto targetFn = runtime->lookupFunction(0x1F6850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEECu; }
        if (ctx->pc != 0x1EBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6850_0x1f6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEECu; }
        if (ctx->pc != 0x1EBEECu) { return; }
    }
    ctx->pc = 0x1EBEECu;
    // 0x1ebeec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EBEECu;
    {
        const bool branch_taken_0x1ebeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEECu;
            // 0x1ebef0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebeec) {
            ctx->pc = 0x1EBF38u;
            goto label_1ebf38;
        }
    }
    ctx->pc = 0x1EBEF4u;
label_1ebef4:
    // 0x1ebef4: 0xc64002ac  lwc1        $f0, 0x2AC($s2)
    ctx->pc = 0x1ebef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ebef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebefc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ebefcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebf00: 0x0  nop
    ctx->pc = 0x1ebf00u;
    // NOP
    // 0x1ebf04: 0x4502fff1  bc1fl       . + 4 + (-0xF << 2)
    ctx->pc = 0x1EBF04u;
    {
        const bool branch_taken_0x1ebf04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebf04) {
            ctx->pc = 0x1EBF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF04u;
            // 0x1ebf08: 0xc6a0c658  lwc1        $f0, -0x39A8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBECCu;
            runtime->cooperativeGuestYield();
            goto label_1ebecc;
        }
    }
    ctx->pc = 0x1EBF0Cu;
    // 0x1ebf0c: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1ebf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ebf10: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1ebf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1ebf14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBF14u;
    {
        const bool branch_taken_0x1ebf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf14) {
            ctx->pc = 0x1EBF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF14u;
            // 0x1ebf18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF2Cu;
            goto label_1ebf2c;
        }
    }
    ctx->pc = 0x1EBF1Cu;
    // 0x1ebf1c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ebf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ebf20: 0x1040ff9f  beqz        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1EBF20u;
    {
        const bool branch_taken_0x1ebf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF20u;
            // 0x1ebf24: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf20) {
            ctx->pc = 0x1EBDA0u;
            runtime->cooperativeGuestYield();
            goto label_1ebda0;
        }
    }
    ctx->pc = 0x1EBF28u;
    // 0x1ebf28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ebf28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ebf2c:
    // 0x1ebf2c: 0xc0720f2  jal         func_1C83C8
    ctx->pc = 0x1EBF2Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF34u);
    ctx->pc = 0x1EBF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF2Cu;
            // 0x1ebf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C83C8u;
    if (runtime->hasFunction(0x1C83C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C83C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF34u; }
        if (ctx->pc != 0x1EBF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C83C8_0x1c83c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF34u; }
        if (ctx->pc != 0x1EBF34u) { return; }
    }
    ctx->pc = 0x1EBF34u;
    // 0x1ebf34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1ebf34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1ebf38:
    // 0x1ebf38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebf38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf3c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ebf3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebf40: 0x0  nop
    ctx->pc = 0x1ebf40u;
    // NOP
    // 0x1ebf44: 0x45020114  bc1fl       . + 4 + (0x114 << 2)
    ctx->pc = 0x1EBF44u;
    {
        const bool branch_taken_0x1ebf44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebf44) {
            ctx->pc = 0x1EBF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF44u;
            // 0x1ebf48: 0xe64102ac  swc1        $f1, 0x2AC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC398u;
            goto label_1ec398;
        }
    }
    ctx->pc = 0x1EBF4Cu;
    // 0x1ebf4c: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x1EBF4Cu;
    {
        const bool branch_taken_0x1ebf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf4c) {
            ctx->pc = 0x1EC398u;
            goto label_1ec398;
        }
    }
    ctx->pc = 0x1EBF54u;
    // 0x1ebf54: 0x0  nop
    ctx->pc = 0x1ebf54u;
    // NOP
label_1ebf58:
    // 0x1ebf58: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ebf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ebf5c: 0x7ba703d0  lq          $a3, 0x3D0($sp)
    ctx->pc = 0x1ebf5cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1ebf60: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1ebf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1ebf64: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EBF64u;
    {
        const bool branch_taken_0x1ebf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF64u;
            // 0x1ebf68: 0x7e4700e0  sq          $a3, 0xE0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf64) {
            ctx->pc = 0x1EC040u;
            goto label_1ec040;
        }
    }
    ctx->pc = 0x1EBF6Cu;
    // 0x1ebf6c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1ebf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x1ebf70: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ebf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ebf74: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EBF74u;
    {
        const bool branch_taken_0x1ebf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF74u;
            // 0x1ebf78: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf74) {
            ctx->pc = 0x1EBFD4u;
            goto label_1ebfd4;
        }
    }
    ctx->pc = 0x1EBF7Cu;
    // 0x1ebf7c: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1ebf80: 0x848200de  lh          $v0, 0xDE($a0)
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 222)));
    // 0x1ebf84: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EBF84u;
    {
        const bool branch_taken_0x1ebf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ebf84) {
            ctx->pc = 0x1EBF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF84u;
            // 0x1ebf88: 0x8e420194  lw          $v0, 0x194($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFD8u;
            goto label_1ebfd8;
        }
    }
    ctx->pc = 0x1EBF8Cu;
    // 0x1ebf8c: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1ebf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1ebf90: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1ebf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1ebf94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ebf94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebf98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBF98u;
    {
        const bool branch_taken_0x1ebf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF98u;
            // 0x1ebf9c: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf98) {
            ctx->pc = 0x1EBFA8u;
            goto label_1ebfa8;
        }
    }
    ctx->pc = 0x1EBFA0u;
    // 0x1ebfa0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1ebfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebfa4: 0x0  nop
    ctx->pc = 0x1ebfa4u;
    // NOP
label_1ebfa8:
    // 0x1ebfa8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1ebfa8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ebfac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ebfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ebfb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ebfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ebfb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebfb8: 0x0  nop
    ctx->pc = 0x1ebfb8u;
    // NOP
    // 0x1ebfbc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBFBCu;
    {
        const bool branch_taken_0x1ebfbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebfbc) {
            ctx->pc = 0x1EBFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFBCu;
            // 0x1ebfc0: 0x8e420194  lw          $v0, 0x194($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFD8u;
            goto label_1ebfd8;
        }
    }
    ctx->pc = 0x1EBFC4u;
    // 0x1ebfc4: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1EBFC4u;
    SET_GPR_U32(ctx, 31, 0x1EBFCCu);
    ctx->pc = 0x1EBFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFC4u;
            // 0x1ebfc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBFCCu; }
        if (ctx->pc != 0x1EBFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBFCCu; }
        if (ctx->pc != 0x1EBFCCu) { return; }
    }
    ctx->pc = 0x1EBFCCu;
    // 0x1ebfcc: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1EBFCCu;
    SET_GPR_U32(ctx, 31, 0x1EBFD4u);
    ctx->pc = 0x1EBFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFCCu;
            // 0x1ebfd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBFD4u; }
        if (ctx->pc != 0x1EBFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBFD4u; }
        if (ctx->pc != 0x1EBFD4u) { return; }
    }
    ctx->pc = 0x1EBFD4u;
label_1ebfd4:
    // 0x1ebfd4: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1ebfd8:
    // 0x1ebfd8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ebfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ebfdc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EBFDCu;
    {
        const bool branch_taken_0x1ebfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFDCu;
            // 0x1ebfe0: 0x2403005e  addiu       $v1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfdc) {
            ctx->pc = 0x1EC058u;
            goto label_1ec058;
        }
    }
    ctx->pc = 0x1EBFE4u;
    // 0x1ebfe4: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1ebfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1ebfe8: 0x848200de  lh          $v0, 0xDE($a0)
    ctx->pc = 0x1ebfe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 222)));
    // 0x1ebfec: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EBFECu;
    {
        const bool branch_taken_0x1ebfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EBFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFECu;
            // 0x1ebff0: 0x7ba503d0  lq          $a1, 0x3D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfec) {
            ctx->pc = 0x1EC060u;
            goto label_1ec060;
        }
    }
    ctx->pc = 0x1EBFF4u;
    // 0x1ebff4: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1ebff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1ebff8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1ebff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1ebffc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ebffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec000: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC000u;
    {
        const bool branch_taken_0x1ec000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC000u;
            // 0x1ec004: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec000) {
            ctx->pc = 0x1EC00Cu;
            goto label_1ec00c;
        }
    }
    ctx->pc = 0x1EC008u;
    // 0x1ec008: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1ec008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ec00c:
    // 0x1ec00c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1ec00cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ec010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ec010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ec018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec01c: 0x0  nop
    ctx->pc = 0x1ec01cu;
    // NOP
    // 0x1ec020: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1EC020u;
    {
        const bool branch_taken_0x1ec020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec020) {
            ctx->pc = 0x1EC024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC020u;
            // 0x1ec024: 0x7ba503d0  lq          $a1, 0x3D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC060u;
            goto label_1ec060;
        }
    }
    ctx->pc = 0x1EC028u;
    // 0x1ec028: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1EC028u;
    SET_GPR_U32(ctx, 31, 0x1EC030u);
    ctx->pc = 0x1EC02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC028u;
            // 0x1ec02c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC030u; }
        if (ctx->pc != 0x1EC030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC030u; }
        if (ctx->pc != 0x1EC030u) { return; }
    }
    ctx->pc = 0x1EC030u;
    // 0x1ec030: 0xc07227c  jal         func_1C89F0
    ctx->pc = 0x1EC030u;
    SET_GPR_U32(ctx, 31, 0x1EC038u);
    ctx->pc = 0x1EC034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC030u;
            // 0x1ec034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C89F0u;
    if (runtime->hasFunction(0x1C89F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC038u; }
        if (ctx->pc != 0x1EC038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89F0_0x1c89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC038u; }
        if (ctx->pc != 0x1EC038u) { return; }
    }
    ctx->pc = 0x1EC038u;
    // 0x1ec038: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC038u;
    {
        const bool branch_taken_0x1ec038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC038u;
            // 0x1ec03c: 0x7ba503d0  lq          $a1, 0x3D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec038) {
            ctx->pc = 0x1EC060u;
            goto label_1ec060;
        }
    }
    ctx->pc = 0x1EC040u;
label_1ec040:
    // 0x1ec040: 0xda410260  lqc2        $vf1, 0x260($s2)
    ctx->pc = 0x1ec040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1ec044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec048: 0xda4202e0  lqc2        $vf2, 0x2E0($s2)
    ctx->pc = 0x1ec048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x1ec04c: 0x4a420043  vaddw.z     $vf1, $vf0, $vf2w
    ctx->pc = 0x1ec04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec050: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1EC050u;
    SET_GPR_U32(ctx, 31, 0x1EC058u);
    ctx->pc = 0x1EC054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC050u;
            // 0x1ec054: 0xfa410260  sqc2        $vf1, 0x260($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 608), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC058u; }
        if (ctx->pc != 0x1EC058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC058u; }
        if (ctx->pc != 0x1EC058u) { return; }
    }
    ctx->pc = 0x1EC058u;
label_1ec058:
    // 0x1ec058: 0x7ba503d0  lq          $a1, 0x3D0($sp)
    ctx->pc = 0x1ec058u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x1ec05c: 0x0  nop
    ctx->pc = 0x1ec05cu;
    // NOP
label_1ec060:
    // 0x1ec060: 0xc0795a4  jal         func_1E5690
    ctx->pc = 0x1EC060u;
    SET_GPR_U32(ctx, 31, 0x1EC068u);
    ctx->pc = 0x1EC064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC060u;
            // 0x1ec064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5690u;
    if (runtime->hasFunction(0x1E5690u)) {
        auto targetFn = runtime->lookupFunction(0x1E5690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC068u; }
        if (ctx->pc != 0x1EC068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5690_0x1e5690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC068u; }
        if (ctx->pc != 0x1EC068u) { return; }
    }
    ctx->pc = 0x1EC068u;
    // 0x1ec068: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x1ec068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1ec06c: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1ec070: 0xd8440050  lqc2        $vf4, 0x50($v0)
    ctx->pc = 0x1ec070u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1ec074: 0xfba401a0  sqc2        $vf4, 0x1A0($sp)
    ctx->pc = 0x1ec074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ec078: 0xd8430060  lqc2        $vf3, 0x60($v0)
    ctx->pc = 0x1ec078u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1ec07c: 0xfba301b0  sqc2        $vf3, 0x1B0($sp)
    ctx->pc = 0x1ec07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ec080: 0xd8410070  lqc2        $vf1, 0x70($v0)
    ctx->pc = 0x1ec080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1ec084: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1ec084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec088: 0xd8480080  lqc2        $vf8, 0x80($v0)
    ctx->pc = 0x1ec088u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ec08c: 0xfba801d0  sqc2        $vf8, 0x1D0($sp)
    ctx->pc = 0x1ec08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1ec090: 0xda450050  lqc2        $vf5, 0x50($s2)
    ctx->pc = 0x1ec090u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ec094: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1ec094u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ec098: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x1ec098u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ec09c: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x1ec09cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ec0a0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x1ec0a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ec0a4: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x1ec0a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0a8: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x1ec0a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0ac: 0x4be4110b  vmaddw.xyzw $vf4, $vf2, $vf4w
    ctx->pc = 0x1ec0acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ec0b0: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x1ec0b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ec0b4: 0xfba40220  sqc2        $vf4, 0x220($sp)
    ctx->pc = 0x1ec0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ec0b8: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1ec0b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0bc: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1ec0bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0c0: 0x4be310cb  vmaddw.xyzw $vf3, $vf2, $vf3w
    ctx->pc = 0x1ec0c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ec0c4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1ec0c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ec0c8: 0xfba30230  sqc2        $vf3, 0x230($sp)
    ctx->pc = 0x1ec0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ec0cc: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x1ec0ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0d0: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x1ec0d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0d4: 0x4be1104b  vmaddw.xyzw $vf1, $vf2, $vf1w
    ctx->pc = 0x1ec0d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ec0d8: 0x4be829bc  vmulax.xyzw $ACC, $vf5, $vf8x
    ctx->pc = 0x1ec0d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ec0dc: 0xfba10240  sqc2        $vf1, 0x240($sp)
    ctx->pc = 0x1ec0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec0e0: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x1ec0e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0e4: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x1ec0e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ec0e8: 0x4be8108b  vmaddw.xyzw $vf2, $vf2, $vf8w
    ctx->pc = 0x1ec0e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ec0ec: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1ec0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec0f0: 0xfba401e0  sqc2        $vf4, 0x1E0($sp)
    ctx->pc = 0x1ec0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ec0f4: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1ec0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec0f8: 0xfba301f0  sqc2        $vf3, 0x1F0($sp)
    ctx->pc = 0x1ec0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ec0fc: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1ec0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec100: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x1ec100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ec104: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1ec104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ec108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec10c: 0xdba103e0  lqc2        $vf1, 0x3E0($sp)
    ctx->pc = 0x1ec10cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1ec110: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ec110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ec114: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ec114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec118: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1EC118u;
    SET_GPR_U32(ctx, 31, 0x1EC120u);
    ctx->pc = 0x1EC11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC118u;
            // 0x1ec11c: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC120u; }
        if (ctx->pc != 0x1EC120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC120u; }
        if (ctx->pc != 0x1EC120u) { return; }
    }
    ctx->pc = 0x1EC120u;
    // 0x1ec120: 0x8e4602d8  lw          $a2, 0x2D8($s2)
    ctx->pc = 0x1ec120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1ec124: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ec128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec12c: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1ec12cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ec130: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ec130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ec134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec138: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec138u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ec13c: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x1EC13Cu;
    SET_GPR_U32(ctx, 31, 0x1EC144u);
    ctx->pc = 0x1EC140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC13Cu;
            // 0x1ec140: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (runtime->hasFunction(0x1E9648u)) {
        auto targetFn = runtime->lookupFunction(0x1E9648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC144u; }
        if (ctx->pc != 0x1EC144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9648_0x1e9648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC144u; }
        if (ctx->pc != 0x1EC144u) { return; }
    }
    ctx->pc = 0x1EC144u;
    // 0x1ec144: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x1ec144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
    // 0x1ec148: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ec148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ec14c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1ec14cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec154: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x1ec154u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1ec158: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x1ec158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1ec15c: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1ec15cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1ec160: 0x7ba701e0  lq          $a3, 0x1E0($sp)
    ctx->pc = 0x1ec160u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1ec164: 0xc64c02ac  lwc1        $f12, 0x2AC($s2)
    ctx->pc = 0x1ec164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec168: 0x7fa30270  sq          $v1, 0x270($sp)
    ctx->pc = 0x1ec168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 3));
    // 0x1ec16c: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x1ec16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    // 0x1ec170: 0x7fa70260  sq          $a3, 0x260($sp)
    ctx->pc = 0x1ec170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 7));
    // 0x1ec174: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1ec174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec178: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x1ec178u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
    // 0x1ec17c: 0x7e420070  sq          $v0, 0x70($s2)
    ctx->pc = 0x1ec17cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 2));
    // 0x1ec180: 0x7e470050  sq          $a3, 0x50($s2)
    ctx->pc = 0x1ec180u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 7));
    // 0x1ec184: 0xfa420080  sqc2        $vf2, 0x80($s2)
    ctx->pc = 0x1ec184u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec188: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1EC188u;
    SET_GPR_U32(ctx, 31, 0x1EC190u);
    ctx->pc = 0x1EC18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC188u;
            // 0x1ec18c: 0xfba20290  sqc2        $vf2, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC190u; }
        if (ctx->pc != 0x1EC190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC190u; }
        if (ctx->pc != 0x1EC190u) { return; }
    }
    ctx->pc = 0x1EC190u;
    // 0x1ec190: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1ec194: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1ec198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ec198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ec19c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1EC19Cu;
    {
        const bool branch_taken_0x1ec19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC19Cu;
            // 0x1ec1a0: 0xae4202d8  sw          $v0, 0x2D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec19c) {
            ctx->pc = 0x1EC2C8u;
            goto label_1ec2c8;
        }
    }
    ctx->pc = 0x1EC1A4u;
    // 0x1ec1a4: 0x0  nop
    ctx->pc = 0x1ec1a4u;
    // NOP
label_1ec1a8:
    // 0x1ec1a8: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ec1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ec1ac: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1ec1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1ec1b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC1B0u;
    {
        const bool branch_taken_0x1ec1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1b0) {
            ctx->pc = 0x1EC1B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1B0u;
            // 0x1ec1b4: 0x8e440324  lw          $a0, 0x324($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC1C4u;
            goto label_1ec1c4;
        }
    }
    ctx->pc = 0x1EC1B8u;
    // 0x1ec1b8: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1EC1B8u;
    SET_GPR_U32(ctx, 31, 0x1EC1C0u);
    ctx->pc = 0x1EC1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1B8u;
            // 0x1ec1bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1C0u; }
        if (ctx->pc != 0x1EC1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1C0u; }
        if (ctx->pc != 0x1EC1C0u) { return; }
    }
    ctx->pc = 0x1EC1C0u;
    // 0x1ec1c0: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_1ec1c4:
    // 0x1ec1c4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1ec1c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC1C8u;
    {
        const bool branch_taken_0x1ec1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1C8u;
            // 0x1ec1cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1c8) {
            ctx->pc = 0x1EC1E4u;
            goto label_1ec1e4;
        }
    }
    ctx->pc = 0x1EC1D0u;
    // 0x1ec1d0: 0xc090d56  jal         func_243558
    ctx->pc = 0x1EC1D0u;
    SET_GPR_U32(ctx, 31, 0x1EC1D8u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1D8u; }
        if (ctx->pc != 0x1EC1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1D8u; }
        if (ctx->pc != 0x1EC1D8u) { return; }
    }
    ctx->pc = 0x1EC1D8u;
    // 0x1ec1d8: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1ec1d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1ec1dc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1ec1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1ec1e0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1ec1e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ec1e4:
    // 0x1ec1e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC1E4u;
    {
        const bool branch_taken_0x1ec1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1E4u;
            // 0x1ec1e8: 0x7ba303d0  lq          $v1, 0x3D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1e4) {
            ctx->pc = 0x1EC200u;
            goto label_1ec200;
        }
    }
    ctx->pc = 0x1EC1ECu;
    // 0x1ec1ec: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ec1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ec1f0: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x1ec1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x1ec1f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC1F4u;
    {
        const bool branch_taken_0x1ec1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1F4u;
            // 0x1ec1f8: 0x7e4300e0  sq          $v1, 0xE0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1f4) {
            ctx->pc = 0x1EC200u;
            goto label_1ec200;
        }
    }
    ctx->pc = 0x1EC1FCu;
    // 0x1ec1fc: 0x7e430260  sq          $v1, 0x260($s2)
    ctx->pc = 0x1ec1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 608), GPR_VEC(ctx, 3));
label_1ec200:
    // 0x1ec200: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ec200u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec208: 0xc0795a4  jal         func_1E5690
    ctx->pc = 0x1EC208u;
    SET_GPR_U32(ctx, 31, 0x1EC210u);
    ctx->pc = 0x1EC20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC208u;
            // 0x1ec20c: 0x48250800  qmfc2.ni    $a1, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5690u;
    if (runtime->hasFunction(0x1E5690u)) {
        auto targetFn = runtime->lookupFunction(0x1E5690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC210u; }
        if (ctx->pc != 0x1EC210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5690_0x1e5690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC210u; }
        if (ctx->pc != 0x1EC210u) { return; }
    }
    ctx->pc = 0x1EC210u;
    // 0x1ec210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec214: 0xdba203c0  lqc2        $vf2, 0x3C0($sp)
    ctx->pc = 0x1ec214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x1ec218: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ec218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ec21c: 0xdba303e0  lqc2        $vf3, 0x3E0($sp)
    ctx->pc = 0x1ec21cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x1ec220: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1ec220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ec224: 0xc0794f6  jal         func_1E53D8
    ctx->pc = 0x1EC224u;
    SET_GPR_U32(ctx, 31, 0x1EC22Cu);
    ctx->pc = 0x1EC228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC224u;
            // 0x1ec228: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E53D8u;
    if (runtime->hasFunction(0x1E53D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E53D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC22Cu; }
        if (ctx->pc != 0x1EC22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e53d8_0x1e5428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC22Cu; }
        if (ctx->pc != 0x1EC22Cu) { return; }
    }
    ctx->pc = 0x1EC22Cu;
    // 0x1ec22c: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1ec22cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ec230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec234: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x1ec234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x1ec238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC238u;
    {
        const bool branch_taken_0x1ec238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC238u;
            // 0x1ec23c: 0x7fa50410  sq          $a1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec238) {
            ctx->pc = 0x1EC250u;
            goto label_1ec250;
        }
    }
    ctx->pc = 0x1EC240u;
    // 0x1ec240: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ec240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x1ec244: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ec248: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ec248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ec24c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1ec24cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ec250:
    // 0x1ec250: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ec254: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x1ec254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x1ec258: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC258u;
    {
        const bool branch_taken_0x1ec258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC258u;
            // 0x1ec25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec258) {
            ctx->pc = 0x1EC274u;
            goto label_1ec274;
        }
    }
    ctx->pc = 0x1EC260u;
    // 0x1ec260: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1ec260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ec264: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC264u;
    {
        const bool branch_taken_0x1ec264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec264) {
            ctx->pc = 0x1EC268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC264u;
            // 0x1ec268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC278u;
            goto label_1ec278;
        }
    }
    ctx->pc = 0x1EC26Cu;
    // 0x1ec26c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1ec26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1ec270: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x1ec270u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ec274:
    // 0x1ec274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec278:
    // 0x1ec278: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x1EC278u;
    SET_GPR_U32(ctx, 31, 0x1EC280u);
    ctx->pc = 0x1EC27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC278u;
            // 0x1ec27c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (runtime->hasFunction(0x1E9648u)) {
        auto targetFn = runtime->lookupFunction(0x1E9648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC280u; }
        if (ctx->pc != 0x1EC280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9648_0x1e9648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC280u; }
        if (ctx->pc != 0x1EC280u) { return; }
    }
    ctx->pc = 0x1EC280u;
    // 0x1ec280: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ec280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ec284: 0xdba60410  lqc2        $vf6, 0x410($sp)
    ctx->pc = 0x1ec284u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1ec288: 0x8e420324  lw          $v0, 0x324($s2)
    ctx->pc = 0x1ec288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1ec28c: 0x4be6106c  vsub.xyzw   $vf1, $vf2, $vf6
    ctx->pc = 0x1ec28cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec290: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1ec290u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec294: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ec294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ec298: 0x7a480050  lq          $t0, 0x50($s2)
    ctx->pc = 0x1ec298u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ec29c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1ec29cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec2a0: 0x7a470060  lq          $a3, 0x60($s2)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ec2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2a8: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x1ec2a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1ec2ac: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x1ec2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1ec2b0: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x1ec2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ec2b4: 0x7fa802a0  sq          $t0, 0x2A0($sp)
    ctx->pc = 0x1ec2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 8));
    // 0x1ec2b8: 0x7fa702b0  sq          $a3, 0x2B0($sp)
    ctx->pc = 0x1ec2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 7));
    // 0x1ec2bc: 0x7fa302c0  sq          $v1, 0x2C0($sp)
    ctx->pc = 0x1ec2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 3));
    // 0x1ec2c0: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1EC2C0u;
    SET_GPR_U32(ctx, 31, 0x1EC2C8u);
    ctx->pc = 0x1EC2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2C0u;
            // 0x1ec2c4: 0x7fa202d0  sq          $v0, 0x2D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2C8u; }
        if (ctx->pc != 0x1EC2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2C8u; }
        if (ctx->pc != 0x1EC2C8u) { return; }
    }
    ctx->pc = 0x1EC2C8u;
label_1ec2c8:
    // 0x1ec2c8: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x1EC2C8u;
    SET_GPR_U32(ctx, 31, 0x1EC2D0u);
    ctx->pc = 0x1EC2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2C8u;
            // 0x1ec2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (runtime->hasFunction(0x1E5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2D0u; }
        if (ctx->pc != 0x1EC2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5AB0_0x1e5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2D0u; }
        if (ctx->pc != 0x1EC2D0u) { return; }
    }
    ctx->pc = 0x1EC2D0u;
    // 0x1ec2d0: 0xc07b1b8  jal         func_1EC6E0
    ctx->pc = 0x1EC2D0u;
    SET_GPR_U32(ctx, 31, 0x1EC2D8u);
    ctx->pc = 0x1EC2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2D0u;
            // 0x1ec2d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6E0u;
    if (runtime->hasFunction(0x1EC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2D8u; }
        if (ctx->pc != 0x1EC2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC6E0_0x1ec6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2D8u; }
        if (ctx->pc != 0x1EC2D8u) { return; }
    }
    ctx->pc = 0x1EC2D8u;
    // 0x1ec2d8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ec2d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec2dc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1ec2dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec2e0: 0x7a4200f0  lq          $v0, 0xF0($s2)
    ctx->pc = 0x1ec2e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1ec2e4: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x1ec2e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ec2e8: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1ec2e8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ec2ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1ec2ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1ec2f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ec2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ec2f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec2f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ec2f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ec2fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC2FCu;
    {
        const bool branch_taken_0x1ec2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec2fc) {
            ctx->pc = 0x1EC300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2FCu;
            // 0x1ec300: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC310u;
            goto label_1ec310;
        }
    }
    ctx->pc = 0x1EC304u;
    // 0x1ec304: 0xc07a0f2  jal         func_1E83C8
    ctx->pc = 0x1EC304u;
    SET_GPR_U32(ctx, 31, 0x1EC30Cu);
    ctx->pc = 0x1EC308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC304u;
            // 0x1ec308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E83C8u;
    if (runtime->hasFunction(0x1E83C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E83C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC30Cu; }
        if (ctx->pc != 0x1EC30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E83C8_0x1e83c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC30Cu; }
        if (ctx->pc != 0x1EC30Cu) { return; }
    }
    ctx->pc = 0x1EC30Cu;
    // 0x1ec30c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ec30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ec310:
    // 0x1ec310: 0xc6560168  lwc1        $f22, 0x168($s2)
    ctx->pc = 0x1ec310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ec314: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1ec314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1ec318: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1ec31c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1ec31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1ec320: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC328u);
        ctx->pc = 0x1EC324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC320u;
            // 0x1ec324: 0xc6b4c658  lwc1        $f20, -0x39A8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC328u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC328u; }
            if (ctx->pc != 0x1EC328u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC328u;
    // 0x1ec328: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1ec328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ec32c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ec330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ec330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec334: 0x4600b4c6  mov.s       $f19, $f22
    ctx->pc = 0x1ec334u;
    ctx->f[19] = FPU_MOV_S(ctx->f[22]);
    // 0x1ec338: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ec338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ec33c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ec33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec340: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ec340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec348: 0xc6a3c658  lwc1        $f3, -0x39A8($s5)
    ctx->pc = 0x1ec348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ec34c: 0xc641016c  lwc1        $f1, 0x16C($s2)
    ctx->pc = 0x1ec34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec350: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1ec350u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1ec354: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1ec354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1ec358: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1ec358u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
    // 0x1ec35c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ec35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ec360: 0xc64c0170  lwc1        $f12, 0x170($s2)
    ctx->pc = 0x1ec360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec364: 0xc64d02c8  lwc1        $f13, 0x2C8($s2)
    ctx->pc = 0x1ec364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ec368: 0xc64e02cc  lwc1        $f14, 0x2CC($s2)
    ctx->pc = 0x1ec368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ec36c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec370: 0xc65002d0  lwc1        $f16, 0x2D0($s2)
    ctx->pc = 0x1ec370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ec374: 0xc65102d4  lwc1        $f17, 0x2D4($s2)
    ctx->pc = 0x1ec374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1ec378: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1ec378u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ec37c: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x1ec37cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[3];
    // 0x1ec380: 0xc07da14  jal         func_1F6850
    ctx->pc = 0x1EC380u;
    SET_GPR_U32(ctx, 31, 0x1EC388u);
    ctx->pc = 0x1EC384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC380u;
            // 0x1ec384: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6850u;
    if (runtime->hasFunction(0x1F6850u)) {
        auto targetFn = runtime->lookupFunction(0x1F6850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC388u; }
        if (ctx->pc != 0x1EC388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6850_0x1f6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC388u; }
        if (ctx->pc != 0x1EC388u) { return; }
    }
    ctx->pc = 0x1EC388u;
    // 0x1ec388: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1ec388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec38c: 0x0  nop
    ctx->pc = 0x1ec38cu;
    // NOP
    // 0x1ec390: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EC390u;
    {
        const bool branch_taken_0x1ec390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec390) {
            ctx->pc = 0x1EC394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC390u;
            // 0x1ec394: 0xe64002ac  swc1        $f0, 0x2AC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC398u;
            goto label_1ec398;
        }
    }
    ctx->pc = 0x1EC398u;
label_1ec398:
    // 0x1ec398: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x1EC398u;
    SET_GPR_U32(ctx, 31, 0x1EC3A0u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3A0u; }
        if (ctx->pc != 0x1EC3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3A0u; }
        if (ctx->pc != 0x1EC3A0u) { return; }
    }
    ctx->pc = 0x1EC3A0u;
    // 0x1ec3a0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EC3A0u;
    {
        const bool branch_taken_0x1ec3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3A0u;
            // 0x1ec3a4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3a0) {
            ctx->pc = 0x1EC420u;
            goto label_1ec420;
        }
    }
    ctx->pc = 0x1EC3A8u;
    // 0x1ec3a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1ec3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ec3ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ec3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ec3b0: 0xc454c658  lwc1        $f20, -0x39A8($v0)
    ctx->pc = 0x1ec3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec3b4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1ec3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1ec3b8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1ec3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1ec3bc: 0xc6550184  lwc1        $f21, 0x184($s2)
    ctx->pc = 0x1ec3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ec3c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC3C8u);
        ctx->pc = 0x1EC3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3C0u;
            // 0x1ec3c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC3C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3C8u; }
            if (ctx->pc != 0x1EC3C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC3C8u;
    // 0x1ec3c8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ec3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ec3cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ec3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec3d0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ec3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ec3d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ec3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec3dc: 0xc641016c  lwc1        $f1, 0x16C($s2)
    ctx->pc = 0x1ec3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec3e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1ec3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec3e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ec3e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ec3e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec3ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1ec3ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ec3f0: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x1ec3f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1ec3f4: 0x46036032  c.eq.s      $f12, $f3
    ctx->pc = 0x1ec3f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec3f8: 0x0  nop
    ctx->pc = 0x1ec3f8u;
    // NOP
    // 0x1ec3fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC3FCu;
    {
        const bool branch_taken_0x1ec3fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3FCu;
            // 0x1ec400: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3fc) {
            ctx->pc = 0x1EC420u;
            goto label_1ec420;
        }
    }
    ctx->pc = 0x1EC404u;
    // 0x1ec404: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ec408: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1ec408u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1ec40c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1ec40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1ec410: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1ec414: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC41Cu);
        ctx->pc = 0x1EC418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC414u;
            // 0x1ec418: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC41Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC41Cu; }
            if (ctx->pc != 0x1EC41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EC41Cu;
    // 0x1ec41c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ec41cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_1ec420:
    // 0x1ec420: 0x8e02d2a8  lw          $v0, -0x2D58($s0)
    ctx->pc = 0x1ec420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955688)));
    // 0x1ec424: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC424u;
    {
        const bool branch_taken_0x1ec424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC424u;
            // 0x1ec428: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec424) {
            ctx->pc = 0x1EC458u;
            goto label_1ec458;
        }
    }
    ctx->pc = 0x1EC42Cu;
    // 0x1ec42c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ec42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ec430: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EC430u;
    {
        const bool branch_taken_0x1ec430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec430) {
            ctx->pc = 0x1EC434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC430u;
            // 0x1ec434: 0x8e4202d8  lw          $v0, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC4B4u;
            goto label_1ec4b4;
        }
    }
    ctx->pc = 0x1EC438u;
    // 0x1ec438: 0xc64102b8  lwc1        $f1, 0x2B8($s2)
    ctx->pc = 0x1ec438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec43c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1ec43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ec440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec444: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ec444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec448: 0x0  nop
    ctx->pc = 0x1ec448u;
    // NOP
    // 0x1ec44c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1EC44Cu;
    {
        const bool branch_taken_0x1ec44c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec44c) {
            ctx->pc = 0x1EC450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC44Cu;
            // 0x1ec450: 0x8e4202d8  lw          $v0, 0x2D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC4B4u;
            goto label_1ec4b4;
        }
    }
    ctx->pc = 0x1EC454u;
    // 0x1ec454: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ec454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1ec458:
    // 0x1ec458: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1ec458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1ec45c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EC45Cu;
    {
        const bool branch_taken_0x1ec45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec45c) {
            ctx->pc = 0x1EC460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC45Cu;
            // 0x1ec460: 0xae00d2a8  sw          $zero, -0x2D58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294955688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC4B0u;
            goto label_1ec4b0;
        }
    }
    ctx->pc = 0x1EC464u;
    // 0x1ec464: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x1ec464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec468: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1ec46c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ec46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ec470: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1ec470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1ec474: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1ec474u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ec478: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ec478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec47c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1ec47cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1ec480: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec484: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ec484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec488: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1ec488u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ec48c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ec48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec490: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x1EC490u;
    SET_GPR_U32(ctx, 31, 0x1EC498u);
    ctx->pc = 0x1EC494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC490u;
            // 0x1ec494: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC498u; }
        if (ctx->pc != 0x1EC498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC498u; }
        if (ctx->pc != 0x1EC498u) { return; }
    }
    ctx->pc = 0x1EC498u;
    // 0x1ec498: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ec49c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1ec49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1ec4a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ec4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ec4a4: 0xae420174  sw          $v0, 0x174($s2)
    ctx->pc = 0x1ec4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 2));
    // 0x1ec4a8: 0xae00d2a8  sw          $zero, -0x2D58($s0)
    ctx->pc = 0x1ec4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955688), GPR_U32(ctx, 0));
    // 0x1ec4ac: 0x0  nop
    ctx->pc = 0x1ec4acu;
    // NOP
label_1ec4b0:
    // 0x1ec4b0: 0x8e4202d8  lw          $v0, 0x2D8($s2)
    ctx->pc = 0x1ec4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
label_1ec4b4:
    // 0x1ec4b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ec4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ec4b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ec4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ec4bc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EC4BCu;
    {
        const bool branch_taken_0x1ec4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec4bc) {
            ctx->pc = 0x1EC4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4BCu;
            // 0x1ec4c0: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC5E4u;
            goto label_1ec5e4;
        }
    }
    ctx->pc = 0x1EC4C4u;
    // 0x1ec4c4: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x1ec4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec4c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec4cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec4ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec4d0: 0x0  nop
    ctx->pc = 0x1ec4d0u;
    // NOP
    // 0x1ec4d4: 0x45020043  bc1fl       . + 4 + (0x43 << 2)
    ctx->pc = 0x1EC4D4u;
    {
        const bool branch_taken_0x1ec4d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec4d4) {
            ctx->pc = 0x1EC4D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4D4u;
            // 0x1ec4d8: 0x8e420174  lw          $v0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC5E4u;
            goto label_1ec5e4;
        }
    }
    ctx->pc = 0x1EC4DCu;
    // 0x1ec4dc: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ec4e0: 0x30820380  andi        $v0, $a0, 0x380
    ctx->pc = 0x1ec4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)896);
    // 0x1ec4e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EC4E4u;
    {
        const bool branch_taken_0x1ec4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4E4u;
            // 0x1ec4e8: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4e4) {
            ctx->pc = 0x1EC520u;
            goto label_1ec520;
        }
    }
    ctx->pc = 0x1EC4ECu;
    // 0x1ec4ec: 0x240303f0  addiu       $v1, $zero, 0x3F0
    ctx->pc = 0x1ec4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x1ec4f0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ec4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ec4f4: 0xa7a302e0  sh          $v1, 0x2E0($sp)
    ctx->pc = 0x1ec4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 736), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ec4f8: 0xae420174  sw          $v0, 0x174($s2)
    ctx->pc = 0x1ec4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 2));
    // 0x1ec4fc: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x1ec4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x1ec500: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x1ec500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x1ec504: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x1ec504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x1ec508: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x1ec508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
    // 0x1ec50c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ec50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ec510: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1ec514: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC514u;
    {
        const bool branch_taken_0x1ec514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC514u;
            // 0x1ec518: 0x27a602e0  addiu       $a2, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec514) {
            ctx->pc = 0x1EC558u;
            goto label_1ec558;
        }
    }
    ctx->pc = 0x1EC51Cu;
    // 0x1ec51c: 0x0  nop
    ctx->pc = 0x1ec51cu;
    // NOP
label_1ec520:
    // 0x1ec520: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ec520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ec524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC524u;
    {
        const bool branch_taken_0x1ec524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC524u;
            // 0x1ec528: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec524) {
            ctx->pc = 0x1EC538u;
            goto label_1ec538;
        }
    }
    ctx->pc = 0x1EC52Cu;
    // 0x1ec52c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1ec52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1ec530: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EC530u;
    {
        const bool branch_taken_0x1ec530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC530u;
            // 0x1ec534: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec530) {
            ctx->pc = 0x1EC568u;
            goto label_1ec568;
        }
    }
    ctx->pc = 0x1EC538u;
label_1ec538:
    // 0x1ec538: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x1ec538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
    // 0x1ec53c: 0xa7a20300  sh          $v0, 0x300($sp)
    ctx->pc = 0x1ec53cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ec540: 0xafa00308  sw          $zero, 0x308($sp)
    ctx->pc = 0x1ec540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 0));
    // 0x1ec544: 0xafa0030c  sw          $zero, 0x30C($sp)
    ctx->pc = 0x1ec544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 0));
    // 0x1ec548: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x1ec548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
    // 0x1ec54c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ec54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ec550: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1ec550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1ec554: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x1ec554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1ec558:
    // 0x1ec558: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1EC558u;
    SET_GPR_U32(ctx, 31, 0x1EC560u);
    ctx->pc = 0x1EC55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC558u;
            // 0x1ec55c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC560u; }
        if (ctx->pc != 0x1EC560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC560u; }
        if (ctx->pc != 0x1EC560u) { return; }
    }
    ctx->pc = 0x1EC560u;
    // 0x1ec560: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1EC560u;
    {
        const bool branch_taken_0x1ec560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC560u;
            // 0x1ec564: 0x8e43033c  lw          $v1, 0x33C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec560) {
            ctx->pc = 0x1EC604u;
            goto label_1ec604;
        }
    }
    ctx->pc = 0x1EC568u;
label_1ec568:
    // 0x1ec568: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x1ec568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x1ec56c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC56Cu;
    {
        const bool branch_taken_0x1ec56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec56c) {
            ctx->pc = 0x1EC570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC56Cu;
            // 0x1ec570: 0x30820030  andi        $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC580u;
            goto label_1ec580;
        }
    }
    ctx->pc = 0x1EC574u;
    // 0x1ec574: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ec574u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC578u;
    {
        const bool branch_taken_0x1ec578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC578u;
            // 0x1ec57c: 0xfa4100e0  sqc2        $vf1, 0xE0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 224), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec578) {
            ctx->pc = 0x1EC5A0u;
            goto label_1ec5a0;
        }
    }
    ctx->pc = 0x1EC580u;
label_1ec580:
    // 0x1ec580: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC580u;
    {
        const bool branch_taken_0x1ec580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec580) {
            ctx->pc = 0x1EC584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC580u;
            // 0x1ec584: 0x8e430174  lw          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC588u;
    // 0x1ec588: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1ec58c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1ec58cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ec590: 0xda410220  lqc2        $vf1, 0x220($s2)
    ctx->pc = 0x1ec590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1ec594: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ec594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec598: 0xfa4100e0  sqc2        $vf1, 0xE0($s2)
    ctx->pc = 0x1ec598u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ec59c: 0x0  nop
    ctx->pc = 0x1ec59cu;
    // NOP
label_1ec5a0:
    // 0x1ec5a0: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1ec5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_1ec5a4:
    // 0x1ec5a4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1ec5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1ec5a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ec5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ec5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ec5b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec5b8: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1EC5B8u;
    SET_GPR_U32(ctx, 31, 0x1EC5C0u);
    ctx->pc = 0x1EC5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5B8u;
            // 0x1ec5bc: 0xae430174  sw          $v1, 0x174($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5C0u; }
        if (ctx->pc != 0x1EC5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5C0u; }
        if (ctx->pc != 0x1EC5C0u) { return; }
    }
    ctx->pc = 0x1EC5C0u;
    // 0x1ec5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5c4: 0xc07110c  jal         func_1C4430
    ctx->pc = 0x1EC5C4u;
    SET_GPR_U32(ctx, 31, 0x1EC5CCu);
    ctx->pc = 0x1EC5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5C4u;
            // 0x1ec5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4430u;
    if (runtime->hasFunction(0x1C4430u)) {
        auto targetFn = runtime->lookupFunction(0x1C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5CCu; }
        if (ctx->pc != 0x1EC5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4430_0x1c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5CCu; }
        if (ctx->pc != 0x1EC5CCu) { return; }
    }
    ctx->pc = 0x1EC5CCu;
    // 0x1ec5cc: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1EC5CCu;
    SET_GPR_U32(ctx, 31, 0x1EC5D4u);
    ctx->pc = 0x1EC5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5CCu;
            // 0x1ec5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5D4u; }
        if (ctx->pc != 0x1EC5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5D4u; }
        if (ctx->pc != 0x1EC5D4u) { return; }
    }
    ctx->pc = 0x1EC5D4u;
    // 0x1ec5d4: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1ec5d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ec5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ec5dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC5DCu;
    {
        const bool branch_taken_0x1ec5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5DCu;
            // 0x1ec5e0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5dc) {
            ctx->pc = 0x1EC5FCu;
            goto label_1ec5fc;
        }
    }
    ctx->pc = 0x1EC5E4u;
label_1ec5e4:
    // 0x1ec5e4: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x1ec5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x1ec5e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ec5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ec5ec: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x1ec5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x1ec5f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ec5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ec5f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ec5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ec5f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ec5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1ec5fc:
    // 0x1ec5fc: 0xae420174  sw          $v0, 0x174($s2)
    ctx->pc = 0x1ec5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 2));
    // 0x1ec600: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x1ec600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_1ec604:
    // 0x1ec604: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC604u;
    {
        const bool branch_taken_0x1ec604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC604u;
            // 0x1ec608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec604) {
            ctx->pc = 0x1EC620u;
            goto label_1ec620;
        }
    }
    ctx->pc = 0x1EC60Cu;
    // 0x1ec60c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ec610: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1ec610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ec614: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1ec614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1ec618: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC620u);
        ctx->pc = 0x1EC61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC618u;
            // 0x1ec61c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC620u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC620u; }
            if (ctx->pc != 0x1EC620u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC620u;
label_1ec620:
    // 0x1ec620: 0x8e4201ac  lw          $v0, 0x1AC($s2)
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    // 0x1ec624: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EC624u;
    {
        const bool branch_taken_0x1ec624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec624) {
            ctx->pc = 0x1EC628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC624u;
            // 0x1ec628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC6ACu;
            goto label_1ec6ac;
        }
    }
    ctx->pc = 0x1EC62Cu;
    // 0x1ec62c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1ec62cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec630: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ec630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ec634: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC634u;
    {
        const bool branch_taken_0x1ec634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC634u;
            // 0x1ec638: 0x26430050  addiu       $v1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec634) {
            ctx->pc = 0x1EC6A8u;
            goto label_1ec6a8;
        }
    }
    ctx->pc = 0x1EC63Cu;
    // 0x1ec63c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1ec63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ec640: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1ec640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ec644: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x1ec644u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ec648: 0x7fa203b0  sq          $v0, 0x3B0($sp)
    ctx->pc = 0x1ec648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 2));
    // 0x1ec64c: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x1ec64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
    // 0x1ec650: 0x84a400b8  lh          $a0, 0xB8($a1)
    ctx->pc = 0x1ec650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1ec654: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1ec658: 0x40f809  jalr        $v0
    ctx->pc = 0x1EC658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC660u);
        ctx->pc = 0x1EC65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC658u;
            // 0x1ec65c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC660u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC660u; }
            if (ctx->pc != 0x1EC660u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC660u;
    // 0x1ec660: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ec660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ec664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec668: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ec66c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ec66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec674: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ec674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ec678: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ec678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ec67c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ec67cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ec680: 0xdba103b0  lqc2        $vf1, 0x3B0($sp)
    ctx->pc = 0x1ec680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x1ec684: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1ec684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ec688: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ec688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ec68c: 0xdba20420  lqc2        $vf2, 0x420($sp)
    ctx->pc = 0x1ec68cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1ec690: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec694: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1ec694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ec698: 0x8e460338  lw          $a2, 0x338($s2)
    ctx->pc = 0x1ec698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x1ec69c: 0xc06faae  jal         func_1BEAB8
    ctx->pc = 0x1EC69Cu;
    SET_GPR_U32(ctx, 31, 0x1EC6A4u);
    ctx->pc = 0x1EC6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC69Cu;
            // 0x1ec6a0: 0x48251000  qmfc2.ni    $a1, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAB8u;
    if (runtime->hasFunction(0x1BEAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BEAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6A4u; }
        if (ctx->pc != 0x1EC6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEAB8_0x1beab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6A4u; }
        if (ctx->pc != 0x1EC6A4u) { return; }
    }
    ctx->pc = 0x1EC6A4u;
    // 0x1ec6a4: 0x0  nop
    ctx->pc = 0x1ec6a4u;
    // NOP
label_1ec6a8:
    // 0x1ec6a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6ac:
    // 0x1ec6ac: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x1ec6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_1ec6b0:
    // 0x1ec6b0: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x1ec6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1ec6b4: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x1ec6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1ec6b8: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x1ec6b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1ec6bc: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x1ec6bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1ec6c0: 0x7bb50450  lq          $s5, 0x450($sp)
    ctx->pc = 0x1ec6c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1ec6c4: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x1ec6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1ec6c8: 0xc7b604c0  lwc1        $f22, 0x4C0($sp)
    ctx->pc = 0x1ec6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ec6cc: 0xc7b504b8  lwc1        $f21, 0x4B8($sp)
    ctx->pc = 0x1ec6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ec6d0: 0xc7b404b0  lwc1        $f20, 0x4B0($sp)
    ctx->pc = 0x1ec6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6D4u;
            // 0x1ec6d8: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB204u: goto label_1eb204;
            case 0x1EB220u: goto label_1eb220;
            case 0x1EB250u: goto label_1eb250;
            case 0x1EB274u: goto label_1eb274;
            case 0x1EB290u: goto label_1eb290;
            case 0x1EB2B0u: goto label_1eb2b0;
            case 0x1EB2D8u: goto label_1eb2d8;
            case 0x1EB328u: goto label_1eb328;
            case 0x1EB3C0u: goto label_1eb3c0;
            case 0x1EB3C4u: goto label_1eb3c4;
            case 0x1EB3F0u: goto label_1eb3f0;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB434u: goto label_1eb434;
            case 0x1EB48Cu: goto label_1eb48c;
            case 0x1EB490u: goto label_1eb490;
            case 0x1EB4D8u: goto label_1eb4d8;
            case 0x1EB4DCu: goto label_1eb4dc;
            case 0x1EB4E0u: goto label_1eb4e0;
            case 0x1EB588u: goto label_1eb588;
            case 0x1EB58Cu: goto label_1eb58c;
            case 0x1EB5E8u: goto label_1eb5e8;
            case 0x1EB658u: goto label_1eb658;
            case 0x1EB6E0u: goto label_1eb6e0;
            case 0x1EB6E8u: goto label_1eb6e8;
            case 0x1EB738u: goto label_1eb738;
            case 0x1EB760u: goto label_1eb760;
            case 0x1EB764u: goto label_1eb764;
            case 0x1EB784u: goto label_1eb784;
            case 0x1EB790u: goto label_1eb790;
            case 0x1EB7B0u: goto label_1eb7b0;
            case 0x1EB7F8u: goto label_1eb7f8;
            case 0x1EB878u: goto label_1eb878;
            case 0x1EB88Cu: goto label_1eb88c;
            case 0x1EB890u: goto label_1eb890;
            case 0x1EB8D8u: goto label_1eb8d8;
            case 0x1EB8DCu: goto label_1eb8dc;
            case 0x1EB918u: goto label_1eb918;
            case 0x1EB91Cu: goto label_1eb91c;
            case 0x1EB940u: goto label_1eb940;
            case 0x1EB95Cu: goto label_1eb95c;
            case 0x1EB9E0u: goto label_1eb9e0;
            case 0x1EBA20u: goto label_1eba20;
            case 0x1EBA44u: goto label_1eba44;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA9Cu: goto label_1eba9c;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAD4u: goto label_1ebad4;
            case 0x1EBB04u: goto label_1ebb04;
            case 0x1EBB50u: goto label_1ebb50;
            case 0x1EBB70u: goto label_1ebb70;
            case 0x1EBBA8u: goto label_1ebba8;
            case 0x1EBBD0u: goto label_1ebbd0;
            case 0x1EBBF4u: goto label_1ebbf4;
            case 0x1EBC10u: goto label_1ebc10;
            case 0x1EBC14u: goto label_1ebc14;
            case 0x1EBC2Cu: goto label_1ebc2c;
            case 0x1EBC78u: goto label_1ebc78;
            case 0x1EBCACu: goto label_1ebcac;
            case 0x1EBCB0u: goto label_1ebcb0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD1Cu: goto label_1ebd1c;
            case 0x1EBD38u: goto label_1ebd38;
            case 0x1EBD4Cu: goto label_1ebd4c;
            case 0x1EBD88u: goto label_1ebd88;
            case 0x1EBDA0u: goto label_1ebda0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBE08u: goto label_1ebe08;
            case 0x1EBE0Cu: goto label_1ebe0c;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB4u: goto label_1ebeb4;
            case 0x1EBEB8u: goto label_1ebeb8;
            case 0x1EBEC8u: goto label_1ebec8;
            case 0x1EBECCu: goto label_1ebecc;
            case 0x1EBEF4u: goto label_1ebef4;
            case 0x1EBF2Cu: goto label_1ebf2c;
            case 0x1EBF38u: goto label_1ebf38;
            case 0x1EBF58u: goto label_1ebf58;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1C4u: goto label_1ec1c4;
            case 0x1EC1E4u: goto label_1ec1e4;
            case 0x1EC200u: goto label_1ec200;
            case 0x1EC250u: goto label_1ec250;
            case 0x1EC274u: goto label_1ec274;
            case 0x1EC278u: goto label_1ec278;
            case 0x1EC2C8u: goto label_1ec2c8;
            case 0x1EC310u: goto label_1ec310;
            case 0x1EC398u: goto label_1ec398;
            case 0x1EC420u: goto label_1ec420;
            case 0x1EC458u: goto label_1ec458;
            case 0x1EC4B0u: goto label_1ec4b0;
            case 0x1EC4B4u: goto label_1ec4b4;
            case 0x1EC520u: goto label_1ec520;
            case 0x1EC538u: goto label_1ec538;
            case 0x1EC558u: goto label_1ec558;
            case 0x1EC568u: goto label_1ec568;
            case 0x1EC580u: goto label_1ec580;
            case 0x1EC5A0u: goto label_1ec5a0;
            case 0x1EC5A4u: goto label_1ec5a4;
            case 0x1EC5E4u: goto label_1ec5e4;
            case 0x1EC5FCu: goto label_1ec5fc;
            case 0x1EC604u: goto label_1ec604;
            case 0x1EC620u: goto label_1ec620;
            case 0x1EC6A8u: goto label_1ec6a8;
            case 0x1EC6ACu: goto label_1ec6ac;
            case 0x1EC6B0u: goto label_1ec6b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC6DCu;
    // 0x1ec6dc: 0x0  nop
    ctx->pc = 0x1ec6dcu;
    // NOP
}
