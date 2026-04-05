#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9E60
// Address: 0x1d9e60 - 0x1d9f30
void sub_001D9E60_0x1d9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9E60_0x1d9e60");
#endif

    ctx->pc = 0x1d9e60u;

    // 0x1d9e60: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d9e64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9e68: 0xc4406b3c  lwc1        $f0, 0x6B3C($v0)
    ctx->pc = 0x1d9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 27452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e6c: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x1d9e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x1d9e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9e74: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d9e78: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1d9e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d9e7c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1d9e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1d9e80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9e84: 0xe4e04f58  swc1        $f0, 0x4F58($a3)
    ctx->pc = 0x1d9e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20312), bits); }
    // 0x1d9e88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d9e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d9e8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d9e8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d9e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9e94: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d9e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e98: 0xac624f64  sw          $v0, 0x4F64($v1)
    ctx->pc = 0x1d9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20324), GPR_U32(ctx, 2));
    // 0x1d9e9c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9E9Cu;
    {
        const bool branch_taken_0x1d9e9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E9Cu;
            // 0x1d9ea0: 0xae204f60  sw          $zero, 0x4F60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e9c) {
            ctx->pc = 0x1D9EA8u;
            goto label_1d9ea8;
        }
    }
    ctx->pc = 0x1D9EA4u;
    // 0x1d9ea4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d9ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9ea8:
    // 0x1d9ea8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1d9ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9eac: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1d9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1d9eb0: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1d9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1d9eb4: 0x24a2f170  addiu       $v0, $a1, -0xE90
    ctx->pc = 0x1d9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1d9eb8: 0xaca7f170  sw          $a3, -0xE90($a1)
    ctx->pc = 0x1d9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963568), GPR_U32(ctx, 7));
    // 0x1d9ebc: 0x24639e10  addiu       $v1, $v1, -0x61F0
    ctx->pc = 0x1d9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942224));
    // 0x1d9ec0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9ec4: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1d9ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1d9ec8: 0x26102db0  addiu       $s0, $s0, 0x2DB0
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11696));
    // 0x1d9ecc: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1d9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1d9ed0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1d9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1d9ed4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d9ed8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d9edc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d9ee0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d9ee4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1d9ee8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d9eec: 0xc0909c4  jal         func_242710
    ctx->pc = 0x1D9EECu;
    SET_GPR_U32(ctx, 31, 0x1D9EF4u);
    ctx->pc = 0x1D9EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EECu;
            // 0x1d9ef0: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EF4u; }
        if (ctx->pc != 0x1D9EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EF4u; }
        if (ctx->pc != 0x1D9EF4u) { return; }
    }
    ctx->pc = 0x1D9EF4u;
    // 0x1d9ef4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d9ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d9ef8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d9ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9efc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d9f00: 0x78450030  lq          $a1, 0x30($v0)
    ctx->pc = 0x1d9f00u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d9f04: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1d9f04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1d9f08: 0x8c64bcf8  lw          $a0, -0x4308($v1)
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    // 0x1d9f0c: 0xc047a34  jal         func_11E8D0
    ctx->pc = 0x1D9F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F14u);
    ctx->pc = 0x1D9F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F0Cu;
            // 0x1d9f10: 0x7e050000  sq          $a1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E8D0u;
    if (runtime->hasFunction(0x11E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F14u; }
        if (ctx->pc != 0x1D9F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11e8d0_0x11ea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F14u; }
        if (ctx->pc != 0x1D9F14u) { return; }
    }
    ctx->pc = 0x1D9F14u;
    // 0x1d9f14: 0x8e224f60  lw          $v0, 0x4F60($s1)
    ctx->pc = 0x1d9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20320)));
    // 0x1d9f18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d9f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9f24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1d9f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F28u;
            // 0x1d9f2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9EA8u: goto label_1d9ea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D9F30u;
}
