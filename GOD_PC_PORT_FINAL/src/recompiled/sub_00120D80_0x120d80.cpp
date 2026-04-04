#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00120D80
// Address: 0x120d80 - 0x121ab8
void sub_00120D80_0x120d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120D80_0x120d80");
#endif

    ctx->pc = 0x120d80u;

label_120d80:
    // 0x120d80: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x120d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x120d84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x120d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x120d88: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x120d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x120d8c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x120d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x120d90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d94: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x120d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x120d98: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x120d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d9c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x120d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x120da0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x120da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x120da4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x120da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_120da8:
    // 0x120da8: 0x0  nop
    ctx->pc = 0x120da8u;
    // NOP
    // 0x120dac: 0x0  nop
    ctx->pc = 0x120dacu;
    // NOP
    // 0x120db0: 0x0  nop
    ctx->pc = 0x120db0u;
    // NOP
    // 0x120db4: 0x0  nop
    ctx->pc = 0x120db4u;
    // NOP
    // 0x120db8: 0x0  nop
    ctx->pc = 0x120db8u;
    // NOP
    // 0x120dbc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120DBCu;
    {
        const bool branch_taken_0x120dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x120DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120DBCu;
            // 0x120dc0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dbc) {
            ctx->pc = 0x120DA8u;
            runtime->cooperativeGuestYield();
            goto label_120da8;
        }
    }
    ctx->pc = 0x120DC4u;
    // 0x120dc4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x120dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120dc8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x120dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120dd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x120dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120dd4: 0xc048232  jal         func_1208C8
    ctx->pc = 0x120DD4u;
    SET_GPR_U32(ctx, 31, 0x120DDCu);
    ctx->pc = 0x120DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120DD4u;
            // 0x120dd8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1208C8u;
    if (runtime->hasFunction(0x1208C8u)) {
        auto targetFn = runtime->lookupFunction(0x1208C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120DDCu; }
        if (ctx->pc != 0x120DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001208C8_0x1208c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120DDCu; }
        if (ctx->pc != 0x120DDCu) { return; }
    }
    ctx->pc = 0x120DDCu;
    // 0x120ddc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x120ddcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120de0: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x120de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120de4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x120de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x120de8: 0xc6030368  lwc1        $f3, 0x368($s0)
    ctx->pc = 0x120de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x120dec: 0x2443dd58  addiu       $v1, $v0, -0x22A8
    ctx->pc = 0x120decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x120df0: 0xc6040374  lwc1        $f4, 0x374($s0)
    ctx->pc = 0x120df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x120df4: 0x8c42dd58  lw          $v0, -0x22A8($v0)
    ctx->pc = 0x120df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x120df8: 0x2589ffff  addiu       $t1, $t4, -0x1
    ctx->pc = 0x120df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x120dfc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x120dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x120e00: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x120e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x120e04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x120e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x120e08: 0xc605036c  lwc1        $f5, 0x36C($s0)
    ctx->pc = 0x120e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x120e0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x120e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120e10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x120e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x120e14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120e18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x120e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120e1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x120e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x120e20: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x120e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x120e24: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x120e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x120e28: 0x2587fffe  addiu       $a3, $t4, -0x2
    ctx->pc = 0x120e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x120e2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x120e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x120e30: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x120e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x120e34: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x120e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x120e38: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x120e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x120e3c: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120e3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x120e40: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x120e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x120e44: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120e48: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x120e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x120e4c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120e50: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x120e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x120e54: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120e58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x120e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x120e5c: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x120E5Cu;
    {
        const bool branch_taken_0x120e5c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x120E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E5Cu;
            // 0x120e60: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e5c) {
            ctx->pc = 0x120EB8u;
            goto label_120eb8;
        }
    }
    ctx->pc = 0x120E64u;
    // 0x120e64: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x120e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_120e68:
    // 0x120e68: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x120e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x120e6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x120e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120e70: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x120e74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120e78: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x120e78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x120e7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x120e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x120e80: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x120e84: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x120e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x120e88: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x120e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x120e8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x120e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x120e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120e94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x120e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x120e98: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x120e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x120e9c: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x120e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x120ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120ea4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x120ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x120ea8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x120eac: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x120eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x120eb0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x120EB0u;
    {
        const bool branch_taken_0x120eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120EB0u;
            // 0x120eb4: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eb0) {
            ctx->pc = 0x120E68u;
            runtime->cooperativeGuestYield();
            goto label_120e68;
        }
    }
    ctx->pc = 0x120EB8u;
label_120eb8:
    // 0x120eb8: 0x2081023  subu        $v0, $s0, $t0
    ctx->pc = 0x120eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x120ebc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120ec0: 0x244401ff  addiu       $a0, $v0, 0x1FF
    ctx->pc = 0x120ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
    // 0x120ec4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x120ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x120ec8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x120ec8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x120ecc: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x120eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x120ed0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x120ed0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x120ed4: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x120ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x120ed8: 0x23a43  sra         $a3, $v0, 9
    ctx->pc = 0x120ed8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 9));
    // 0x120edc: 0x24030551  addiu       $v1, $zero, 0x551
    ctx->pc = 0x120edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1361));
    // 0x120ee0: 0xec2018  mult        $a0, $a3, $t4
    ctx->pc = 0x120ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x120ee4: 0x3c023126  lui         $v0, 0x3126
    ctx->pc = 0x120ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12582 << 16));
    // 0x120ee8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x120ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x120eec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x120eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x120ef0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x120ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x120ef4: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ef8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x120ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x120efc: 0x25eb0200  addiu       $t3, $t7, 0x200
    ctx->pc = 0x120efcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 512));
    // 0x120f00: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x120f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x120f04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x120f04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f08: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x120f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x120f0c: 0x8cc2f168  lw          $v0, -0xE98($a2)
    ctx->pc = 0x120f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x120f10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x120f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x120f14: 0x19800030  blez        $t4, . + 4 + (0x30 << 2)
    ctx->pc = 0x120F14u;
    {
        const bool branch_taken_0x120f14 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x120F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120F14u;
            // 0x120f18: 0xacc2f168  sw          $v0, -0xE98($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f14) {
            ctx->pc = 0x120FD8u;
            goto label_120fd8;
        }
    }
    ctx->pc = 0x120F1Cu;
    // 0x120f1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x120f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f20: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x120f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120f24: 0x0  nop
    ctx->pc = 0x120f24u;
    // NOP
label_120f28:
    // 0x120f28: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x120f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x120f2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120f2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120f30: 0x4a220858  vmulx.w     $vf1, $vf1, $vf2x
    ctx->pc = 0x120f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120f34: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x120f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120f38: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x120f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x120f3c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x120f3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120f40: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x120f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x120f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120f48: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x120f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x120f4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120f4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120f50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120f54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120f58: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x120f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x120f5c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x120f5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120f60: 0x4a420858  vmulx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x120f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120f64: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x120f64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120f68: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x120f68u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x120f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120f70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120f74: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x120f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x120f78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120f7c: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x120f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x120f80: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x120f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120f84: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x120f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120f88: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x120f88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120f8c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x120f8cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x120f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120f94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120f94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120f98: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x120f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x120f9c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120fa0: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x120fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x120fa4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x120fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120fa8: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x120fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120fac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x120facu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120fb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x120fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x120fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x120fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120fb8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x120fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x120fbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x120fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x120fc0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x120fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x120fc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120fc8: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x120fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    // 0x120fcc: 0x14c102a  slt         $v0, $t2, $t4
    ctx->pc = 0x120fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x120fd0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x120FD0u;
    {
        const bool branch_taken_0x120fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120fd0) {
            ctx->pc = 0x120FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120FD0u;
            // 0x120fd4: 0xd8a10000  lqc2        $vf1, 0x0($a1) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x120F28u;
            runtime->cooperativeGuestYield();
            goto label_120f28;
        }
    }
    ctx->pc = 0x120FD8u;
label_120fd8:
    // 0x120fd8: 0x58e0004a  blezl       $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x120FD8u;
    {
        const bool branch_taken_0x120fd8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x120fd8) {
            ctx->pc = 0x120FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x120FD8u;
            // 0x120fdc: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121104u;
            goto label_121104;
        }
    }
    ctx->pc = 0x120FE0u;
    // 0x120fe0: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x120fe0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120fe4: 0x0  nop
    ctx->pc = 0x120fe4u;
    // NOP
label_120fe8:
    // 0x120fe8: 0x3c0e0033  lui         $t6, 0x33
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)51 << 16));
    // 0x120fec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x120fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x120ff0: 0x8dc2f168  lw          $v0, -0xE98($t6)
    ctx->pc = 0x120ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963560)));
    // 0x120ff4: 0x3407f000  ori         $a3, $zero, 0xF000
    ctx->pc = 0x120ff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x120ff8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x120ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x120ffc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x120ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121000: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x121004: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x121004u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x121008: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x121008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12100c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x12100cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x121010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x121014: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x121014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x121018: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x121018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x12101c: 0x8dc4f168  lw          $a0, -0xE98($t6)
    ctx->pc = 0x12101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963560)));
    // 0x121020: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x121020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x121024: 0xac8f0010  sw          $t7, 0x10($a0)
    ctx->pc = 0x121024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 15));
    // 0x121028: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x121028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12102c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x12102cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x121030: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x121030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x121034: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x121034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x121038: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x121038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x12103c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x12103cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x121040: 0xadc5f168  sw          $a1, -0xE98($t6)
    ctx->pc = 0x121040u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963560), GPR_U32(ctx, 5));
    // 0x121044: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x121044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x121048: 0xac8b0020  sw          $t3, 0x20($a0)
    ctx->pc = 0x121048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 11));
    // 0x12104c: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x12104cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x121050: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x121050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x121054: 0x11000024  beqz        $t0, . + 4 + (0x24 << 2)
    ctx->pc = 0x121054u;
    {
        const bool branch_taken_0x121054 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x121058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121054u;
            // 0x121058: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121054) {
            ctx->pc = 0x1210E8u;
            goto label_1210e8;
        }
    }
    ctx->pc = 0x12105Cu;
    // 0x12105c: 0x0  nop
    ctx->pc = 0x12105cu;
    // NOP
label_121060:
    // 0x121060: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x121060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x121064: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x121064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x121068: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x121068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x12106c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x12106cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x121070: 0x8c890090  lw          $t1, 0x90($a0)
    ctx->pc = 0x121070u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x121074: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x121074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121078: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x121078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12107c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12107cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121080: 0x8dc3f168  lw          $v1, -0xE98($t6)
    ctx->pc = 0x121080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963560)));
    // 0x121084: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x121088: 0x8ce400d0  lw          $a0, 0xD0($a3)
    ctx->pc = 0x121088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x12108c: 0x8ca500b0  lw          $a1, 0xB0($a1)
    ctx->pc = 0x12108cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x121090: 0x14c382a  slt         $a3, $t2, $t4
    ctx->pc = 0x121090u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x121094: 0x8d0200f0  lw          $v0, 0xF0($t0)
    ctx->pc = 0x121094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x121098: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x121098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x12109c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12109cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1210a0: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x1210a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x1210a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1210a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1210a8: 0x8dc4f168  lw          $a0, -0xE98($t6)
    ctx->pc = 0x1210a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963560)));
    // 0x1210ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1210acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1210b0: 0xac8f0010  sw          $t7, 0x10($a0)
    ctx->pc = 0x1210b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 15));
    // 0x1210b4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1210b8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1210b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1210bc: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x1210bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1210c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1210c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1210c4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1210c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1210c8: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1210c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x1210cc: 0xadc5f168  sw          $a1, -0xE98($t6)
    ctx->pc = 0x1210ccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963560), GPR_U32(ctx, 5));
    // 0x1210d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1210d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1210d4: 0xac8b0020  sw          $t3, 0x20($a0)
    ctx->pc = 0x1210d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 11));
    // 0x1210d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1210d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1210dc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1210dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1210e0: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1210E0u;
    {
        const bool branch_taken_0x1210e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210E0u;
            // 0x1210e4: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210e0) {
            ctx->pc = 0x121060u;
            runtime->cooperativeGuestYield();
            goto label_121060;
        }
    }
    ctx->pc = 0x1210E8u;
label_1210e8:
    // 0x1210e8: 0x256b0200  addiu       $t3, $t3, 0x200
    ctx->pc = 0x1210e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x1210ec: 0x25ef0200  addiu       $t7, $t7, 0x200
    ctx->pc = 0x1210ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 512));
    // 0x1210f0: 0x20b102a  slt         $v0, $s0, $t3
    ctx->pc = 0x1210f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1210f4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1210f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1210f8: 0x15a0ffbb  bnez        $t5, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1210F8u;
    {
        const bool branch_taken_0x1210f8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1210FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1210F8u;
            // 0x1210fc: 0x202580b  movn        $t3, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1210f8) {
            ctx->pc = 0x120FE8u;
            runtime->cooperativeGuestYield();
            goto label_120fe8;
        }
    }
    ctx->pc = 0x121100u;
    // 0x121100: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x121100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_121104:
    // 0x121104: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x121104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x121108: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x121108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12110c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x12110cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x121110: 0x3e00008  jr          $ra
    ctx->pc = 0x121110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121110u;
            // 0x121114: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121118u;
    // 0x121118: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x121118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12111c: 0x3e00008  jr          $ra
    ctx->pc = 0x12111Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12111Cu;
            // 0x121120: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121124u;
    // 0x121124: 0x0  nop
    ctx->pc = 0x121124u;
    // NOP
    // 0x121128: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x121128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12112c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x121130: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x121130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x121134: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121138: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x121138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12113c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12113cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121140: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x121140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x121144: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x121144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x121148: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x121148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x12114c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x12114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x121150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121154: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x121158: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x121158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x12115c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x121160: 0x40f809  jalr        $v0
    ctx->pc = 0x121160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121168u);
        ctx->pc = 0x121164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121160u;
            // 0x121164: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x121168u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x121168u; }
            if (ctx->pc != 0x121168u) { return; }
        }
        }
    }
    ctx->pc = 0x121168u;
    // 0x121168: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x121168u;
    {
        const bool branch_taken_0x121168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121168u;
            // 0x12116c: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121168) {
            ctx->pc = 0x1211C8u;
            goto label_1211c8;
        }
    }
    ctx->pc = 0x121170u;
    // 0x121170: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x121170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x121174: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x121174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121178: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x121178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x12117c: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x12117cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x121180: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x121180u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121184: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x121184u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x121188: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x121188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12118c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121190: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x121190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x121194: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x121194u;
    {
        const bool branch_taken_0x121194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121194) {
            ctx->pc = 0x121198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121194u;
            // 0x121198: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1211C0u;
            goto label_1211c0;
        }
    }
    ctx->pc = 0x12119Cu;
    // 0x12119c: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x12119cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1211a0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1211a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1211a4: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1211a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1211a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1211a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1211ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1211acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1211b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1211b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1211b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1211b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1211b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1211B8u;
    {
        const bool branch_taken_0x1211b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211b8) {
            ctx->pc = 0x1211BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1211B8u;
            // 0x1211bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1211C0u;
            goto label_1211c0;
        }
    }
    ctx->pc = 0x1211C0u;
label_1211c0:
    // 0x1211c0: 0x108000ed  beqz        $a0, . + 4 + (0xED << 2)
    ctx->pc = 0x1211C0u;
    {
        const bool branch_taken_0x1211c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1211C0u;
            // 0x1211c4: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211c0) {
            ctx->pc = 0x121578u;
            goto label_121578;
        }
    }
    ctx->pc = 0x1211C8u;
label_1211c8:
    // 0x1211c8: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x1211cc: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1211ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1211d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1211d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1211d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1211D4u;
    {
        const bool branch_taken_0x1211d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1211D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1211D4u;
            // 0x1211d8: 0x8e530074  lw          $s3, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211d4) {
            ctx->pc = 0x121200u;
            goto label_121200;
        }
    }
    ctx->pc = 0x1211DCu;
    // 0x1211dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1211dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1211e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1211e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1211e4: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x1211e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x1211e8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1211e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1211ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1211ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1211f0: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x1211f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x1211f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1211f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1211f8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1211f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1211fc: 0x8e83ed60  lw          $v1, -0x12A0($s4)
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_121200:
    // 0x121200: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x121204: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x121204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x121208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x121208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12120c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x121210: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x121210u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x121214: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x121214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121218: 0xae83ed60  sw          $v1, -0x12A0($s4)
    ctx->pc = 0x121218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 3));
    // 0x12121c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x121220: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x121220u;
    SET_GPR_U32(ctx, 31, 0x121228u);
    ctx->pc = 0x121224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121220u;
            // 0x121224: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121228u; }
        if (ctx->pc != 0x121228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121228u; }
        if (ctx->pc != 0x121228u) { return; }
    }
    ctx->pc = 0x121228u;
    // 0x121228: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x121228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x12122c: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x121230: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x121230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121238: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x121238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12123c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12123cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x121240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x121240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121244: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x121244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x121248: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x121248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x12124c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12124cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x121250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x121254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121258: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x121258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12125c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x121260: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x121264: 0x40f809  jalr        $v0
    ctx->pc = 0x121264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12126Cu);
        ctx->pc = 0x121268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121264u;
            // 0x121268: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12126Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12126Cu; }
            if (ctx->pc != 0x12126Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12126Cu;
    // 0x12126c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x12126cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121270: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x121270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
    // 0x121274: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x121274u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x121278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12127c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x121280: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x121280u;
    SET_GPR_U32(ctx, 31, 0x121288u);
    ctx->pc = 0x121284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121280u;
            // 0x121284: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121288u; }
        if (ctx->pc != 0x121288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121288u; }
        if (ctx->pc != 0x121288u) { return; }
    }
    ctx->pc = 0x121288u;
    // 0x121288: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x121288u;
    SET_GPR_U32(ctx, 31, 0x121290u);
    ctx->pc = 0x12128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121288u;
            // 0x12128c: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121290u; }
        if (ctx->pc != 0x121290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121290u; }
        if (ctx->pc != 0x121290u) { return; }
    }
    ctx->pc = 0x121290u;
    // 0x121290: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x121294: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x121294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x121298: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12129c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1212a0: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1212A0u;
    SET_GPR_U32(ctx, 31, 0x1212A8u);
    ctx->pc = 0x1212A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1212A0u;
            // 0x1212a4: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212A8u; }
        if (ctx->pc != 0x1212A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212A8u; }
        if (ctx->pc != 0x1212A8u) { return; }
    }
    ctx->pc = 0x1212A8u;
    // 0x1212a8: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x1212a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1212ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1212b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1212b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1212b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1212b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1212b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1212b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1212bc: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1212bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1212c0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1212c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1212c4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1212c8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1212c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1212cc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1212ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1212d0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1212d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1212d4: 0x9c63f19c  lwu         $v1, -0xE64($v1)
    ctx->pc = 0x1212d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x1212d8: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x1212d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1212dc: 0x9c84f1a0  lwu         $a0, -0xE60($a0)
    ctx->pc = 0x1212dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294963616)));
    // 0x1212e0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1212e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1212e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1212e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1212e8: 0x8e25f168  lw          $a1, -0xE98($s1)
    ctx->pc = 0x1212e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x1212ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1212ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1212f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1212f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1212f4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1212f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1212f8: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x1212f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x1212fc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1212fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x121300: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x121300u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x121304: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x121304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x121308: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x121308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x12130c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x12130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x121310: 0x9e440054  lwu         $a0, 0x54($s2)
    ctx->pc = 0x121310u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x121314: 0x8c47dd58  lw          $a3, -0x22A8($v0)
    ctx->pc = 0x121314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x121318: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x121318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12131c: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x12131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x121320: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x121320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x121324: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x121328: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x121328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x12132c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121330: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x121330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x121334: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x121334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x121338: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12133c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12133cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x121340: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x121340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x121344: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121348: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x121348u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x12134c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x12134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x121350: 0xfca60038  sd          $a2, 0x38($a1)
    ctx->pc = 0x121350u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 6));
    // 0x121354: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x121354u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x121358: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12135c: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x12135cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x121360: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x121360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x121364: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x121364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121368: 0xfca80048  sd          $t0, 0x48($a1)
    ctx->pc = 0x121368u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 8));
    // 0x12136c: 0xfca00030  sd          $zero, 0x30($a1)
    ctx->pc = 0x12136cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
    // 0x121370: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x121370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x121374: 0xfca40058  sd          $a0, 0x58($a1)
    ctx->pc = 0x121374u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 4));
    // 0x121378: 0xfca20050  sd          $v0, 0x50($a1)
    ctx->pc = 0x121378u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    // 0x12137c: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x12137cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x121380: 0x4a211058  vmulx.w     $vf1, $vf2, $vf1x
    ctx->pc = 0x121380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121384: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x121384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121388: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x121388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x12138c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x12138cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x121390: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x121390u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121398: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12139c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12139cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1213a0: 0x4a431058  vmulx.z     $vf1, $vf2, $vf3x
    ctx->pc = 0x1213a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1213a4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1213a4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1213a8: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1213a8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1213ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1213acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1213b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1213b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1213b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1213b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1213b8: 0x4a831058  vmulx.y     $vf1, $vf2, $vf3x
    ctx->pc = 0x1213b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1213bc: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1213bcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1213c0: 0x700617c9  prot3w      $v0, $a2
    ctx->pc = 0x1213c0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1213c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1213c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1213c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1213c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1213cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1213ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1213d0: 0x4b031098  vmulx.x     $vf2, $vf2, $vf3x
    ctx->pc = 0x1213d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1213d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1213d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1213d8: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x1213d8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1213dc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1213dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1213e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1213e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1213e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1213e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1213e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1213e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1213ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1213ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1213f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1213f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1213f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1213f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1213f8: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x1213f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x1213fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1213fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x121400: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x121400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x121404: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x121404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x121408: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x121408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x12140c: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x12140cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x121410: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x121410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x121414: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x121414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x121418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12141c: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x12141cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
    // 0x121420: 0xfca30068  sd          $v1, 0x68($a1)
    ctx->pc = 0x121420u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 3));
    // 0x121424: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x121428: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x121428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12142c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x12142cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121430: 0x9c42f1ac  lwu         $v0, -0xE54($v0)
    ctx->pc = 0x121430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
    // 0x121434: 0x9c63f1a8  lwu         $v1, -0xE58($v1)
    ctx->pc = 0x121434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963624)));
    // 0x121438: 0x9e440058  lwu         $a0, 0x58($s2)
    ctx->pc = 0x121438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x12143c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x12143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x121440: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x121440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x121444: 0xfca60078  sd          $a2, 0x78($a1)
    ctx->pc = 0x121444u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 6));
    // 0x121448: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12144c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12144cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x121450: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x121450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x121454: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x121454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121458: 0xfca20070  sd          $v0, 0x70($a1)
    ctx->pc = 0x121458u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 2));
    // 0x12145c: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x12145cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x121460: 0x7a440020  lq          $a0, 0x20($s2)
    ctx->pc = 0x121460u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x121464: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x121464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x121468: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x121468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12146c: 0x708210a8  pceqw       $v0, $a0, $v0
    ctx->pc = 0x12146cu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x121470: 0xae05f168  sw          $a1, -0xE98($s0)
    ctx->pc = 0x121470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 5));
    // 0x121474: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x121474u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x121478: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x121478u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12147c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12147cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x121480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121484: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x121484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x121488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121488u;
    {
        const bool branch_taken_0x121488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121488) {
            ctx->pc = 0x1214A8u;
            goto label_1214a8;
        }
    }
    ctx->pc = 0x121490u;
    // 0x121490: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x121490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x121494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121498: 0x708210a8  pceqw       $v0, $a0, $v0
    ctx->pc = 0x121498u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12149c: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x12149cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1214a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1214a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1214a4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1214a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1214a8:
    // 0x1214a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1214A8u;
    {
        const bool branch_taken_0x1214a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214A8u;
            // 0x1214ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214a8) {
            ctx->pc = 0x1214C4u;
            goto label_1214c4;
        }
    }
    ctx->pc = 0x1214B0u;
    // 0x1214b0: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x1214b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1214b4: 0xc048200  jal         func_120800
    ctx->pc = 0x1214B4u;
    SET_GPR_U32(ctx, 31, 0x1214BCu);
    ctx->pc = 0x1214B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1214B4u;
            // 0x1214b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120800u;
    if (runtime->hasFunction(0x120800u)) {
        auto targetFn = runtime->lookupFunction(0x120800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214BCu; }
        if (ctx->pc != 0x1214BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120800_0x120800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214BCu; }
        if (ctx->pc != 0x1214BCu) { return; }
    }
    ctx->pc = 0x1214BCu;
    // 0x1214bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1214BCu;
    {
        const bool branch_taken_0x1214bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214bc) {
            ctx->pc = 0x1214D4u;
            goto label_1214d4;
        }
    }
    ctx->pc = 0x1214C4u;
label_1214c4:
    // 0x1214c4: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x1214c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1214c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1214c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214cc: 0xc048360  jal         func_120D80
    ctx->pc = 0x1214CCu;
    SET_GPR_U32(ctx, 31, 0x1214D4u);
    ctx->pc = 0x1214D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1214CCu;
            // 0x1214d0: 0x2646005c  addiu       $a2, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120D80u;
    runtime->cooperativeGuestYield();
    goto label_120d80;
    ctx->pc = 0x1214D4u;
label_1214d4:
    // 0x1214d4: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1214D4u;
    SET_GPR_U32(ctx, 31, 0x1214DCu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214DCu; }
        if (ctx->pc != 0x1214DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214DCu; }
        if (ctx->pc != 0x1214DCu) { return; }
    }
    ctx->pc = 0x1214DCu;
    // 0x1214dc: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1214DCu;
    SET_GPR_U32(ctx, 31, 0x1214E4u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214E4u; }
        if (ctx->pc != 0x1214E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214E4u; }
        if (ctx->pc != 0x1214E4u) { return; }
    }
    ctx->pc = 0x1214E4u;
    // 0x1214e4: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1214e8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1214e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1214ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1214ECu;
    {
        const bool branch_taken_0x1214ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214ECu;
            // 0x1214f0: 0x8e82ed60  lw          $v0, -0x12A0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214ec) {
            ctx->pc = 0x121518u;
            goto label_121518;
        }
    }
    ctx->pc = 0x1214F4u;
    // 0x1214f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1214f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1214f8:
    // 0x1214f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1214fc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1214fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x121500: 0x0  nop
    ctx->pc = 0x121500u;
    // NOP
    // 0x121504: 0x0  nop
    ctx->pc = 0x121504u;
    // NOP
    // 0x121508: 0x0  nop
    ctx->pc = 0x121508u;
    // NOP
    // 0x12150c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12150Cu;
    {
        const bool branch_taken_0x12150c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12150c) {
            ctx->pc = 0x121510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12150Cu;
            // 0x121510: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1214F8u;
            runtime->cooperativeGuestYield();
            goto label_1214f8;
        }
    }
    ctx->pc = 0x121514u;
    // 0x121514: 0x8e82ed60  lw          $v0, -0x12A0($s4)
    ctx->pc = 0x121514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962528)));
label_121518:
    // 0x121518: 0x2671ed68  addiu       $s1, $s3, -0x1298
    ctx->pc = 0x121518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962536));
    // 0x12151c: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x12151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x121520: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121524: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121528: 0xae85ed60  sw          $a1, -0x12A0($s4)
    ctx->pc = 0x121528u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294962528), GPR_U32(ctx, 5));
    // 0x12152c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x121530: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x121530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121534: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121538: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x121538u;
    {
        const bool branch_taken_0x121538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121538u;
            // 0x12153c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121538) {
            ctx->pc = 0x121550u;
            goto label_121550;
        }
    }
    ctx->pc = 0x121540u;
    // 0x121540: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x121544: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x121544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x121548: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x121548u;
    SET_GPR_U32(ctx, 31, 0x121550u);
    ctx->pc = 0x12154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121548u;
            // 0x12154c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121550u; }
        if (ctx->pc != 0x121550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121550u; }
        if (ctx->pc != 0x121550u) { return; }
    }
    ctx->pc = 0x121550u;
label_121550:
    // 0x121550: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x121550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x121554: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x121554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121558: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x121558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12155c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x121560: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x121560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x121564: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x121564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x121568: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x121568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12156c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x121570: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x121570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x121574: 0x0  nop
    ctx->pc = 0x121574u;
    // NOP
label_121578:
    // 0x121578: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x121578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x12157c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12157cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x121580: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x121580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x121584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121588: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x121588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x12158c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12158Cu;
    {
        const bool branch_taken_0x12158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12158Cu;
            // 0x121590: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12158c) {
            ctx->pc = 0x1215B8u;
            goto label_1215b8;
        }
    }
    ctx->pc = 0x121594u;
    // 0x121594: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x121594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_121598:
    // 0x121598: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x121598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12159c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x1215a0: 0x0  nop
    ctx->pc = 0x1215a0u;
    // NOP
    // 0x1215a4: 0x0  nop
    ctx->pc = 0x1215a4u;
    // NOP
    // 0x1215a8: 0x0  nop
    ctx->pc = 0x1215a8u;
    // NOP
    // 0x1215ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1215ACu;
    {
        const bool branch_taken_0x1215ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215ac) {
            ctx->pc = 0x1215B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1215ACu;
            // 0x1215b0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121598u;
            runtime->cooperativeGuestYield();
            goto label_121598;
        }
    }
    ctx->pc = 0x1215B4u;
    // 0x1215b4: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x1215b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1215b8:
    // 0x1215b8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1215b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1215bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1215bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1215c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1215c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1215c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1215c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1215c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1215c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1215cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1215ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1215d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1215d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1215d4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1215d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1215d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1215d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1215dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1215dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1215e0: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x1215e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x1215e4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1215e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1215e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1215E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1215ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1215E8u;
            // 0x1215ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1215F0u;
    // 0x1215f0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1215f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1215f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1215f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1215f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1215f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1215fc: 0x244277d0  addiu       $v0, $v0, 0x77D0
    ctx->pc = 0x1215fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30672));
    // 0x121600: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x121600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121604: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x121604u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121608: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x121608u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12160c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12160cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121610: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x121610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121614: 0x0  nop
    ctx->pc = 0x121614u;
    // NOP
    // 0x121618: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x121618u;
    {
        const bool branch_taken_0x121618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121618) {
            ctx->pc = 0x12161Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121618u;
            // 0x12161c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12167Cu;
            goto label_12167c;
        }
    }
    ctx->pc = 0x121620u;
    // 0x121620: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x121620u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x121624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121628: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x121628u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12162c: 0x0  nop
    ctx->pc = 0x12162cu;
    // NOP
    // 0x121630: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x121630u;
    {
        const bool branch_taken_0x121630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121630) {
            ctx->pc = 0x121634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121630u;
            // 0x121634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12167Cu;
            goto label_12167c;
        }
    }
    ctx->pc = 0x121638u;
    // 0x121638: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x121638u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x12163c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12163cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121640: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x121640u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121644: 0x0  nop
    ctx->pc = 0x121644u;
    // NOP
    // 0x121648: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x121648u;
    {
        const bool branch_taken_0x121648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121648) {
            ctx->pc = 0x12164Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121648u;
            // 0x12164c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12167Cu;
            goto label_12167c;
        }
    }
    ctx->pc = 0x121650u;
    // 0x121650: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x121650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121654: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x121654u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12165c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12165cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121660: 0x0  nop
    ctx->pc = 0x121660u;
    // NOP
    // 0x121664: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x121664u;
    {
        const bool branch_taken_0x121664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121664) {
            ctx->pc = 0x121668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121664u;
            // 0x121668: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12167Cu;
            goto label_12167c;
        }
    }
    ctx->pc = 0x12166Cu;
    // 0x12166c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x121670: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x121670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x121674: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121674u;
    {
        const bool branch_taken_0x121674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121674) {
            ctx->pc = 0x121678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121674u;
            // 0x121678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12167Cu;
            goto label_12167c;
        }
    }
    ctx->pc = 0x12167Cu;
label_12167c:
    // 0x12167c: 0x3e00008  jr          $ra
    ctx->pc = 0x12167Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12167Cu;
            // 0x121680: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121684u;
    // 0x121684: 0x0  nop
    ctx->pc = 0x121684u;
    // NOP
    // 0x121688: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x121688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12168c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x121690: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x121690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x121694: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x121694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121698: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x121698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x12169c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12169cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1216a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1216a4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1216a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1216a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1216a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1216ac: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1216acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1216b0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1216b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1216b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1216b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1216b8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1216b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1216bc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1216bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1216c0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1216c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1216c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1216C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1216CCu);
        ctx->pc = 0x1216C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1216C4u;
            // 0x1216c8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1216CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1216CCu; }
            if (ctx->pc != 0x1216CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1216CCu;
    // 0x1216cc: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x1216CCu;
    {
        const bool branch_taken_0x1216cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1216CCu;
            // 0x1216d0: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216cc) {
            ctx->pc = 0x121A88u;
            goto label_121a88;
        }
    }
    ctx->pc = 0x1216D4u;
    // 0x1216d4: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x1216d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x1216d8: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1216d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1216dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1216dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1216e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1216E0u;
    {
        const bool branch_taken_0x1216e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1216E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1216E0u;
            // 0x1216e4: 0x8e920018  lw          $s2, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216e0) {
            ctx->pc = 0x121710u;
            goto label_121710;
        }
    }
    ctx->pc = 0x1216E8u;
    // 0x1216e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1216e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1216ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1216ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1216f0: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x1216f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x1216f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1216f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1216f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1216f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1216fc: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x1216fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x121700: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121704: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x121704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x121708: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12170c: 0x0  nop
    ctx->pc = 0x12170cu;
    // NOP
label_121710:
    // 0x121710: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x121710u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x121714: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x121714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x121718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12171c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x121720: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x121720u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x121724: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x121724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121728: 0xae63ed60  sw          $v1, -0x12A0($s3)
    ctx->pc = 0x121728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 3));
    // 0x12172c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x121730: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x121730u;
    SET_GPR_U32(ctx, 31, 0x121738u);
    ctx->pc = 0x121734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121730u;
            // 0x121734: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121738u; }
        if (ctx->pc != 0x121738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121738u; }
        if (ctx->pc != 0x121738u) { return; }
    }
    ctx->pc = 0x121738u;
    // 0x121738: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x121738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x12173c: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x12173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x121740: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121748: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12174c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12174cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x121750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x121750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121754: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x121754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x121758: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x121758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12175c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12175cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121760: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x121760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x121764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121768: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x121768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12176c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12176cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x121770: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x121770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x121774: 0x40f809  jalr        $v0
    ctx->pc = 0x121774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12177Cu);
        ctx->pc = 0x121778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121774u;
            // 0x121778: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12177Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12177Cu; }
            if (ctx->pc != 0x12177Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12177Cu;
    // 0x12177c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x12177cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121780: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x121780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x121784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121788: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x121788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12178c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12178Cu;
    SET_GPR_U32(ctx, 31, 0x121794u);
    ctx->pc = 0x121790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12178Cu;
            // 0x121790: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121794u; }
        if (ctx->pc != 0x121794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121794u; }
        if (ctx->pc != 0x121794u) { return; }
    }
    ctx->pc = 0x121794u;
    // 0x121794: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x121794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x121798: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x121798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x12179c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12179cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1217a0: 0x248277d0  addiu       $v0, $a0, 0x77D0
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
    // 0x1217a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1217a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1217a8: 0x4a211058  vmulx.w     $vf1, $vf2, $vf1x
    ctx->pc = 0x1217a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1217ac: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1217acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1217b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1217b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1217b4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1217b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1217b8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1217b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1217bc: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x1217bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1217c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1217c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1217c4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1217c4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1217c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1217c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1217cc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1217ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1217d0: 0x4a431058  vmulx.z     $vf1, $vf2, $vf3x
    ctx->pc = 0x1217d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1217d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1217d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1217d8: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1217d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1217dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1217dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1217e0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1217e0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1217e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1217e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1217e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1217e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1217ec: 0x4a831058  vmulx.y     $vf1, $vf2, $vf3x
    ctx->pc = 0x1217ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1217f0: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1217f0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1217f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1217f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217f8: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x1217f8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1217fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1217fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121800: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x121800u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x121804: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x121808: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x121808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12180c: 0x4b031098  vmulx.x     $vf2, $vf2, $vf3x
    ctx->pc = 0x12180cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x121810: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x121810u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x121814: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x121814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x121818: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x121818u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12181c: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x12181cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x121820: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x121820u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x121824: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x121824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x121828: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12182c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x121830: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x121830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121834: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x121834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x121838: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x121838u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x12183c: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12183Cu;
    SET_GPR_U32(ctx, 31, 0x121844u);
    ctx->pc = 0x121840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12183Cu;
            // 0x121840: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121844u; }
        if (ctx->pc != 0x121844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121844u; }
        if (ctx->pc != 0x121844u) { return; }
    }
    ctx->pc = 0x121844u;
    // 0x121844: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x121844u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x121848: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12184c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12184cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x121850: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x121850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x121854: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x121854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x121858: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x121858u;
    SET_GPR_U32(ctx, 31, 0x121860u);
    ctx->pc = 0x12185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121858u;
            // 0x12185c: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121860u; }
        if (ctx->pc != 0x121860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121860u; }
        if (ctx->pc != 0x121860u) { return; }
    }
    ctx->pc = 0x121860u;
    // 0x121860: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x121860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x121864: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x121864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x121868: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x121868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12186c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12186cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x121870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x121874: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x121874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x121878: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x121878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12187c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12187cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x121880: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x121880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x121884: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x121884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x121888: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x121888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12188c: 0x9ca2f19c  lwu         $v0, -0xE64($a1)
    ctx->pc = 0x12188cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294963612)));
    // 0x121890: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x121890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x121894: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x121894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x121898: 0x8e26f168  lw          $a2, -0xE98($s1)
    ctx->pc = 0x121898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12189c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12189cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1218a0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1218a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1218a4: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x1218a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x1218a8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1218a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1218ac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1218b0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1218b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1218b4: 0x8c47dd58  lw          $a3, -0x22A8($v0)
    ctx->pc = 0x1218b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x1218b8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1218b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1218bc: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x1218bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x1218c0: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1218c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1218c4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1218c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1218c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1218cc: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x1218ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1218d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1218d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1218d4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x1218d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1218d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1218d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1218dc: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1218dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x1218e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1218e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1218e4: 0x24090044  addiu       $t1, $zero, 0x44
    ctx->pc = 0x1218e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1218e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1218e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1218ec: 0x240a0043  addiu       $t2, $zero, 0x43
    ctx->pc = 0x1218ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1218f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1218f4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1218f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1218f8: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1218f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x1218fc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1218fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x121900: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x121900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x121904: 0xfcc40028  sd          $a0, 0x28($a2)
    ctx->pc = 0x121904u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 4));
    // 0x121908: 0xfcc50038  sd          $a1, 0x38($a2)
    ctx->pc = 0x121908u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
    // 0x12190c: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x12190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x121910: 0xfcc80048  sd          $t0, 0x48($a2)
    ctx->pc = 0x121910u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 8));
    // 0x121914: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x121914u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x121918: 0xfcc30040  sd          $v1, 0x40($a2)
    ctx->pc = 0x121918u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 3));
    // 0x12191c: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x12191cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x121920: 0xfcc90050  sd          $t1, 0x50($a2)
    ctx->pc = 0x121920u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 9));
    // 0x121924: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x121924u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x121928: 0xfcca0058  sd          $t2, 0x58($a2)
    ctx->pc = 0x121928u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 10));
    // 0x12192c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x12192cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x121930: 0xfcd00060  sd          $s0, 0x60($a2)
    ctx->pc = 0x121930u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 16));
    // 0x121934: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x121934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x121938: 0xfccd0068  sd          $t5, 0x68($a2)
    ctx->pc = 0x121938u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 13));
    // 0x12193c: 0x2408004d  addiu       $t0, $zero, 0x4D
    ctx->pc = 0x12193cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x121940: 0xfcc00030  sd          $zero, 0x30($a2)
    ctx->pc = 0x121940u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 0));
    // 0x121944: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121948: 0xae22f168  sw          $v0, -0xE98($s1)
    ctx->pc = 0x121948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
    // 0x12194c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121950: 0x9d82f1ac  lwu         $v0, -0xE54($t4)
    ctx->pc = 0x121950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 4294963628)));
    // 0x121954: 0x9d63f1a8  lwu         $v1, -0xE58($t3)
    ctx->pc = 0x121954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4294963624)));
    // 0x121958: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x121958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x12195c: 0xfcc80078  sd          $t0, 0x78($a2)
    ctx->pc = 0x12195cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 8));
    // 0x121960: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x121960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x121964: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121968: 0xc048200  jal         func_120800
    ctx->pc = 0x121968u;
    SET_GPR_U32(ctx, 31, 0x121970u);
    ctx->pc = 0x12196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121968u;
            // 0x12196c: 0xfcc20070  sd          $v0, 0x70($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120800u;
    if (runtime->hasFunction(0x120800u)) {
        auto targetFn = runtime->lookupFunction(0x120800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121970u; }
        if (ctx->pc != 0x121970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120800_0x120800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121970u; }
        if (ctx->pc != 0x121970u) { return; }
    }
    ctx->pc = 0x121970u;
    // 0x121970: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 31, 0x121978u);
    ctx->pc = 0x121974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121970u;
            // 0x121974: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121978u; }
        if (ctx->pc != 0x121978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121978u; }
        if (ctx->pc != 0x121978u) { return; }
    }
    ctx->pc = 0x121978u;
    // 0x121978: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x121978u;
    SET_GPR_U32(ctx, 31, 0x121980u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121980u; }
        if (ctx->pc != 0x121980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121980u; }
        if (ctx->pc != 0x121980u) { return; }
    }
    ctx->pc = 0x121980u;
    // 0x121980: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x121980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x121984: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x121984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x121988: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121988u;
    {
        const bool branch_taken_0x121988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121988u;
            // 0x12198c: 0x8e62ed60  lw          $v0, -0x12A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121988) {
            ctx->pc = 0x1219B8u;
            goto label_1219b8;
        }
    }
    ctx->pc = 0x121990u;
    // 0x121990: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x121990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x121994: 0x0  nop
    ctx->pc = 0x121994u;
    // NOP
label_121998:
    // 0x121998: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12199c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1219a0: 0x0  nop
    ctx->pc = 0x1219a0u;
    // NOP
    // 0x1219a4: 0x0  nop
    ctx->pc = 0x1219a4u;
    // NOP
    // 0x1219a8: 0x0  nop
    ctx->pc = 0x1219a8u;
    // NOP
    // 0x1219ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1219ACu;
    {
        const bool branch_taken_0x1219ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1219ac) {
            ctx->pc = 0x1219B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1219ACu;
            // 0x1219b0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121998u;
            runtime->cooperativeGuestYield();
            goto label_121998;
        }
    }
    ctx->pc = 0x1219B4u;
    // 0x1219b4: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x1219b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
label_1219b8:
    // 0x1219b8: 0x26f1ed68  addiu       $s1, $s7, -0x1298
    ctx->pc = 0x1219b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962536));
    // 0x1219bc: 0xae04f168  sw          $a0, -0xE98($s0)
    ctx->pc = 0x1219bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 4));
    // 0x1219c0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1219c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1219c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1219c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1219c8: 0xae65ed60  sw          $a1, -0x12A0($s3)
    ctx->pc = 0x1219c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 5));
    // 0x1219cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1219d0: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x1219d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1219d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1219d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1219D8u;
    {
        const bool branch_taken_0x1219d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1219D8u;
            // 0x1219dc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d8) {
            ctx->pc = 0x1219F0u;
            goto label_1219f0;
        }
    }
    ctx->pc = 0x1219E0u;
    // 0x1219e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1219e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1219e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1219e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1219e8: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1219E8u;
    SET_GPR_U32(ctx, 31, 0x1219F0u);
    ctx->pc = 0x1219ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1219E8u;
            // 0x1219ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1219F0u; }
        if (ctx->pc != 0x1219F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1219F0u; }
        if (ctx->pc != 0x1219F0u) { return; }
    }
    ctx->pc = 0x1219F0u;
label_1219f0:
    // 0x1219f0: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x1219f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x1219f4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1219f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1219f8: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x1219f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x1219fc: 0x3c07bf80  lui         $a3, 0xBF80
    ctx->pc = 0x1219fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49024 << 16));
    // 0x121a00: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x121a00u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x121a04: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x121a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x121a08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x121a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x121a0c: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x121a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
    // 0x121a10: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x121a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x121a14: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x121a18: 0x3c07bf80  lui         $a3, 0xBF80
    ctx->pc = 0x121a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49024 << 16));
    // 0x121a1c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x121a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x121a20: 0x264477d0  addiu       $a0, $s2, 0x77D0
    ctx->pc = 0x121a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 30672));
    // 0x121a24: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x121a24u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x121a28: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x121a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x121a2c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x121a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x121a30: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x121a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x121a34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x121a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x121a38: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x121a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x121a3c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x121a40: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x121a44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x121a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121a48: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x121a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x121a4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x121A4Cu;
    {
        const bool branch_taken_0x121a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121A4Cu;
            // 0x121a50: 0x24a30008  addiu       $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a4c) {
            ctx->pc = 0x121A78u;
            goto label_121a78;
        }
    }
    ctx->pc = 0x121A54u;
    // 0x121a54: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x121a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_121a58:
    // 0x121a58: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x121a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x121a5c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x121a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x121a60: 0x0  nop
    ctx->pc = 0x121a60u;
    // NOP
    // 0x121a64: 0x0  nop
    ctx->pc = 0x121a64u;
    // NOP
    // 0x121a68: 0x0  nop
    ctx->pc = 0x121a68u;
    // NOP
    // 0x121a6c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x121A6Cu;
    {
        const bool branch_taken_0x121a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121a6c) {
            ctx->pc = 0x121A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121A6Cu;
            // 0x121a70: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121A58u;
            runtime->cooperativeGuestYield();
            goto label_121a58;
        }
    }
    ctx->pc = 0x121A74u;
    // 0x121a74: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x121a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_121a78:
    // 0x121a78: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x121a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x121a7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x121a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x121a80: 0xae03f168  sw          $v1, -0xE98($s0)
    ctx->pc = 0x121a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 3));
    // 0x121a84: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x121a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_121a88:
    // 0x121a88: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x121a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x121a8c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x121a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x121a90: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x121a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x121a94: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x121a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x121a98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x121a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x121a9c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x121a9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121aa0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x121aa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121aa4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x121aa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121aac: 0x3e00008  jr          $ra
    ctx->pc = 0x121AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121AACu;
            // 0x121ab0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120D80u: goto label_120d80;
            case 0x120DA8u: goto label_120da8;
            case 0x120E68u: goto label_120e68;
            case 0x120EB8u: goto label_120eb8;
            case 0x120F28u: goto label_120f28;
            case 0x120FD8u: goto label_120fd8;
            case 0x120FE8u: goto label_120fe8;
            case 0x121060u: goto label_121060;
            case 0x1210E8u: goto label_1210e8;
            case 0x121104u: goto label_121104;
            case 0x1211C0u: goto label_1211c0;
            case 0x1211C8u: goto label_1211c8;
            case 0x121200u: goto label_121200;
            case 0x1214A8u: goto label_1214a8;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214D4u: goto label_1214d4;
            case 0x1214F8u: goto label_1214f8;
            case 0x121518u: goto label_121518;
            case 0x121550u: goto label_121550;
            case 0x121578u: goto label_121578;
            case 0x121598u: goto label_121598;
            case 0x1215B8u: goto label_1215b8;
            case 0x12167Cu: goto label_12167c;
            case 0x121710u: goto label_121710;
            case 0x121998u: goto label_121998;
            case 0x1219B8u: goto label_1219b8;
            case 0x1219F0u: goto label_1219f0;
            case 0x121A58u: goto label_121a58;
            case 0x121A78u: goto label_121a78;
            case 0x121A88u: goto label_121a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121AB4u;
    // 0x121ab4: 0x0  nop
    ctx->pc = 0x121ab4u;
    // NOP
}
