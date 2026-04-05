#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e8e08
// Address: 0x1e8e08 - 0x1e8ed0
void entry_1e8e08_0x1e8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e8e08_0x1e8ed0");
#endif

    ctx->pc = 0x1e8e08u;

    // 0x1e8e08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e8e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8e10: 0x8ca302d8  lw          $v1, 0x2D8($a1)
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 728)));
    // 0x1e8e14: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1e8e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1e8e18: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1e8e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1e8e1c: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x1e8e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x1e8e20: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x1e8e20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8e24: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1e8e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1e8e28: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8E28u;
    {
        const bool branch_taken_0x1e8e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E28u;
            // 0x1e8e2c: 0xaca602d8  sw          $a2, 0x2D8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e28) {
            ctx->pc = 0x1E8E54u;
            goto label_1e8e54;
        }
    }
    ctx->pc = 0x1E8E30u;
    // 0x1e8e30: 0x8ca20174  lw          $v0, 0x174($a1)
    ctx->pc = 0x1e8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1e8e34: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x1e8e38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1e8e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8e3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e8e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e8e40: 0x3484efff  ori         $a0, $a0, 0xEFFF
    ctx->pc = 0x1e8e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61439);
    // 0x1e8e44: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1e8e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1e8e48: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e8e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e8e4c: 0xaca302d8  sw          $v1, 0x2D8($a1)
    ctx->pc = 0x1e8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 728), GPR_U32(ctx, 3));
    // 0x1e8e50: 0xaca20174  sw          $v0, 0x174($a1)
    ctx->pc = 0x1e8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 372), GPR_U32(ctx, 2));
label_1e8e54:
    // 0x1e8e54: 0x8ca40174  lw          $a0, 0x174($a1)
    ctx->pc = 0x1e8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 372)));
    // 0x1e8e58: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e8e5c: 0x78a20260  lq          $v0, 0x260($a1)
    ctx->pc = 0x1e8e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 608)));
    // 0x1e8e60: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x1e8e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x1e8e64: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1e8e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1e8e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8e6c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1e8e6cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e8e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8e74: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1e8e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e8e78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e8e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8e7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8e80: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x1e8e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1e8e84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8E84u;
    {
        const bool branch_taken_0x1e8e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E84u;
            // 0x1e8e88: 0xaca40174  sw          $a0, 0x174($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e84) {
            ctx->pc = 0x1E8EA4u;
            goto label_1e8ea4;
        }
    }
    ctx->pc = 0x1E8E8Cu;
    // 0x1e8e8c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e8e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8e94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8e98: 0x0  nop
    ctx->pc = 0x1e8e98u;
    // NOP
    // 0x1e8e9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8E9Cu;
    {
        const bool branch_taken_0x1e8e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8e9c) {
            ctx->pc = 0x1E8EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8E9Cu;
            // 0x1e8ea0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8EA4u;
            goto label_1e8ea4;
        }
    }
    ctx->pc = 0x1E8EA4u;
label_1e8ea4:
    // 0x1e8ea4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e8ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e8ea8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1e8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1e8eac: 0x8ca30328  lw          $v1, 0x328($a1)
    ctx->pc = 0x1e8eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 808)));
    // 0x1e8eb0: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x1e8eb0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1e8eb4: 0xa46200e0  sh          $v0, 0xE0($v1)
    ctx->pc = 0x1e8eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e8eb8: 0x8ca20320  lw          $v0, 0x320($a1)
    ctx->pc = 0x1e8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x1e8ebc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e8ec0: 0xc44000c4  lwc1        $f0, 0xC4($v0)
    ctx->pc = 0x1e8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8EC4u;
            // 0x1e8ec8: 0xe4a00164  swc1        $f0, 0x164($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8E54u: goto label_1e8e54;
            case 0x1E8EA4u: goto label_1e8ea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8ECCu;
    // 0x1e8ecc: 0x0  nop
    ctx->pc = 0x1e8eccu;
    // NOP
}
