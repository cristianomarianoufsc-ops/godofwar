#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_210d48
// Address: 0x210d48 - 0x210e08
void entry_210d48_0x210e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_210d48_0x210e08");
#endif

    ctx->pc = 0x210d48u;

    // 0x210d48: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x210d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x210d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210d54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x210d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x210d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x210d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210d5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x210d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d60: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x210d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x210d64: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x210d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x210d68: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x210d68u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[13];
    // 0x210d6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x210d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x210d70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x210d70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x210d74: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x210d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x210d78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x210d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210d7c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x210d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x210d80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x210d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d84: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x210d84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x210d88: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x210d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x210d8c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x210d8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x210d90: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210D90u;
    {
        const bool branch_taken_0x210d90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x210D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D90u;
            // 0x210d94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d90) {
            ctx->pc = 0x210DA8u;
            goto label_210da8;
        }
    }
    ctx->pc = 0x210D98u;
    // 0x210d98: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x210d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210d9c: 0x0  nop
    ctx->pc = 0x210d9cu;
    // NOP
    // 0x210da0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x210DA0u;
    {
        const bool branch_taken_0x210da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210da0) {
            ctx->pc = 0x210DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210DA0u;
            // 0x210da4: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210DA8u;
            goto label_210da8;
        }
    }
    ctx->pc = 0x210DA8u;
label_210da8:
    // 0x210da8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x210da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x210dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210db0: 0x8cc2027c  lw          $v0, 0x27C($a2)
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 636)));
    // 0x210db4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x210db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x210db8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x210db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x210dbc: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x210dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x210dc0: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x210DC0u;
    {
        const bool branch_taken_0x210dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x210dc0) {
            ctx->pc = 0x210DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x210DC0u;
            // 0x210dc4: 0x8cc2018c  lw          $v0, 0x18C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x210DD8u;
            goto label_210dd8;
        }
    }
    ctx->pc = 0x210DC8u;
    // 0x210dc8: 0x8cc20280  lw          $v0, 0x280($a2)
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x210dcc: 0x1047000c  beq         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x210DCCu;
    {
        const bool branch_taken_0x210dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x210DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210DCCu;
            // 0x210dd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dcc) {
            ctx->pc = 0x210E00u;
            goto label_210e00;
        }
    }
    ctx->pc = 0x210DD4u;
    // 0x210dd4: 0x8cc2018c  lw          $v0, 0x18C($a2)
    ctx->pc = 0x210dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 396)));
label_210dd8:
    // 0x210dd8: 0xacc5027c  sw          $a1, 0x27C($a2)
    ctx->pc = 0x210dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 636), GPR_U32(ctx, 5));
    // 0x210ddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210DDCu;
    {
        const bool branch_taken_0x210ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210DDCu;
            // 0x210de0: 0xacc70280  sw          $a3, 0x280($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 640), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ddc) {
            ctx->pc = 0x210DECu;
            goto label_210dec;
        }
    }
    ctx->pc = 0x210DE4u;
    // 0x210de4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x210de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210de8: 0xacc20288  sw          $v0, 0x288($a2)
    ctx->pc = 0x210de8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 648), GPR_U32(ctx, 2));
label_210dec:
    // 0x210dec: 0x8cc80288  lw          $t0, 0x288($a2)
    ctx->pc = 0x210decu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 648)));
    // 0x210df0: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x210df4: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x210DF4u;
    SET_GPR_U32(ctx, 31, 0x210DFCu);
    ctx->pc = 0x210DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210DF4u;
            // 0x210df8: 0x8cc60284  lw          $a2, 0x284($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 644)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210DFCu; }
        if (ctx->pc != 0x210DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210DFCu; }
        if (ctx->pc != 0x210DFCu) { return; }
    }
    ctx->pc = 0x210DFCu;
    // 0x210dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210e00:
    // 0x210e00: 0x3e00008  jr          $ra
    ctx->pc = 0x210E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210E00u;
            // 0x210e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210DA8u: goto label_210da8;
            case 0x210DD8u: goto label_210dd8;
            case 0x210DECu: goto label_210dec;
            case 0x210E00u: goto label_210e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210E08u;
}
