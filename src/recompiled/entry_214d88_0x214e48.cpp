#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_214d88
// Address: 0x214d88 - 0x214e48
void entry_214d88_0x214e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_214d88_0x214e48");
#endif

    ctx->pc = 0x214d88u;

    // 0x214d88: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x214d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x214d8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214d94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x214d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x214d98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x214d98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214d9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x214d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214da0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x214da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x214da4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x214da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x214da8: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x214da8u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x214dac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x214dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214db0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x214db0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x214db4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x214db4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x214db8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x214db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214dbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x214dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x214dc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x214dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214dc4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x214dc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x214dc8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x214dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x214dcc: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x214dccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x214dd0: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214DD0u;
    {
        const bool branch_taken_0x214dd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x214DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214DD0u;
            // 0x214dd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214dd0) {
            ctx->pc = 0x214DE8u;
            goto label_214de8;
        }
    }
    ctx->pc = 0x214DD8u;
    // 0x214dd8: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x214dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214ddc: 0x0  nop
    ctx->pc = 0x214ddcu;
    // NOP
    // 0x214de0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x214DE0u;
    {
        const bool branch_taken_0x214de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214de0) {
            ctx->pc = 0x214DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214DE0u;
            // 0x214de4: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214DE8u;
            goto label_214de8;
        }
    }
    ctx->pc = 0x214DE8u;
label_214de8:
    // 0x214de8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x214de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x214dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214df0: 0x8cc201c4  lw          $v0, 0x1C4($a2)
    ctx->pc = 0x214df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 452)));
    // 0x214df4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x214df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x214df8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x214df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x214dfc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x214dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x214e00: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214E00u;
    {
        const bool branch_taken_0x214e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x214e00) {
            ctx->pc = 0x214E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214E00u;
            // 0x214e04: 0x8cc2018c  lw          $v0, 0x18C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214E18u;
            goto label_214e18;
        }
    }
    ctx->pc = 0x214E08u;
    // 0x214e08: 0x8cc201c8  lw          $v0, 0x1C8($a2)
    ctx->pc = 0x214e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 456)));
    // 0x214e0c: 0x1047000c  beq         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x214E0Cu;
    {
        const bool branch_taken_0x214e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x214E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E0Cu;
            // 0x214e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e0c) {
            ctx->pc = 0x214E40u;
            goto label_214e40;
        }
    }
    ctx->pc = 0x214E14u;
    // 0x214e14: 0x8cc2018c  lw          $v0, 0x18C($a2)
    ctx->pc = 0x214e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
label_214e18:
    // 0x214e18: 0xacc501c4  sw          $a1, 0x1C4($a2)
    ctx->pc = 0x214e18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 452), GPR_U32(ctx, 5));
    // 0x214e1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214E1Cu;
    {
        const bool branch_taken_0x214e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E1Cu;
            // 0x214e20: 0xacc701c8  sw          $a3, 0x1C8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 456), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214e1c) {
            ctx->pc = 0x214E2Cu;
            goto label_214e2c;
        }
    }
    ctx->pc = 0x214E24u;
    // 0x214e24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214e28: 0xacc201d4  sw          $v0, 0x1D4($a2)
    ctx->pc = 0x214e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 468), GPR_U32(ctx, 2));
label_214e2c:
    // 0x214e2c: 0x8cc801d4  lw          $t0, 0x1D4($a2)
    ctx->pc = 0x214e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 468)));
    // 0x214e30: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x214e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x214e34: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x214E34u;
    SET_GPR_U32(ctx, 31, 0x214E3Cu);
    ctx->pc = 0x214E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214E34u;
            // 0x214e38: 0x8cc601cc  lw          $a2, 0x1CC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E3Cu; }
        if (ctx->pc != 0x214E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E3Cu; }
        if (ctx->pc != 0x214E3Cu) { return; }
    }
    ctx->pc = 0x214E3Cu;
    // 0x214e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214e40:
    // 0x214e40: 0x3e00008  jr          $ra
    ctx->pc = 0x214E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214E40u;
            // 0x214e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214DE8u: goto label_214de8;
            case 0x214E18u: goto label_214e18;
            case 0x214E2Cu: goto label_214e2c;
            case 0x214E40u: goto label_214e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214E48u;
}
