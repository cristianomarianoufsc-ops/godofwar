#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e1f8
// Address: 0x13e1f8 - 0x13e2c8
void entry_13e1f8_0x13e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e1f8_0x13e2c8");
#endif

    ctx->pc = 0x13e1f8u;

    // 0x13e1f8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x13e1f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e1fc: 0x54e00010  bnel        $a3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x13E1FCu;
    {
        const bool branch_taken_0x13e1fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1fc) {
            ctx->pc = 0x13E200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1FCu;
            // 0x13e200: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E240u;
            goto label_13e240;
        }
    }
    ctx->pc = 0x13E204u;
    // 0x13e204: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x13e208: 0x2462b940  addiu       $v0, $v1, -0x46C0
    ctx->pc = 0x13e208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x13e20c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13e210: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13e214: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E214u;
    {
        const bool branch_taken_0x13e214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E214u;
            // 0x13e218: 0x8c63b940  lw          $v1, -0x46C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e214) {
            ctx->pc = 0x13E230u;
            goto label_13e230;
        }
    }
    ctx->pc = 0x13E21Cu;
    // 0x13e21c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E224u;
    {
        const bool branch_taken_0x13e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E224u;
            // 0x13e228: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e224) {
            ctx->pc = 0x13E234u;
            goto label_13e234;
        }
    }
    ctx->pc = 0x13E22Cu;
    // 0x13e22c: 0x0  nop
    ctx->pc = 0x13e22cu;
    // NOP
label_13e230:
    // 0x13e230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13e230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e234:
    // 0x13e234: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x13e234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e238: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x13e238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13e23c: 0x0  nop
    ctx->pc = 0x13e23cu;
    // NOP
label_13e240:
    // 0x13e240: 0x10c70019  beq         $a2, $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x13E240u;
    {
        const bool branch_taken_0x13e240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x13E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E240u;
            // 0x13e244: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e240) {
            ctx->pc = 0x13E2A8u;
            goto label_13e2a8;
        }
    }
    ctx->pc = 0x13E248u;
label_13e248:
    // 0x13e248: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e24c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x13e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x13e250: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e254: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x13e254u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x13e258: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x13e258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e25c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E25Cu;
    {
        const bool branch_taken_0x13e25c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E25Cu;
            // 0x13e260: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e25c) {
            ctx->pc = 0x13E298u;
            goto label_13e298;
        }
    }
    ctx->pc = 0x13E264u;
    // 0x13e264: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x13e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13e268: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E268u;
    {
        const bool branch_taken_0x13e268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e268) {
            ctx->pc = 0x13E26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E268u;
            // 0x13e26c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E270u;
            goto label_13e270;
        }
    }
    ctx->pc = 0x13E270u;
label_13e270:
    // 0x13e270: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x13e270u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13e274: 0x1010  mfhi        $v0
    ctx->pc = 0x13e274u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13e278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e27c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E27Cu;
    {
        const bool branch_taken_0x13e27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E27Cu;
            // 0x13e280: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e27c) {
            ctx->pc = 0x13E288u;
            goto label_13e288;
        }
    }
    ctx->pc = 0x13E284u;
    // 0x13e284: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x13e284u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_13e288:
    // 0x13e288: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13e288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e28c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x13e28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e290: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e294: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x13e294u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_13e298:
    // 0x13e298: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x13e298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13e29c: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x13e29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13e2a0: 0x14c7ffe9  bne         $a2, $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13E2A0u;
    {
        const bool branch_taken_0x13e2a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x13E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2A0u;
            // 0x13e2a4: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2a0) {
            ctx->pc = 0x13E248u;
            runtime->cooperativeGuestYield();
            goto label_13e248;
        }
    }
    ctx->pc = 0x13E2A8u;
label_13e2a8:
    // 0x13e2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2A8u;
            // 0x13e2ac: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E230u: goto label_13e230;
            case 0x13E234u: goto label_13e234;
            case 0x13E240u: goto label_13e240;
            case 0x13E248u: goto label_13e248;
            case 0x13E270u: goto label_13e270;
            case 0x13E288u: goto label_13e288;
            case 0x13E298u: goto label_13e298;
            case 0x13E2A8u: goto label_13e2a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E2B0u;
    // 0x13e2b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13e2b4: 0x0  nop
    ctx->pc = 0x13e2b4u;
    // NOP
    // 0x13e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13e2bc: 0x0  nop
    ctx->pc = 0x13e2bcu;
    // NOP
    // 0x13e2c0: 0x0  nop
    ctx->pc = 0x13e2c0u;
    // NOP
    // 0x13e2c4: 0x0  nop
    ctx->pc = 0x13e2c4u;
    // NOP
}
