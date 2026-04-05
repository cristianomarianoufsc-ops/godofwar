#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9648
// Address: 0x1e9648 - 0x1e9a38
void sub_001E9648_0x1e9648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9648_0x1e9648");
#endif

    ctx->pc = 0x1e9648u;

    // 0x1e9648: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e9648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e964c: 0x3c020203  lui         $v0, 0x203
    ctx->pc = 0x1e964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)515 << 16));
    // 0x1e9650: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1e9650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1e9654: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e9654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e9658: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1e9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1e965c: 0x3c100802  lui         $s0, 0x802
    ctx->pc = 0x1e965cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2050 << 16));
    // 0x1e9660: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1e9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1e9664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9668: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1e966c: 0x3c040430  lui         $a0, 0x430
    ctx->pc = 0x1e966cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1072 << 16));
    // 0x1e9670: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e9670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e9674: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e9674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9678: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1e9678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1e967c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e967cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9680: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1e9680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1e9684: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1e9684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1e9688: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e9688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1e968c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e9690: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1e9690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1e9694: 0x8e250174  lw          $a1, 0x174($s1)
    ctx->pc = 0x1e9694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e9698: 0x8e230258  lw          $v1, 0x258($s1)
    ctx->pc = 0x1e9698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e969c: 0x8e290324  lw          $t1, 0x324($s1)
    ctx->pc = 0x1e969cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1e96a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e96a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e96a4: 0x62b825  or          $s7, $v1, $v0
    ctx->pc = 0x1e96a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e96a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1e96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1e96ac: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x1e96b0: 0xa4b024  and         $s6, $a1, $a0
    ctx->pc = 0x1e96b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1e96b4: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x1e96b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x1e96b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E96B8u;
    {
        const bool branch_taken_0x1e96b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96B8u;
            // 0x1e96bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96b8) {
            ctx->pc = 0x1E96D4u;
            goto label_1e96d4;
        }
    }
    ctx->pc = 0x1E96C0u;
    // 0x1e96c0: 0xc090d56  jal         func_243558
    ctx->pc = 0x1E96C0u;
    SET_GPR_U32(ctx, 31, 0x1E96C8u);
    ctx->pc = 0x1E96C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96C0u;
            // 0x1e96c4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96C8u; }
        if (ctx->pc != 0x1E96C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96C8u; }
        if (ctx->pc != 0x1E96C8u) { return; }
    }
    ctx->pc = 0x1E96C8u;
    // 0x1e96c8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1e96c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1e96cc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x1e96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x1e96d0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1e96d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e96d4:
    // 0x1e96d4: 0x3c022802  lui         $v0, 0x2802
    ctx->pc = 0x1e96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10242 << 16));
    // 0x1e96d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e96d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96dc: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1e96dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1e96e0:
    // 0x1e96e0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E96E0u;
    {
        const bool branch_taken_0x1e96e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96E0u;
            // 0x1e96e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96e0) {
            ctx->pc = 0x1E96F4u;
            goto label_1e96f4;
        }
    }
    ctx->pc = 0x1E96E8u;
    // 0x1e96e8: 0xc078888  jal         func_1E2220
    ctx->pc = 0x1E96E8u;
    SET_GPR_U32(ctx, 31, 0x1E96F0u);
    ctx->pc = 0x1E96ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96E8u;
            // 0x1e96ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2220u;
    if (runtime->hasFunction(0x1E2220u)) {
        auto targetFn = runtime->lookupFunction(0x1E2220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96F0u; }
        if (ctx->pc != 0x1E96F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2220_0x1e2220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96F0u; }
        if (ctx->pc != 0x1E96F0u) { return; }
    }
    ctx->pc = 0x1E96F0u;
    // 0x1e96f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e96f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e96f4:
    // 0x1e96f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e96f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e96f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e96fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9700: 0xc078552  jal         func_1E1548
    ctx->pc = 0x1E9700u;
    SET_GPR_U32(ctx, 31, 0x1E9708u);
    ctx->pc = 0x1E9704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9700u;
            // 0x1e9704: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1548u;
    if (runtime->hasFunction(0x1E1548u)) {
        auto targetFn = runtime->lookupFunction(0x1E1548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9708u; }
        if (ctx->pc != 0x1E9708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1548_0x1e1548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9708u; }
        if (ctx->pc != 0x1E9708u) { return; }
    }
    ctx->pc = 0x1E9708u;
    // 0x1e9708: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1e9708u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e970c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1e970cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9710: 0x7a260110  lq          $a2, 0x110($s1)
    ctx->pc = 0x1e9710u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1e9714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9718: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e971c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e971cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9720: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1e9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e9724: 0xc0789b8  jal         func_1E26E0
    ctx->pc = 0x1E9724u;
    SET_GPR_U32(ctx, 31, 0x1E972Cu);
    ctx->pc = 0x1E9728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9724u;
            // 0x1e9728: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E26E0u;
    if (runtime->hasFunction(0x1E26E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E972Cu; }
        if (ctx->pc != 0x1E972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E26E0_0x1e26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E972Cu; }
        if (ctx->pc != 0x1E972Cu) { return; }
    }
    ctx->pc = 0x1E972Cu;
    // 0x1e972c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E972Cu;
    {
        const bool branch_taken_0x1e972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E972Cu;
            // 0x1e9730: 0xdba30020  lqc2        $vf3, 0x20($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e972c) {
            ctx->pc = 0x1E979Cu;
            goto label_1e979c;
        }
    }
    ctx->pc = 0x1E9734u;
    // 0x1e9734: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e9734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9738: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1e9738u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e973c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e973cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e9740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e9740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9744: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e9744u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e9748: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e9748u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e974c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e974cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9750: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e9750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9754: 0x0  nop
    ctx->pc = 0x1e9754u;
    // NOP
    // 0x1e9758: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9758u;
    {
        const bool branch_taken_0x1e9758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9758u;
            // 0x1e975c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9758) {
            ctx->pc = 0x1E9764u;
            goto label_1e9764;
        }
    }
    ctx->pc = 0x1E9760u;
    // 0x1e9760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9764:
    // 0x1e9764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9764u;
    {
        const bool branch_taken_0x1e9764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9764) {
            ctx->pc = 0x1E9778u;
            goto label_1e9778;
        }
    }
    ctx->pc = 0x1E976Cu;
    // 0x1e976c: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1e976cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9770: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E9770u;
    {
        const bool branch_taken_0x1e9770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9770u;
            // 0x1e9774: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9770) {
            ctx->pc = 0x1E9800u;
            goto label_1e9800;
        }
    }
    ctx->pc = 0x1E9778u;
label_1e9778:
    // 0x1e9778: 0x52a00022  beql        $s5, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E9778u;
    {
        const bool branch_taken_0x1e9778 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9778) {
            ctx->pc = 0x1E977Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9778u;
            // 0x1e977c: 0x7a260110  lq          $a2, 0x110($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9804u;
            goto label_1e9804;
        }
    }
    ctx->pc = 0x1E9780u;
    // 0x1e9780: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1e9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e9784: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e9784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e9788: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1e9788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1e978c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e978cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9790: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1e9790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1e9794: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E9794u;
    {
        const bool branch_taken_0x1e9794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9794u;
            // 0x1e9798: 0xae230174  sw          $v1, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9794) {
            ctx->pc = 0x1E9800u;
            goto label_1e9800;
        }
    }
    ctx->pc = 0x1E979Cu;
label_1e979c:
    // 0x1e979c: 0x52a00019  beql        $s5, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E979Cu;
    {
        const bool branch_taken_0x1e979c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e979c) {
            ctx->pc = 0x1E97A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E979Cu;
            // 0x1e97a0: 0x7a260110  lq          $a2, 0x110($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9804u;
            goto label_1e9804;
        }
    }
    ctx->pc = 0x1E97A4u;
    // 0x1e97a4: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1e97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1e97a8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e97ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E97ACu;
    {
        const bool branch_taken_0x1e97ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97ACu;
            // 0x1e97b0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97ac) {
            ctx->pc = 0x1E97D8u;
            goto label_1e97d8;
        }
    }
    ctx->pc = 0x1E97B4u;
    // 0x1e97b4: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1e97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e97b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e97bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E97BCu;
    {
        const bool branch_taken_0x1e97bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97bc) {
            ctx->pc = 0x1E97C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97BCu;
            // 0x1e97c0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E97E0u;
            goto label_1e97e0;
        }
    }
    ctx->pc = 0x1E97C4u;
    // 0x1e97c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e97c8: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1e97c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1e97cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e97ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e97d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E97D0u;
    {
        const bool branch_taken_0x1e97d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97D0u;
            // 0x1e97d4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97d0) {
            ctx->pc = 0x1E97FCu;
            goto label_1e97fc;
        }
    }
    ctx->pc = 0x1E97D8u;
label_1e97d8:
    // 0x1e97d8: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e97dc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1e97e0:
    // 0x1e97e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E97E0u;
    {
        const bool branch_taken_0x1e97e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97e0) {
            ctx->pc = 0x1E97E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97E0u;
            // 0x1e97e4: 0x7a260110  lq          $a2, 0x110($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9804u;
            goto label_1e9804;
        }
    }
    ctx->pc = 0x1E97E8u;
    // 0x1e97e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e97ec: 0xae2002b8  sw          $zero, 0x2B8($s1)
    ctx->pc = 0x1e97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
    // 0x1e97f0: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1e97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1e97f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e97f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e97f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e97f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1e97fc:
    // 0x1e97fc: 0xae220174  sw          $v0, 0x174($s1)
    ctx->pc = 0x1e97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
label_1e9800:
    // 0x1e9800: 0x7a260110  lq          $a2, 0x110($s1)
    ctx->pc = 0x1e9800u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 272)));
label_1e9804:
    // 0x1e9804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9808: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e980c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1e980cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9810: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e9810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9814: 0xc078abe  jal         func_1E2AF8
    ctx->pc = 0x1E9814u;
    SET_GPR_U32(ctx, 31, 0x1E981Cu);
    ctx->pc = 0x1E9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9814u;
            // 0x1e9818: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AF8u;
    if (runtime->hasFunction(0x1E2AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E981Cu; }
        if (ctx->pc != 0x1E981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AF8_0x1e2af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E981Cu; }
        if (ctx->pc != 0x1E981Cu) { return; }
    }
    ctx->pc = 0x1E981Cu;
    // 0x1e981c: 0x3c1e002a  lui         $fp, 0x2A
    ctx->pc = 0x1e981cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)42 << 16));
    // 0x1e9820: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e9820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e9824: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1e9824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9828: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e982c: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e982cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e9830: 0x2642f170  addiu       $v0, $s2, -0xE90
    ctx->pc = 0x1e9830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963568));
    // 0x1e9834: 0xae43f170  sw          $v1, -0xE90($s2)
    ctx->pc = 0x1e9834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963568), GPR_U32(ctx, 3));
    // 0x1e9838: 0x248412c8  addiu       $a0, $a0, 0x12C8
    ctx->pc = 0x1e9838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4808));
    // 0x1e983c: 0x2f02825  or          $a1, $s7, $s0
    ctx->pc = 0x1e983cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | GPR_U64(ctx, 16));
    // 0x1e9840: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9844: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1e9844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1e9848: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1e9848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1e984c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1e984cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1e9850: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e9850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e9854: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e9854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e9858: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e9858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e985c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e985cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e9860: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e9860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e9864: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e9864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e9868: 0x8fc4bcf8  lw          $a0, -0x4308($fp)
    ctx->pc = 0x1e9868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950136)));
    // 0x1e986c: 0x7a250110  lq          $a1, 0x110($s1)
    ctx->pc = 0x1e986cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1e9870: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E9870u;
    SET_GPR_U32(ctx, 31, 0x1E9878u);
    ctx->pc = 0x1E9874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9870u;
            // 0x1e9874: 0x7ba60000  lq          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9878u; }
        if (ctx->pc != 0x1E9878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9878u; }
        if (ctx->pc != 0x1E9878u) { return; }
    }
    ctx->pc = 0x1E9878u;
    // 0x1e9878: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9878u;
    {
        const bool branch_taken_0x1e9878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9878u;
            // 0x1e987c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9878) {
            ctx->pc = 0x1E98C8u;
            goto label_1e98c8;
        }
    }
    ctx->pc = 0x1E9880u;
    // 0x1e9880: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1e9880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1e9884: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e9884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1e9888: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e9888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e988c: 0x244277a0  addiu       $v0, $v0, 0x77A0
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30624));
    // 0x1e9890: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e9890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9894: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e9894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e9898: 0xd841fff0  lqc2        $vf1, -0x10($v0)
    ctx->pc = 0x1e9898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x1e989c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e989cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e98a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e98a4: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E98A4u;
    {
        const bool branch_taken_0x1e98a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E98A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98A4u;
            // 0x1e98a8: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98a4) {
            ctx->pc = 0x1E98B8u;
            goto label_1e98b8;
        }
    }
    ctx->pc = 0x1E98ACu;
    // 0x1e98ac: 0x7a220110  lq          $v0, 0x110($s1)
    ctx->pc = 0x1e98acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1e98b0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e98b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e98b4: 0x0  nop
    ctx->pc = 0x1e98b4u;
    // NOP
label_1e98b8:
    // 0x1e98b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e98b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e98bc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1e98bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e98c0: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1E98C0u;
    {
        const bool branch_taken_0x1e98c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e98c0) {
            ctx->pc = 0x1E96E0u;
            runtime->cooperativeGuestYield();
            goto label_1e96e0;
        }
    }
    ctx->pc = 0x1E98C8u;
label_1e98c8:
    // 0x1e98c8: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1e98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1e98cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e98d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E98D0u;
    {
        const bool branch_taken_0x1e98d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98D0u;
            // 0x1e98d4: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98d0) {
            ctx->pc = 0x1E9918u;
            goto label_1e9918;
        }
    }
    ctx->pc = 0x1E98D8u;
    // 0x1e98d8: 0xc0728a8  jal         func_1CA2A0
    ctx->pc = 0x1E98D8u;
    SET_GPR_U32(ctx, 31, 0x1E98E0u);
    ctx->pc = 0x1E98DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98D8u;
            // 0x1e98dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2A0u;
    if (runtime->hasFunction(0x1CA2A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98E0u; }
        if (ctx->pc != 0x1E98E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA2A0_0x1ca2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98E0u; }
        if (ctx->pc != 0x1E98E0u) { return; }
    }
    ctx->pc = 0x1E98E0u;
    // 0x1e98e0: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1e98e4: 0x30420380  andi        $v0, $v0, 0x380
    ctx->pc = 0x1e98e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)896);
    // 0x1e98e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E98E8u;
    {
        const bool branch_taken_0x1e98e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98E8u;
            // 0x1e98ec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98e8) {
            ctx->pc = 0x1E991Cu;
            goto label_1e991c;
        }
    }
    ctx->pc = 0x1E98F0u;
    // 0x1e98f0: 0x8e230328  lw          $v1, 0x328($s1)
    ctx->pc = 0x1e98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x1e98f4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1e98f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E98F8u;
    {
        const bool branch_taken_0x1e98f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e98f8) {
            ctx->pc = 0x1E98FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98F8u;
            // 0x1e98fc: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E991Cu;
            goto label_1e991c;
        }
    }
    ctx->pc = 0x1E9900u;
    // 0x1e9900: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1e9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1e9904: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e9904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e9908: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9908u;
    {
        const bool branch_taken_0x1e9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9908u;
            // 0x1e990c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9908) {
            ctx->pc = 0x1E991Cu;
            goto label_1e991c;
        }
    }
    ctx->pc = 0x1E9910u;
    // 0x1e9910: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x1e9910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x1e9914: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x1e9914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
label_1e9918:
    // 0x1e9918: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1e9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1e991c:
    // 0x1e991c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1E991Cu;
    {
        const bool branch_taken_0x1e991c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E991Cu;
            // 0x1e9920: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e991c) {
            ctx->pc = 0x1E9A04u;
            goto label_1e9a04;
        }
    }
    ctx->pc = 0x1E9924u;
    // 0x1e9924: 0x8e300324  lw          $s0, 0x324($s1)
    ctx->pc = 0x1e9924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1e9928: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1e9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1e992c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E992Cu;
    {
        const bool branch_taken_0x1e992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E992Cu;
            // 0x1e9930: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e992c) {
            ctx->pc = 0x1E9950u;
            goto label_1e9950;
        }
    }
    ctx->pc = 0x1E9934u;
    // 0x1e9934: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1e9938: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x1e9938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1e993c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E993Cu;
    {
        const bool branch_taken_0x1e993c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E993Cu;
            // 0x1e9940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e993c) {
            ctx->pc = 0x1E9954u;
            goto label_1e9954;
        }
    }
    ctx->pc = 0x1E9944u;
    // 0x1e9944: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1e9944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1e9948: 0xc081522  jal         func_205488
    ctx->pc = 0x1E9948u;
    SET_GPR_U32(ctx, 31, 0x1E9950u);
    ctx->pc = 0x1E994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9948u;
            // 0x1e994c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205488u;
    if (runtime->hasFunction(0x205488u)) {
        auto targetFn = runtime->lookupFunction(0x205488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9950u; }
        if (ctx->pc != 0x1E9950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205488_0x205488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9950u; }
        if (ctx->pc != 0x1E9950u) { return; }
    }
    ctx->pc = 0x1E9950u;
label_1e9950:
    // 0x1e9950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9954:
    // 0x1e9954: 0xc090d5c  jal         func_243570
    ctx->pc = 0x1E9954u;
    SET_GPR_U32(ctx, 31, 0x1E995Cu);
    ctx->pc = 0x1E9958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9954u;
            // 0x1e9958: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243570u;
    if (runtime->hasFunction(0x243570u)) {
        auto targetFn = runtime->lookupFunction(0x243570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E995Cu; }
        if (ctx->pc != 0x1E995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243570_0x243580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E995Cu; }
        if (ctx->pc != 0x1E995Cu) { return; }
    }
    ctx->pc = 0x1E995Cu;
    // 0x1e995c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E995Cu;
    {
        const bool branch_taken_0x1e995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E995Cu;
            // 0x1e9960: 0x3c020903  lui         $v0, 0x903 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e995c) {
            ctx->pc = 0x1E9A00u;
            goto label_1e9a00;
        }
    }
    ctx->pc = 0x1E9964u;
    // 0x1e9964: 0x8e240258  lw          $a0, 0x258($s1)
    ctx->pc = 0x1e9964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x1e9968: 0x3c050430  lui         $a1, 0x430
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1072 << 16));
    // 0x1e996c: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x1e996cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1e9970: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1e9970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1e9974: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e9974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1e9978: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e9978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e997c: 0x34631ff3  ori         $v1, $v1, 0x1FF3
    ctx->pc = 0x1e997cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8179);
    // 0x1e9980: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1e9980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e9984: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9988: 0x661827  nor         $v1, $v1, $a2
    ctx->pc = 0x1e9988u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 6)));
    // 0x1e998c: 0x2642f170  addiu       $v0, $s2, -0xE90
    ctx->pc = 0x1e998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963568));
    // 0x1e9990: 0xae43f170  sw          $v1, -0xE90($s2)
    ctx->pc = 0x1e9990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963568), GPR_U32(ctx, 3));
    // 0x1e9994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e9994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9998: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e9998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e999c: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1e999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1e99a0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e99a4: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1e99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1e99a8: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1e99a8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e99ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e99acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e99b0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e99b4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e99b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e99b8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e99bc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e99c0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1e99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1e99c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e99c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e99c8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e99c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e99cc: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e99ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e99d0: 0x8fc4bcf8  lw          $a0, -0x4308($fp)
    ctx->pc = 0x1e99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950136)));
    // 0x1e99d4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1e99d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e99d8: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e99d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e99dc: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E99DCu;
    SET_GPR_U32(ctx, 31, 0x1E99E4u);
    ctx->pc = 0x1E99E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99DCu;
            // 0x1e99e0: 0x48261000  qmfc2.ni    $a2, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99E4u; }
        if (ctx->pc != 0x1E99E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99E4u; }
        if (ctx->pc != 0x1E99E4u) { return; }
    }
    ctx->pc = 0x1E99E4u;
    // 0x1e99e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E99E4u;
    {
        const bool branch_taken_0x1e99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E99E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99E4u;
            // 0x1e99e8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99e4) {
            ctx->pc = 0x1E9A04u;
            goto label_1e9a04;
        }
    }
    ctx->pc = 0x1E99ECu;
    // 0x1e99ec: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1E99ECu;
    SET_GPR_U32(ctx, 31, 0x1E99F4u);
    ctx->pc = 0x1E99F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99ECu;
            // 0x1e99f0: 0x8e240324  lw          $a0, 0x324($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99F4u; }
        if (ctx->pc != 0x1E99F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99F4u; }
        if (ctx->pc != 0x1E99F4u) { return; }
    }
    ctx->pc = 0x1E99F4u;
    // 0x1e99f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e99f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99f8: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1E99F8u;
    SET_GPR_U32(ctx, 31, 0x1E9A00u);
    ctx->pc = 0x1E99FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99F8u;
            // 0x1e99fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A00u; }
        if (ctx->pc != 0x1E9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A00u; }
        if (ctx->pc != 0x1E9A00u) { return; }
    }
    ctx->pc = 0x1E9A00u;
label_1e9a00:
    // 0x1e9a00: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e9a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9a04:
    // 0x1e9a04: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1e9a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e9a08: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1e9a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e9a0c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1e9a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9a10: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1e9a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9a14: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1e9a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9a18: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e9a18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9a1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e9a1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9a20: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1e9a20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9a24: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e9a24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A2Cu;
            // 0x1e9a30: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E96D4u: goto label_1e96d4;
            case 0x1E96E0u: goto label_1e96e0;
            case 0x1E96F4u: goto label_1e96f4;
            case 0x1E9764u: goto label_1e9764;
            case 0x1E9778u: goto label_1e9778;
            case 0x1E979Cu: goto label_1e979c;
            case 0x1E97D8u: goto label_1e97d8;
            case 0x1E97E0u: goto label_1e97e0;
            case 0x1E97FCu: goto label_1e97fc;
            case 0x1E9800u: goto label_1e9800;
            case 0x1E9804u: goto label_1e9804;
            case 0x1E98B8u: goto label_1e98b8;
            case 0x1E98C8u: goto label_1e98c8;
            case 0x1E9918u: goto label_1e9918;
            case 0x1E991Cu: goto label_1e991c;
            case 0x1E9950u: goto label_1e9950;
            case 0x1E9954u: goto label_1e9954;
            case 0x1E9A00u: goto label_1e9a00;
            case 0x1E9A04u: goto label_1e9a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9A34u;
    // 0x1e9a34: 0x0  nop
    ctx->pc = 0x1e9a34u;
    // NOP
}
