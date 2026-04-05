#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B748
// Address: 0x15b748 - 0x15b7e0
void sub_0015B748_0x15b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B748_0x15b748");
#endif

    ctx->pc = 0x15b748u;

    // 0x15b748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15b74c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15b74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15b750: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15b750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b75c: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15b760: 0xc056ef2  jal         func_15BBC8
    ctx->pc = 0x15B760u;
    SET_GPR_U32(ctx, 31, 0x15B768u);
    ctx->pc = 0x15B764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B760u;
            // 0x15b764: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BBC8u;
    if (runtime->hasFunction(0x15BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x15BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B768u; }
        if (ctx->pc != 0x15B768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BBC8_0x15bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B768u; }
        if (ctx->pc != 0x15B768u) { return; }
    }
    ctx->pc = 0x15B768u;
    // 0x15b768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b76c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15b770: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x15b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x15b774: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x15b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b778: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15b77c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15b780: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b784: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x15b784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x15b788: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x15b788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x15b78c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x15b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x15b790: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x15b790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x15b794: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x15b794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x15b798: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x15B798u;
    {
        const bool branch_taken_0x15b798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B798u;
            // 0x15b79c: 0xae060014  sw          $a2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b798) {
            ctx->pc = 0x15B7D0u;
            goto label_15b7d0;
        }
    }
    ctx->pc = 0x15B7A0u;
    // 0x15b7a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x15b7a4: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x15b7a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x15b7a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b7ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B7ACu;
    {
        const bool branch_taken_0x15b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7ac) {
            ctx->pc = 0x15B7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7ACu;
            // 0x15b7b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B7D4u;
            goto label_15b7d4;
        }
    }
    ctx->pc = 0x15B7B4u;
    // 0x15b7b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15b7b8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x15b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x15b7bc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x15b7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15b7c0: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x15b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x15b7c4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x15b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x15b7c8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x15b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x15b7cc: 0x0  nop
    ctx->pc = 0x15b7ccu;
    // NOP
label_15b7d0:
    // 0x15b7d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15b7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15b7d4:
    // 0x15b7d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7D8u;
            // 0x15b7dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B7D0u: goto label_15b7d0;
            case 0x15B7D4u: goto label_15b7d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B7E0u;
}
