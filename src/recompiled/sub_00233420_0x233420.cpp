#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233420
// Address: 0x233420 - 0x233518
void sub_00233420_0x233420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233420_0x233420");
#endif

    ctx->pc = 0x233420u;

    // 0x233420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x233420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x233424: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x233424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x233428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x233428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23342c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23342cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233430: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x233430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x233434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x233434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233438: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x233438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23343c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233440: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x233440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233444: 0xc08cc90  jal         func_233240
    ctx->pc = 0x233444u;
    SET_GPR_U32(ctx, 31, 0x23344Cu);
    ctx->pc = 0x233448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233444u;
            // 0x233448: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x233240u;
    if (runtime->hasFunction(0x233240u)) {
        auto targetFn = runtime->lookupFunction(0x233240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23344Cu; }
        if (ctx->pc != 0x23344Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_233240_0x2333a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23344Cu; }
        if (ctx->pc != 0x23344Cu) { return; }
    }
    ctx->pc = 0x23344Cu;
    // 0x23344c: 0xc08ccea  jal         func_2333A8
    ctx->pc = 0x23344Cu;
    SET_GPR_U32(ctx, 31, 0x233454u);
    ctx->pc = 0x233450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23344Cu;
            // 0x233450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2333A8u;
    if (runtime->hasFunction(0x2333A8u)) {
        auto targetFn = runtime->lookupFunction(0x2333A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233454u; }
        if (ctx->pc != 0x233454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002333A8_0x2333a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233454u; }
        if (ctx->pc != 0x233454u) { return; }
    }
    ctx->pc = 0x233454u;
    // 0x233454: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x233454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233458: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23345c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23345cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x233460: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233460u;
    {
        const bool branch_taken_0x233460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233460u;
            // 0x233464: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233460) {
            ctx->pc = 0x233480u;
            goto label_233480;
        }
    }
    ctx->pc = 0x233468u;
    // 0x233468: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23346c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x233470: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x233470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x233474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233478: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x233478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x23347c: 0x0  nop
    ctx->pc = 0x23347cu;
    // NOP
label_233480:
    // 0x233480: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x233480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233484: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x233484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x233488: 0x8c437938  lw          $v1, 0x7938($v0)
    ctx->pc = 0x233488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31032)));
    // 0x23348c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23348cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x233490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233494: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x233494u;
    SET_GPR_U32(ctx, 31, 0x23349Cu);
    ctx->pc = 0x233498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233494u;
            // 0x233498: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23349Cu; }
        if (ctx->pc != 0x23349Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23349Cu; }
        if (ctx->pc != 0x23349Cu) { return; }
    }
    ctx->pc = 0x23349Cu;
    // 0x23349c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23349cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2334a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334a4: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x2334a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
    // 0x2334a8: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x2334a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2334ac: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x2334acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    // 0x2334b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2334b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2334b4: 0x0  nop
    ctx->pc = 0x2334b4u;
    // NOP
label_2334b8:
    // 0x2334b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2334b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2334bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2334c0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2334c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2334c8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2334c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2334cc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2334ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2334d0: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x2334d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x2334d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2334d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2334d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2334dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2334dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2334e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2334e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2334e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2334e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2334e8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2334e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2334ec: 0x226102b  sltu        $v0, $s1, $a2
    ctx->pc = 0x2334ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2334f0: 0x5040fff1  beql        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2334F0u;
    {
        const bool branch_taken_0x2334f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334f0) {
            ctx->pc = 0x2334F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2334F0u;
            // 0x2334f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2334B8u;
            runtime->cooperativeGuestYield();
            goto label_2334b8;
        }
    }
    ctx->pc = 0x2334F8u;
    // 0x2334f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2334f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2334fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2334fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233504: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x233504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23350c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233510: 0x3e00008  jr          $ra
    ctx->pc = 0x233510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233510u;
            // 0x233514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233480u: goto label_233480;
            case 0x2334B8u: goto label_2334b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233518u;
}
