#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192EA0
// Address: 0x192ea0 - 0x192fc0
void sub_00192EA0_0x192ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192EA0_0x192ea0");
#endif

    ctx->pc = 0x192ea0u;

    // 0x192ea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x192ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x192ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x192ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192ea8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x192ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x192eac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x192eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x192eb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x192eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192eb8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x192eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x192ebc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192ec0: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x192ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x192ec4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192EC4u;
    {
        const bool branch_taken_0x192ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x192EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192EC4u;
            // 0x192ec8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ec4) {
            ctx->pc = 0x192ED4u;
            goto label_192ed4;
        }
    }
    ctx->pc = 0x192ECCu;
    // 0x192ecc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192ECCu;
    {
        const bool branch_taken_0x192ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192ECCu;
            // 0x192ed0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ecc) {
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192ED4u;
label_192ed4:
    // 0x192ed4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x192ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x192ed8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x192ed8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x192edc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x192edcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x192ee0: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192EE0u;
    {
        const bool branch_taken_0x192ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x192ee0) {
            ctx->pc = 0x192EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192EE0u;
            // 0x192ee4: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192EE8u;
    // 0x192ee8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x192EE8u;
    SET_GPR_U32(ctx, 31, 0x192EF0u);
    ctx->pc = 0x192EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EE8u;
            // 0x192eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EF0u; }
        if (ctx->pc != 0x192EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EF0u; }
        if (ctx->pc != 0x192EF0u) { return; }
    }
    ctx->pc = 0x192EF0u;
    // 0x192ef0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_192ef4:
    // 0x192ef4: 0xc06149c  jal         func_185270
    ctx->pc = 0x192EF4u;
    SET_GPR_U32(ctx, 31, 0x192EFCu);
    ctx->pc = 0x192EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EF4u;
            // 0x192ef8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EFCu; }
        if (ctx->pc != 0x192EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EFCu; }
        if (ctx->pc != 0x192EFCu) { return; }
    }
    ctx->pc = 0x192EFCu;
    // 0x192efc: 0xc0783be  jal         func_1E0EF8
    ctx->pc = 0x192EFCu;
    SET_GPR_U32(ctx, 31, 0x192F04u);
    ctx->pc = 0x192F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EFCu;
            // 0x192f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0EF8u;
    if (runtime->hasFunction(0x1E0EF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F04u; }
        if (ctx->pc != 0x192F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0EF8_0x1e0ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F04u; }
        if (ctx->pc != 0x192F04u) { return; }
    }
    ctx->pc = 0x192F04u;
    // 0x192f04: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x192f04u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192f08: 0x26270150  addiu       $a3, $s1, 0x150
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x192f0c: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x192f0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192f10: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x192f10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x192f14: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x192f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f1c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x192f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192f20: 0x7e260050  sq          $a2, 0x50($s1)
    ctx->pc = 0x192f20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 6));
    // 0x192f24: 0x7e250060  sq          $a1, 0x60($s1)
    ctx->pc = 0x192f24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 5));
    // 0x192f28: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x192f28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
    // 0x192f2c: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x192f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
    // 0x192f30: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x192f30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x192f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f3c: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x192f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x192f40: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x192f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x192f44: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x192f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x192f48: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x192f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x192f4c: 0xc077c50  jal         func_1DF140
    ctx->pc = 0x192F4Cu;
    SET_GPR_U32(ctx, 31, 0x192F54u);
    ctx->pc = 0x192F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F4Cu;
            // 0x192f50: 0xae220174  sw          $v0, 0x174($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF140u;
    if (runtime->hasFunction(0x1DF140u)) {
        auto targetFn = runtime->lookupFunction(0x1DF140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F54u; }
        if (ctx->pc != 0x192F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF140_0x1df140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F54u; }
        if (ctx->pc != 0x192F54u) { return; }
    }
    ctx->pc = 0x192F54u;
    // 0x192f54: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x192f58: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x192f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x192f5c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x192f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x192f60: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x192f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x192f64: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x192f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x192f68: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x192f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x192f6c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x192f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x192f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192f74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192f78: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192F78u;
    {
        const bool branch_taken_0x192f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x192F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F78u;
            // 0x192f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f78) {
            ctx->pc = 0x192F84u;
            goto label_192f84;
        }
    }
    ctx->pc = 0x192F80u;
    // 0x192f80: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x192f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_192f84:
    // 0x192f84: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x192F84u;
    {
        const bool branch_taken_0x192f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F84u;
            // 0x192f88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f84) {
            ctx->pc = 0x192FA0u;
            goto label_192fa0;
        }
    }
    ctx->pc = 0x192F8Cu;
    // 0x192f8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x192f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x192f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x192f94: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x192f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x192f98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192f9c: 0x0  nop
    ctx->pc = 0x192f9cu;
    // NOP
label_192fa0:
    // 0x192fa0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x192fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192fa4: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x192fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x192fa8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x192fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192fac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x192facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192fb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x192FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FB4u;
            // 0x192fb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192ED4u: goto label_192ed4;
            case 0x192EF4u: goto label_192ef4;
            case 0x192F84u: goto label_192f84;
            case 0x192FA0u: goto label_192fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192FBCu;
    // 0x192fbc: 0x0  nop
    ctx->pc = 0x192fbcu;
    // NOP
}
