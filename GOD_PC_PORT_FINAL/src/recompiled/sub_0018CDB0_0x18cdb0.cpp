#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018CDB0
// Address: 0x18cdb0 - 0x18d488
void sub_0018CDB0_0x18cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CDB0_0x18cdb0");
#endif

    ctx->pc = 0x18cdb0u;

    // 0x18cdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18cdb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18cdb8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x18cdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x18cdbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cdc0: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x18cdc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CDC4u;
    {
        const bool branch_taken_0x18cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cdc4) {
            ctx->pc = 0x18CDD4u;
            goto label_18cdd4;
        }
    }
    ctx->pc = 0x18CDCCu;
    // 0x18cdcc: 0xc04e24c  jal         func_138930
    ctx->pc = 0x18CDCCu;
    SET_GPR_U32(ctx, 31, 0x18CDD4u);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDD4u; }
        if (ctx->pc != 0x18CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDD4u; }
        if (ctx->pc != 0x18CDD4u) { return; }
    }
    ctx->pc = 0x18CDD4u;
label_18cdd4:
    // 0x18cdd4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18CDD4u;
    SET_GPR_U32(ctx, 31, 0x18CDDCu);
    ctx->pc = 0x18CDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDD4u;
            // 0x18cdd8: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDDCu; }
        if (ctx->pc != 0x18CDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDDCu; }
        if (ctx->pc != 0x18CDDCu) { return; }
    }
    ctx->pc = 0x18CDDCu;
    // 0x18cddc: 0xc090ede  jal         func_243B78
    ctx->pc = 0x18CDDCu;
    SET_GPR_U32(ctx, 31, 0x18CDE4u);
    ctx->pc = 0x18CDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDDCu;
            // 0x18cde0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243B78u;
    if (runtime->hasFunction(0x243B78u)) {
        auto targetFn = runtime->lookupFunction(0x243B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDE4u; }
        if (ctx->pc != 0x18CDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243b78_0x243bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDE4u; }
        if (ctx->pc != 0x18CDE4u) { return; }
    }
    ctx->pc = 0x18CDE4u;
    // 0x18cde4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x18cde8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18cde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cdf0: 0xac6253c8  sw          $v0, 0x53C8($v1)
    ctx->pc = 0x18cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21448), GPR_U32(ctx, 2));
    // 0x18cdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x18CDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDF4u;
            // 0x18cdf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CDFCu;
    // 0x18cdfc: 0x0  nop
    ctx->pc = 0x18cdfcu;
    // NOP
    // 0x18ce00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x18ce04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x18ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x18ce08: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x18ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x18ce0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18ce0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce10: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x18ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x18ce14: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x18ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x18ce18: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x18ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x18ce1c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x18ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x18ce20: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x18ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x18ce24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18ce28: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x18ce28u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x18ce2c: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x18ce2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x18ce30: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x18ce30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x18ce34: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x18ce34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x18ce38: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x18ce38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x18ce3c: 0x8e860060  lw          $a2, 0x60($s4)
    ctx->pc = 0x18ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x18ce40: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x18ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x18ce44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18CE44u;
    {
        const bool branch_taken_0x18ce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE44u;
            // 0x18ce48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce44) {
            ctx->pc = 0x18CE7Cu;
            goto label_18ce7c;
        }
    }
    ctx->pc = 0x18CE4Cu;
    // 0x18ce4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18ce50: 0x61dc2  srl         $v1, $a2, 23
    ctx->pc = 0x18ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x18ce54: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18ce54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18ce58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18ce5c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18ce60: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18ce64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ce68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ce6c: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CE6Cu;
    {
        const bool branch_taken_0x18ce6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x18CE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE6Cu;
            // 0x18ce70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce6c) {
            ctx->pc = 0x18CE78u;
            goto label_18ce78;
        }
    }
    ctx->pc = 0x18CE74u;
    // 0x18ce74: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18ce78:
    // 0x18ce78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ce78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ce7c:
    // 0x18ce7c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ce80: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x18ce80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18ce84: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x18ce88: 0x40f809  jalr        $v0
    ctx->pc = 0x18CE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CE90u);
        ctx->pc = 0x18CE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE88u;
            // 0x18ce8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18CE90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18CE90u; }
            if (ctx->pc != 0x18CE90u) { return; }
        }
        }
    }
    ctx->pc = 0x18CE90u;
    // 0x18ce90: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x18ce90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18ce94: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18ce94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18ce98: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18CE98u;
    {
        const bool branch_taken_0x18ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE98u;
            // 0x18ce9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce98) {
            ctx->pc = 0x18CED0u;
            goto label_18ced0;
        }
    }
    ctx->pc = 0x18CEA0u;
    // 0x18cea0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18cea4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x18cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18cea8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18cea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18ceac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18ceb0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18ceb4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18ceb8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cebc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18cec0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CEC0u;
    {
        const bool branch_taken_0x18cec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18CEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEC0u;
            // 0x18cec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cec0) {
            ctx->pc = 0x18CECCu;
            goto label_18cecc;
        }
    }
    ctx->pc = 0x18CEC8u;
    // 0x18cec8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18cecc:
    // 0x18cecc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18ceccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ced0:
    // 0x18ced0: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CED0u;
    {
        const bool branch_taken_0x18ced0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ced0) {
            ctx->pc = 0x18CED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18CED0u;
            // 0x18ced4: 0xc65602cc  lwc1        $f22, 0x2CC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x18CEE8u;
            goto label_18cee8;
        }
    }
    ctx->pc = 0x18CED8u;
    // 0x18ced8: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x18ced8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18cedc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x18cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18cee0: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x18CEE0u;
    {
        const bool branch_taken_0x18cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEE0u;
            // 0x18cee4: 0xa6820004  sh          $v0, 0x4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cee0) {
            ctx->pc = 0x18D36Cu;
            goto label_18d36c;
        }
    }
    ctx->pc = 0x18CEE8u;
label_18cee8:
    // 0x18cee8: 0xc65702c8  lwc1        $f23, 0x2C8($s2)
    ctx->pc = 0x18cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18ceec: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x18ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x18cef0: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x18CEF0u;
    {
        const bool branch_taken_0x18cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEF0u;
            // 0x18cef4: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cef0) {
            ctx->pc = 0x18D154u;
            goto label_18d154;
        }
    }
    ctx->pc = 0x18CEF8u;
    // 0x18cef8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x18cefc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18cefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18cf00: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x18cf00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x18cf04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18cf08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18cf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18cf0c: 0x4618bdc0  add.s       $f23, $f23, $f24
    ctx->pc = 0x18cf0cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x18cf10: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x18cf10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cf14: 0x0  nop
    ctx->pc = 0x18cf14u;
    // NOP
    // 0x18cf18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF18u;
    {
        const bool branch_taken_0x18cf18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF18u;
            // 0x18cf1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf18) {
            ctx->pc = 0x18CF28u;
            goto label_18cf28;
        }
    }
    ctx->pc = 0x18CF20u;
    // 0x18cf20: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x18CF20u;
    SET_GPR_U32(ctx, 31, 0x18CF28u);
    ctx->pc = 0x18CF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF20u;
            // 0x18cf24: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF28u; }
        if (ctx->pc != 0x18CF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF28u; }
        if (ctx->pc != 0x18CF28u) { return; }
    }
    ctx->pc = 0x18CF28u;
label_18cf28:
    // 0x18cf28: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x18cf2c: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x18CF2Cu;
    {
        const bool branch_taken_0x18cf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf2c) {
            ctx->pc = 0x18D110u;
            goto label_18d110;
        }
    }
    ctx->pc = 0x18CF34u;
    // 0x18cf34: 0x8e910064  lw          $s1, 0x64($s4)
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x18cf38: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x18cf38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x18cf3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18cf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18cf40: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18CF40u;
    {
        const bool branch_taken_0x18cf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF40u;
            // 0x18cf44: 0x8630000c  lh          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf40) {
            ctx->pc = 0x18CF90u;
            goto label_18cf90;
        }
    }
    ctx->pc = 0x18CF48u;
    // 0x18cf48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18cf4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf50: 0x8c441194  lw          $a0, 0x1194($v0)
    ctx->pc = 0x18cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4500)));
    // 0x18cf54: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18CF54u;
    SET_GPR_U32(ctx, 31, 0x18CF5Cu);
    ctx->pc = 0x18CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF54u;
            // 0x18cf58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF5Cu; }
        if (ctx->pc != 0x18CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF5Cu; }
        if (ctx->pc != 0x18CF5Cu) { return; }
    }
    ctx->pc = 0x18CF5Cu;
    // 0x18cf5c: 0x8e4301b0  lw          $v1, 0x1B0($s2)
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x18cf60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18cf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18cf68: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18cf6c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x18cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x18cf70: 0x40f809  jalr        $v0
    ctx->pc = 0x18CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CF78u);
        ctx->pc = 0x18CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF70u;
            // 0x18cf74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18CF78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18CF78u; }
            if (ctx->pc != 0x18CF78u) { return; }
        }
        }
    }
    ctx->pc = 0x18CF78u;
    // 0x18cf78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18cf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf80: 0xc0892f4  jal         func_224BD0
    ctx->pc = 0x18CF80u;
    SET_GPR_U32(ctx, 31, 0x18CF88u);
    ctx->pc = 0x18CF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF80u;
            // 0x18cf84: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224BD0u;
    if (runtime->hasFunction(0x224BD0u)) {
        auto targetFn = runtime->lookupFunction(0x224BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF88u; }
        if (ctx->pc != 0x18CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_224bd0_0x224be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF88u; }
        if (ctx->pc != 0x18CF88u) { return; }
    }
    ctx->pc = 0x18CF88u;
    // 0x18cf88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18cf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf8c: 0x0  nop
    ctx->pc = 0x18cf8cu;
    // NOP
label_18cf90:
    // 0x18cf90: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x18cf94: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x18cf94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x18cf98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18cf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18cf9c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x18cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x18cfa0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18cfa4: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x18cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x18cfa8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18cfac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18cfb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cfb4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18cfb4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x18cfb8: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x18cfb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cfbc: 0x0  nop
    ctx->pc = 0x18cfbcu;
    // NOP
    // 0x18cfc0: 0x450000e8  bc1f        . + 4 + (0xE8 << 2)
    ctx->pc = 0x18CFC0u;
    {
        const bool branch_taken_0x18cfc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFC0u;
            // 0x18cfc4: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfc0) {
            ctx->pc = 0x18D364u;
            goto label_18d364;
        }
    }
    ctx->pc = 0x18CFC8u;
    // 0x18cfc8: 0x8e5501a0  lw          $s5, 0x1A0($s2)
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x18cfcc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x18CFCCu;
    SET_GPR_U32(ctx, 31, 0x18CFD4u);
    ctx->pc = 0x18CFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFCCu;
            // 0x18cfd0: 0x248431e8  addiu       $a0, $a0, 0x31E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFD4u; }
        if (ctx->pc != 0x18CFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFD4u; }
        if (ctx->pc != 0x18CFD4u) { return; }
    }
    ctx->pc = 0x18CFD4u;
    // 0x18cfd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18cfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfdc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18cfe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cfe4: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x18CFE4u;
    SET_GPR_U32(ctx, 31, 0x18CFECu);
    ctx->pc = 0x18CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFE4u;
            // 0x18cfe8: 0x8c441188  lw          $a0, 0x1188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFECu; }
        if (ctx->pc != 0x18CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFECu; }
        if (ctx->pc != 0x18CFECu) { return; }
    }
    ctx->pc = 0x18CFECu;
    // 0x18cfec: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x18CFECu;
    {
        const bool branch_taken_0x18cfec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFECu;
            // 0x18cff0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfec) {
            ctx->pc = 0x18D038u;
            goto label_18d038;
        }
    }
    ctx->pc = 0x18CFF4u;
    // 0x18cff4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18cff8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x18cff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x18cffc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x18cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x18d000: 0x40f809  jalr        $v0
    ctx->pc = 0x18D000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D008u);
        ctx->pc = 0x18D004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D000u;
            // 0x18d004: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D008u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D008u; }
            if (ctx->pc != 0x18D008u) { return; }
        }
        }
    }
    ctx->pc = 0x18D008u;
    // 0x18d008: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18d00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d010: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x18d014: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18d014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d018: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18d01c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18d01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18d020: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18d020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18d024: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x18d024u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18d028: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x18d028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d02c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x18d02cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d030: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18D030u;
    {
        const bool branch_taken_0x18d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D030u;
            // 0x18d034: 0xfba10020  sqc2        $vf1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d030) {
            ctx->pc = 0x18D088u;
            goto label_18d088;
        }
    }
    ctx->pc = 0x18D038u;
label_18d038:
    // 0x18d038: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x18d038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d03c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d040: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18d044: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D044u;
    {
        const bool branch_taken_0x18d044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D044u;
            // 0x18d048: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d044) {
            ctx->pc = 0x18D054u;
            goto label_18d054;
        }
    }
    ctx->pc = 0x18D04Cu;
    // 0x18d04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18D04Cu;
    {
        const bool branch_taken_0x18d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D04Cu;
            // 0x18d050: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d04c) {
            ctx->pc = 0x18D070u;
            goto label_18d070;
        }
    }
    ctx->pc = 0x18D054u;
label_18d054:
    // 0x18d054: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x18d054u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x18d058: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x18d058u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x18d05c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D05Cu;
            // 0x18d060: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D070u;
            goto label_18d070;
        }
    }
    ctx->pc = 0x18D064u;
    // 0x18d064: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x18D064u;
    SET_GPR_U32(ctx, 31, 0x18D06Cu);
    ctx->pc = 0x18D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D064u;
            // 0x18d068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D06Cu; }
        if (ctx->pc != 0x18D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D06Cu; }
        if (ctx->pc != 0x18D06Cu) { return; }
    }
    ctx->pc = 0x18D06Cu;
    // 0x18d06c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x18d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_18d070:
    // 0x18d070: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x18d070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x18d074: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x18d074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18d078: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18d078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18d07c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18d07cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18d080: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x18d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18d084: 0x0  nop
    ctx->pc = 0x18d084u;
    // NOP
label_18d088:
    // 0x18d088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d08c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D08Cu;
    {
        const bool branch_taken_0x18d08c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D08Cu;
            // 0x18d090: 0xae82006c  sw          $v0, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d08c) {
            ctx->pc = 0x18D0A8u;
            goto label_18d0a8;
        }
    }
    ctx->pc = 0x18D094u;
    // 0x18d094: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D094u;
    {
        const bool branch_taken_0x18d094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D094u;
            // 0x18d098: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d094) {
            ctx->pc = 0x18D0B0u;
            goto label_18d0b0;
        }
    }
    ctx->pc = 0x18D09Cu;
    // 0x18d09c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0a0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x18D0A0u;
    SET_GPR_U32(ctx, 31, 0x18D0A8u);
    ctx->pc = 0x18D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0A0u;
            // 0x18d0a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0A8u; }
        if (ctx->pc != 0x18D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0A8u; }
        if (ctx->pc != 0x18D0A8u) { return; }
    }
    ctx->pc = 0x18D0A8u;
label_18d0a8:
    // 0x18d0a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18d0ac: 0x0  nop
    ctx->pc = 0x18d0acu;
    // NOP
label_18d0b0:
    // 0x18d0b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x18d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d0b4: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x18d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x18d0b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18d0bc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18d0bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18d0c0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x18d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x18d0c4: 0x40f809  jalr        $v0
    ctx->pc = 0x18D0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D0CCu);
        ctx->pc = 0x18D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0C4u;
            // 0x18d0c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D0CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D0CCu; }
            if (ctx->pc != 0x18D0CCu) { return; }
        }
        }
    }
    ctx->pc = 0x18D0CCu;
    // 0x18d0cc: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x18d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18d0d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18d0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0d4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x18d0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d0d8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x18d0d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d0dc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D0DCu;
    {
        const bool branch_taken_0x18d0dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0DCu;
            // 0x18d0e0: 0x7ba80020  lq          $t0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0dc) {
            ctx->pc = 0x18D0F8u;
            goto label_18d0f8;
        }
    }
    ctx->pc = 0x18D0E4u;
    // 0x18d0e4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D0E4u;
    {
        const bool branch_taken_0x18d0e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0E4u;
            // 0x18d0e8: 0x8e670000  lw          $a3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0e4) {
            ctx->pc = 0x18D0F8u;
            goto label_18d0f8;
        }
    }
    ctx->pc = 0x18D0ECu;
    // 0x18d0ec: 0xda6100e0  lqc2        $vf1, 0xE0($s3)
    ctx->pc = 0x18d0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x18d0f0: 0x7ba80020  lq          $t0, 0x20($sp)
    ctx->pc = 0x18d0f0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d0f4: 0x0  nop
    ctx->pc = 0x18d0f4u;
    // NOP
label_18d0f8:
    // 0x18d0f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18d0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0fc: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x18d0fcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18d100: 0xc0886d2  jal         func_221B48
    ctx->pc = 0x18D100u;
    SET_GPR_U32(ctx, 31, 0x18D108u);
    ctx->pc = 0x18D104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D100u;
            // 0x18d104: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221B48u;
    if (runtime->hasFunction(0x221B48u)) {
        auto targetFn = runtime->lookupFunction(0x221B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D108u; }
        if (ctx->pc != 0x18D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221B48_0x221b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D108u; }
        if (ctx->pc != 0x18D108u) { return; }
    }
    ctx->pc = 0x18D108u;
    // 0x18d108: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x18D108u;
    {
        const bool branch_taken_0x18d108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D108u;
            // 0x18d10c: 0xe65602cc  swc1        $f22, 0x2CC($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d108) {
            ctx->pc = 0x18D368u;
            goto label_18d368;
        }
    }
    ctx->pc = 0x18D110u;
label_18d110:
    // 0x18d110: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x18d110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d114: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18D114u;
    {
        const bool branch_taken_0x18d114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d114) {
            ctx->pc = 0x18D130u;
            goto label_18d130;
        }
    }
    ctx->pc = 0x18D11Cu;
    // 0x18d11c: 0x4617a001  sub.s       $f0, $f20, $f23
    ctx->pc = 0x18d11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x18d120: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x18d120u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x18d124: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x18d124u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[2] = ctx->f[22] / ctx->f[0];
    // 0x18d128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D128u;
    {
        const bool branch_taken_0x18d128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d128) {
            ctx->pc = 0x18D134u;
            goto label_18d134;
        }
    }
    ctx->pc = 0x18D130u;
label_18d130:
    // 0x18d130: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18d130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d134:
    // 0x18d134: 0x4600a845  abs.s       $f1, $f21
    ctx->pc = 0x18d134u;
    ctx->f[1] = FPU_ABS_S(ctx->f[21]);
    // 0x18d138: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x18d138u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x18d13c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d140: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x18d140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x18d144: 0x45020087  bc1fl       . + 4 + (0x87 << 2)
    ctx->pc = 0x18D144u;
    {
        const bool branch_taken_0x18d144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d144) {
            ctx->pc = 0x18D148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D144u;
            // 0x18d148: 0x4602ad81  sub.s       $f22, $f21, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D364u;
            goto label_18d364;
        }
    }
    ctx->pc = 0x18D14Cu;
    // 0x18d14c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x18D14Cu;
    {
        const bool branch_taken_0x18d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D14Cu;
            // 0x18d150: 0xe65602cc  swc1        $f22, 0x2CC($s2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d14c) {
            ctx->pc = 0x18D368u;
            goto label_18d368;
        }
    }
    ctx->pc = 0x18D154u;
label_18d154:
    // 0x18d154: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18d154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18d158: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18d158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18d15c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d160: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d164: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x18d164u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x18d168: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x18d168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d16c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18D16Cu;
    {
        const bool branch_taken_0x18d16c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d16c) {
            ctx->pc = 0x18D180u;
            goto label_18d180;
        }
    }
    ctx->pc = 0x18D174u;
    // 0x18d174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d17c: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x18d17cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_18d180:
    // 0x18d180: 0x52600077  beql        $s3, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x18D180u;
    {
        const bool branch_taken_0x18d180 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d180) {
            ctx->pc = 0x18D184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D180u;
            // 0x18d184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D360u;
            goto label_18d360;
        }
    }
    ctx->pc = 0x18D188u;
    // 0x18d188: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18d18c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d190: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x18d194: 0x78630050  lq          $v1, 0x50($v1)
    ctx->pc = 0x18d194u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x18d198: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x18d19c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x18d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x18d1a0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x18d1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x18d1a4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18d1a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x18d1a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18d1ac: 0x40f809  jalr        $v0
    ctx->pc = 0x18D1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D1B4u);
        ctx->pc = 0x18D1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1ACu;
            // 0x18d1b0: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D1B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D1B4u; }
            if (ctx->pc != 0x18D1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x18D1B4u;
    // 0x18d1b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18d1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18d1b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18d1b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18d1bc: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x18d1bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18d1c0: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x18d1c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18d1c4: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x18d1c4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x18d1c8: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x18d1c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d1cc: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x18d1ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d1d0: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x18d1d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18d1d4: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x18d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18d1d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d1dc: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x18d1dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x18d1e0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18d1e4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x18d1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x18d1e8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x18d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x18d1ec: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x18d1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x18d1f0: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x18d1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18d1f4: 0x40f809  jalr        $v0
    ctx->pc = 0x18D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D1FCu);
        ctx->pc = 0x18D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1F4u;
            // 0x18d1f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D1FCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D1FCu; }
            if (ctx->pc != 0x18D1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x18D1FCu;
    // 0x18d1fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18d1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18d200: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18d200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18d204: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x18d204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18d208: 0xdba20060  lqc2        $vf2, 0x60($sp)
    ctx->pc = 0x18d208u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d20c: 0x4a811080  vaddx.y     $vf2, $vf2, $vf1x
    ctx->pc = 0x18d20cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18d210: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x18d210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d214: 0x4be20928  vadd.xyzw   $vf4, $vf1, $vf2
    ctx->pc = 0x18d214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18d218: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x18d218u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d21c: 0x4be320ac  vsub.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x18d21cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18d220: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x18d220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18d224: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x18d224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d228: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x18d228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d22c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x18d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18d230: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x18d230u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18d234: 0x4a0003bf  vwaitq
    ctx->pc = 0x18d234u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18d238: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x18d238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18d23c: 0x4a0002ff  vnop
    ctx->pc = 0x18d23cu;
    // NOP operation, no action needed for VU0
    // 0x18d240: 0x4a0002ff  vnop
    ctx->pc = 0x18d240u;
    // NOP operation, no action needed for VU0
    // 0x18d244: 0x4be111fd  vabs.xyzw   $vf1, $vf2
    ctx->pc = 0x18d244u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[2], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18d248: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x18d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18d24c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x18d24cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18d250: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x18d250u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x18d254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18d254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18d258: 0xc060f5e  jal         func_183D78
    ctx->pc = 0x18D258u;
    SET_GPR_U32(ctx, 31, 0x18D260u);
    ctx->pc = 0x183D78u;
    if (runtime->hasFunction(0x183D78u)) {
        auto targetFn = runtime->lookupFunction(0x183D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D260u; }
        if (ctx->pc != 0x18D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183d78_0x183e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D260u; }
        if (ctx->pc != 0x18D260u) { return; }
    }
    ctx->pc = 0x18D260u;
    // 0x18d260: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x18d260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18d264: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x18d264u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x18d268: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x18d268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d26c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x18d26cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x18d270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d274: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x18d274u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18d278: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x18d278u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x18d27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d280: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18d280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d284: 0x0  nop
    ctx->pc = 0x18d284u;
    // NOP
    // 0x18d288: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18D288u;
    {
        const bool branch_taken_0x18d288 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D288u;
            // 0x18d28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d288) {
            ctx->pc = 0x18D298u;
            goto label_18d298;
        }
    }
    ctx->pc = 0x18D290u;
    // 0x18d290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18d290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d294: 0x0  nop
    ctx->pc = 0x18d294u;
    // NOP
label_18d298:
    // 0x18d298: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18D298u;
    {
        const bool branch_taken_0x18d298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d298) {
            ctx->pc = 0x18D2D0u;
            goto label_18d2d0;
        }
    }
    ctx->pc = 0x18D2A0u;
    // 0x18d2a0: 0x3c013edf  lui         $at, 0x3EDF
    ctx->pc = 0x18d2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16095 << 16));
    // 0x18d2a4: 0x342166f1  ori         $at, $at, 0x66F1
    ctx->pc = 0x18d2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26353);
    // 0x18d2a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d2ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d2b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d2b4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x18d2b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x18d2b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2bc: 0x0  nop
    ctx->pc = 0x18d2bcu;
    // NOP
    // 0x18d2c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18D2C0u;
    {
        const bool branch_taken_0x18d2c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d2c0) {
            ctx->pc = 0x18D2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2C0u;
            // 0x18d2c4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D2C8u;
            goto label_18d2c8;
        }
    }
    ctx->pc = 0x18D2C8u;
label_18d2c8:
    // 0x18d2c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18D2C8u;
    {
        const bool branch_taken_0x18d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2C8u;
            // 0x18d2cc: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2c8) {
            ctx->pc = 0x18D2F8u;
            goto label_18d2f8;
        }
    }
    ctx->pc = 0x18D2D0u;
label_18d2d0:
    // 0x18d2d0: 0x3c013edf  lui         $at, 0x3EDF
    ctx->pc = 0x18d2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16095 << 16));
    // 0x18d2d4: 0x342166f1  ori         $at, $at, 0x66F1
    ctx->pc = 0x18d2d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26353);
    // 0x18d2d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d2dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18d2e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d2e4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x18d2e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x18d2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2ec: 0x0  nop
    ctx->pc = 0x18d2ecu;
    // NOP
    // 0x18d2f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18D2F0u;
    {
        const bool branch_taken_0x18d2f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d2f0) {
            ctx->pc = 0x18D2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2F0u;
            // 0x18d2f4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D2F8u;
            goto label_18d2f8;
        }
    }
    ctx->pc = 0x18D2F8u;
label_18d2f8:
    // 0x18d2f8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x18d2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2fc: 0x0  nop
    ctx->pc = 0x18d2fcu;
    // NOP
    // 0x18d300: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x18D300u;
    {
        const bool branch_taken_0x18d300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d300) {
            ctx->pc = 0x18D304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D300u;
            // 0x18d304: 0x46150001  sub.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D330u;
            goto label_18d330;
        }
    }
    ctx->pc = 0x18D308u;
    // 0x18d308: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x18d308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x18d30c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x18d30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x18d310: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18d310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18d314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d31c: 0x0  nop
    ctx->pc = 0x18d31cu;
    // NOP
    // 0x18d320: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x18D320u;
    {
        const bool branch_taken_0x18d320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d320) {
            ctx->pc = 0x18D324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D320u;
            // 0x18d324: 0x4600ad81  sub.s       $f22, $f21, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D358u;
            goto label_18d358;
        }
    }
    ctx->pc = 0x18D328u;
    // 0x18d328: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18D328u;
    {
        const bool branch_taken_0x18d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D328u;
            // 0x18d32c: 0x4601ad81  sub.s       $f22, $f21, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d328) {
            ctx->pc = 0x18D364u;
            goto label_18d364;
        }
    }
    ctx->pc = 0x18D330u;
label_18d330:
    // 0x18d330: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x18d334: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18d334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18d338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d33c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d340: 0x0  nop
    ctx->pc = 0x18d340u;
    // NOP
    // 0x18d344: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x18D344u;
    {
        const bool branch_taken_0x18d344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d344) {
            ctx->pc = 0x18D348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D344u;
            // 0x18d348: 0x4600ad80  add.s       $f22, $f21, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D354u;
            goto label_18d354;
        }
    }
    ctx->pc = 0x18D34Cu;
    // 0x18d34c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D34Cu;
    {
        const bool branch_taken_0x18d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D34Cu;
            // 0x18d350: 0x4601ad80  add.s       $f22, $f21, $f1 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d34c) {
            ctx->pc = 0x18D364u;
            goto label_18d364;
        }
    }
    ctx->pc = 0x18D354u;
label_18d354:
    // 0x18d354: 0x0  nop
    ctx->pc = 0x18d354u;
    // NOP
label_18d358:
    // 0x18d358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d35c: 0x0  nop
    ctx->pc = 0x18d35cu;
    // NOP
label_18d360:
    // 0x18d360: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x18d360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_18d364:
    // 0x18d364: 0xe65602cc  swc1        $f22, 0x2CC($s2)
    ctx->pc = 0x18d364u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 716), bits); }
label_18d368:
    // 0x18d368: 0xe65702c8  swc1        $f23, 0x2C8($s2)
    ctx->pc = 0x18d368u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 712), bits); }
label_18d36c:
    // 0x18d36c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x18d36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18d370: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x18d370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18d374: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x18d374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18d378: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x18d378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18d37c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x18d37cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18d380: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x18d380u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18d384: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x18d384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d388: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18d388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18d38c: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x18d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18d390: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x18d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18d394: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x18d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18d398: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x18d398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18d39c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x18d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3A0u;
            // 0x18d3a4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D3A8u;
    // 0x18d3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d3b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18d3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d3bc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x18d3bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x18d3c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x18d3c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18d3c4: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x18d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x18d3c8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18d3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x18d3cc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18D3CCu;
    {
        const bool branch_taken_0x18d3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3CCu;
            // 0x18d3d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3cc) {
            ctx->pc = 0x18D404u;
            goto label_18d404;
        }
    }
    ctx->pc = 0x18D3D4u;
    // 0x18d3d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x18d3d8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x18d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x18d3dc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18d3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18d3e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x18d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18d3e4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x18d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x18d3e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x18d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18d3ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d3f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d3f4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D3F4u;
    {
        const bool branch_taken_0x18d3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18D3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3F4u;
            // 0x18d3f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3f4) {
            ctx->pc = 0x18D400u;
            goto label_18d400;
        }
    }
    ctx->pc = 0x18D3FCu;
    // 0x18d3fc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18d400:
    // 0x18d400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d404:
    // 0x18d404: 0xc0783d6  jal         func_1E0F58
    ctx->pc = 0x18D404u;
    SET_GPR_U32(ctx, 31, 0x18D40Cu);
    ctx->pc = 0x18D408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D404u;
            // 0x18d408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F58u;
    if (runtime->hasFunction(0x1E0F58u)) {
        auto targetFn = runtime->lookupFunction(0x1E0F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D40Cu; }
        if (ctx->pc != 0x18D40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0F58_0x1e0f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D40Cu; }
        if (ctx->pc != 0x18D40Cu) { return; }
    }
    ctx->pc = 0x18D40Cu;
    // 0x18d40c: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x18d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x18d410: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x18d410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x18d414: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x18d414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x18d418: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x18d418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x18d41c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18d420: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x18d420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18d424: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x18d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
    // 0x18d428: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18d428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18d42c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x18d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x18d430: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x18d434: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x18d438: 0x40f809  jalr        $v0
    ctx->pc = 0x18D438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D440u);
        ctx->pc = 0x18D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D438u;
            // 0x18d43c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18D440u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D440u; }
            if (ctx->pc != 0x18D440u) { return; }
        }
        }
    }
    ctx->pc = 0x18D440u;
    // 0x18d440: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x18d444: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x18d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x18d448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D448u;
    {
        const bool branch_taken_0x18d448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D448u;
            // 0x18d44c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d448) {
            ctx->pc = 0x18D458u;
            goto label_18d458;
        }
    }
    ctx->pc = 0x18D450u;
    // 0x18d450: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x18d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d454: 0x0  nop
    ctx->pc = 0x18d454u;
    // NOP
label_18d458:
    // 0x18d458: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x18D458u;
    SET_GPR_U32(ctx, 31, 0x18D460u);
    ctx->pc = 0x18D45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D458u;
            // 0x18d45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D460u; }
        if (ctx->pc != 0x18D460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D460u; }
        if (ctx->pc != 0x18D460u) { return; }
    }
    ctx->pc = 0x18D460u;
    // 0x18d460: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x18d460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x18d464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d46c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d470: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x18d470u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x18d474: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x18d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x18d478: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18d478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d47c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x18d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18d480: 0x3e00008  jr          $ra
    ctx->pc = 0x18D480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D480u;
            // 0x18d484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CDD4u: goto label_18cdd4;
            case 0x18CE78u: goto label_18ce78;
            case 0x18CE7Cu: goto label_18ce7c;
            case 0x18CECCu: goto label_18cecc;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEE8u: goto label_18cee8;
            case 0x18CF28u: goto label_18cf28;
            case 0x18CF90u: goto label_18cf90;
            case 0x18D038u: goto label_18d038;
            case 0x18D054u: goto label_18d054;
            case 0x18D070u: goto label_18d070;
            case 0x18D088u: goto label_18d088;
            case 0x18D0A8u: goto label_18d0a8;
            case 0x18D0B0u: goto label_18d0b0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D110u: goto label_18d110;
            case 0x18D130u: goto label_18d130;
            case 0x18D134u: goto label_18d134;
            case 0x18D154u: goto label_18d154;
            case 0x18D180u: goto label_18d180;
            case 0x18D298u: goto label_18d298;
            case 0x18D2C8u: goto label_18d2c8;
            case 0x18D2D0u: goto label_18d2d0;
            case 0x18D2F8u: goto label_18d2f8;
            case 0x18D330u: goto label_18d330;
            case 0x18D354u: goto label_18d354;
            case 0x18D358u: goto label_18d358;
            case 0x18D360u: goto label_18d360;
            case 0x18D364u: goto label_18d364;
            case 0x18D368u: goto label_18d368;
            case 0x18D36Cu: goto label_18d36c;
            case 0x18D400u: goto label_18d400;
            case 0x18D404u: goto label_18d404;
            case 0x18D458u: goto label_18d458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D488u;
}
