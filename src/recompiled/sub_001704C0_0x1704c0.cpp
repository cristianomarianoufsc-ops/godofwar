#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001704C0
// Address: 0x1704c0 - 0x170588
void sub_001704C0_0x1704c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001704C0_0x1704c0");
#endif

    ctx->pc = 0x1704c0u;

    // 0x1704c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1704c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1704c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1704c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1704c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1704cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1704ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1704d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1704d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704d4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1704d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1704d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1704d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704dc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1704dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1704e0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1704e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1704e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1704e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1704e8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1704e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1704ec: 0xc04bfcc  jal         func_12FF30
    ctx->pc = 0x1704ECu;
    SET_GPR_U32(ctx, 31, 0x1704F4u);
    ctx->pc = 0x1704F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1704ECu;
            // 0x1704f0: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FF30u;
    if (runtime->hasFunction(0x12FF30u)) {
        auto targetFn = runtime->lookupFunction(0x12FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704F4u; }
        if (ctx->pc != 0x1704F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FF30_0x12ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704F4u; }
        if (ctx->pc != 0x1704F4u) { return; }
    }
    ctx->pc = 0x1704F4u;
    // 0x1704f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1704f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1704f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1704fc: 0x0  nop
    ctx->pc = 0x1704fcu;
    // NOP
label_170500:
    // 0x170500: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x170500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x170504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x170504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x170508: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x170508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x17050c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x17050cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x170510: 0x0  nop
    ctx->pc = 0x170510u;
    // NOP
    // 0x170514: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x170514u;
    {
        const bool branch_taken_0x170514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170514u;
            // 0x170518: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170514) {
            ctx->pc = 0x170500u;
            runtime->cooperativeGuestYield();
            goto label_170500;
        }
    }
    ctx->pc = 0x17051Cu;
    // 0x17051c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x170520: 0xa2110044  sb          $s1, 0x44($s0)
    ctx->pc = 0x170520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 17));
    // 0x170524: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x170524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x170528: 0xe6140048  swc1        $f20, 0x48($s0)
    ctx->pc = 0x170528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x17052c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17052cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170530: 0xe615004c  swc1        $f21, 0x4C($s0)
    ctx->pc = 0x170530u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x170534: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x170534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x170538: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x170538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17053c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17053cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x170540: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x170540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x170544: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x170544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x170548: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x170548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17054c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17054cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x170550: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x170550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x170554: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x170554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x170558: 0xa6000046  sh          $zero, 0x46($s0)
    ctx->pc = 0x170558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x17055c: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x17055cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x170560: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17056c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x17056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x170570: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x170570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170574: 0x3e00008  jr          $ra
    ctx->pc = 0x170574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170574u;
            // 0x170578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170500u: goto label_170500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17057Cu;
    // 0x17057c: 0x0  nop
    ctx->pc = 0x17057cu;
    // NOP
    // 0x170580: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x170580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x170584: 0x0  nop
    ctx->pc = 0x170584u;
    // NOP
}
