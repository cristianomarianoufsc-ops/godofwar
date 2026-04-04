#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A90E8
// Address: 0x1a90e8 - 0x1a91c8
void sub_001A90E8_0x1a90e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A90E8_0x1a90e8");
#endif

    ctx->pc = 0x1a90e8u;

    // 0x1a90e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a90ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a90ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a90f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a90f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a90f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a90f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a90f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a90fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a90fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a9104: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9104u;
    {
        const bool branch_taken_0x1a9104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9104u;
            // 0x1a9108: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9104) {
            ctx->pc = 0x1A9118u;
            goto label_1a9118;
        }
    }
    ctx->pc = 0x1A910Cu;
    // 0x1a910c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1a910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a9110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9114: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a9114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1a9118:
    // 0x1a9118: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a911c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A911Cu;
    SET_GPR_U32(ctx, 31, 0x1A9124u);
    ctx->pc = 0x1A9120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A911Cu;
            // 0x1a9120: 0x8c44ca18  lw          $a0, -0x35E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9124u; }
        if (ctx->pc != 0x1A9124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9124u; }
        if (ctx->pc != 0x1A9124u) { return; }
    }
    ctx->pc = 0x1A9124u;
    // 0x1a9124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a9124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9128: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1a9128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1a912c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a912cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a9130: 0x24a32630  addiu       $v1, $a1, 0x2630
    ctx->pc = 0x1a9130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    // 0x1a9134: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a9134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a9138: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x1a9138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
    // 0x1a913c: 0x8ca22630  lw          $v0, 0x2630($a1)
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9776)));
    // 0x1a9140: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x1a9140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x1a9144: 0xe4940010  swc1        $f20, 0x10($a0)
    ctx->pc = 0x1a9144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a9148: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a9148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a914c: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A914Cu;
    {
        const bool branch_taken_0x1a914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A914Cu;
            // 0x1a9150: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a914c) {
            ctx->pc = 0x1A9194u;
            goto label_1a9194;
        }
    }
    ctx->pc = 0x1A9154u;
    // 0x1a9154: 0x0  nop
    ctx->pc = 0x1a9154u;
    // NOP
label_1a9158:
    // 0x1a9158: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a915c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9160: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a9160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a9164: 0x0  nop
    ctx->pc = 0x1a9164u;
    // NOP
    // 0x1a9168: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9168u;
    {
        const bool branch_taken_0x1a9168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9168) {
            ctx->pc = 0x1A916Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9168u;
            // 0x1a916c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9188u;
            goto label_1a9188;
        }
    }
    ctx->pc = 0x1A9170u;
    // 0x1a9170: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9174: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a9174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a9178: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a9178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a917c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a917cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a9180: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A9180u;
    {
        const bool branch_taken_0x1a9180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9180u;
            // 0x1a9184: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9180) {
            ctx->pc = 0x1A91B0u;
            goto label_1a91b0;
        }
    }
    ctx->pc = 0x1A9188u;
label_1a9188:
    // 0x1a9188: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a9188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a918c: 0x1443fff2  bne         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A918Cu;
    {
        const bool branch_taken_0x1a918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A918Cu;
            // 0x1a9190: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a918c) {
            ctx->pc = 0x1A9158u;
            runtime->cooperativeGuestYield();
            goto label_1a9158;
        }
    }
    ctx->pc = 0x1A9194u;
label_1a9194:
    // 0x1a9194: 0x24a22630  addiu       $v0, $a1, 0x2630
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    // 0x1a9198: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a919c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a919cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a91a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a91a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a91a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1a91a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a91ac: 0x0  nop
    ctx->pc = 0x1a91acu;
    // NOP
label_1a91b0:
    // 0x1a91b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a91b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a91b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a91b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a91b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a91b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a91bc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a91c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A91C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91C0u;
            // 0x1a91c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9118u: goto label_1a9118;
            case 0x1A9158u: goto label_1a9158;
            case 0x1A9188u: goto label_1a9188;
            case 0x1A9194u: goto label_1a9194;
            case 0x1A91B0u: goto label_1a91b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A91C8u;
}
