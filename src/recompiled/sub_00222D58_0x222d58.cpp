#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222D58
// Address: 0x222d58 - 0x223910
void sub_00222D58_0x222d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222D58_0x222d58");
#endif

    ctx->pc = 0x222d58u;

    // 0x222d58: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x222d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x222d5c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x222d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x222d60: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x222d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x222d64: 0x24a37790  addiu       $v1, $a1, 0x7790
    ctx->pc = 0x222d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
    // 0x222d68: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x222d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x222d6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222d70: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x222d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
    // 0x222d74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x222d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d78: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x222d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x222d7c: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x222d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x222d80: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x222d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
    // 0x222d84: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x222d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
    // 0x222d88: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x222d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
    // 0x222d8c: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x222d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
    // 0x222d90: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x222d90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x222d94: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x222d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x222d98: 0x8c740024  lw          $s4, 0x24($v1)
    ctx->pc = 0x222d98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x222d9c: 0x8c53f194  lw          $s3, -0xE6C($v0)
    ctx->pc = 0x222d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963604)));
    // 0x222da0: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x222da0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222da4: 0x0  nop
    ctx->pc = 0x222da4u;
    // NOP
label_222da8:
    // 0x222da8: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x222DA8u;
    {
        const bool branch_taken_0x222da8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x222da8) {
            ctx->pc = 0x222DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222DA8u;
            // 0x222dac: 0x8e450034  lw          $a1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222DC0u;
            goto label_222dc0;
        }
    }
    ctx->pc = 0x222DB0u;
    // 0x222db0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x222db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x222db4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x222DB4u;
    {
        const bool branch_taken_0x222db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222db4) {
            ctx->pc = 0x222DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222DB4u;
            // 0x222db8: 0x8e940018  lw          $s4, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222DA8u;
            runtime->cooperativeGuestYield();
            goto label_222da8;
        }
    }
    ctx->pc = 0x222DBCu;
    // 0x222dbc: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x222dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_222dc0:
    // 0x222dc0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x222dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222dc4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x222dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x222dc8: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x222dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x222dcc: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x222dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x222dd0: 0x8cc3d2ac  lw          $v1, -0x2D54($a2)
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955692)));
    // 0x222dd4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x222dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222dd8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x222dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x222ddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222de4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222DE4u;
    {
        const bool branch_taken_0x222de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x222de4) {
            ctx->pc = 0x222DF4u;
            goto label_222df4;
        }
    }
    ctx->pc = 0x222DECu;
    // 0x222dec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x222decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x222df0: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x222df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
label_222df4:
    // 0x222df4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x222DF4u;
    {
        const bool branch_taken_0x222df4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222DF4u;
            // 0x222df8: 0x8fa801b0  lw          $t0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222df4) {
            ctx->pc = 0x222E04u;
            goto label_222e04;
        }
    }
    ctx->pc = 0x222DFCu;
    // 0x222dfc: 0x128802b7  beq         $s4, $t0, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x222DFCu;
    {
        const bool branch_taken_0x222dfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 8));
        ctx->pc = 0x222E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222DFCu;
            // 0x222e00: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222dfc) {
            ctx->pc = 0x2238DCu;
            goto label_2238dc;
        }
    }
    ctx->pc = 0x222E04u;
label_222e04:
    // 0x222e04: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x222E04u;
    {
        const bool branch_taken_0x222e04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E04u;
            // 0x222e08: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e04) {
            ctx->pc = 0x222E9Cu;
            goto label_222e9c;
        }
    }
    ctx->pc = 0x222E0Cu;
    // 0x222e0c: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x222e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x222e10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x222e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x222e14: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x222E14u;
    {
        const bool branch_taken_0x222e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E14u;
            // 0x222e18: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e14) {
            ctx->pc = 0x222EA0u;
            goto label_222ea0;
        }
    }
    ctx->pc = 0x222E1Cu;
    // 0x222e1c: 0x8e8300fc  lw          $v1, 0xFC($s4)
    ctx->pc = 0x222e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
    // 0x222e20: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x222E20u;
    {
        const bool branch_taken_0x222e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E20u;
            // 0x222e24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e20) {
            ctx->pc = 0x222E60u;
            goto label_222e60;
        }
    }
    ctx->pc = 0x222E28u;
    // 0x222e28: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x222e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x222e2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222e30: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x222E30u;
    {
        const bool branch_taken_0x222e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x222E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E30u;
            // 0x222e34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e30) {
            ctx->pc = 0x222E60u;
            goto label_222e60;
        }
    }
    ctx->pc = 0x222E38u;
label_222e38:
    // 0x222e38: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x222e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x222e3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x222e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x222e40: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x222e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x222e44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x222E44u;
    {
        const bool branch_taken_0x222e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e44) {
            ctx->pc = 0x222E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222E44u;
            // 0x222e48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222E60u;
            goto label_222e60;
        }
    }
    ctx->pc = 0x222E4Cu;
    // 0x222e4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x222e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222e50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x222e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222e54: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x222E54u;
    {
        const bool branch_taken_0x222e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E54u;
            // 0x222e58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e54) {
            ctx->pc = 0x222E38u;
            runtime->cooperativeGuestYield();
            goto label_222e38;
        }
    }
    ctx->pc = 0x222E5Cu;
    // 0x222e5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x222e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222e60:
    // 0x222e60: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x222e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x222e64: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x222E64u;
    {
        const bool branch_taken_0x222e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222e64) {
            ctx->pc = 0x222E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222E64u;
            // 0x222e68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222E98u;
            goto label_222e98;
        }
    }
    ctx->pc = 0x222E6Cu;
    // 0x222e6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x222e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222e70: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x222e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x222e74: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x222e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222e78: 0x8cc3d2ac  lw          $v1, -0x2D54($a2)
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955692)));
    // 0x222e7c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x222e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x222e80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x222e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222e84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222e88: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x222E88u;
    {
        const bool branch_taken_0x222e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x222E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222E88u;
            // 0x222e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e88) {
            ctx->pc = 0x222E94u;
            goto label_222e94;
        }
    }
    ctx->pc = 0x222E90u;
    // 0x222e90: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x222e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_222e94:
    // 0x222e94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x222e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_222e98:
    // 0x222e98: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x222e98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222e9c:
    // 0x222e9c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x222e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_222ea0:
    // 0x222ea0: 0x24437790  addiu       $v1, $v0, 0x7790
    ctx->pc = 0x222ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x222ea4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x222ea8: 0x8c7e002c  lw          $fp, 0x2C($v1)
    ctx->pc = 0x222ea8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x222eac: 0x8c425e70  lw          $v0, 0x5E70($v0)
    ctx->pc = 0x222eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24176)));
    // 0x222eb0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x222eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x222eb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x222eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222eb8: 0x2ee40001  sltiu       $a0, $s7, 0x1
    ctx->pc = 0x222eb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x222ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ec0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x222EC0u;
    {
        const bool branch_taken_0x222ec0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222EC0u;
            // 0x222ec4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ec0) {
            ctx->pc = 0x222ED0u;
            goto label_222ed0;
        }
    }
    ctx->pc = 0x222EC8u;
    // 0x222ec8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x222ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ecc: 0x0  nop
    ctx->pc = 0x222eccu;
    // NOP
label_222ed0:
    // 0x222ed0: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x222ED0u;
    {
        const bool branch_taken_0x222ed0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x222ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222ED0u;
            // 0x222ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ed0) {
            ctx->pc = 0x222EDCu;
            goto label_222edc;
        }
    }
    ctx->pc = 0x222ED8u;
    // 0x222ed8: 0x2ec50001  sltiu       $a1, $s6, 0x1
    ctx->pc = 0x222ed8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_222edc:
    // 0x222edc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x222edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222ee0: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x222ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x222ee4: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x222ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x222ee8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222EE8u;
    {
        const bool branch_taken_0x222ee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x222EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222EE8u;
            // 0x222eec: 0x7fa301a0  sq          $v1, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ee8) {
            ctx->pc = 0x222F00u;
            goto label_222f00;
        }
    }
    ctx->pc = 0x222EF0u;
    // 0x222ef0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x222EF0u;
    {
        const bool branch_taken_0x222ef0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x222ef0) {
            ctx->pc = 0x222F00u;
            goto label_222f00;
        }
    }
    ctx->pc = 0x222EF8u;
    // 0x222ef8: 0x10a00278  beqz        $a1, . + 4 + (0x278 << 2)
    ctx->pc = 0x222EF8u;
    {
        const bool branch_taken_0x222ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x222EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222EF8u;
            // 0x222efc: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ef8) {
            ctx->pc = 0x2238DCu;
            goto label_2238dc;
        }
    }
    ctx->pc = 0x222F00u;
label_222f00:
    // 0x222f00: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x222F00u;
    {
        const bool branch_taken_0x222f00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F00u;
            // 0x222f04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f00) {
            ctx->pc = 0x222F68u;
            goto label_222f68;
        }
    }
    ctx->pc = 0x222F08u;
    // 0x222f08: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x222f0c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x222f0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x222f10: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x222f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x222f14: 0x40f809  jalr        $v0
    ctx->pc = 0x222F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x222F1Cu);
        ctx->pc = 0x222F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F14u;
            // 0x222f18: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222F1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222F1Cu; }
            if (ctx->pc != 0x222F1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x222F1Cu;
    // 0x222f1c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x222F1Cu;
    {
        const bool branch_taken_0x222f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F1Cu;
            // 0x222f20: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f1c) {
            ctx->pc = 0x222F6Cu;
            goto label_222f6c;
        }
    }
    ctx->pc = 0x222F24u;
    // 0x222f24: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x222f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x222f28: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x222f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x222f2c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x222f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x222f30: 0x40f809  jalr        $v0
    ctx->pc = 0x222F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x222F38u);
        ctx->pc = 0x222F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F30u;
            // 0x222f34: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222F38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222F38u; }
            if (ctx->pc != 0x222F38u) { return; }
        }
        }
    }
    ctx->pc = 0x222F38u;
    // 0x222f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f3c: 0xc080bb8  jal         func_202EE0
    ctx->pc = 0x222F3Cu;
    SET_GPR_U32(ctx, 31, 0x222F44u);
    ctx->pc = 0x222F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F3Cu;
            // 0x222f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202EE0u;
    if (runtime->hasFunction(0x202EE0u)) {
        auto targetFn = runtime->lookupFunction(0x202EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F44u; }
        if (ctx->pc != 0x222F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202EE0_0x202ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F44u; }
        if (ctx->pc != 0x222F44u) { return; }
    }
    ctx->pc = 0x222F44u;
    // 0x222f44: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x222f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x222f48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222F48u;
    {
        const bool branch_taken_0x222f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F48u;
            // 0x222f4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f48) {
            ctx->pc = 0x222F64u;
            goto label_222f64;
        }
    }
    ctx->pc = 0x222F50u;
    // 0x222f50: 0xc090d56  jal         func_243558
    ctx->pc = 0x222F50u;
    SET_GPR_U32(ctx, 31, 0x222F58u);
    ctx->pc = 0x222F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F50u;
            // 0x222f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F58u; }
        if (ctx->pc != 0x222F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F58u; }
        if (ctx->pc != 0x222F58u) { return; }
    }
    ctx->pc = 0x222F58u;
    // 0x222f58: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x222f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x222f5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x222f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x222f60: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x222f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_222f64:
    // 0x222f64: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x222f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_222f68:
    // 0x222f68: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x222f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_222f6c:
    // 0x222f6c: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x222f70: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x222f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x222f74: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x222f74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x222f78: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x222f78u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222f7c: 0x8ea41184  lw          $a0, 0x1184($s5)
    ctx->pc = 0x222f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4484)));
    // 0x222f80: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x222F80u;
    SET_GPR_U32(ctx, 31, 0x222F88u);
    ctx->pc = 0x222F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222F80u;
            // 0x222f84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F88u; }
        if (ctx->pc != 0x222F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222F88u; }
        if (ctx->pc != 0x222F88u) { return; }
    }
    ctx->pc = 0x222F88u;
    // 0x222f88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222f8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x222f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x222f90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x222f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x222f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222F94u;
    {
        const bool branch_taken_0x222f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222F94u;
            // 0x222f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f94) {
            ctx->pc = 0x222FB8u;
            goto label_222fb8;
        }
    }
    ctx->pc = 0x222F9Cu;
    // 0x222f9c: 0x86250020  lh          $a1, 0x20($s1)
    ctx->pc = 0x222f9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x222fa0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222FA0u;
    {
        const bool branch_taken_0x222fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x222FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FA0u;
            // 0x222fa4: 0x8ea41184  lw          $a0, 0x1184($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fa0) {
            ctx->pc = 0x222FB8u;
            goto label_222fb8;
        }
    }
    ctx->pc = 0x222FA8u;
    // 0x222fa8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x222FA8u;
    SET_GPR_U32(ctx, 31, 0x222FB0u);
    ctx->pc = 0x222FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222FA8u;
            // 0x222fac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FB0u; }
        if (ctx->pc != 0x222FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222FB0u; }
        if (ctx->pc != 0x222FB0u) { return; }
    }
    ctx->pc = 0x222FB0u;
    // 0x222fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x222fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222fb4: 0x0  nop
    ctx->pc = 0x222fb4u;
    // NOP
label_222fb8:
    // 0x222fb8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x222FB8u;
    {
        const bool branch_taken_0x222fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x222FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FB8u;
            // 0x222fbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fb8) {
            ctx->pc = 0x222FE4u;
            goto label_222fe4;
        }
    }
    ctx->pc = 0x222FC0u;
    // 0x222fc0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x222fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x222fc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x222fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x222fc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222FC8u;
    {
        const bool branch_taken_0x222fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FC8u;
            // 0x222fcc: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fc8) {
            ctx->pc = 0x222FECu;
            goto label_222fec;
        }
    }
    ctx->pc = 0x222FD0u;
    // 0x222fd0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x222fd4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x222fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x222fd8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x222fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x222fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222FDCu;
    {
        const bool branch_taken_0x222fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222fdc) {
            ctx->pc = 0x222FECu;
            goto label_222fec;
        }
    }
    ctx->pc = 0x222FE4u;
label_222fe4:
    // 0x222fe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222fe8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x222fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_222fec:
    // 0x222fec: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x222FECu;
    {
        const bool branch_taken_0x222fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x222FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222FECu;
            // 0x222ff0: 0x7ba20170  lq          $v0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222fec) {
            ctx->pc = 0x223158u;
            goto label_223158;
        }
    }
    ctx->pc = 0x222FF4u;
    // 0x222ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ff8: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x222ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x222ffc: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x222ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223000: 0xc088b22  jal         func_222C88
    ctx->pc = 0x223000u;
    SET_GPR_U32(ctx, 31, 0x223008u);
    ctx->pc = 0x223004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223000u;
            // 0x223004: 0x24a50144  addiu       $a1, $a1, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 324));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C88u;
    if (runtime->hasFunction(0x222C88u)) {
        auto targetFn = runtime->lookupFunction(0x222C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223008u; }
        if (ctx->pc != 0x223008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C88_0x222c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223008u; }
        if (ctx->pc != 0x223008u) { return; }
    }
    ctx->pc = 0x223008u;
    // 0x223008: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x223008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x22300c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x22300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x223010: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x223010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x223014: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x223014u;
    {
        const bool branch_taken_0x223014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223014u;
            // 0x223018: 0xdba301a0  lqc2        $vf3, 0x1A0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223014) {
            ctx->pc = 0x2230C0u;
            goto label_2230c0;
        }
    }
    ctx->pc = 0x22301Cu;
    // 0x22301c: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x22301cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x223020: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x223020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x223024: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x223024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223028: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x223028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22302c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x223030: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x223030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x223034: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x223034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223038: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x223038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22303c: 0x4be3212c  vsub.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x22303cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x223040: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x223040u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223044: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x223044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x223048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22304c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22304cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223050: 0x24627790  addiu       $v0, $v1, 0x7790
    ctx->pc = 0x223050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x223054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223058: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x223058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22305c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223060: 0xc088a68  jal         func_2229A0
    ctx->pc = 0x223060u;
    SET_GPR_U32(ctx, 31, 0x223068u);
    ctx->pc = 0x223064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223060u;
            // 0x223064: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2229A0u;
    if (runtime->hasFunction(0x2229A0u)) {
        auto targetFn = runtime->lookupFunction(0x2229A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223068u; }
        if (ctx->pc != 0x223068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2229a0_0x222b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223068u; }
        if (ctx->pc != 0x223068u) { return; }
    }
    ctx->pc = 0x223068u;
    // 0x223068: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x223068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22306c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x22306cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x223070: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x223070u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223074: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x223074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223078: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x223078u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22307c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22307cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223080: 0x46000004  c1          0x4
    ctx->pc = 0x223080u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x223084: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x223084u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x223088: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x223088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22308c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x22308cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x223090: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x223090u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223094: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x223094u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223098: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x223098u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22309c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2230a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2230a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2230a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2230a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2230a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2230a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2230acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2230b0: 0xc088a68  jal         func_2229A0
    ctx->pc = 0x2230B0u;
    SET_GPR_U32(ctx, 31, 0x2230B8u);
    ctx->pc = 0x2230B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2230B0u;
            // 0x2230b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2229A0u;
    if (runtime->hasFunction(0x2229A0u)) {
        auto targetFn = runtime->lookupFunction(0x2229A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230B8u; }
        if (ctx->pc != 0x2230B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2229a0_0x222b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230B8u; }
        if (ctx->pc != 0x2230B8u) { return; }
    }
    ctx->pc = 0x2230B8u;
    // 0x2230b8: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x2230B8u;
    {
        const bool branch_taken_0x2230b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2230BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2230B8u;
            // 0x2230bc: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230b8) {
            ctx->pc = 0x2238DCu;
            goto label_2238dc;
        }
    }
    ctx->pc = 0x2230C0u;
label_2230c0:
    // 0x2230c0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2230c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2230c4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2230C4u;
    {
        const bool branch_taken_0x2230c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230c4) {
            ctx->pc = 0x2230C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2230C4u;
            // 0x2230c8: 0xda440010  lqc2        $vf4, 0x10($s2) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223100u;
            goto label_223100;
        }
    }
    ctx->pc = 0x2230CCu;
    // 0x2230cc: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x2230ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2230d0: 0xda420010  lqc2        $vf2, 0x10($s2)
    ctx->pc = 0x2230d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2230d4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2230d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2230d8: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x2230d8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2230dc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2230dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2230e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2230e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2230e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2230e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2230e8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2230e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2230ec: 0x24627790  addiu       $v0, $v1, 0x7790
    ctx->pc = 0x2230ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x2230f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2230f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2230f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2230f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2230F8u;
    {
        const bool branch_taken_0x2230f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2230FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2230F8u;
            // 0x2230fc: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230f8) {
            ctx->pc = 0x223148u;
            goto label_223148;
        }
    }
    ctx->pc = 0x223100u;
label_223100:
    // 0x223100: 0xdba301a0  lqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x223100u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x223104: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x223104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x223108: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x223108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22310c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x22310cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x223110: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x223110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x223114: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x223114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x223118: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x223118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x22311c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x22311cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x223120: 0x4be3212c  vsub.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x223120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x223124: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x223124u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223128: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x223128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22312c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22312cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223134: 0x24a27790  addiu       $v0, $a1, 0x7790
    ctx->pc = 0x223134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
    // 0x223138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22313c: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x22313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223140: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x223140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223144: 0x0  nop
    ctx->pc = 0x223144u;
    // NOP
label_223148:
    // 0x223148: 0xc088a68  jal         func_2229A0
    ctx->pc = 0x223148u;
    SET_GPR_U32(ctx, 31, 0x223150u);
    ctx->pc = 0x22314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223148u;
            // 0x22314c: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2229A0u;
    if (runtime->hasFunction(0x2229A0u)) {
        auto targetFn = runtime->lookupFunction(0x2229A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223150u; }
        if (ctx->pc != 0x223150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2229a0_0x222b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223150u; }
        if (ctx->pc != 0x223150u) { return; }
    }
    ctx->pc = 0x223150u;
    // 0x223150: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x223150u;
    {
        const bool branch_taken_0x223150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223150u;
            // 0x223154: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223150) {
            ctx->pc = 0x2238DCu;
            goto label_2238dc;
        }
    }
    ctx->pc = 0x223158u;
label_223158:
    // 0x223158: 0x92250025  lbu         $a1, 0x25($s1)
    ctx->pc = 0x223158u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x22315c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x22315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x223160: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x223160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223164: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x223164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x223168: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x223168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x22316c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223170: 0xc088b22  jal         func_222C88
    ctx->pc = 0x223170u;
    SET_GPR_U32(ctx, 31, 0x223178u);
    ctx->pc = 0x223174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223170u;
            // 0x223174: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C88u;
    if (runtime->hasFunction(0x222C88u)) {
        auto targetFn = runtime->lookupFunction(0x222C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223178u; }
        if (ctx->pc != 0x223178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C88_0x222c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223178u; }
        if (ctx->pc != 0x223178u) { return; }
    }
    ctx->pc = 0x223178u;
    // 0x223178: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x223178u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x22317c: 0x25087790  addiu       $t0, $t0, 0x7790
    ctx->pc = 0x22317cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30608));
    // 0x223180: 0x12e00165  beqz        $s7, . + 4 + (0x165 << 2)
    ctx->pc = 0x223180u;
    {
        const bool branch_taken_0x223180 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x223184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223180u;
            // 0x223184: 0x85150034  lh          $s5, 0x34($t0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223180) {
            ctx->pc = 0x223718u;
            goto label_223718;
        }
    }
    ctx->pc = 0x223188u;
    // 0x223188: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x223188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x22318c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223190: 0x8ef00104  lw          $s0, 0x104($s7)
    ctx->pc = 0x223190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x223194: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x223194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223198: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x223198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x22319c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x22319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2231a0: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x2231a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2231a4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2231a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2231a8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x2231a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2231ac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2231acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2231b0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x2231b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2231b4: 0x12a4008a  beq         $s5, $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2231B4u;
    {
        const bool branch_taken_0x2231b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x2231B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2231B4u;
            // 0x2231b8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231b4) {
            ctx->pc = 0x2233E0u;
            goto label_2233e0;
        }
    }
    ctx->pc = 0x2231BCu;
    // 0x2231bc: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2231BCu;
    {
        const bool branch_taken_0x2231bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2231BCu;
            // 0x2231c0: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231bc) {
            ctx->pc = 0x22340Cu;
            goto label_22340c;
        }
    }
    ctx->pc = 0x2231C4u;
    // 0x2231c4: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x2231c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
    // 0x2231c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2231c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2231cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2231CCu;
    {
        const bool branch_taken_0x2231cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2231D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2231CCu;
            // 0x2231d0: 0x7ba50170  lq          $a1, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2231cc) {
            ctx->pc = 0x2231F8u;
            goto label_2231f8;
        }
    }
    ctx->pc = 0x2231D4u;
    // 0x2231d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2231d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2231d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2231dc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2231dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2231e0: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2231e4: 0xc04e176  jal         func_1385D8
    ctx->pc = 0x2231E4u;
    SET_GPR_U32(ctx, 31, 0x2231ECu);
    ctx->pc = 0x2231E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2231E4u;
            // 0x2231e8: 0x27a90180  addiu       $t1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1385D8u;
    if (runtime->hasFunction(0x1385D8u)) {
        auto targetFn = runtime->lookupFunction(0x1385D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231ECu; }
        if (ctx->pc != 0x2231ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001385D8_0x1385d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2231ECu; }
        if (ctx->pc != 0x2231ECu) { return; }
    }
    ctx->pc = 0x2231ECu;
    // 0x2231ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2231f0: 0x2ac03  sra         $s5, $v0, 16
    ctx->pc = 0x2231f0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2231f4: 0x0  nop
    ctx->pc = 0x2231f4u;
    // NOP
label_2231f8:
    // 0x2231f8: 0xdba10170  lqc2        $vf1, 0x170($sp)
    ctx->pc = 0x2231f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2231fc: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x2231fcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x223200: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x223200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223204: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x223204u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x223208: 0xdfc5bdf8  ld          $a1, -0x4208($fp)
    ctx->pc = 0x223208u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 4294950392)));
    // 0x22320c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x22320cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x223210: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x223210u;
    {
        const bool branch_taken_0x223210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x223210) {
            ctx->pc = 0x223214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223210u;
            // 0x223214: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223228u;
            goto label_223228;
        }
    }
    ctx->pc = 0x223218u;
    // 0x223218: 0xc04da64  jal         func_136990
    ctx->pc = 0x223218u;
    SET_GPR_U32(ctx, 31, 0x223220u);
    ctx->pc = 0x22321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223218u;
            // 0x22321c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223220u; }
        if (ctx->pc != 0x223220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223220u; }
        if (ctx->pc != 0x223220u) { return; }
    }
    ctx->pc = 0x223220u;
    // 0x223220: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x223220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x223224: 0x0  nop
    ctx->pc = 0x223224u;
    // NOP
label_223228:
    // 0x223228: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x223228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x22322c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x223230: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x223230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x223234: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223238: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x223238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22323c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x22323cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x223240: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x223240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x223244: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x223244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x223248: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x223248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22324c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x22324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x223250: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x223250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x223254: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x223254u;
    SET_GPR_U32(ctx, 31, 0x22325Cu);
    ctx->pc = 0x223258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223254u;
            // 0x223258: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22325Cu; }
        if (ctx->pc != 0x22325Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22325Cu; }
        if (ctx->pc != 0x22325Cu) { return; }
    }
    ctx->pc = 0x22325Cu;
    // 0x22325c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x223260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223264: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223268: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x223268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x22326c: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x22326cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x223270: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x223270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x223274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223278: 0x7a660020  lq          $a2, 0x20($s3)
    ctx->pc = 0x223278u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x22327c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x22327cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223280: 0xc088312  jal         func_220C48
    ctx->pc = 0x223280u;
    SET_GPR_U32(ctx, 31, 0x223288u);
    ctx->pc = 0x223284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223280u;
            // 0x223284: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223288u; }
        if (ctx->pc != 0x223288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223288u; }
        if (ctx->pc != 0x223288u) { return; }
    }
    ctx->pc = 0x223288u;
    // 0x223288: 0x8ee200fc  lw          $v0, 0xFC($s7)
    ctx->pc = 0x223288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
    // 0x22328c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22328Cu;
    {
        const bool branch_taken_0x22328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22328Cu;
            // 0x223290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22328c) {
            ctx->pc = 0x2232A4u;
            goto label_2232a4;
        }
    }
    ctx->pc = 0x223294u;
    // 0x223294: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x223294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223298: 0x50a20002  beql        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223298u;
    {
        const bool branch_taken_0x223298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x223298) {
            ctx->pc = 0x22329Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223298u;
            // 0x22329c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2232A4u;
            goto label_2232a4;
        }
    }
    ctx->pc = 0x2232A0u;
    // 0x2232a0: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2232a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2232a4:
    // 0x2232a4: 0xda610020  lqc2        $vf1, 0x20($s3)
    ctx->pc = 0x2232a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2232a8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2232a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2232ac: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x2232acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2232b0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2232b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2232b4: 0xdba60050  lqc2        $vf6, 0x50($sp)
    ctx->pc = 0x2232b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2232b8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x2232b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2232bc: 0xdba50060  lqc2        $vf5, 0x60($sp)
    ctx->pc = 0x2232bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2232c0: 0x4be228bd  vmadday.xyzw $ACC, $vf5, $vf2y
    ctx->pc = 0x2232c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2232c4: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x2232c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2232c8: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2232c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2232cc: 0x4be218be  vmaddaz.xyzw $ACC, $vf3, $vf2z
    ctx->pc = 0x2232ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2232d0: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x2232d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2232d4: 0xdba10170  lqc2        $vf1, 0x170($sp)
    ctx->pc = 0x2232d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2232d8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x2232d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2232dc: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x2232dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2232e0: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x2232e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2232e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2232e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232e8: 0x4be120cb  vmaddw.xyzw $vf3, $vf4, $vf1w
    ctx->pc = 0x2232e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2232ec: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x2232ecu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2232f0: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2232f0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2232f4: 0xc0883a2  jal         func_220E88
    ctx->pc = 0x2232F4u;
    SET_GPR_U32(ctx, 31, 0x2232FCu);
    ctx->pc = 0x2232F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2232F4u;
            // 0x2232f8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220E88u;
    if (runtime->hasFunction(0x220E88u)) {
        auto targetFn = runtime->lookupFunction(0x220E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232FCu; }
        if (ctx->pc != 0x2232FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220E88_0x220e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232FCu; }
        if (ctx->pc != 0x2232FCu) { return; }
    }
    ctx->pc = 0x2232FCu;
    // 0x2232fc: 0xdba80170  lqc2        $vf8, 0x170($sp)
    ctx->pc = 0x2232fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x223300: 0xfa680030  sqc2        $vf8, 0x30($s3)
    ctx->pc = 0x223300u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x223304: 0xdba50050  lqc2        $vf5, 0x50($sp)
    ctx->pc = 0x223304u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223308: 0xdba60060  lqc2        $vf6, 0x60($sp)
    ctx->pc = 0x223308u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22330c: 0xdba70070  lqc2        $vf7, 0x70($sp)
    ctx->pc = 0x22330cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x223310: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x223310u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x223314: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x223314u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x223318: 0xda610010  lqc2        $vf1, 0x10($s3)
    ctx->pc = 0x223318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22331c: 0xda620020  lqc2        $vf2, 0x20($s3)
    ctx->pc = 0x22331cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x223320: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x223320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223324: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x223324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223328: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x223328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x22332c: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x22332cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223330: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x223330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223334: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x223334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223338: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x223338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x22333c: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x22333cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223340: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x223340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223344: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x223344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x223348: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x223348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22334c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x22334cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223350: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x223350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223354: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x223354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x223358: 0x4be829bc  vmulax.xyzw $ACC, $vf5, $vf8x
    ctx->pc = 0x223358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x22335c: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x22335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x223360: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x223360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223364: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x223364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x223368: 0x4be8210b  vmaddw.xyzw $vf4, $vf4, $vf8w
    ctx->pc = 0x223368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x22336c: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x22336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223370: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x223370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223378: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x223378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x22337c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223380: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x223380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x223384: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x223384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223388: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x223388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x22338c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x22338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223390: 0xf8e30020  sqc2        $vf3, 0x20($a3)
    ctx->pc = 0x223390u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223394: 0xdfc5bdf8  ld          $a1, -0x4208($fp)
    ctx->pc = 0x223394u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 4294950392)));
    // 0x223398: 0x84e30060  lh          $v1, 0x60($a3)
    ctx->pc = 0x223398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x22339c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x22339cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2233a0: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x2233a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x2233a4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2233a4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2233a8: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x2233a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x2233ac: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x2233acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x2233b0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2233b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233b4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2233b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2233b8: 0x7ce20040  sq          $v0, 0x40($a3)
    ctx->pc = 0x2233b8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 2));
    // 0x2233bc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2233bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2233c0: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x2233c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x2233c4: 0xffc5bdf8  sd          $a1, -0x4208($fp)
    ctx->pc = 0x2233c4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294950392), GPR_U64(ctx, 5));
    // 0x2233c8: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x2233c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2233cc: 0xc04c518  jal         func_131460
    ctx->pc = 0x2233CCu;
    SET_GPR_U32(ctx, 31, 0x2233D4u);
    ctx->pc = 0x2233D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2233CCu;
            // 0x2233d0: 0xfce30068  sd          $v1, 0x68($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233D4u; }
        if (ctx->pc != 0x2233D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233D4u; }
        if (ctx->pc != 0x2233D4u) { return; }
    }
    ctx->pc = 0x2233D4u;
    // 0x2233d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2233D4u;
    {
        const bool branch_taken_0x2233d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2233D4u;
            // 0x2233d8: 0x7ba20170  lq          $v0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233d4) {
            ctx->pc = 0x223410u;
            goto label_223410;
        }
    }
    ctx->pc = 0x2233DCu;
    // 0x2233dc: 0x0  nop
    ctx->pc = 0x2233dcu;
    // NOP
label_2233e0:
    // 0x2233e0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2233e4: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x2233e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2233e8: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x2233e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x2233ec: 0x7a660020  lq          $a2, 0x20($s3)
    ctx->pc = 0x2233ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2233f0: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x2233f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2233f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2233f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2233f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2233fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2233fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223400: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x223400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223404: 0xc088312  jal         func_220C48
    ctx->pc = 0x223404u;
    SET_GPR_U32(ctx, 31, 0x22340Cu);
    ctx->pc = 0x223408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223404u;
            // 0x223408: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22340Cu; }
        if (ctx->pc != 0x22340Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22340Cu; }
        if (ctx->pc != 0x22340Cu) { return; }
    }
    ctx->pc = 0x22340Cu;
label_22340c:
    // 0x22340c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x22340cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_223410:
    // 0x223410: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x223410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223418: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x223418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22341c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x22341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x223420: 0xc088e44  jal         func_223910
    ctx->pc = 0x223420u;
    SET_GPR_U32(ctx, 31, 0x223428u);
    ctx->pc = 0x223424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223420u;
            // 0x223424: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223910u;
    if (runtime->hasFunction(0x223910u)) {
        auto targetFn = runtime->lookupFunction(0x223910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223428u; }
        if (ctx->pc != 0x223428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223910_0x223910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223428u; }
        if (ctx->pc != 0x223428u) { return; }
    }
    ctx->pc = 0x223428u;
    // 0x223428: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x223428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22342c: 0x12c00098  beqz        $s6, . + 4 + (0x98 << 2)
    ctx->pc = 0x22342Cu;
    {
        const bool branch_taken_0x22342c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x223430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22342Cu;
            // 0x223430: 0x7e620030  sq          $v0, 0x30($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22342c) {
            ctx->pc = 0x223690u;
            goto label_223690;
        }
    }
    ctx->pc = 0x223434u;
    // 0x223434: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x223434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x223438: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x223438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x22343c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x22343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x223440: 0x40f809  jalr        $v0
    ctx->pc = 0x223440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223448u);
        ctx->pc = 0x223444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223440u;
            // 0x223444: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223448u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223448u; }
            if (ctx->pc != 0x223448u) { return; }
        }
        }
    }
    ctx->pc = 0x223448u;
    // 0x223448: 0x50400092  beql        $v0, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x223448u;
    {
        const bool branch_taken_0x223448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223448) {
            ctx->pc = 0x22344Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223448u;
            // 0x22344c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223694u;
            goto label_223694;
        }
    }
    ctx->pc = 0x223450u;
    // 0x223450: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x223450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x223454: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x223458: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x22345c: 0x40f809  jalr        $v0
    ctx->pc = 0x22345Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223464u);
        ctx->pc = 0x223460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22345Cu;
            // 0x223460: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223464u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223464u; }
            if (ctx->pc != 0x223464u) { return; }
        }
        }
    }
    ctx->pc = 0x223464u;
    // 0x223464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223468: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x223468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x22346c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22346Cu;
    {
        const bool branch_taken_0x22346c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22346Cu;
            // 0x223470: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22346c) {
            ctx->pc = 0x223490u;
            goto label_223490;
        }
    }
    ctx->pc = 0x223474u;
    // 0x223474: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x223474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x223478: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x22347c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22347Cu;
    {
        const bool branch_taken_0x22347c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22347Cu;
            // 0x223480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22347c) {
            ctx->pc = 0x223494u;
            goto label_223494;
        }
    }
    ctx->pc = 0x223484u;
    // 0x223484: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x223484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x223488: 0xc081522  jal         func_205488
    ctx->pc = 0x223488u;
    SET_GPR_U32(ctx, 31, 0x223490u);
    ctx->pc = 0x22348Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223488u;
            // 0x22348c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223490u; }
        if (ctx->pc != 0x223490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223490u; }
        if (ctx->pc != 0x223490u) { return; }
    }
    ctx->pc = 0x223490u;
label_223490:
    // 0x223490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223494:
    // 0x223494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x223494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223498: 0xc090d5c  jal         func_243570
    ctx->pc = 0x223498u;
    SET_GPR_U32(ctx, 31, 0x2234A0u);
    ctx->pc = 0x22349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223498u;
            // 0x22349c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234A0u; }
        if (ctx->pc != 0x2234A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234A0u; }
        if (ctx->pc != 0x2234A0u) { return; }
    }
    ctx->pc = 0x2234A0u;
    // 0x2234a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2234A0u;
    {
        const bool branch_taken_0x2234a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2234a0) {
            ctx->pc = 0x2234A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2234A0u;
            // 0x2234a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2234B8u;
            goto label_2234b8;
        }
    }
    ctx->pc = 0x2234A8u;
    // 0x2234a8: 0xc06f9e8  jal         func_1BE7A0
    ctx->pc = 0x2234A8u;
    SET_GPR_U32(ctx, 31, 0x2234B0u);
    ctx->pc = 0x1BE7A0u;
    if (runtime->hasFunction(0x1BE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234B0u; }
        if (ctx->pc != 0x2234B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1be7a0_0x1be7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234B0u; }
        if (ctx->pc != 0x2234B0u) { return; }
    }
    ctx->pc = 0x2234B0u;
    // 0x2234b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2234B0u;
    {
        const bool branch_taken_0x2234b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2234b0) {
            ctx->pc = 0x2234B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2234B0u;
            // 0x2234b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2234B8u;
            goto label_2234b8;
        }
    }
    ctx->pc = 0x2234B8u;
label_2234b8:
    // 0x2234b8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2234B8u;
    {
        const bool branch_taken_0x2234b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2234b8) {
            ctx->pc = 0x2234D4u;
            goto label_2234d4;
        }
    }
    ctx->pc = 0x2234C0u;
    // 0x2234c0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2234c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2234c4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2234c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2234c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2234c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2234cc: 0x50400071  beql        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x2234CCu;
    {
        const bool branch_taken_0x2234cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2234cc) {
            ctx->pc = 0x2234D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2234CCu;
            // 0x2234d0: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223694u;
            goto label_223694;
        }
    }
    ctx->pc = 0x2234D4u;
label_2234d4:
    // 0x2234d4: 0xc088f00  jal         func_223C00
    ctx->pc = 0x2234D4u;
    SET_GPR_U32(ctx, 31, 0x2234DCu);
    ctx->pc = 0x2234D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2234D4u;
            // 0x2234d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223C00u;
    if (runtime->hasFunction(0x223C00u)) {
        auto targetFn = runtime->lookupFunction(0x223C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234DCu; }
        if (ctx->pc != 0x2234DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223C00_0x223c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234DCu; }
        if (ctx->pc != 0x2234DCu) { return; }
    }
    ctx->pc = 0x2234DCu;
    // 0x2234dc: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2234dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2234e0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2234e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2234e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2234E4u;
    {
        const bool branch_taken_0x2234e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2234E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2234E4u;
            // 0x2234e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234e4) {
            ctx->pc = 0x22351Cu;
            goto label_22351c;
        }
    }
    ctx->pc = 0x2234ECu;
    // 0x2234ec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2234f0: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x2234f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x2234f4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2234f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2234f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2234f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2234fc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2234fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x223500: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x223500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x223504: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x223504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x223508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22350c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22350Cu;
    {
        const bool branch_taken_0x22350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x223510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22350Cu;
            // 0x223510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22350c) {
            ctx->pc = 0x223518u;
            goto label_223518;
        }
    }
    ctx->pc = 0x223514u;
    // 0x223514: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x223514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_223518:
    // 0x223518: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x223518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22351c:
    // 0x22351c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22351Cu;
    {
        const bool branch_taken_0x22351c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22351c) {
            ctx->pc = 0x223520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22351Cu;
            // 0x223520: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223540u;
            goto label_223540;
        }
    }
    ctx->pc = 0x223524u;
    // 0x223524: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x223524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x223528: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223528u;
    {
        const bool branch_taken_0x223528 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x223528) {
            ctx->pc = 0x22352Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223528u;
            // 0x22352c: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223540u;
            goto label_223540;
        }
    }
    ctx->pc = 0x223530u;
    // 0x223530: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x223530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x223534: 0xc076a7e  jal         func_1DA9F8
    ctx->pc = 0x223534u;
    SET_GPR_U32(ctx, 31, 0x22353Cu);
    ctx->pc = 0x223538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223534u;
            // 0x223538: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA9F8u;
    if (runtime->hasFunction(0x1DA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22353Cu; }
        if (ctx->pc != 0x22353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1da9f8_0x1daa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22353Cu; }
        if (ctx->pc != 0x22353Cu) { return; }
    }
    ctx->pc = 0x22353Cu;
    // 0x22353c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x22353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_223540:
    // 0x223540: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x223540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223544: 0xc44c016c  lwc1        $f12, 0x16C($v0)
    ctx->pc = 0x223544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x223548: 0x8445015c  lh          $a1, 0x15C($v0)
    ctx->pc = 0x223548u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x22354c: 0x84460160  lh          $a2, 0x160($v0)
    ctx->pc = 0x22354cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x223550: 0x84470168  lh          $a3, 0x168($v0)
    ctx->pc = 0x223550u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x223554: 0xc06552a  jal         func_1954A8
    ctx->pc = 0x223554u;
    SET_GPR_U32(ctx, 31, 0x22355Cu);
    ctx->pc = 0x223558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223554u;
            // 0x223558: 0x84440164  lh          $a0, 0x164($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1954A8u;
    if (runtime->hasFunction(0x1954A8u)) {
        auto targetFn = runtime->lookupFunction(0x1954A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22355Cu; }
        if (ctx->pc != 0x22355Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001954A8_0x1954a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22355Cu; }
        if (ctx->pc != 0x22355Cu) { return; }
    }
    ctx->pc = 0x22355Cu;
    // 0x22355c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x22355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x223560: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x223560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x223564: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x223564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x223568: 0x40f809  jalr        $v0
    ctx->pc = 0x223568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223570u);
        ctx->pc = 0x22356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223568u;
            // 0x22356c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223570u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223570u; }
            if (ctx->pc != 0x223570u) { return; }
        }
        }
    }
    ctx->pc = 0x223570u;
    // 0x223570: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x223570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223578: 0x7a480010  lq          $t0, 0x10($s2)
    ctx->pc = 0x223578u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22357c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223580: 0x8462003a  lh          $v0, 0x3A($v1)
    ctx->pc = 0x223580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x223584: 0x24670170  addiu       $a3, $v1, 0x170
    ctx->pc = 0x223584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x223588: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x223588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x22358c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x22358cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223590: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x223590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223594: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x223594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x223598: 0xc080e84  jal         func_203A10
    ctx->pc = 0x223598u;
    SET_GPR_U32(ctx, 31, 0x2235A0u);
    ctx->pc = 0x22359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223598u;
            // 0x22359c: 0x8e490038  lw          $t1, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203A10u;
    if (runtime->hasFunction(0x203A10u)) {
        auto targetFn = runtime->lookupFunction(0x203A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235A0u; }
        if (ctx->pc != 0x2235A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203A10_0x203a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235A0u; }
        if (ctx->pc != 0x2235A0u) { return; }
    }
    ctx->pc = 0x2235A0u;
    // 0x2235a0: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x2235a0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x2235a4: 0xc6c10178  lwc1        $f1, 0x178($s6)
    ctx->pc = 0x2235a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2235a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2235a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2235ac: 0x46140868  max.s       $f1, $f1, $f20
    ctx->pc = 0x2235acu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[20]);
    // 0x2235b0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2235b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2235b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2235b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2235b8: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x2235b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2235bc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2235bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2235c0: 0x2404040f  addiu       $a0, $zero, 0x40F
    ctx->pc = 0x2235c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x2235c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2235c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235c8: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x2235C8u;
    SET_GPR_U32(ctx, 31, 0x2235D0u);
    ctx->pc = 0x2235CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2235C8u;
            // 0x2235cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235D0u; }
        if (ctx->pc != 0x2235D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2235D0u; }
        if (ctx->pc != 0x2235D0u) { return; }
    }
    ctx->pc = 0x2235D0u;
    // 0x2235d0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2235d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2235d4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2235D4u;
    {
        const bool branch_taken_0x2235d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2235d4) {
            ctx->pc = 0x2235D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2235D4u;
            // 0x2235d8: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223610u;
            goto label_223610;
        }
    }
    ctx->pc = 0x2235DCu;
    // 0x2235dc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2235dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x2235e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2235e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2235e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2235E4u;
    {
        const bool branch_taken_0x2235e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2235E4u;
            // 0x2235e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235e4) {
            ctx->pc = 0x22360Cu;
            goto label_22360c;
        }
    }
    ctx->pc = 0x2235ECu;
    // 0x2235ec: 0xc6c00178  lwc1        $f0, 0x178($s6)
    ctx->pc = 0x2235ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2235f0: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x2235f0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x2235f4: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x2235f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2235f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2235f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2235fc: 0x240403fc  addiu       $a0, $zero, 0x3FC
    ctx->pc = 0x2235fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x223600: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x223600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x223604: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x223604u;
    SET_GPR_U32(ctx, 31, 0x22360Cu);
    ctx->pc = 0x223608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223604u;
            // 0x223608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22360Cu; }
        if (ctx->pc != 0x22360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22360Cu; }
        if (ctx->pc != 0x22360Cu) { return; }
    }
    ctx->pc = 0x22360Cu;
label_22360c:
    // 0x22360c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x22360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_223610:
    // 0x223610: 0x84450186  lh          $a1, 0x186($v0)
    ctx->pc = 0x223610u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 390)));
    // 0x223614: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x223614u;
    {
        const bool branch_taken_0x223614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x223618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223614u;
            // 0x223618: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223614) {
            ctx->pc = 0x2236C8u;
            goto label_2236c8;
        }
    }
    ctx->pc = 0x22361Cu;
    // 0x22361c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223620: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x223620u;
    SET_GPR_U32(ctx, 31, 0x223628u);
    ctx->pc = 0x223624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223620u;
            // 0x223624: 0x8c441184  lw          $a0, 0x1184($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223628u; }
        if (ctx->pc != 0x223628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223628u; }
        if (ctx->pc != 0x223628u) { return; }
    }
    ctx->pc = 0x223628u;
    // 0x223628: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x223628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22362c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22362cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223630: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x223630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x223634: 0xdba101a0  lqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x223634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x223638: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x223638u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22363c: 0xfba301c0  sqc2        $vf3, 0x1C0($sp)
    ctx->pc = 0x22363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x223640: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223644: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x223644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x223648: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x223648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22364c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x22364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223650: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x223650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x223654: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x223654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x223658: 0x40f809  jalr        $v0
    ctx->pc = 0x223658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223660u);
        ctx->pc = 0x22365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223658u;
            // 0x22365c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223660u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223660u; }
            if (ctx->pc != 0x223660u) { return; }
        }
        }
    }
    ctx->pc = 0x223660u;
    // 0x223660: 0x8c470088  lw          $a3, 0x88($v0)
    ctx->pc = 0x223660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x223664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223668: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x223668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22366c: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x22366cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x223670: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223674: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223678: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x223678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22367c: 0xc088312  jal         func_220C48
    ctx->pc = 0x22367Cu;
    SET_GPR_U32(ctx, 31, 0x223684u);
    ctx->pc = 0x223680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22367Cu;
            // 0x223680: 0x7ba601c0  lq          $a2, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223684u; }
        if (ctx->pc != 0x223684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223684u; }
        if (ctx->pc != 0x223684u) { return; }
    }
    ctx->pc = 0x223684u;
    // 0x223684: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x223684u;
    {
        const bool branch_taken_0x223684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223684u;
            // 0x223688: 0x8e450048  lw          $a1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223684) {
            ctx->pc = 0x2236CCu;
            goto label_2236cc;
        }
    }
    ctx->pc = 0x22368Cu;
    // 0x22368c: 0x0  nop
    ctx->pc = 0x22368cu;
    // NOP
label_223690:
    // 0x223690: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x223690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_223694:
    // 0x223694: 0x240303fc  addiu       $v1, $zero, 0x3FC
    ctx->pc = 0x223694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x223698: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22369c: 0x8442003a  lh          $v0, 0x3A($v0)
    ctx->pc = 0x22369cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x2236a0: 0xa7a30110  sh          $v1, 0x110($sp)
    ctx->pc = 0x2236a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 3));
    // 0x2236a4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2236a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2236a8: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2236a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x2236ac: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2236acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2236b0: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2236b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2236b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2236b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x2236b8: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x2236b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x2236bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2236bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236c0: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x2236C0u;
    SET_GPR_U32(ctx, 31, 0x2236C8u);
    ctx->pc = 0x2236C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2236C0u;
            // 0x2236c4: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236C8u; }
        if (ctx->pc != 0x2236C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2236C8u; }
        if (ctx->pc != 0x2236C8u) { return; }
    }
    ctx->pc = 0x2236C8u;
label_2236c8:
    // 0x2236c8: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x2236c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_2236cc:
    // 0x2236cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2236ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2236d0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2236d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2236d4: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x2236d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2236d8: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x2236d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x2236dc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2236dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2236e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2236e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2236e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2236e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2236e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2236e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2236ec: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2236ECu;
    {
        const bool branch_taken_0x2236ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2236F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2236ECu;
            // 0x2236f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236ec) {
            ctx->pc = 0x2236F8u;
            goto label_2236f8;
        }
    }
    ctx->pc = 0x2236F4u;
    // 0x2236f4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2236f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2236f8:
    // 0x2236f8: 0x50c00074  beql        $a2, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x2236F8u;
    {
        const bool branch_taken_0x2236f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2236f8) {
            ctx->pc = 0x2236FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2236F8u;
            // 0x2236fc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2238CCu;
            goto label_2238cc;
        }
    }
    ctx->pc = 0x223700u;
    // 0x223700: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x223700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x223704: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x223704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x223708: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x223708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x22370c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x22370Cu;
    {
        const bool branch_taken_0x22370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22370Cu;
            // 0x223710: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22370c) {
            ctx->pc = 0x2238C8u;
            goto label_2238c8;
        }
    }
    ctx->pc = 0x223714u;
    // 0x223714: 0x0  nop
    ctx->pc = 0x223714u;
    // NOP
label_223718:
    // 0x223718: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x223718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x22371c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x22371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x223720: 0x7ba80170  lq          $t0, 0x170($sp)
    ctx->pc = 0x223720u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x223724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x223724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223728: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x223728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22372c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22372cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223730: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x223730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x223734: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x223734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223738: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x223738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x22373c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x22373cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x223740: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x223740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x223744: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x223744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223748: 0x7fa80160  sq          $t0, 0x160($sp)
    ctx->pc = 0x223748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 8));
    // 0x22374c: 0xc088e44  jal         func_223910
    ctx->pc = 0x22374Cu;
    SET_GPR_U32(ctx, 31, 0x223754u);
    ctx->pc = 0x223750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22374Cu;
            // 0x223750: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223910u;
    if (runtime->hasFunction(0x223910u)) {
        auto targetFn = runtime->lookupFunction(0x223910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223754u; }
        if (ctx->pc != 0x223754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223910_0x223910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223754u; }
        if (ctx->pc != 0x223754u) { return; }
    }
    ctx->pc = 0x223754u;
    // 0x223754: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x223754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x223758: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x223758u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22375c: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x22375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x223760: 0x7a660020  lq          $a2, 0x20($s3)
    ctx->pc = 0x223760u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x223764: 0x8c470028  lw          $a3, 0x28($v0)
    ctx->pc = 0x223764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x223768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22376c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223778: 0xc088312  jal         func_220C48
    ctx->pc = 0x223778u;
    SET_GPR_U32(ctx, 31, 0x223780u);
    ctx->pc = 0x22377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223778u;
            // 0x22377c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220C48u;
    if (runtime->hasFunction(0x220C48u)) {
        auto targetFn = runtime->lookupFunction(0x220C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223780u; }
        if (ctx->pc != 0x223780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220C48_0x220c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223780u; }
        if (ctx->pc != 0x223780u) { return; }
    }
    ctx->pc = 0x223780u;
    // 0x223780: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x223780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x223784: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x223784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x223788: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x223788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22378c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223790: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x223790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x223794: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x223794u;
    {
        const bool branch_taken_0x223794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223794) {
            ctx->pc = 0x223798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223794u;
            // 0x223798: 0x8e450048  lw          $a1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223878u;
            goto label_223878;
        }
    }
    ctx->pc = 0x22379Cu;
    // 0x22379c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2237a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2237a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2237a4: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2237A4u;
    {
        const bool branch_taken_0x2237a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2237A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2237A4u;
            // 0x2237a8: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237a4) {
            ctx->pc = 0x2238DCu;
            goto label_2238dc;
        }
    }
    ctx->pc = 0x2237ACu;
    // 0x2237ac: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x2237b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2237b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2237b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2237b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2237b8: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x2237b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2237bc: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x2237bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2237c0: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x2237c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2237c4: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x2237c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2237c8: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x2237c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2237cc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2237ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2237d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2237d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2237d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2237d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2237d8: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x2237d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2237dc: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x2237dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x2237e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2237e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2237e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2237e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2237e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2237e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2237ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2237ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2237f0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2237F0u;
    {
        const bool branch_taken_0x2237f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2237F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2237F0u;
            // 0x2237f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237f0) {
            ctx->pc = 0x223800u;
            goto label_223800;
        }
    }
    ctx->pc = 0x2237F8u;
    // 0x2237f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2237f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2237fc: 0x0  nop
    ctx->pc = 0x2237fcu;
    // NOP
label_223800:
    // 0x223800: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x223800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223804: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x223804u;
    {
        const bool branch_taken_0x223804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223804) {
            ctx->pc = 0x223808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223804u;
            // 0x223808: 0x8e42004c  lw          $v0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223820u;
            goto label_223820;
        }
    }
    ctx->pc = 0x22380Cu;
    // 0x22380c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223810: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x223810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x223814: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x223814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x223818: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x223818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x22381c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x22381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_223820:
    // 0x223820: 0x8042006c  lb          $v0, 0x6C($v0)
    ctx->pc = 0x223820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x223824: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x223824u;
    {
        const bool branch_taken_0x223824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223824) {
            ctx->pc = 0x223828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223824u;
            // 0x223828: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2238D8u;
            goto label_2238d8;
        }
    }
    ctx->pc = 0x22382Cu;
    // 0x22382c: 0xc089960  jal         func_226580
    ctx->pc = 0x22382Cu;
    SET_GPR_U32(ctx, 31, 0x223834u);
    ctx->pc = 0x223830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22382Cu;
            // 0x223830: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223834u; }
        if (ctx->pc != 0x223834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223834u; }
        if (ctx->pc != 0x223834u) { return; }
    }
    ctx->pc = 0x223834u;
    // 0x223834: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x223834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x223838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x223838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22383c: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x22383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x223840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223844: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x223844u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x223848: 0x2409fffd  addiu       $t1, $zero, -0x3
    ctx->pc = 0x223848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x22384c: 0x78660050  lq          $a2, 0x50($v1)
    ctx->pc = 0x22384cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x223850: 0xc089a7e  jal         func_2269F8
    ctx->pc = 0x223850u;
    SET_GPR_U32(ctx, 31, 0x223858u);
    ctx->pc = 0x223854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223850u;
            // 0x223854: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2269F8u;
    if (runtime->hasFunction(0x2269F8u)) {
        auto targetFn = runtime->lookupFunction(0x2269F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223858u; }
        if (ctx->pc != 0x223858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002269F8_0x2269f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223858u; }
        if (ctx->pc != 0x223858u) { return; }
    }
    ctx->pc = 0x223858u;
    // 0x223858: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22385c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223860: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223860u;
    {
        const bool branch_taken_0x223860 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x223860) {
            ctx->pc = 0x223864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223860u;
            // 0x223864: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x223868u;
    // 0x223868: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x223868u;
    {
        const bool branch_taken_0x223868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223868u;
            // 0x22386c: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223868) {
            ctx->pc = 0x2238D8u;
            goto label_2238d8;
        }
    }
    ctx->pc = 0x223870u;
label_223870:
    // 0x223870: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x223870u;
    {
        const bool branch_taken_0x223870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223870u;
            // 0x223874: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223870) {
            ctx->pc = 0x2238D8u;
            goto label_2238d8;
        }
    }
    ctx->pc = 0x223878u;
label_223878:
    // 0x223878: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x223878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22387c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x223880: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x223880u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x223884: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x223884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x223888: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x223888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22388c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x223890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223898: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x223898u;
    {
        const bool branch_taken_0x223898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223898u;
            // 0x22389c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223898) {
            ctx->pc = 0x2238A4u;
            goto label_2238a4;
        }
    }
    ctx->pc = 0x2238A0u;
    // 0x2238a0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2238a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2238a4:
    // 0x2238a4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2238A4u;
    {
        const bool branch_taken_0x2238a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2238A4u;
            // 0x2238a8: 0x7ba20170  lq          $v0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238a4) {
            ctx->pc = 0x2238C0u;
            goto label_2238c0;
        }
    }
    ctx->pc = 0x2238ACu;
    // 0x2238ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2238acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2238b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2238b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2238b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2238b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2238b8: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x2238b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x2238bc: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x2238bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2238c0:
    // 0x2238c0: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x2238c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x2238c4: 0x0  nop
    ctx->pc = 0x2238c4u;
    // NOP
label_2238c8:
    // 0x2238c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2238cc:
    // 0x2238cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2238ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2238d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2238d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2238d4: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2238d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_2238d8:
    // 0x2238d8: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x2238d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_2238dc:
    // 0x2238dc: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x2238dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2238e0: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x2238e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2238e4: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x2238e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2238e8: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x2238e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2238ec: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x2238ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2238f0: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x2238f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2238f4: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x2238f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2238f8: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x2238f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2238fc: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x2238fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x223900: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x223900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223904: 0x3e00008  jr          $ra
    ctx->pc = 0x223904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223904u;
            // 0x223908: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222DA8u: goto label_222da8;
            case 0x222DC0u: goto label_222dc0;
            case 0x222DF4u: goto label_222df4;
            case 0x222E04u: goto label_222e04;
            case 0x222E38u: goto label_222e38;
            case 0x222E60u: goto label_222e60;
            case 0x222E94u: goto label_222e94;
            case 0x222E98u: goto label_222e98;
            case 0x222E9Cu: goto label_222e9c;
            case 0x222EA0u: goto label_222ea0;
            case 0x222ED0u: goto label_222ed0;
            case 0x222EDCu: goto label_222edc;
            case 0x222F00u: goto label_222f00;
            case 0x222F64u: goto label_222f64;
            case 0x222F68u: goto label_222f68;
            case 0x222F6Cu: goto label_222f6c;
            case 0x222FB8u: goto label_222fb8;
            case 0x222FE4u: goto label_222fe4;
            case 0x222FECu: goto label_222fec;
            case 0x2230C0u: goto label_2230c0;
            case 0x223100u: goto label_223100;
            case 0x223148u: goto label_223148;
            case 0x223158u: goto label_223158;
            case 0x2231F8u: goto label_2231f8;
            case 0x223228u: goto label_223228;
            case 0x2232A4u: goto label_2232a4;
            case 0x2233E0u: goto label_2233e0;
            case 0x22340Cu: goto label_22340c;
            case 0x223410u: goto label_223410;
            case 0x223490u: goto label_223490;
            case 0x223494u: goto label_223494;
            case 0x2234B8u: goto label_2234b8;
            case 0x2234D4u: goto label_2234d4;
            case 0x223518u: goto label_223518;
            case 0x22351Cu: goto label_22351c;
            case 0x223540u: goto label_223540;
            case 0x22360Cu: goto label_22360c;
            case 0x223610u: goto label_223610;
            case 0x223690u: goto label_223690;
            case 0x223694u: goto label_223694;
            case 0x2236C8u: goto label_2236c8;
            case 0x2236CCu: goto label_2236cc;
            case 0x2236F8u: goto label_2236f8;
            case 0x223718u: goto label_223718;
            case 0x223800u: goto label_223800;
            case 0x223820u: goto label_223820;
            case 0x223870u: goto label_223870;
            case 0x223878u: goto label_223878;
            case 0x2238A4u: goto label_2238a4;
            case 0x2238C0u: goto label_2238c0;
            case 0x2238C8u: goto label_2238c8;
            case 0x2238CCu: goto label_2238cc;
            case 0x2238D8u: goto label_2238d8;
            case 0x2238DCu: goto label_2238dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22390Cu;
    // 0x22390c: 0x0  nop
    ctx->pc = 0x22390cu;
    // NOP
}
