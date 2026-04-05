#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6B40
// Address: 0x1d6b40 - 0x1d6bf0
void sub_001D6B40_0x1d6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6B40_0x1d6b40");
#endif

    ctx->pc = 0x1d6b40u;

    // 0x1d6b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d6b44: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d6b48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d6b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d6b4c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1d6b50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d6b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d6b54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d6b58: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x1d6b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b64: 0x8e43cb94  lw          $v1, -0x346C($s2)
    ctx->pc = 0x1d6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953876)));
    // 0x1d6b68: 0x946201d4  lhu         $v0, 0x1D4($v1)
    ctx->pc = 0x1d6b68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 468)));
    // 0x1d6b6c: 0x8c6501d0  lw          $a1, 0x1D0($v1)
    ctx->pc = 0x1d6b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x1d6b70: 0xa602006a  sh          $v0, 0x6A($s0)
    ctx->pc = 0x1d6b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d6b74: 0x946201d8  lhu         $v0, 0x1D8($v1)
    ctx->pc = 0x1d6b74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x1d6b78: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x1d6b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d6b7c: 0x946201dc  lhu         $v0, 0x1DC($v1)
    ctx->pc = 0x1d6b7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x1d6b80: 0xa602006e  sh          $v0, 0x6E($s0)
    ctx->pc = 0x1d6b80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d6b84: 0x946201e0  lhu         $v0, 0x1E0($v1)
    ctx->pc = 0x1d6b84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x1d6b88: 0xa6020070  sh          $v0, 0x70($s0)
    ctx->pc = 0x1d6b88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d6b8c: 0x946201e4  lhu         $v0, 0x1E4($v1)
    ctx->pc = 0x1d6b8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x1d6b90: 0xa6020072  sh          $v0, 0x72($s0)
    ctx->pc = 0x1d6b90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d6b94: 0x946201e8  lhu         $v0, 0x1E8($v1)
    ctx->pc = 0x1d6b94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x1d6b98: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6B98u;
    {
        const bool branch_taken_0x1d6b98 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D6B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B98u;
            // 0x1d6b9c: 0xa6020074  sh          $v0, 0x74($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b98) {
            ctx->pc = 0x1D6BA8u;
            goto label_1d6ba8;
        }
    }
    ctx->pc = 0x1D6BA0u;
    // 0x1d6ba0: 0xc076c94  jal         func_1DB250
    ctx->pc = 0x1D6BA0u;
    SET_GPR_U32(ctx, 31, 0x1D6BA8u);
    ctx->pc = 0x1DB250u;
    if (runtime->hasFunction(0x1DB250u)) {
        auto targetFn = runtime->lookupFunction(0x1DB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BA8u; }
        if (ctx->pc != 0x1D6BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1db250_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BA8u; }
        if (ctx->pc != 0x1D6BA8u) { return; }
    }
    ctx->pc = 0x1D6BA8u;
label_1d6ba8:
    // 0x1d6ba8: 0x8e44cb94  lw          $a0, -0x346C($s2)
    ctx->pc = 0x1d6ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953876)));
    // 0x1d6bac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6bb0: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x1d6bb0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d6bb4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6BB4u;
    {
        const bool branch_taken_0x1d6bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BB4u;
            // 0x1d6bb8: 0xac8201d0  sw          $v0, 0x1D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bb4) {
            ctx->pc = 0x1D6BCCu;
            goto label_1d6bcc;
        }
    }
    ctx->pc = 0x1D6BBCu;
    // 0x1d6bbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6bc0: 0xac8301d0  sw          $v1, 0x1D0($a0)
    ctx->pc = 0x1d6bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 3));
    // 0x1d6bc4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1D6BC4u;
    SET_GPR_U32(ctx, 31, 0x1D6BCCu);
    ctx->pc = 0x1D6BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BC4u;
            // 0x1d6bc8: 0xac82021c  sw          $v0, 0x21C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BCCu; }
        if (ctx->pc != 0x1D6BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BCCu; }
        if (ctx->pc != 0x1D6BCCu) { return; }
    }
    ctx->pc = 0x1D6BCCu;
label_1d6bcc:
    // 0x1d6bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6bd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d6bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6bd4: 0xae2201c0  sw          $v0, 0x1C0($s1)
    ctx->pc = 0x1d6bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 2));
    // 0x1d6bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d6bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6bdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d6bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BE4u;
            // 0x1d6be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6BA8u: goto label_1d6ba8;
            case 0x1D6BCCu: goto label_1d6bcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6BECu;
    // 0x1d6bec: 0x0  nop
    ctx->pc = 0x1d6becu;
    // NOP
}
