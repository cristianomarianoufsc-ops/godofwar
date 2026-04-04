#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_296b98
// Address: 0x296b98 - 0x296c48
void entry_296b98_0x296c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_296b98_0x296c48");
#endif

    ctx->pc = 0x296b98u;

    // 0x296b98: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x296b98u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x296b9c: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x296b9cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
    // 0x296ba0: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x296BA0u;
    {
        const bool branch_taken_0x296ba0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x296BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BA0u;
            // 0x296ba4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ba0) {
            ctx->pc = 0x296C3Cu;
            goto label_296c3c;
        }
    }
    ctx->pc = 0x296BA8u;
    // 0x296ba8: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x296ba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
    // 0x296bac: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x296bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x296bb0: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x296bb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
    // 0x296bb4: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x296bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x296bb8: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x296bbc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x296bbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x296bc0: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x296bc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x296bc4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296BC4u;
    {
        const bool branch_taken_0x296bc4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BC4u;
            // 0x296bc8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bc4) {
            ctx->pc = 0x296BE8u;
            goto label_296be8;
        }
    }
    ctx->pc = 0x296BCCu;
label_296bcc:
    // 0x296bcc: 0xf  sync
    ctx->pc = 0x296bccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296bd0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x296bd0u;
    // CACHE instruction (ignored)
    // 0x296bd4: 0xf  sync
    ctx->pc = 0x296bd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296bd8: 0x0  nop
    ctx->pc = 0x296bd8u;
    // NOP
    // 0x296bdc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x296bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x296be0: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x296BE0u;
    {
        const bool branch_taken_0x296be0 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x296BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BE0u;
            // 0x296be4: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296be0) {
            ctx->pc = 0x296BCCu;
            runtime->cooperativeGuestYield();
            goto label_296bcc;
        }
    }
    ctx->pc = 0x296BE8u;
label_296be8:
    // 0x296be8: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_296bec:
    if (ctx->pc == 0x296BECu) {
        ctx->pc = 0x296BECu;
            // 0x296bec: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->pc = 0x296BF0u;
        goto label_fallthrough_0x296be8;
    }
    ctx->pc = 0x296BE8u;
    {
        const bool branch_taken_0x296be8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296BE8u;
            // 0x296bec: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296be8) {
            ctx->pc = 0x296C3Cu;
            goto label_296c3c;
        }
    }
label_fallthrough_0x296be8:
    ctx->pc = 0x296BF0u;
    // 0x296bf0: 0xf  sync
    ctx->pc = 0x296bf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296bf4: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x296bf4u;
    // CACHE instruction (ignored)
    // 0x296bf8: 0xf  sync
    ctx->pc = 0x296bf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296bfc: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x296bfcu;
    // CACHE instruction (ignored)
    // 0x296c00: 0xf  sync
    ctx->pc = 0x296c00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c04: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x296c04u;
    // CACHE instruction (ignored)
    // 0x296c08: 0xf  sync
    ctx->pc = 0x296c08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c0c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x296c0cu;
    // CACHE instruction (ignored)
    // 0x296c10: 0xf  sync
    ctx->pc = 0x296c10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c14: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x296c14u;
    // CACHE instruction (ignored)
    // 0x296c18: 0xf  sync
    ctx->pc = 0x296c18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c1c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x296c1cu;
    // CACHE instruction (ignored)
    // 0x296c20: 0xf  sync
    ctx->pc = 0x296c20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c24: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x296c24u;
    // CACHE instruction (ignored)
    // 0x296c28: 0xf  sync
    ctx->pc = 0x296c28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c2c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x296c2cu;
    // CACHE instruction (ignored)
    // 0x296c30: 0xf  sync
    ctx->pc = 0x296c30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x296c34: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x296C34u;
    {
        const bool branch_taken_0x296c34 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x296C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C34u;
            // 0x296c38: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c34) {
            ctx->pc = 0x296BECu;
            runtime->cooperativeGuestYield();
            goto label_296bec;
        }
    }
    ctx->pc = 0x296C3Cu;
label_296c3c:
    // 0x296c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x296C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296BCCu: goto label_296bcc;
            case 0x296BE8u: goto label_296be8;
            case 0x296BECu: goto label_296bec;
            case 0x296C3Cu: goto label_296c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296C44u;
    // 0x296c44: 0x3e00008  jr          $ra
    ctx->pc = 0x296C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296BCCu: goto label_296bcc;
            case 0x296BE8u: goto label_296be8;
            case 0x296BECu: goto label_296bec;
            case 0x296C3Cu: goto label_296c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296C4Cu;
}
