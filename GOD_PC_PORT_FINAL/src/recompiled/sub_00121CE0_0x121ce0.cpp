#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121CE0
// Address: 0x121ce0 - 0x121dc0
void sub_00121CE0_0x121ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121CE0_0x121ce0");
#endif

    ctx->pc = 0x121ce0u;

    // 0x121ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x121ce4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x121ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x121ce8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x121ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x121cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121cf4: 0xc04c012  jal         func_130048
    ctx->pc = 0x121CF4u;
    SET_GPR_U32(ctx, 31, 0x121CFCu);
    ctx->pc = 0x121CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121CF4u;
            // 0x121cf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130048u;
    if (runtime->hasFunction(0x130048u)) {
        auto targetFn = runtime->lookupFunction(0x130048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CFCu; }
        if (ctx->pc != 0x121CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130048_0x130048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CFCu; }
        if (ctx->pc != 0x121CFCu) { return; }
    }
    ctx->pc = 0x121CFCu;
    // 0x121cfc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x121cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x121d00: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x121d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x121d04: 0x2442c518  addiu       $v0, $v0, -0x3AE8
    ctx->pc = 0x121d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952216));
    // 0x121d08: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x121d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x121d0c: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x121d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x121d10: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x121d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x121d14: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x121d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x121d18: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x121d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x121d1c: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x121d1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x121d20: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x121d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x121d24: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x121d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x121d28: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x121d28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x121d2c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x121d2cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x121d30: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x121d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x121d34: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x121d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x121d38: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x121d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x121d3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121d44: 0x26230044  addiu       $v1, $s1, 0x44
    ctx->pc = 0x121d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x121d48: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x121d48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x121d4c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x121d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x121d50: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x121d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x121d54: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x121d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x121d58: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x121d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x121d5c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x121d5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x121d60: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x121d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x121d64: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x121d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x121d68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x121d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x121d6c: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x121d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121d70: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x121d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121d74: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x121d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x121d78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x121d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121d7c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x121d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x121d80: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x121d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x121d84: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x121D84u;
    {
        const bool branch_taken_0x121d84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121D84u;
            // 0x121d88: 0xae0000c8  sw          $zero, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d84) {
            ctx->pc = 0x121DA8u;
            goto label_121da8;
        }
    }
    ctx->pc = 0x121D8Cu;
    // 0x121d8c: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x121d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x121d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121d94: 0x0  nop
    ctx->pc = 0x121d94u;
    // NOP
    // 0x121d98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x121D98u;
    {
        const bool branch_taken_0x121d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121D98u;
            // 0x121d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d98) {
            ctx->pc = 0x121DA8u;
            goto label_121da8;
        }
    }
    ctx->pc = 0x121DA0u;
    // 0x121da0: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x121da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x121da4: 0x0  nop
    ctx->pc = 0x121da4u;
    // NOP
label_121da8:
    // 0x121da8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121dac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x121dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121db0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x121db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121db8: 0x3e00008  jr          $ra
    ctx->pc = 0x121DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121DB8u;
            // 0x121dbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121DA8u: goto label_121da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121DC0u;
}
