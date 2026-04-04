#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA220
// Address: 0x1ba220 - 0x1ba2c8
void sub_001BA220_0x1ba220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA220_0x1ba220");
#endif

    ctx->pc = 0x1ba220u;

    // 0x1ba220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba224: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ba224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ba228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ba228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ba22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba238: 0xae0014f8  sw          $zero, 0x14F8($s0)
    ctx->pc = 0x1ba238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5368), GPR_U32(ctx, 0));
    // 0x1ba23c: 0xae0014fc  sw          $zero, 0x14FC($s0)
    ctx->pc = 0x1ba23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5372), GPR_U32(ctx, 0));
    // 0x1ba240: 0x26240384  addiu       $a0, $s1, 0x384
    ctx->pc = 0x1ba240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 900));
    // 0x1ba244: 0x0  nop
    ctx->pc = 0x1ba244u;
    // NOP
label_1ba248:
    // 0x1ba248: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1BA248u;
    SET_GPR_U32(ctx, 31, 0x1BA250u);
    ctx->pc = 0x1BA24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA248u;
            // 0x1ba24c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA250u; }
        if (ctx->pc != 0x1BA250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA250u; }
        if (ctx->pc != 0x1BA250u) { return; }
    }
    ctx->pc = 0x1BA250u;
    // 0x1ba250: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1ba250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba254: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA254u;
    {
        const bool branch_taken_0x1ba254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA254u;
            // 0x1ba258: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba254) {
            ctx->pc = 0x1BA268u;
            goto label_1ba268;
        }
    }
    ctx->pc = 0x1BA25Cu;
    // 0x1ba25c: 0x8e0214f8  lw          $v0, 0x14F8($s0)
    ctx->pc = 0x1ba25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5368)));
    // 0x1ba260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba264: 0xae0214f8  sw          $v0, 0x14F8($s0)
    ctx->pc = 0x1ba264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5368), GPR_U32(ctx, 2));
label_1ba268:
    // 0x1ba268: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x1ba268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1ba26c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BA26Cu;
    {
        const bool branch_taken_0x1ba26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA26Cu;
            // 0x1ba270: 0x26240384  addiu       $a0, $s1, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba26c) {
            ctx->pc = 0x1BA248u;
            runtime->cooperativeGuestYield();
            goto label_1ba248;
        }
    }
    ctx->pc = 0x1BA274u;
    // 0x1ba274: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba278: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1ba278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1ba27c: 0xac40cbf4  sw          $zero, -0x340C($v0)
    ctx->pc = 0x1ba27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953972), GPR_U32(ctx, 0));
    // 0x1ba280: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1ba280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x1ba284: 0xae001514  sw          $zero, 0x1514($s0)
    ctx->pc = 0x1ba284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5396), GPR_U32(ctx, 0));
    // 0x1ba288: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba28c: 0xae001520  sw          $zero, 0x1520($s0)
    ctx->pc = 0x1ba28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 0));
    // 0x1ba290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba294: 0xae001524  sw          $zero, 0x1524($s0)
    ctx->pc = 0x1ba294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5412), GPR_U32(ctx, 0));
    // 0x1ba298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba29c: 0xae001518  sw          $zero, 0x1518($s0)
    ctx->pc = 0x1ba29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5400), GPR_U32(ctx, 0));
    // 0x1ba2a0: 0xae00151c  sw          $zero, 0x151C($s0)
    ctx->pc = 0x1ba2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5404), GPR_U32(ctx, 0));
    // 0x1ba2a4: 0xae031510  sw          $v1, 0x1510($s0)
    ctx->pc = 0x1ba2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5392), GPR_U32(ctx, 3));
    // 0x1ba2a8: 0xc06e93e  jal         func_1BA4F8
    ctx->pc = 0x1BA2A8u;
    SET_GPR_U32(ctx, 31, 0x1BA2B0u);
    ctx->pc = 0x1BA2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2A8u;
            // 0x1ba2ac: 0xac40cbf8  sw          $zero, -0x3408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA4F8u;
    if (runtime->hasFunction(0x1BA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2B0u; }
        if (ctx->pc != 0x1BA2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA4F8_0x1ba4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2B0u; }
        if (ctx->pc != 0x1BA2B0u) { return; }
    }
    ctx->pc = 0x1BA2B0u;
    // 0x1ba2b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ba2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba2b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ba2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba2b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2BCu;
            // 0x1ba2c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA248u: goto label_1ba248;
            case 0x1BA268u: goto label_1ba268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA2C4u;
    // 0x1ba2c4: 0x0  nop
    ctx->pc = 0x1ba2c4u;
    // NOP
}
