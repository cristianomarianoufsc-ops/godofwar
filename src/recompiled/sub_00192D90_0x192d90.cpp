#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192D90
// Address: 0x192d90 - 0x192e28
void sub_00192D90_0x192d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192D90_0x192d90");
#endif

    ctx->pc = 0x192d90u;

    // 0x192d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192d94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192da0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x192da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x192da4: 0x8c44c908  lw          $a0, -0x36F8($v0)
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953224)));
    // 0x192da8: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x192DA8u;
    SET_GPR_U32(ctx, 31, 0x192DB0u);
    ctx->pc = 0x192DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192DA8u;
            // 0x192dac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DB0u; }
        if (ctx->pc != 0x192DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DB0u; }
        if (ctx->pc != 0x192DB0u) { return; }
    }
    ctx->pc = 0x192DB0u;
    // 0x192db0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x192db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x192db4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x192db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x192db8: 0x80420030  lb          $v0, 0x30($v0)
    ctx->pc = 0x192db8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x192dbc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192E00u;
            goto label_192e00;
        }
    }
    ctx->pc = 0x192DC4u;
    // 0x192dc4: 0xc089960  jal         func_226580
    ctx->pc = 0x192DC4u;
    SET_GPR_U32(ctx, 31, 0x192DCCu);
    ctx->pc = 0x192DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192DC4u;
            // 0x192dc8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DCCu; }
        if (ctx->pc != 0x192DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DCCu; }
        if (ctx->pc != 0x192DCCu) { return; }
    }
    ctx->pc = 0x192DCCu;
    // 0x192dcc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x192dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dd4: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x192DD4u;
    SET_GPR_U32(ctx, 31, 0x192DDCu);
    ctx->pc = 0x192DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192DD4u;
            // 0x192dd8: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (runtime->hasFunction(0x226BC0u)) {
        auto targetFn = runtime->lookupFunction(0x226BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DDCu; }
        if (ctx->pc != 0x192DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226BC0_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DDCu; }
        if (ctx->pc != 0x192DDCu) { return; }
    }
    ctx->pc = 0x192DDCu;
    // 0x192ddc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x192ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192de4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x192de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x192de8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x192de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192dec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192DECu;
    {
        const bool branch_taken_0x192dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192dec) {
            ctx->pc = 0x192E00u;
            goto label_192e00;
        }
    }
    ctx->pc = 0x192DF4u;
    // 0x192df4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x192df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x192df8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x192df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x192dfc: 0x0  nop
    ctx->pc = 0x192dfcu;
    // NOP
label_192e00:
    // 0x192e00: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x192e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x192e04: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x192e04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x192e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e0c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x192e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x192e10: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x192e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x192e14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x192E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E1Cu;
            // 0x192e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192E00u: goto label_192e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192E24u;
    // 0x192e24: 0x0  nop
    ctx->pc = 0x192e24u;
    // NOP
}
