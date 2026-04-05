#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8FB0
// Address: 0x1e8fb0 - 0x1e9648
void sub_001E8FB0_0x1e8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8FB0_0x1e8fb0");
#endif

    ctx->pc = 0x1e8fb0u;

    // 0x1e8fb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e8fb4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1e8fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1e8fb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1e8fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1e8fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e8fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fc0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e8fc4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e8fc8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1e8fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e8fcc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e8fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8fd0: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e8fd4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x1e8fd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1e8fd8: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1e8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e8fdc: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1e8fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e8fe0: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x1e8fe0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1e8fe4: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e8fe8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x1e8fe8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1e8fec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1e8fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1e8ff0: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x1e8ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1e8ff4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E8FF4u;
    {
        const bool branch_taken_0x1e8ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8FF4u;
            // 0x1e8ff8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ff4) {
            ctx->pc = 0x1E9048u;
            goto label_1e9048;
        }
    }
    ctx->pc = 0x1E8FFCu;
    // 0x1e8ffc: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e9000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9004: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e9004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e9008: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e9008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e900c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9010: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1e9010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e9014: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1e9014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9018: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e9018u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e901c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e901cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9020: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e9020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e9024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9028: 0x0  nop
    ctx->pc = 0x1e9028u;
    // NOP
    // 0x1e902c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E902Cu;
    {
        const bool branch_taken_0x1e902c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e902c) {
            ctx->pc = 0x1E9030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E902Cu;
            // 0x1e9030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9038u;
            goto label_1e9038;
        }
    }
    ctx->pc = 0x1E9034u;
    // 0x1e9034: 0x0  nop
    ctx->pc = 0x1e9034u;
    // NOP
label_1e9038:
    // 0x1e9038: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9038u;
    {
        const bool branch_taken_0x1e9038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E903Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9038u;
            // 0x1e903c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9038) {
            ctx->pc = 0x1E9048u;
            goto label_1e9048;
        }
    }
    ctx->pc = 0x1E9040u;
    // 0x1e9040: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1E9040u;
    SET_GPR_U32(ctx, 31, 0x1E9048u);
    ctx->pc = 0x1E9044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9040u;
            // 0x1e9044: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9048u; }
        if (ctx->pc != 0x1E9048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9048u; }
        if (ctx->pc != 0x1E9048u) { return; }
    }
    ctx->pc = 0x1E9048u;
label_1e9048:
    // 0x1e9048: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1e904c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e9050: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x1E9050u;
    {
        const bool branch_taken_0x1e9050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9050u;
            // 0x1e9054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9050) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9058u;
    // 0x1e9058: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1e9058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e905c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1e905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e9060: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E9060u;
    {
        const bool branch_taken_0x1e9060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9060) {
            ctx->pc = 0x1E9064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9060u;
            // 0x1e9064: 0x8e020324  lw          $v0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E9068u;
    // 0x1e9068: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x1e9068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1e906c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E906Cu;
    {
        const bool branch_taken_0x1e906c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e906c) {
            ctx->pc = 0x1E9070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E906Cu;
            // 0x1e9070: 0x8e020324  lw          $v0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E9074u;
    // 0x1e9074: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1e9074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1e9078: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9078u;
    {
        const bool branch_taken_0x1e9078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9078) {
            ctx->pc = 0x1E907Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9078u;
            // 0x1e907c: 0x8e020324  lw          $v0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E9080u;
    // 0x1e9080: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e9084: 0x5040012f  beql        $v0, $zero, . + 4 + (0x12F << 2)
    ctx->pc = 0x1E9084u;
    {
        const bool branch_taken_0x1e9084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9084) {
            ctx->pc = 0x1E9088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9084u;
            // 0x1e9088: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9544u;
            goto label_1e9544;
        }
    }
    ctx->pc = 0x1E908Cu;
    // 0x1e908c: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9090: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e9090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e9094: 0x5040012b  beql        $v0, $zero, . + 4 + (0x12B << 2)
    ctx->pc = 0x1E9094u;
    {
        const bool branch_taken_0x1e9094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9094) {
            ctx->pc = 0x1E9098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9094u;
            // 0x1e9098: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9544u;
            goto label_1e9544;
        }
    }
    ctx->pc = 0x1E909Cu;
    // 0x1e909c: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x1e909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e90a0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e90a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e90a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e90a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e90a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e90a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e90ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e90acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e90b0: 0x0  nop
    ctx->pc = 0x1e90b0u;
    // NOP
    // 0x1e90b4: 0x45020123  bc1fl       . + 4 + (0x123 << 2)
    ctx->pc = 0x1E90B4u;
    {
        const bool branch_taken_0x1e90b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e90b4) {
            ctx->pc = 0x1E90B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90B4u;
            // 0x1e90b8: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9544u;
            goto label_1e9544;
        }
    }
    ctx->pc = 0x1E90BCu;
    // 0x1e90bc: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1e90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1e90c0:
    // 0x1e90c0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1e90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1e90c4: 0x5440011f  bnel        $v0, $zero, . + 4 + (0x11F << 2)
    ctx->pc = 0x1E90C4u;
    {
        const bool branch_taken_0x1e90c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90c4) {
            ctx->pc = 0x1E90C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90C4u;
            // 0x1e90c8: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9544u;
            goto label_1e9544;
        }
    }
    ctx->pc = 0x1E90CCu;
    // 0x1e90cc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1e90ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1e90d0: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1E90D0u;
    {
        const bool branch_taken_0x1e90d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90D0u;
            // 0x1e90d4: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90d0) {
            ctx->pc = 0x1E92C0u;
            goto label_1e92c0;
        }
    }
    ctx->pc = 0x1E90D8u;
    // 0x1e90d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e90d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e90dc: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x1E90DCu;
    {
        const bool branch_taken_0x1e90dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90dc) {
            ctx->pc = 0x1E90E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90DCu;
            // 0x1e90e0: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E92C4u;
            goto label_1e92c4;
        }
    }
    ctx->pc = 0x1E90E4u;
    // 0x1e90e4: 0x8e0502d8  lw          $a1, 0x2D8($s0)
    ctx->pc = 0x1e90e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e90e8: 0x30a20300  andi        $v0, $a1, 0x300
    ctx->pc = 0x1e90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)768);
    // 0x1e90ec: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E90ECu;
    {
        const bool branch_taken_0x1e90ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90ec) {
            ctx->pc = 0x1E90F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E90ECu;
            // 0x1e90f0: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E91E4u;
            goto label_1e91e4;
        }
    }
    ctx->pc = 0x1E90F4u;
    // 0x1e90f4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e90f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e90f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e90fc: 0xda010260  lqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1e90fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e9100: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e9100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e9104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e9104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9108: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e9108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e910c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e910cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e9110: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1e9110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9114: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e9114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9118: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1e9118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e911c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e911cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9120: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e9120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e9124: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1e9124u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e9128: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e9128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e912c: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x1e912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9130: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1e9130u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9134: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e9134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e9138: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e9138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e913c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e913cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e9140: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e9140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9144: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1e9144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9148: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e9148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1e914c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x1e914cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x1e9150: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1e9150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1e9154: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9154u;
    {
        const bool branch_taken_0x1e9154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9154u;
            // 0x1e9158: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9154) {
            ctx->pc = 0x1E9178u;
            goto label_1e9178;
        }
    }
    ctx->pc = 0x1E915Cu;
    // 0x1e915c: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x1e915cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1e9160: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e9160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9164: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1e9164u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1e9168: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1e9168u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e916c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e916cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9170: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9170u;
    {
        const bool branch_taken_0x1e9170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9170u;
            // 0x1e9174: 0xfa010050  sqc2        $vf1, 0x50($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9170) {
            ctx->pc = 0x1E9198u;
            goto label_1e9198;
        }
    }
    ctx->pc = 0x1E9178u;
label_1e9178:
    // 0x1e9178: 0xda010050  lqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1e9178u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1e917c: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e917cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9180: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e9180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9184: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e9184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9188: 0xf8820020  sqc2        $vf2, 0x20($a0)
    ctx->pc = 0x1e9188u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e918c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1e918cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9190: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1e9190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1e9194: 0x0  nop
    ctx->pc = 0x1e9194u;
    // NOP
label_1e9198:
    // 0x1e9198: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1e9198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e919c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1e919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1e91a0: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x1e91a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e91a4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1e91a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e91a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e91ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e91acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e91b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e91b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e91b4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1e91b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1e91b8: 0x3c013f8e  lui         $at, 0x3F8E
    ctx->pc = 0x1e91b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16270 << 16));
    // 0x1e91bc: 0x342138da  ori         $at, $at, 0x38DA
    ctx->pc = 0x1e91bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14554);
    // 0x1e91c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e91c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e91c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e91c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e91c8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1e91c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e91cc: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1e91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1e91d0: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x1e91d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1e91d4: 0xe60102a0  swc1        $f1, 0x2A0($s0)
    ctx->pc = 0x1e91d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1e91d8: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1e91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
    // 0x1e91dc: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1E91DCu;
    {
        const bool branch_taken_0x1e91dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91DCu;
            // 0x1e91e0: 0xe6010150  swc1        $f1, 0x150($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91dc) {
            ctx->pc = 0x1E9514u;
            goto label_1e9514;
        }
    }
    ctx->pc = 0x1E91E4u;
label_1e91e4:
    // 0x1e91e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e91e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e91e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e91e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e91ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e91f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e91f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e91f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e91f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e91f8: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x1e91f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e91fc: 0x7a030260  lq          $v1, 0x260($s0)
    ctx->pc = 0x1e91fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e9200: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e9200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1e9204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9208: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e9208u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e920c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e920cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e9210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9214: 0x0  nop
    ctx->pc = 0x1e9214u;
    // NOP
    // 0x1e9218: 0x45010105  bc1t        . + 4 + (0x105 << 2)
    ctx->pc = 0x1E9218u;
    {
        const bool branch_taken_0x1e9218 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9218u;
            // 0x1e921c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9218) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9220u;
    // 0x1e9220: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e9220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9224: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1e9224u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e9228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e922c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e922cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9230: 0x0  nop
    ctx->pc = 0x1e9230u;
    // NOP
    // 0x1e9234: 0x450100fe  bc1t        . + 4 + (0xFE << 2)
    ctx->pc = 0x1E9234u;
    {
        const bool branch_taken_0x1e9234 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9234u;
            // 0x1e9238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9234) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E923Cu;
    // 0x1e923c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e923cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e9240: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x1e9240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1e9244: 0x8c635e70  lw          $v1, 0x5E70($v1)
    ctx->pc = 0x1e9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24176)));
    // 0x1e9248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e924c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9250: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1e9250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1e9254: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1E9254u;
    {
        const bool branch_taken_0x1e9254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9254u;
            // 0x1e9258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9254) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E925Cu;
    // 0x1e925c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e9260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e9260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9264: 0x34a20020  ori         $v0, $a1, 0x20
    ctx->pc = 0x1e9264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x1e9268: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e926c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9270: 0xc07a3b4  jal         func_1E8ED0
    ctx->pc = 0x1E9270u;
    SET_GPR_U32(ctx, 31, 0x1E9278u);
    ctx->pc = 0x1E9274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9270u;
            // 0x1e9274: 0xe60002a0  swc1        $f0, 0x2A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8ED0u;
    if (runtime->hasFunction(0x1E8ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9278u; }
        if (ctx->pc != 0x1E9278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e8ed0_0x1e8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9278u; }
        if (ctx->pc != 0x1E9278u) { return; }
    }
    ctx->pc = 0x1E9278u;
    // 0x1e9278: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e927c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1e9280: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x1e9280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e9284: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e9284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e9288: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e928c: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e9290: 0xda020260  lqc2        $vf2, 0x260($s0)
    ctx->pc = 0x1e9290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e9294: 0x4b010080  vaddx.x     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e9294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9298: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e929c: 0xfa020260  sqc2        $vf2, 0x260($s0)
    ctx->pc = 0x1e929cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e92a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e92a4: 0xc4400118  lwc1        $f0, 0x118($v0)
    ctx->pc = 0x1e92a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e92a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e92a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e92ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e92acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e92b0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e92b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e92b4: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e92b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e92b8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1E92B8u;
    {
        const bool branch_taken_0x1e92b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92B8u;
            // 0x1e92bc: 0xfa020260  sqc2        $vf2, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92b8) {
            ctx->pc = 0x1E9514u;
            goto label_1e9514;
        }
    }
    ctx->pc = 0x1E92C0u;
label_1e92c0:
    // 0x1e92c0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1e92c4:
    // 0x1e92c4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e92c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e92c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e92cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e92d0: 0xc44000c4  lwc1        $f0, 0xC4($v0)
    ctx->pc = 0x1e92d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e92d4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e92d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e92d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e92d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e92dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e92dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e92e0: 0xda050260  lqc2        $vf5, 0x260($s0)
    ctx->pc = 0x1e92e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1e92e4: 0x4a810140  vaddx.y     $vf5, $vf0, $vf1x
    ctx->pc = 0x1e92e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e92e8: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1e92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e92ec: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x1e92ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x1e92f0: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1E92F0u;
    {
        const bool branch_taken_0x1e92f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92F0u;
            // 0x1e92f4: 0xfa050260  sqc2        $vf5, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92f0) {
            ctx->pc = 0x1E9514u;
            goto label_1e9514;
        }
    }
    ctx->pc = 0x1E92F8u;
    // 0x1e92f8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1e92f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1e92fc: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1E92FCu;
    {
        const bool branch_taken_0x1e92fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92FCu;
            // 0x1e9300: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92fc) {
            ctx->pc = 0x1E94D0u;
            goto label_1e94d0;
        }
    }
    ctx->pc = 0x1E9304u;
    // 0x1e9304: 0x8e0502d8  lw          $a1, 0x2D8($s0)
    ctx->pc = 0x1e9304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9308: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x1e9308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1e930c: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E930Cu;
    {
        const bool branch_taken_0x1e930c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e930c) {
            ctx->pc = 0x1E9310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E930Cu;
            // 0x1e9310: 0x8e0202dc  lw          $v0, 0x2DC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9338u;
            goto label_1e9338;
        }
    }
    ctx->pc = 0x1E9314u;
    // 0x1e9314: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e9314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9318: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1e9318u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e931c: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1e931cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e9320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e9324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9328: 0x0  nop
    ctx->pc = 0x1e9328u;
    // NOP
    // 0x1e932c: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x1E932Cu;
    {
        const bool branch_taken_0x1e932c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E932Cu;
            // 0x1e9330: 0x34a20020  ori         $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e932c) {
            ctx->pc = 0x1E94B0u;
            goto label_1e94b0;
        }
    }
    ctx->pc = 0x1E9334u;
    // 0x1e9334: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1e9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1e9338:
    // 0x1e9338: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1e9338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1e933c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e933cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e9340: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E9340u;
    {
        const bool branch_taken_0x1e9340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9340u;
            // 0x1e9344: 0x34a20020  ori         $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9340) {
            ctx->pc = 0x1E9408u;
            goto label_1e9408;
        }
    }
    ctx->pc = 0x1E9348u;
    // 0x1e9348: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e934c: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1e934cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1e9350: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1e9350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1e9354: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e9354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e9358: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e935c: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E935Cu;
    {
        const bool branch_taken_0x1e935c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E9360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E935Cu;
            // 0x1e9360: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e935c) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E9364u;
    // 0x1e9364: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E9364u;
    {
        const bool branch_taken_0x1e9364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9364u;
            // 0x1e9368: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9364) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E936Cu;
    // 0x1e936c: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1e936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1e9370: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e9374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e937c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1e937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1e9380: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e9384: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9384u;
    {
        const bool branch_taken_0x1e9384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9384u;
            // 0x1e9388: 0x8e030328  lw          $v1, 0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9384) {
            ctx->pc = 0x1E93B4u;
            goto label_1e93b4;
        }
    }
    ctx->pc = 0x1E938Cu;
    // 0x1e938c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1e9390: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1e9390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1e9394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9394u;
    {
        const bool branch_taken_0x1e9394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9394) {
            ctx->pc = 0x1E93A8u;
            goto label_1e93a8;
        }
    }
    ctx->pc = 0x1E939Cu;
    // 0x1e939c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E939Cu;
    {
        const bool branch_taken_0x1e939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E939Cu;
            // 0x1e93a0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e939c) {
            ctx->pc = 0x1E93B8u;
            goto label_1e93b8;
        }
    }
    ctx->pc = 0x1E93A4u;
    // 0x1e93a4: 0x0  nop
    ctx->pc = 0x1e93a4u;
    // NOP
label_1e93a8:
    // 0x1e93a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93A8u;
    {
        const bool branch_taken_0x1e93a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E93A8u;
            // 0x1e93ac: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93a8) {
            ctx->pc = 0x1E93B8u;
            goto label_1e93b8;
        }
    }
    ctx->pc = 0x1E93B0u;
label_1e93b0:
    // 0x1e93b0: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x1e93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_1e93b4:
    // 0x1e93b4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1e93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1e93b8:
    // 0x1e93b8: 0xa46200e0  sh          $v0, 0xE0($v1)
    ctx->pc = 0x1e93b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e93bc: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e93c0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1e93c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1e93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1e93c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e93c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e93cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e93ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e93d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e93d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e93d4: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e93d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e93d8: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e93dc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1e93e0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1e93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1e93e4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1e93e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1e93e8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1e93ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1e93ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e93f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e93f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1e93f4: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1e93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1e93f8: 0xfa010260  sqc2        $vf1, 0x260($s0)
    ctx->pc = 0x1e93f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e93fc: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1e93fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9400: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1E9400u;
    {
        const bool branch_taken_0x1e9400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9400u;
            // 0x1e9404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9400) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9408u;
label_1e9408:
    // 0x1e9408: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1e9408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1e940c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e940cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9410: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e9414: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e9414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9418: 0xe60002a0  swc1        $f0, 0x2A0($s0)
    ctx->pc = 0x1e9418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1e941c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1e941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1e9420: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1e9420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e9424: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9428: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e9428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e942c: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1e942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e9430: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1e9430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e9434: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e9434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e9438: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1e9438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e943c: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x1e943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e9440: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x1e9440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e9444: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1e9444u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e9448: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x1e9448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e944c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x1e944cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9450: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e9450u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e9454: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e9454u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e9458: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e9458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e945c: 0x4a0002ff  vnop
    ctx->pc = 0x1e945cu;
    // NOP operation, no action needed for VU0
    // 0x1e9460: 0x4a0002ff  vnop
    ctx->pc = 0x1e9460u;
    // NOP operation, no action needed for VU0
    // 0x1e9464: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x1e9464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e9468: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e9468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e946c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e946cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9470: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e9470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9474: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1e9474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1e9478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e9478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e947c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e947cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9480: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e9480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9484: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e9484u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9488: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e9488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e948c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e948cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e9490: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1e9490u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e9494: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x1e9494u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x1e9498: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e9498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1e949c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e949cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e94a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e94a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e94a4: 0x4a410140  vaddx.z     $vf5, $vf0, $vf1x
    ctx->pc = 0x1e94a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e94a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E94A8u;
    {
        const bool branch_taken_0x1e94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94A8u;
            // 0x1e94ac: 0xfa050260  sqc2        $vf5, 0x260($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 608), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94a8) {
            ctx->pc = 0x1E9514u;
            goto label_1e9514;
        }
    }
    ctx->pc = 0x1E94B0u;
label_1e94b0:
    // 0x1e94b0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e94b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e94b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e94b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e94b8: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1e94bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e94bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94c0: 0xc07a3b4  jal         func_1E8ED0
    ctx->pc = 0x1E94C0u;
    SET_GPR_U32(ctx, 31, 0x1E94C8u);
    ctx->pc = 0x1E94C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94C0u;
            // 0x1e94c4: 0xe60002a0  swc1        $f0, 0x2A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8ED0u;
    if (runtime->hasFunction(0x1E8ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94C8u; }
        if (ctx->pc != 0x1E94C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e8ed0_0x1e8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94C8u; }
        if (ctx->pc != 0x1E94C8u) { return; }
    }
    ctx->pc = 0x1E94C8u;
    // 0x1e94c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E94C8u;
    {
        const bool branch_taken_0x1e94c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94C8u;
            // 0x1e94cc: 0x8e020174  lw          $v0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94c8) {
            ctx->pc = 0x1E9518u;
            goto label_1e9518;
        }
    }
    ctx->pc = 0x1E94D0u;
label_1e94d0:
    // 0x1e94d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1e94d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1e94d4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E94D4u;
    {
        const bool branch_taken_0x1e94d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e94d4) {
            ctx->pc = 0x1E94D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94D4u;
            // 0x1e94d8: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9508u;
            goto label_1e9508;
        }
    }
    ctx->pc = 0x1E94DCu;
    // 0x1e94dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e94dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e94e0: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1e94e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e94e4: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1e94e4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e94e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e94e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e94ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e94ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e94f0: 0x0  nop
    ctx->pc = 0x1e94f0u;
    // NOP
    // 0x1e94f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E94F4u;
    {
        const bool branch_taken_0x1e94f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e94f4) {
            ctx->pc = 0x1E94F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94F4u;
            // 0x1e94f8: 0x8e0202d8  lw          $v0, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9508u;
            goto label_1e9508;
        }
    }
    ctx->pc = 0x1E94FCu;
    // 0x1e94fc: 0xc07a3b4  jal         func_1E8ED0
    ctx->pc = 0x1E94FCu;
    SET_GPR_U32(ctx, 31, 0x1E9504u);
    ctx->pc = 0x1E9500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94FCu;
            // 0x1e9500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8ED0u;
    if (runtime->hasFunction(0x1E8ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9504u; }
        if (ctx->pc != 0x1E9504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e8ed0_0x1e8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9504u; }
        if (ctx->pc != 0x1E9504u) { return; }
    }
    ctx->pc = 0x1E9504u;
    // 0x1e9504: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1e9508:
    // 0x1e9508: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1e9508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1e950c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9510: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
label_1e9514:
    // 0x1e9514: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1e9518:
    // 0x1e9518: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9518u;
    {
        const bool branch_taken_0x1e9518 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9518u;
            // 0x1e951c: 0x30420080  andi        $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9518) {
            ctx->pc = 0x1E9534u;
            goto label_1e9534;
        }
    }
    ctx->pc = 0x1E9520u;
    // 0x1e9520: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9520u;
    {
        const bool branch_taken_0x1e9520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9520) {
            ctx->pc = 0x1E9534u;
            goto label_1e9534;
        }
    }
    ctx->pc = 0x1E9528u;
    // 0x1e9528: 0x8e04033c  lw          $a0, 0x33C($s0)
    ctx->pc = 0x1e9528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x1e952c: 0xc07f636  jal         func_1FD8D8
    ctx->pc = 0x1E952Cu;
    SET_GPR_U32(ctx, 31, 0x1E9534u);
    ctx->pc = 0x1E9530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E952Cu;
            // 0x1e9530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8D8u;
    if (runtime->hasFunction(0x1FD8D8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9534u; }
        if (ctx->pc != 0x1E9534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD8D8_0x1fd8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9534u; }
        if (ctx->pc != 0x1E9534u) { return; }
    }
    ctx->pc = 0x1E9534u;
label_1e9534:
    // 0x1e9534: 0xc07a340  jal         func_1E8D00
    ctx->pc = 0x1E9534u;
    SET_GPR_U32(ctx, 31, 0x1E953Cu);
    ctx->pc = 0x1E9538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9534u;
            // 0x1e9538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D00u;
    if (runtime->hasFunction(0x1E8D00u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E953Cu; }
        if (ctx->pc != 0x1E953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D00_0x1e8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E953Cu; }
        if (ctx->pc != 0x1E953Cu) { return; }
    }
    ctx->pc = 0x1E953Cu;
    // 0x1e953c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1E953Cu;
    {
        const bool branch_taken_0x1e953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E953Cu;
            // 0x1e9540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e953c) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9544u;
label_1e9544:
    // 0x1e9544: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e9544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1e9548: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E9548u;
    {
        const bool branch_taken_0x1e9548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9548u;
            // 0x1e954c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9548) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9550u;
    // 0x1e9550: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1e9554: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e9554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e9558: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1E9558u;
    {
        const bool branch_taken_0x1e9558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9558u;
            // 0x1e955c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9558) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E9560u;
    // 0x1e9560: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e9564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9564u;
    {
        const bool branch_taken_0x1e9564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9564u;
            // 0x1e9568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9564) {
            ctx->pc = 0x1E9578u;
            goto label_1e9578;
        }
    }
    ctx->pc = 0x1E956Cu;
    // 0x1e956c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e9570: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9570u;
    {
        const bool branch_taken_0x1e9570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9570) {
            ctx->pc = 0x1E95C0u;
            goto label_1e95c0;
        }
    }
    ctx->pc = 0x1E9578u;
label_1e9578:
    // 0x1e9578: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e957c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1e957cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1e9580: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e9580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e9584: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e9584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9588: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x1e9588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e958c: 0xc46000cc  lwc1        $f0, 0xCC($v1)
    ctx->pc = 0x1e958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9590: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e9590u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e9594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9598: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e9598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e959c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e959cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e95a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E95A0u;
    {
        const bool branch_taken_0x1e95a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e95a0) {
            ctx->pc = 0x1E95C0u;
            goto label_1e95c0;
        }
    }
    ctx->pc = 0x1E95A8u;
    // 0x1e95a8: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x1e95a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e95ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e95acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e95b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e95b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e95b4: 0x0  nop
    ctx->pc = 0x1e95b4u;
    // NOP
    // 0x1e95b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E95B8u;
    {
        const bool branch_taken_0x1e95b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e95b8) {
            ctx->pc = 0x1E95BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95B8u;
            // 0x1e95bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E95C0u;
            goto label_1e95c0;
        }
    }
    ctx->pc = 0x1E95C0u;
label_1e95c0:
    // 0x1e95c0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E95C0u;
    {
        const bool branch_taken_0x1e95c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95C0u;
            // 0x1e95c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95c0) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E95C8u;
    // 0x1e95c8: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1e95cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e95ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e95d0: 0xda0300e0  lqc2        $vf3, 0xE0($s0)
    ctx->pc = 0x1e95d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1e95d4: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x1e95d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e95d8: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1e95dc: 0xfa0300e0  sqc2        $vf3, 0xE0($s0)
    ctx->pc = 0x1e95dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e95e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1e95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e95e4: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1e95e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1e95e8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1e95e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e95ec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e95ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e95f0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e95f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e95f4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1e95f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e95f8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1e95fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e95fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e9600: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e9600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e9604: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e9604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e9608: 0xfa0300e0  sqc2        $vf3, 0xE0($s0)
    ctx->pc = 0x1e9608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e960c: 0xc07a382  jal         func_1E8E08
    ctx->pc = 0x1E960Cu;
    SET_GPR_U32(ctx, 31, 0x1E9614u);
    ctx->pc = 0x1E9610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E960Cu;
            // 0x1e9610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E08u;
    if (runtime->hasFunction(0x1E8E08u)) {
        auto targetFn = runtime->lookupFunction(0x1E8E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9614u; }
        if (ctx->pc != 0x1E9614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e8e08_0x1e8ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9614u; }
        if (ctx->pc != 0x1E9614u) { return; }
    }
    ctx->pc = 0x1E9614u;
    // 0x1e9614: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1e9614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1e9618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e9618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e961c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e961cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9620: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1e9620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1e9624: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1e9624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1e9628: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1e9628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1e962c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e962cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9630:
    // 0x1e9630: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1e9630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9634: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1e9634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9638: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e9638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e963c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1e963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9640: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9640u;
            // 0x1e9644: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9038u: goto label_1e9038;
            case 0x1E9048u: goto label_1e9048;
            case 0x1E90C0u: goto label_1e90c0;
            case 0x1E9178u: goto label_1e9178;
            case 0x1E9198u: goto label_1e9198;
            case 0x1E91E4u: goto label_1e91e4;
            case 0x1E92C0u: goto label_1e92c0;
            case 0x1E92C4u: goto label_1e92c4;
            case 0x1E9338u: goto label_1e9338;
            case 0x1E93A8u: goto label_1e93a8;
            case 0x1E93B0u: goto label_1e93b0;
            case 0x1E93B4u: goto label_1e93b4;
            case 0x1E93B8u: goto label_1e93b8;
            case 0x1E9408u: goto label_1e9408;
            case 0x1E94B0u: goto label_1e94b0;
            case 0x1E94D0u: goto label_1e94d0;
            case 0x1E9508u: goto label_1e9508;
            case 0x1E9514u: goto label_1e9514;
            case 0x1E9518u: goto label_1e9518;
            case 0x1E9534u: goto label_1e9534;
            case 0x1E9544u: goto label_1e9544;
            case 0x1E9578u: goto label_1e9578;
            case 0x1E95C0u: goto label_1e95c0;
            case 0x1E9630u: goto label_1e9630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9648u;
}
