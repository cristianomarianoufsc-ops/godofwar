#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214F50
// Address: 0x214f50 - 0x215010
void sub_00214F50_0x214f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214F50_0x214f50");
#endif

    ctx->pc = 0x214f50u;

    // 0x214f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x214f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x214f54: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x214f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x214f58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x214f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x214f5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x214f5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x214f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x214f64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x214f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x214f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x214f6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x214f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x214f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214f74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x214f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214f78: 0x8c520104  lw          $s2, 0x104($v0)
    ctx->pc = 0x214f78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x214f7c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x214f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_214f80:
    // 0x214f80: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x214f84: 0x2610e478  addiu       $s0, $s0, -0x1B88
    ctx->pc = 0x214f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960248));
    // 0x214f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f8c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x214f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x214f90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x214f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x214f94: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x214F94u;
    SET_GPR_U32(ctx, 31, 0x214F9Cu);
    ctx->pc = 0x214F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214F94u;
            // 0x214f98: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F9Cu; }
        if (ctx->pc != 0x214F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F9Cu; }
        if (ctx->pc != 0x214F9Cu) { return; }
    }
    ctx->pc = 0x214F9Cu;
    // 0x214f9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fa0: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x214FA0u;
    SET_GPR_U32(ctx, 31, 0x214FA8u);
    ctx->pc = 0x214FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214FA0u;
            // 0x214fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FA8u; }
        if (ctx->pc != 0x214FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FA8u; }
        if (ctx->pc != 0x214FA8u) { return; }
    }
    ctx->pc = 0x214FA8u;
    // 0x214fa8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x214fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x214fac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214fb4: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x214fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x214fb8: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x214FB8u;
    {
        const bool branch_taken_0x214fb8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x214FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FB8u;
            // 0x214fbc: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fb8) {
            ctx->pc = 0x214FE4u;
            goto label_214fe4;
        }
    }
    ctx->pc = 0x214FC0u;
    // 0x214fc0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x214fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x214fc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214FC4u;
    {
        const bool branch_taken_0x214fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FC4u;
            // 0x214fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fc4) {
            ctx->pc = 0x214FD4u;
            goto label_214fd4;
        }
    }
    ctx->pc = 0x214FCCu;
    // 0x214fcc: 0xc04d93c  jal         func_1364F0
    ctx->pc = 0x214FCCu;
    SET_GPR_U32(ctx, 31, 0x214FD4u);
    ctx->pc = 0x1364F0u;
    if (runtime->hasFunction(0x1364F0u)) {
        auto targetFn = runtime->lookupFunction(0x1364F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FD4u; }
        if (ctx->pc != 0x214FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001364F0_0x1364f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FD4u; }
        if (ctx->pc != 0x214FD4u) { return; }
    }
    ctx->pc = 0x214FD4u;
label_214fd4:
    // 0x214fd4: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x214fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x214fd8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x214fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x214fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x214fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214fe0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x214fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_214fe4:
    // 0x214fe4: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x214fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x214fe8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x214FE8u;
    {
        const bool branch_taken_0x214fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214FE8u;
            // 0x214fec: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe8) {
            ctx->pc = 0x214F80u;
            runtime->cooperativeGuestYield();
            goto label_214f80;
        }
    }
    ctx->pc = 0x214FF0u;
    // 0x214ff0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x214ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214ff4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x214ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214ff8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x214ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214ffc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x214ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215000: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x215000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215008: 0x3e00008  jr          $ra
    ctx->pc = 0x215008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215008u;
            // 0x21500c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214F80u: goto label_214f80;
            case 0x214FD4u: goto label_214fd4;
            case 0x214FE4u: goto label_214fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215010u;
}
