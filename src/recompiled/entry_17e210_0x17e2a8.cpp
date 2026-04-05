#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17e210
// Address: 0x17e210 - 0x17e2a8
void entry_17e210_0x17e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17e210_0x17e2a8");
#endif

    ctx->pc = 0x17e210u;

    // 0x17e210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e214: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e218: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17e21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e220: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e224: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17e224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e22c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17e22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e234: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17e234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e238: 0xc060284  jal         func_180A10
    ctx->pc = 0x17E238u;
    SET_GPR_U32(ctx, 31, 0x17E240u);
    ctx->pc = 0x17E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E238u;
            // 0x17e23c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E240u; }
        if (ctx->pc != 0x17E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E240u; }
        if (ctx->pc != 0x17E240u) { return; }
    }
    ctx->pc = 0x17E240u;
    // 0x17e240: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x17e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17e244: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x17e244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x17e248: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x17e248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x17e24c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17e250: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x17e250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x17e254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17e254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17e258: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x17e258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x17e25c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x17e260: 0x1297c0  sll         $s2, $s2, 31
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 31));
    // 0x17e264: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17e264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17e268: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x17e26c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x17e26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x17e270: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17e270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x17e274: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x17e274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17e278: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x17e278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x17e27c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e280: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x17e280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x17e284: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x17e284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x17e288: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17e288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17e28c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e290: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e298: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17e298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2A0u;
            // 0x17e2a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E2A8u;
}
