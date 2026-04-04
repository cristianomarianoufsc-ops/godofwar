#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8BE8
// Address: 0x1d8be8 - 0x1d8c68
void sub_001D8BE8_0x1d8be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8BE8_0x1d8be8");
#endif

    ctx->pc = 0x1d8be8u;

    // 0x1d8be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8bec: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d8becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8bf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d8bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d8bf4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d8bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d8bf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d8bfc: 0x24522cc0  addiu       $s2, $v0, 0x2CC0
    ctx->pc = 0x1d8bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d8c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8c04: 0x92430076  lbu         $v1, 0x76($s2)
    ctx->pc = 0x1d8c04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 118)));
    // 0x1d8c08: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1d8c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d8c0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C0Cu;
    {
        const bool branch_taken_0x1d8c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C0Cu;
            // 0x1d8c10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c0c) {
            ctx->pc = 0x1D8C1Cu;
            goto label_1d8c1c;
        }
    }
    ctx->pc = 0x1D8C14u;
    // 0x1d8c14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D8C14u;
    {
        const bool branch_taken_0x1d8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C14u;
            // 0x1d8c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c14) {
            ctx->pc = 0x1D8C50u;
            goto label_1d8c50;
        }
    }
    ctx->pc = 0x1D8C1Cu;
label_1d8c1c:
    // 0x1d8c1c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d8c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c24: 0xa2420076  sb          $v0, 0x76($s2)
    ctx->pc = 0x1d8c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8c28: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1D8C28u;
    SET_GPR_U32(ctx, 31, 0x1D8C30u);
    ctx->pc = 0x1D8C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C28u;
            // 0x1d8c2c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C30u; }
        if (ctx->pc != 0x1D8C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C30u; }
        if (ctx->pc != 0x1D8C30u) { return; }
    }
    ctx->pc = 0x1D8C30u;
    // 0x1d8c30: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x1d8c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x1d8c34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8c38: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1d8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d8c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c40: 0x92430076  lbu         $v1, 0x76($s2)
    ctx->pc = 0x1d8c40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 118)));
    // 0x1d8c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c48: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x1d8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x1d8c4c: 0xae2501c0  sw          $a1, 0x1C0($s1)
    ctx->pc = 0x1d8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 5));
label_1d8c50:
    // 0x1d8c50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d8c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8c54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d8c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8c58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d8c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C60u;
            // 0x1d8c64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8C1Cu: goto label_1d8c1c;
            case 0x1D8C50u: goto label_1d8c50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8C68u;
}
