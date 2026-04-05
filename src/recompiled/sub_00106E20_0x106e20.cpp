#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106E20
// Address: 0x106e20 - 0x107008
void sub_00106E20_0x106e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106E20_0x106e20");
#endif

    ctx->pc = 0x106e20u;

    // 0x106e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x106e24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x106e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e28: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x106e28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x106e2c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x106e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x106e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x106e34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x106e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x106e38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x106e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x106e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x106e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x106e40: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x106e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x106e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106e48: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x106e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x106e4c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x106e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106e50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x106e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x106e54: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x106e54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x106e58: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x106E58u;
    {
        const bool branch_taken_0x106e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E58u;
            // 0x106e5c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e58) {
            ctx->pc = 0x106ED0u;
            goto label_106ed0;
        }
    }
    ctx->pc = 0x106E60u;
label_106e60:
    // 0x106e60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x106e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x106e64: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x106e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106e68: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x106e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x106e6c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x106e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x106e70: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x106e70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x106e74: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x106e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x106e78: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x106E78u;
    {
        const bool branch_taken_0x106e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106e78) {
            ctx->pc = 0x106E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106E78u;
            // 0x106e7c: 0x94e20012  lhu         $v0, 0x12($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106EC0u;
            goto label_106ec0;
        }
    }
    ctx->pc = 0x106E80u;
    // 0x106e80: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x106e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x106e84: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x106e84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x106e88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x106e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x106e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x106e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x106e90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x106E90u;
    {
        const bool branch_taken_0x106e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E90u;
            // 0x106e94: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e90) {
            ctx->pc = 0x106ED0u;
            goto label_106ed0;
        }
    }
    ctx->pc = 0x106E98u;
    // 0x106e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106E98u;
    {
        const bool branch_taken_0x106e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E98u;
            // 0x106e9c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e98) {
            ctx->pc = 0x106EB0u;
            goto label_106eb0;
        }
    }
    ctx->pc = 0x106EA0u;
    // 0x106ea0: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x106EA0u;
    {
        const bool branch_taken_0x106ea0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x106ea0) {
            ctx->pc = 0x106EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106EA0u;
            // 0x106ea4: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106EB0u;
            goto label_106eb0;
        }
    }
    ctx->pc = 0x106EA8u;
    // 0x106ea8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x106ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x106eac: 0x0  nop
    ctx->pc = 0x106eacu;
    // NOP
label_106eb0:
    // 0x106eb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x106eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x106eb4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x106eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x106eb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x106EB8u;
    {
        const bool branch_taken_0x106eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106EB8u;
            // 0x106ebc: 0xc29821  addu        $s3, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106eb8) {
            ctx->pc = 0x106ED8u;
            goto label_106ed8;
        }
    }
    ctx->pc = 0x106EC0u;
label_106ec0:
    // 0x106ec0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x106ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x106ec4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x106ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106ec8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x106EC8u;
    {
        const bool branch_taken_0x106ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106EC8u;
            // 0x106ecc: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ec8) {
            ctx->pc = 0x106E60u;
            runtime->cooperativeGuestYield();
            goto label_106e60;
        }
    }
    ctx->pc = 0x106ED0u;
label_106ed0:
    // 0x106ed0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x106ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ed4: 0x0  nop
    ctx->pc = 0x106ed4u;
    // NOP
label_106ed8:
    // 0x106ed8: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x106ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x106edc: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x106edcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x106ee0: 0x12340040  beq         $s1, $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x106EE0u;
    {
        const bool branch_taken_0x106ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x106EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106EE0u;
            // 0x106ee4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ee0) {
            ctx->pc = 0x106FE4u;
            goto label_106fe4;
        }
    }
    ctx->pc = 0x106EE8u;
    // 0x106ee8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x106ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x106eec: 0x0  nop
    ctx->pc = 0x106eecu;
    // NOP
label_106ef0:
    // 0x106ef0: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x106ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x106ef4: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x106EF4u;
    {
        const bool branch_taken_0x106ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106ef4) {
            ctx->pc = 0x106EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106EF4u;
            // 0x106ef8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106EFCu;
    // 0x106efc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x106efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x106f00: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x106F00u;
    {
        const bool branch_taken_0x106f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F00u;
            // 0x106f04: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f00) {
            ctx->pc = 0x106F6Cu;
            goto label_106f6c;
        }
    }
    ctx->pc = 0x106F08u;
    // 0x106f08: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x106f08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106f0c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x106f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106f10: 0x52120031  beql        $s0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x106F10u;
    {
        const bool branch_taken_0x106f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x106f10) {
            ctx->pc = 0x106F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F10u;
            // 0x106f14: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106F18u;
    // 0x106f18: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x106f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x106f1c: 0x0  nop
    ctx->pc = 0x106f1cu;
    // NOP
label_106f20:
    // 0x106f20: 0x5453000e  bnel        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x106F20u;
    {
        const bool branch_taken_0x106f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x106f20) {
            ctx->pc = 0x106F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F20u;
            // 0x106f24: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F5Cu;
            goto label_106f5c;
        }
    }
    ctx->pc = 0x106F28u;
    // 0x106f28: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x106f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x106f2c: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x106f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x106f30: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x106F30u;
    {
        const bool branch_taken_0x106f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106f30) {
            ctx->pc = 0x106F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F30u;
            // 0x106f34: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F5Cu;
            goto label_106f5c;
        }
    }
    ctx->pc = 0x106F38u;
    // 0x106f38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x106f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106f3c: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106F3Cu;
    {
        const bool branch_taken_0x106f3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x106f3c) {
            ctx->pc = 0x106F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F3Cu;
            // 0x106f40: 0xc674001c  lwc1        $f20, 0x1C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F44u;
            goto label_106f44;
        }
    }
    ctx->pc = 0x106F44u;
label_106f44:
    // 0x106f44: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x106F44u;
    SET_GPR_U32(ctx, 31, 0x106F4Cu);
    ctx->pc = 0x106F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106F44u;
            // 0x106f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F4Cu; }
        if (ctx->pc != 0x106F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F4Cu; }
        if (ctx->pc != 0x106F4Cu) { return; }
    }
    ctx->pc = 0x106F4Cu;
    // 0x106f4c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x106f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x106f50: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x106f50u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x106f54: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x106f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x106f58: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x106f58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106f5c:
    // 0x106f5c: 0x5612fff0  bnel        $s0, $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x106F5Cu;
    {
        const bool branch_taken_0x106f5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x106f5c) {
            ctx->pc = 0x106F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F5Cu;
            // 0x106f60: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F20u;
            runtime->cooperativeGuestYield();
            goto label_106f20;
        }
    }
    ctx->pc = 0x106F64u;
    // 0x106f64: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x106F64u;
    {
        const bool branch_taken_0x106f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F64u;
            // 0x106f68: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f64) {
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106F6Cu;
label_106f6c:
    // 0x106f6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x106f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x106f70: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x106F70u;
    {
        const bool branch_taken_0x106f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F70u;
            // 0x106f74: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f70) {
            ctx->pc = 0x106FD4u;
            goto label_106fd4;
        }
    }
    ctx->pc = 0x106F78u;
    // 0x106f78: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x106f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x106f7c: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x106F7Cu;
    {
        const bool branch_taken_0x106f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106f7c) {
            ctx->pc = 0x106F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F7Cu;
            // 0x106f80: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106F84u;
    // 0x106f84: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x106f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x106f88: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x106f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106f8c: 0x52120012  beql        $s0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x106F8Cu;
    {
        const bool branch_taken_0x106f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x106f8c) {
            ctx->pc = 0x106F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F8Cu;
            // 0x106f90: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FD8u;
            goto label_106fd8;
        }
    }
    ctx->pc = 0x106F94u;
    // 0x106f94: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x106f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_106f98:
    // 0x106f98: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x106f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x106f9c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x106F9Cu;
    {
        const bool branch_taken_0x106f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106f9c) {
            ctx->pc = 0x106FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F9Cu;
            // 0x106fa0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FCCu;
            goto label_106fcc;
        }
    }
    ctx->pc = 0x106FA4u;
    // 0x106fa4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x106fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x106fa8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x106fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106fac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106FACu;
    {
        const bool branch_taken_0x106fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106fac) {
            ctx->pc = 0x106FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106FACu;
            // 0x106fb0: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FB4u;
            goto label_106fb4;
        }
    }
    ctx->pc = 0x106FB4u;
label_106fb4:
    // 0x106fb4: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x106FB4u;
    SET_GPR_U32(ctx, 31, 0x106FBCu);
    ctx->pc = 0x106FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106FB4u;
            // 0x106fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106FBCu; }
        if (ctx->pc != 0x106FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106FBCu; }
        if (ctx->pc != 0x106FBCu) { return; }
    }
    ctx->pc = 0x106FBCu;
    // 0x106fbc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x106fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x106fc0: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x106fc0u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x106fc4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x106fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x106fc8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x106fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106fcc:
    // 0x106fcc: 0x5612fff2  bnel        $s0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x106FCCu;
    {
        const bool branch_taken_0x106fcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x106fcc) {
            ctx->pc = 0x106FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106FCCu;
            // 0x106fd0: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F98u;
            runtime->cooperativeGuestYield();
            goto label_106f98;
        }
    }
    ctx->pc = 0x106FD4u;
label_106fd4:
    // 0x106fd4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x106fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106fd8:
    // 0x106fd8: 0x5634ffc5  bnel        $s1, $s4, . + 4 + (-0x3B << 2)
    ctx->pc = 0x106FD8u;
    {
        const bool branch_taken_0x106fd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x106fd8) {
            ctx->pc = 0x106FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106FD8u;
            // 0x106fdc: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106EF0u;
            runtime->cooperativeGuestYield();
            goto label_106ef0;
        }
    }
    ctx->pc = 0x106FE0u;
    // 0x106fe0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x106fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_106fe4:
    // 0x106fe4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x106fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106fe8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x106fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106fec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x106fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106ff0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x106ff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106ff4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106ff8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x106ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x106ffc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x106ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107000: 0x3e00008  jr          $ra
    ctx->pc = 0x107000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107000u;
            // 0x107004: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106E60u: goto label_106e60;
            case 0x106EB0u: goto label_106eb0;
            case 0x106EC0u: goto label_106ec0;
            case 0x106ED0u: goto label_106ed0;
            case 0x106ED8u: goto label_106ed8;
            case 0x106EF0u: goto label_106ef0;
            case 0x106F20u: goto label_106f20;
            case 0x106F44u: goto label_106f44;
            case 0x106F5Cu: goto label_106f5c;
            case 0x106F6Cu: goto label_106f6c;
            case 0x106F98u: goto label_106f98;
            case 0x106FB4u: goto label_106fb4;
            case 0x106FCCu: goto label_106fcc;
            case 0x106FD4u: goto label_106fd4;
            case 0x106FD8u: goto label_106fd8;
            case 0x106FE4u: goto label_106fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107008u;
}
