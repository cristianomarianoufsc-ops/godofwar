#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027FC80
// Address: 0x27fc80 - 0x2801d0
void sub_0027FC80_0x27fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FC80_0x27fc80");
#endif

    ctx->pc = 0x27fc80u;

    // 0x27fc80: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x27fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
    // 0x27fc84: 0xffb504f0  sd          $s5, 0x4F0($sp)
    ctx->pc = 0x27fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 21));
    // 0x27fc88: 0xffb404e0  sd          $s4, 0x4E0($sp)
    ctx->pc = 0x27fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 20));
    // 0x27fc8c: 0x27b50400  addiu       $s5, $sp, 0x400
    ctx->pc = 0x27fc8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x27fc90: 0xffb204c0  sd          $s2, 0x4C0($sp)
    ctx->pc = 0x27fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 18));
    // 0x27fc94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27fc94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27fc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc9c: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x27fc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
    // 0x27fca0: 0xffbe0520  sd          $fp, 0x520($sp)
    ctx->pc = 0x27fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 30));
    // 0x27fca4: 0xffb70510  sd          $s7, 0x510($sp)
    ctx->pc = 0x27fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 23));
    // 0x27fca8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27fca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcac: 0xffb60500  sd          $s6, 0x500($sp)
    ctx->pc = 0x27fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 22));
    // 0x27fcb0: 0xffb304d0  sd          $s3, 0x4D0($sp)
    ctx->pc = 0x27fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 19));
    // 0x27fcb4: 0xffb104b0  sd          $s1, 0x4B0($sp)
    ctx->pc = 0x27fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 17));
    // 0x27fcb8: 0xc09fb3e  jal         func_27ECF8
    ctx->pc = 0x27FCB8u;
    SET_GPR_U32(ctx, 31, 0x27FCC0u);
    ctx->pc = 0x27FCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCB8u;
            // 0x27fcbc: 0xffb004a0  sd          $s0, 0x4A0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27ECF8u;
    if (runtime->hasFunction(0x27ECF8u)) {
        auto targetFn = runtime->lookupFunction(0x27ECF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCC0u; }
        if (ctx->pc != 0x27FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027ECF8_0x27ecf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCC0u; }
        if (ctx->pc != 0x27FCC0u) { return; }
    }
    ctx->pc = 0x27FCC0u;
    // 0x27fcc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27fcc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fcc4: 0x14600136  bnez        $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x27FCC4u;
    {
        const bool branch_taken_0x27fcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCC4u;
            // 0x27fcc8: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcc4) {
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x27FCCCu;
    // 0x27fccc: 0x34028417  ori         $v0, $zero, 0x8417
    ctx->pc = 0x27fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33815);
    // 0x27fcd0: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x27fcd0u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x27fcd4: 0x32570020  andi        $s7, $s2, 0x20
    ctx->pc = 0x27fcd4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x27fcd8: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FCD8u;
    {
        const bool branch_taken_0x27fcd8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCD8u;
            // 0x27fcdc: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcd8) {
            ctx->pc = 0x27FD00u;
            goto label_27fd00;
        }
    }
    ctx->pc = 0x27FCE0u;
    // 0x27fce0: 0xc09f4fa  jal         func_27D3E8
    ctx->pc = 0x27FCE0u;
    SET_GPR_U32(ctx, 31, 0x27FCE8u);
    ctx->pc = 0x27FCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCE0u;
            // 0x27fce4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D3E8u;
    if (runtime->hasFunction(0x27D3E8u)) {
        auto targetFn = runtime->lookupFunction(0x27D3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCE8u; }
        if (ctx->pc != 0x27FCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d3e8_0x27d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCE8u; }
        if (ctx->pc != 0x27FCE8u) { return; }
    }
    ctx->pc = 0x27FCE8u;
    // 0x27fce8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x27fce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27fcec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FCECu;
    {
        const bool branch_taken_0x27fcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fcec) {
            ctx->pc = 0x27FD00u;
            goto label_27fd00;
        }
    }
    ctx->pc = 0x27FCF4u;
    // 0x27fcf4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27fcf8: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x27FCF8u;
    {
        const bool branch_taken_0x27fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCF8u;
            // 0x27fcfc: 0x34429004  ori         $v0, $v0, 0x9004 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcf8) {
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x27FD00u;
label_27fd00:
    // 0x27fd00: 0xc09f4fa  jal         func_27D3E8
    ctx->pc = 0x27FD00u;
    SET_GPR_U32(ctx, 31, 0x27FD08u);
    ctx->pc = 0x27FD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD00u;
            // 0x27fd04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D3E8u;
    if (runtime->hasFunction(0x27D3E8u)) {
        auto targetFn = runtime->lookupFunction(0x27D3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD08u; }
        if (ctx->pc != 0x27FD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d3e8_0x27d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD08u; }
        if (ctx->pc != 0x27FD08u) { return; }
    }
    ctx->pc = 0x27FD08u;
    // 0x27fd08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27fd0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd10: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x27fd10u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27fd14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27fd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27fd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27fd1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd20: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x27FD20u;
    SET_GPR_U32(ctx, 31, 0x27FD28u);
    ctx->pc = 0x27FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD20u;
            // 0x27fd24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD28u; }
        if (ctx->pc != 0x27FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD28u; }
        if (ctx->pc != 0x27FD28u) { return; }
    }
    ctx->pc = 0x27FD28u;
    // 0x27fd28: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27fd2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd30: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27fd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x27fd34: 0x1483011a  bne         $a0, $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x27FD34u;
    {
        const bool branch_taken_0x27fd34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD34u;
            // 0x27fd38: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd34) {
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x27FD3Cu;
    // 0x27fd3c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FD3Cu;
    {
        const bool branch_taken_0x27fd3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD3Cu;
            // 0x27fd40: 0x27b10490  addiu       $s1, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd3c) {
            ctx->pc = 0x27FD64u;
            goto label_27fd64;
        }
    }
    ctx->pc = 0x27FD44u;
    // 0x27fd44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27fd48: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x27fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27fd4c: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x27fd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x27fd50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FD50u;
    {
        const bool branch_taken_0x27fd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD50u;
            // 0x27fd54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd50) {
            ctx->pc = 0x27FD68u;
            goto label_27fd68;
        }
    }
    ctx->pc = 0x27FD58u;
    // 0x27fd58: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27fd5c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x27FD5Cu;
    {
        const bool branch_taken_0x27fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD5Cu;
            // 0x27fd60: 0x34420017  ori         $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd5c) {
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x27FD64u;
label_27fd64:
    // 0x27fd64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27fd68:
    // 0x27fd68: 0xc09f6fc  jal         func_27DBF0
    ctx->pc = 0x27FD68u;
    SET_GPR_U32(ctx, 31, 0x27FD70u);
    ctx->pc = 0x27FD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD68u;
            // 0x27fd6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DBF0u;
    if (runtime->hasFunction(0x27DBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27DBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD70u; }
        if (ctx->pc != 0x27FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DBF0_0x27dbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD70u; }
        if (ctx->pc != 0x27FD70u) { return; }
    }
    ctx->pc = 0x27FD70u;
    // 0x27fd70: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x27fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x27fd74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FD74u;
    {
        const bool branch_taken_0x27fd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD74u;
            // 0x27fd78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd74) {
            ctx->pc = 0x27FD84u;
            goto label_27fd84;
        }
    }
    ctx->pc = 0x27FD7Cu;
    // 0x27fd7c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x27FD7Cu;
    {
        const bool branch_taken_0x27fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD7Cu;
            // 0x27fd80: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd7c) {
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x27FD84u;
label_27fd84:
    // 0x27fd84: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x27fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fd88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd8c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x27fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27fd90: 0xc09fd8e  jal         func_27F638
    ctx->pc = 0x27FD90u;
    SET_GPR_U32(ctx, 31, 0x27FD98u);
    ctx->pc = 0x27FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD90u;
            // 0x27fd94: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F638u;
    if (runtime->hasFunction(0x27F638u)) {
        auto targetFn = runtime->lookupFunction(0x27F638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD98u; }
        if (ctx->pc != 0x27FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F638_0x27f638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD98u; }
        if (ctx->pc != 0x27FD98u) { return; }
    }
    ctx->pc = 0x27FD98u;
    // 0x27fd98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27fd98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd9c: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x27fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x27fda0: 0x14400100  bnez        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x27FDA0u;
    {
        const bool branch_taken_0x27fda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDA0u;
            // 0x27fda4: 0xdfbf0530  ld          $ra, 0x530($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fda0) {
            ctx->pc = 0x2801A4u;
            goto label_2801a4;
        }
    }
    ctx->pc = 0x27FDA8u;
    // 0x27fda8: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x27fda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x27fdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fdb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fdb4: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x27fdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27fdb8: 0x96180b  movn        $v1, $a0, $s6
    ctx->pc = 0x27fdb8u;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x27fdbc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x27fdbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27fdc0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FDC0u;
    {
        const bool branch_taken_0x27fdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fdc0) {
            ctx->pc = 0x27FDD4u;
            goto label_27fdd4;
        }
    }
    ctx->pc = 0x27FDC8u;
    // 0x27fdc8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27fdcc: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x27FDCCu;
    {
        const bool branch_taken_0x27fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDCCu;
            // 0x27fdd0: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdcc) {
            ctx->pc = 0x2801A4u;
            goto label_2801a4;
        }
    }
    ctx->pc = 0x27FDD4u;
label_27fdd4:
    // 0x27fdd4: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x27FDD4u;
    {
        const bool branch_taken_0x27fdd4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDD4u;
            // 0x27fdd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdd4) {
            ctx->pc = 0x27FE14u;
            goto label_27fe14;
        }
    }
    ctx->pc = 0x27FDDCu;
    // 0x27fddc: 0xc09f6b0  jal         func_27DAC0
    ctx->pc = 0x27FDDCu;
    SET_GPR_U32(ctx, 31, 0x27FDE4u);
    ctx->pc = 0x27FDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDDCu;
            // 0x27fde0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DAC0u;
    if (runtime->hasFunction(0x27DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x27DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDE4u; }
        if (ctx->pc != 0x27FDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DAC0_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDE4u; }
        if (ctx->pc != 0x27FDE4u) { return; }
    }
    ctx->pc = 0x27FDE4u;
    // 0x27fde4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27fde4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fde8: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x27fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x27fdec: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x27FDECu;
    {
        const bool branch_taken_0x27fdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDECu;
            // 0x27fdf0: 0xdfbf0530  ld          $ra, 0x530($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdec) {
            ctx->pc = 0x2801A4u;
            goto label_2801a4;
        }
    }
    ctx->pc = 0x27FDF4u;
    // 0x27fdf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdf8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x27fdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdfc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27fdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fe00: 0xc09f664  jal         func_27D990
    ctx->pc = 0x27FE00u;
    SET_GPR_U32(ctx, 31, 0x27FE08u);
    ctx->pc = 0x27FE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE00u;
            // 0x27fe04: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D990u;
    if (runtime->hasFunction(0x27D990u)) {
        auto targetFn = runtime->lookupFunction(0x27D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE08u; }
        if (ctx->pc != 0x27FE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d990_0x27dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE08u; }
        if (ctx->pc != 0x27FE08u) { return; }
    }
    ctx->pc = 0x27FE08u;
    // 0x27fe08: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x27fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x27fe0c: 0x144000e5  bnez        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x27FE0Cu;
    {
        const bool branch_taken_0x27fe0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE0Cu;
            // 0x27fe10: 0xdfbf0530  ld          $ra, 0x530($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe0c) {
            ctx->pc = 0x2801A4u;
            goto label_2801a4;
        }
    }
    ctx->pc = 0x27FE14u;
label_27fe14:
    // 0x27fe14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe18: 0xc0a0a12  jal         func_282848
    ctx->pc = 0x27FE18u;
    SET_GPR_U32(ctx, 31, 0x27FE20u);
    ctx->pc = 0x27FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE18u;
            // 0x27fe1c: 0x27a50480  addiu       $a1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282848u;
    if (runtime->hasFunction(0x282848u)) {
        auto targetFn = runtime->lookupFunction(0x282848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE20u; }
        if (ctx->pc != 0x27FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282848_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE20u; }
        if (ctx->pc != 0x27FE20u) { return; }
    }
    ctx->pc = 0x27FE20u;
    // 0x27fe20: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x27fe20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27fe24: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x27fe24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x27fe28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fe28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe30: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27FE30u;
    SET_GPR_U32(ctx, 31, 0x27FE38u);
    ctx->pc = 0x27FE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE30u;
            // 0x27fe34: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE38u; }
        if (ctx->pc != 0x27FE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE38u; }
        if (ctx->pc != 0x27FE38u) { return; }
    }
    ctx->pc = 0x27FE38u;
    // 0x27fe38: 0x93a30487  lbu         $v1, 0x487($sp)
    ctx->pc = 0x27fe38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1159)));
    // 0x27fe3c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x27fe3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fe40: 0x93a90486  lbu         $t1, 0x486($sp)
    ctx->pc = 0x27fe40u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1158)));
    // 0x27fe44: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x27fe44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27fe48: 0x93a70485  lbu         $a3, 0x485($sp)
    ctx->pc = 0x27fe48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1157)));
    // 0x27fe4c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x27fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x27fe50: 0x93a60483  lbu         $a2, 0x483($sp)
    ctx->pc = 0x27fe50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1155)));
    // 0x27fe54: 0x96902  srl         $t5, $t1, 4
    ctx->pc = 0x27fe54u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x27fe58: 0x93a50482  lbu         $a1, 0x482($sp)
    ctx->pc = 0x27fe58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1154)));
    // 0x27fe5c: 0x75102  srl         $t2, $a3, 4
    ctx->pc = 0x27fe5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x27fe60: 0x93a40481  lbu         $a0, 0x481($sp)
    ctx->pc = 0x27fe60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1153)));
    // 0x27fe64: 0x65902  srl         $t3, $a2, 4
    ctx->pc = 0x27fe64u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x27fe68: 0x56102  srl         $t4, $a1, 4
    ctx->pc = 0x27fe68u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x27fe6c: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x27fe6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27fe70: 0x44102  srl         $t0, $a0, 4
    ctx->pc = 0x27fe70u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x27fe74: 0x1b36818  mult        $t5, $t5, $s3
    ctx->pc = 0x27fe74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x27fe78: 0x71535018  mult1       $t2, $t2, $s3
    ctx->pc = 0x27fe78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x27fe7c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x27fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x27fe80: 0x1735818  mult        $t3, $t3, $s3
    ctx->pc = 0x27fe80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x27fe84: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x27fe84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x27fe88: 0x71936018  mult1       $t4, $t4, $s3
    ctx->pc = 0x27fe88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x27fe8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27fe90: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x27fe90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x27fe94: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x27fe94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x27fe98: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x27fe98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x27fe9c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x27fe9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x27fea0: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x27fea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x27fea4: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x27fea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x27fea8: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x27fea8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x27feac: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x27feacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x27feb0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x27feb4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x27feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x27feb8: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x27feb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x27febc: 0x3d6700b  movn        $t6, $fp, $s6
    ctx->pc = 0x27febcu;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 30));
    // 0x27fec0: 0x16780a  movz        $t7, $zero, $s6
    ctx->pc = 0x27fec0u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x27fec4: 0xa7b20200  sh          $s2, 0x200($sp)
    ctx->pc = 0x27fec4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 18));
    // 0x27fec8: 0xafae0210  sw          $t6, 0x210($sp)
    ctx->pc = 0x27fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 14));
    // 0x27fecc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27feccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fed0: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x27fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
    // 0x27fed4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x27fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x27fed8: 0xa7a2020e  sh          $v0, 0x20E($sp)
    ctx->pc = 0x27fed8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 526), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fedc: 0xa3ad020d  sb          $t5, 0x20D($sp)
    ctx->pc = 0x27fedcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 525), (uint8_t)GPR_U32(ctx, 13));
    // 0x27fee0: 0xa3aa020c  sb          $t2, 0x20C($sp)
    ctx->pc = 0x27fee0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 524), (uint8_t)GPR_U32(ctx, 10));
    // 0x27fee4: 0xa3ab020b  sb          $t3, 0x20B($sp)
    ctx->pc = 0x27fee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 523), (uint8_t)GPR_U32(ctx, 11));
    // 0x27fee8: 0xa3ac020a  sb          $t4, 0x20A($sp)
    ctx->pc = 0x27fee8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 522), (uint8_t)GPR_U32(ctx, 12));
    // 0x27feec: 0xa3a80209  sb          $t0, 0x209($sp)
    ctx->pc = 0x27feecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 521), (uint8_t)GPR_U32(ctx, 8));
    // 0x27fef0: 0xa7a00202  sh          $zero, 0x202($sp)
    ctx->pc = 0x27fef0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x27fef4: 0xa3a00208  sb          $zero, 0x208($sp)
    ctx->pc = 0x27fef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 520), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fef8: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x27fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x27fefc: 0x6ba2020f  ldl         $v0, 0x20F($sp)
    ctx->pc = 0x27fefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27ff00: 0x6fa20208  ldr         $v0, 0x208($sp)
    ctx->pc = 0x27ff00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27ff04: 0xb3a2021f  sdl         $v0, 0x21F($sp)
    ctx->pc = 0x27ff04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff08: 0xb7a20218  sdr         $v0, 0x218($sp)
    ctx->pc = 0x27ff08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff0c: 0xc0a34ee  jal         func_28D3B8
    ctx->pc = 0x27FF0Cu;
    SET_GPR_U32(ctx, 31, 0x27FF14u);
    ctx->pc = 0x27FF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF0Cu;
            // 0x27ff10: 0xafa00220  sw          $zero, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D3B8u;
    if (runtime->hasFunction(0x28D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x28D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF14u; }
        if (ctx->pc != 0x27FF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d3b8_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF14u; }
        if (ctx->pc != 0x27FF14u) { return; }
    }
    ctx->pc = 0x27FF14u;
    // 0x27ff14: 0x68480008  ldl         $t0, 0x8($v0)
    ctx->pc = 0x27ff14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27ff18: 0x6c480001  ldr         $t0, 0x1($v0)
    ctx->pc = 0x27ff18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27ff1c: 0x68490010  ldl         $t1, 0x10($v0)
    ctx->pc = 0x27ff1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27ff20: 0x6c490009  ldr         $t1, 0x9($v0)
    ctx->pc = 0x27ff20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 9); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27ff24: 0x68430018  ldl         $v1, 0x18($v0)
    ctx->pc = 0x27ff24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27ff28: 0x6c430011  ldr         $v1, 0x11($v0)
    ctx->pc = 0x27ff28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 17); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x27ff2c: 0x68440020  ldl         $a0, 0x20($v0)
    ctx->pc = 0x27ff2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27ff30: 0x6c440019  ldr         $a0, 0x19($v0)
    ctx->pc = 0x27ff30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27ff34: 0xb3a80247  sdl         $t0, 0x247($sp)
    ctx->pc = 0x27ff34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff38: 0xb7a80240  sdr         $t0, 0x240($sp)
    ctx->pc = 0x27ff38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff3c: 0xb3a9024f  sdl         $t1, 0x24F($sp)
    ctx->pc = 0x27ff3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff40: 0xb7a90248  sdr         $t1, 0x248($sp)
    ctx->pc = 0x27ff40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff44: 0xb3a30257  sdl         $v1, 0x257($sp)
    ctx->pc = 0x27ff44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff48: 0xb7a30250  sdr         $v1, 0x250($sp)
    ctx->pc = 0x27ff48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff4c: 0xb3a4025f  sdl         $a0, 0x25F($sp)
    ctx->pc = 0x27ff4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff50: 0xb7a40258  sdr         $a0, 0x258($sp)
    ctx->pc = 0x27ff50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27ff54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ff54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x27ff58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff60: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ff64: 0xc09fdda  jal         func_27F768
    ctx->pc = 0x27FF64u;
    SET_GPR_U32(ctx, 31, 0x27FF6Cu);
    ctx->pc = 0x27FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF64u;
            // 0x27ff68: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F768u;
    if (runtime->hasFunction(0x27F768u)) {
        auto targetFn = runtime->lookupFunction(0x27F768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF6Cu; }
        if (ctx->pc != 0x27FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F768_0x27f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF6Cu; }
        if (ctx->pc != 0x27FF6Cu) { return; }
    }
    ctx->pc = 0x27FF6Cu;
    // 0x27ff6c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27ff6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff70: 0x6a0008b  bltz        $s5, . + 4 + (0x8B << 2)
    ctx->pc = 0x27FF70u;
    {
        const bool branch_taken_0x27ff70 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x27FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF70u;
            // 0x27ff74: 0x8fa20490  lw          $v0, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff70) {
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x27FF78u;
    // 0x27ff78: 0x12e0007f  beqz        $s7, . + 4 + (0x7F << 2)
    ctx->pc = 0x27FF78u;
    {
        const bool branch_taken_0x27ff78 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF78u;
            // 0x27ff7c: 0x3c110032  lui         $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff78) {
            ctx->pc = 0x280178u;
            goto label_280178;
        }
    }
    ctx->pc = 0x27FF80u;
    // 0x27ff80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff84: 0x2630db00  addiu       $s0, $s1, -0x2500
    ctx->pc = 0x27ff84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957824));
    // 0x27ff88: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x27ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x27ff8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff90: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x27FF90u;
    SET_GPR_U32(ctx, 31, 0x27FF98u);
    ctx->pc = 0x27FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF90u;
            // 0x27ff94: 0x34128427  ori         $s2, $zero, 0x8427 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF98u; }
        if (ctx->pc != 0x27FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF98u; }
        if (ctx->pc != 0x27FF98u) { return; }
    }
    ctx->pc = 0x27FF98u;
    // 0x27ff98: 0x93a30487  lbu         $v1, 0x487($sp)
    ctx->pc = 0x27ff98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1159)));
    // 0x27ff9c: 0x3c0f002c  lui         $t7, 0x2C
    ctx->pc = 0x27ff9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)44 << 16));
    // 0x27ffa0: 0x93ae0486  lbu         $t6, 0x486($sp)
    ctx->pc = 0x27ffa0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1158)));
    // 0x27ffa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffa8: 0x93ad0485  lbu         $t5, 0x485($sp)
    ctx->pc = 0x27ffa8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1157)));
    // 0x27ffac: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x27ffb0: 0x93ac0483  lbu         $t4, 0x483($sp)
    ctx->pc = 0x27ffb0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1155)));
    // 0x27ffb4: 0xe5902  srl         $t3, $t6, 4
    ctx->pc = 0x27ffb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x27ffb8: 0x93aa0482  lbu         $t2, 0x482($sp)
    ctx->pc = 0x27ffb8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1154)));
    // 0x27ffbc: 0xd3902  srl         $a3, $t5, 4
    ctx->pc = 0x27ffbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x27ffc0: 0x93a60481  lbu         $a2, 0x481($sp)
    ctx->pc = 0x27ffc0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1153)));
    // 0x27ffc4: 0xc4102  srl         $t0, $t4, 4
    ctx->pc = 0x27ffc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x27ffc8: 0xa4902  srl         $t1, $t2, 4
    ctx->pc = 0x27ffc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x27ffcc: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x27ffccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27ffd0: 0x62102  srl         $a0, $a2, 4
    ctx->pc = 0x27ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x27ffd4: 0x1735818  mult        $t3, $t3, $s3
    ctx->pc = 0x27ffd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x27ffd8: 0x70f33818  mult1       $a3, $a3, $s3
    ctx->pc = 0x27ffd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27ffdc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x27ffdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x27ffe0: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x27ffe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x27ffe4: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x27ffe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x27ffe8: 0x71334818  mult1       $t1, $t1, $s3
    ctx->pc = 0x27ffe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x27ffec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27fff0: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x27fff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27fff4: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x27fff4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x27fff8: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x27fff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x27fffc: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x27fffcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x280000: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x280000u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x280004: 0xa632db00  sh          $s2, -0x2500($s1)
    ctx->pc = 0x280004u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294957824), (uint16_t)GPR_U32(ctx, 18));
    // 0x280008: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x280008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x28000c: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x28000cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x280010: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x280010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x280014: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x280014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x280018: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x280018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x28001c: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x28001cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x280020: 0xa2040009  sb          $a0, 0x9($s0)
    ctx->pc = 0x280020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x280024: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x280024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x280028: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x280028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28002c: 0xa20b000d  sb          $t3, 0xD($s0)
    ctx->pc = 0x28002cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 11));
    // 0x280030: 0xa207000c  sb          $a3, 0xC($s0)
    ctx->pc = 0x280030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x280034: 0xa208000b  sb          $t0, 0xB($s0)
    ctx->pc = 0x280034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 8));
    // 0x280038: 0xa209000a  sb          $t1, 0xA($s0)
    ctx->pc = 0x280038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x28003c: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x28003cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x280040: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x280040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x280044: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x280044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x280048: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x280048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x28004c: 0x6a07000f  ldl         $a3, 0xF($s0)
    ctx->pc = 0x28004cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x280050: 0x6e070008  ldr         $a3, 0x8($s0)
    ctx->pc = 0x280050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x280054: 0xb207001f  sdl         $a3, 0x1F($s0)
    ctx->pc = 0x280054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280058: 0xb6070018  sdr         $a3, 0x18($s0)
    ctx->pc = 0x280058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28005c: 0x25e85220  addiu       $t0, $t7, 0x5220
    ctx->pc = 0x28005cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 21024));
    // 0x280060: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x280064: 0x81040001  lb          $a0, 0x1($t0)
    ctx->pc = 0x280064u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x280068: 0xa2030040  sb          $v1, 0x40($s0)
    ctx->pc = 0x280068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x28006c: 0xa2040041  sb          $a0, 0x41($s0)
    ctx->pc = 0x28006cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x280070: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x280070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x280074: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x280074u;
    SET_GPR_U32(ctx, 31, 0x28007Cu);
    ctx->pc = 0x280078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280074u;
            // 0x280078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28007Cu; }
        if (ctx->pc != 0x28007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28007Cu; }
        if (ctx->pc != 0x28007Cu) { return; }
    }
    ctx->pc = 0x28007Cu;
    // 0x28007c: 0x93a30487  lbu         $v1, 0x487($sp)
    ctx->pc = 0x28007cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1159)));
    // 0x280080: 0x3c0f002c  lui         $t7, 0x2C
    ctx->pc = 0x280080u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)44 << 16));
    // 0x280084: 0x93ae0486  lbu         $t6, 0x486($sp)
    ctx->pc = 0x280084u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1158)));
    // 0x280088: 0x2625db00  addiu       $a1, $s1, -0x2500
    ctx->pc = 0x280088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957824));
    // 0x28008c: 0x93ad0485  lbu         $t5, 0x485($sp)
    ctx->pc = 0x28008cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1157)));
    // 0x280090: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x280094: 0x93ac0483  lbu         $t4, 0x483($sp)
    ctx->pc = 0x280094u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1155)));
    // 0x280098: 0xe4102  srl         $t0, $t6, 4
    ctx->pc = 0x280098u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x28009c: 0x93a70482  lbu         $a3, 0x482($sp)
    ctx->pc = 0x28009cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1154)));
    // 0x2800a0: 0xd4902  srl         $t1, $t5, 4
    ctx->pc = 0x2800a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2800a4: 0x93a40481  lbu         $a0, 0x481($sp)
    ctx->pc = 0x2800a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1153)));
    // 0x2800a8: 0xc5102  srl         $t2, $t4, 4
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2800ac: 0x75902  srl         $t3, $a3, 4
    ctx->pc = 0x2800acu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2800b0: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x2800b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2800b4: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x2800b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2800b8: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x2800b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2800bc: 0x71334818  mult1       $t1, $t1, $s3
    ctx->pc = 0x2800bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2800c0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2800c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2800c4: 0xd33018  mult        $a2, $a2, $s3
    ctx->pc = 0x2800c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2800c8: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2800c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2800cc: 0x71535018  mult1       $t2, $t2, $s3
    ctx->pc = 0x2800ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2800d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2800d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2800d4: 0x1735818  mult        $t3, $t3, $s3
    ctx->pc = 0x2800d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2800d8: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2800d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2800dc: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2800dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2800e0: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2800e4: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2800e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2800e8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2800e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2800ec: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x2800ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2800f0: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2800f4: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x2800f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x2800f8: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2800f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2800fc: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x2800fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x280100: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x280100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x280104: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x280104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x280108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x280108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28010c: 0xa208000d  sb          $t0, 0xD($s0)
    ctx->pc = 0x28010cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 8));
    // 0x280110: 0xa209000c  sb          $t1, 0xC($s0)
    ctx->pc = 0x280110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 9));
    // 0x280114: 0xa20a000b  sb          $t2, 0xB($s0)
    ctx->pc = 0x280114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 10));
    // 0x280118: 0xa20b000a  sb          $t3, 0xA($s0)
    ctx->pc = 0x280118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 11));
    // 0x28011c: 0xa2060009  sb          $a2, 0x9($s0)
    ctx->pc = 0x28011cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x280120: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x280120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x280124: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x280124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x280128: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x280128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x28012c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x280130: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x280130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x280134: 0x6a09000f  ldl         $t1, 0xF($s0)
    ctx->pc = 0x280134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x280138: 0x6e090008  ldr         $t1, 0x8($s0)
    ctx->pc = 0x280138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x28013c: 0xb209001f  sdl         $t1, 0x1F($s0)
    ctx->pc = 0x28013cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280140: 0xb6090018  sdr         $t1, 0x18($s0)
    ctx->pc = 0x280140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280144: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x280144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x280148: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x280148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x28014c: 0x25e35228  addiu       $v1, $t7, 0x5228
    ctx->pc = 0x28014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 21032));
    // 0x280150: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x280150u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280154: 0x80690001  lb          $t1, 0x1($v1)
    ctx->pc = 0x280154u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x280158: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x280158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x28015c: 0xa2080040  sb          $t0, 0x40($s0)
    ctx->pc = 0x28015cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x280160: 0xa2090041  sb          $t1, 0x41($s0)
    ctx->pc = 0x280160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 9));
    // 0x280164: 0xa2020042  sb          $v0, 0x42($s0)
    ctx->pc = 0x280164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x280168: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x280168u;
    SET_GPR_U32(ctx, 31, 0x280170u);
    ctx->pc = 0x28016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280168u;
            // 0x28016c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280170u; }
        if (ctx->pc != 0x280170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280170u; }
        if (ctx->pc != 0x280170u) { return; }
    }
    ctx->pc = 0x280170u;
    // 0x280170: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280170u;
    {
        const bool branch_taken_0x280170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280170) {
            ctx->pc = 0x280198u;
            goto label_280198;
        }
    }
    ctx->pc = 0x280178u;
label_280178:
    // 0x280178: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x280178u;
    SET_GPR_U32(ctx, 31, 0x280180u);
    ctx->pc = 0x28017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280178u;
            // 0x28017c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280180u; }
        if (ctx->pc != 0x280180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280180u; }
        if (ctx->pc != 0x280180u) { return; }
    }
    ctx->pc = 0x280180u;
    // 0x280180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280180u;
    {
        const bool branch_taken_0x280180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280180) {
            ctx->pc = 0x280198u;
            goto label_280198;
        }
    }
    ctx->pc = 0x280188u;
    // 0x280188: 0xc0a0618  jal         func_281860
    ctx->pc = 0x280188u;
    SET_GPR_U32(ctx, 31, 0x280190u);
    ctx->pc = 0x28018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280188u;
            // 0x28018c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280190u; }
        if (ctx->pc != 0x280190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280190u; }
        if (ctx->pc != 0x280190u) { return; }
    }
    ctx->pc = 0x280190u;
    // 0x280190: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x280190u;
    {
        const bool branch_taken_0x280190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280190) {
            ctx->pc = 0x280194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280190u;
            // 0x280194: 0x8fa20490  lw          $v0, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2801A0u;
            goto label_2801a0;
        }
    }
    ctx->pc = 0x280198u;
label_280198:
    // 0x280198: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x28019c: 0x3442006f  ori         $v0, $v0, 0x6F
    ctx->pc = 0x28019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
label_2801a0:
    // 0x2801a0: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x2801a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
label_2801a4:
    // 0x2801a4: 0xdfbe0520  ld          $fp, 0x520($sp)
    ctx->pc = 0x2801a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x2801a8: 0xdfb70510  ld          $s7, 0x510($sp)
    ctx->pc = 0x2801a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2801ac: 0xdfb60500  ld          $s6, 0x500($sp)
    ctx->pc = 0x2801acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x2801b0: 0xdfb504f0  ld          $s5, 0x4F0($sp)
    ctx->pc = 0x2801b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2801b4: 0xdfb404e0  ld          $s4, 0x4E0($sp)
    ctx->pc = 0x2801b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2801b8: 0xdfb304d0  ld          $s3, 0x4D0($sp)
    ctx->pc = 0x2801b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2801bc: 0xdfb204c0  ld          $s2, 0x4C0($sp)
    ctx->pc = 0x2801bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x2801c0: 0xdfb104b0  ld          $s1, 0x4B0($sp)
    ctx->pc = 0x2801c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2801c4: 0xdfb004a0  ld          $s0, 0x4A0($sp)
    ctx->pc = 0x2801c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2801c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2801C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2801CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2801C8u;
            // 0x2801cc: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FD00u: goto label_27fd00;
            case 0x27FD64u: goto label_27fd64;
            case 0x27FD68u: goto label_27fd68;
            case 0x27FD84u: goto label_27fd84;
            case 0x27FDD4u: goto label_27fdd4;
            case 0x27FE14u: goto label_27fe14;
            case 0x280178u: goto label_280178;
            case 0x280198u: goto label_280198;
            case 0x2801A0u: goto label_2801a0;
            case 0x2801A4u: goto label_2801a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2801D0u;
}
