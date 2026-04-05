#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214B58
// Address: 0x214b58 - 0x214c50
void sub_00214B58_0x214b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B58_0x214b58");
#endif

    ctx->pc = 0x214b58u;

    // 0x214b58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214b5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x214b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x214b60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x214b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x214b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b68: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x214b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x214b6c: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x214b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x214b70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x214b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x214b74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x214B74u;
    {
        const bool branch_taken_0x214b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214B74u;
            // 0x214b78: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b74) {
            ctx->pc = 0x214BC0u;
            goto label_214bc0;
        }
    }
    ctx->pc = 0x214B7Cu;
    // 0x214b7c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x214b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214b80: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x214b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x214b84: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x214b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x214b88: 0x246325a8  addiu       $v1, $v1, 0x25A8
    ctx->pc = 0x214b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9640));
    // 0x214b8c: 0x24020303  addiu       $v0, $zero, 0x303
    ctx->pc = 0x214b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x214b90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x214b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x214b94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b98: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x214b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x214b9c: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x214b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x214ba0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x214ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x214ba4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x214ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x214ba8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x214ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x214bac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x214bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x214bb0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x214bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x214bb4: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x214bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x214bb8: 0xc047b36  jal         func_11ECD8
    ctx->pc = 0x214BB8u;
    SET_GPR_U32(ctx, 31, 0x214BC0u);
    ctx->pc = 0x214BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214BB8u;
            // 0x214bbc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ECD8u;
    if (runtime->hasFunction(0x11ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x11ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BC0u; }
        if (ctx->pc != 0x214BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11ecd8_0x11ed88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BC0u; }
        if (ctx->pc != 0x214BC0u) { return; }
    }
    ctx->pc = 0x214BC0u;
label_214bc0:
    // 0x214bc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x214bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214bc4: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x214bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x214bc8: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x214bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x214bcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x214bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x214bd0: 0xac8200f4  sw          $v0, 0xF4($a0)
    ctx->pc = 0x214bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 2));
    // 0x214bd4: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x214bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x214bd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x214bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x214bdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214BDCu;
    {
        const bool branch_taken_0x214bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214BDCu;
            // 0x214be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bdc) {
            ctx->pc = 0x214C04u;
            goto label_214c04;
        }
    }
    ctx->pc = 0x214BE4u;
    // 0x214be4: 0xc085224  jal         func_214890
    ctx->pc = 0x214BE4u;
    SET_GPR_U32(ctx, 31, 0x214BECu);
    ctx->pc = 0x214BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214BE4u;
            // 0x214be8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BECu; }
        if (ctx->pc != 0x214BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BECu; }
        if (ctx->pc != 0x214BECu) { return; }
    }
    ctx->pc = 0x214BECu;
    // 0x214bec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214bf4: 0x8e0201d8  lw          $v0, 0x1D8($s0)
    ctx->pc = 0x214bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
    // 0x214bf8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x214bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x214bfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214BFCu;
    {
        const bool branch_taken_0x214bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214BFCu;
            // 0x214c00: 0xe60001e0  swc1        $f0, 0x1E0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bfc) {
            ctx->pc = 0x214C18u;
            goto label_214c18;
        }
    }
    ctx->pc = 0x214C04u;
label_214c04:
    // 0x214c04: 0xc085224  jal         func_214890
    ctx->pc = 0x214C04u;
    SET_GPR_U32(ctx, 31, 0x214C0Cu);
    ctx->pc = 0x214C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214C04u;
            // 0x214c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214890u;
    if (runtime->hasFunction(0x214890u)) {
        auto targetFn = runtime->lookupFunction(0x214890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C0Cu; }
        if (ctx->pc != 0x214C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214890_0x214890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C0Cu; }
        if (ctx->pc != 0x214C0Cu) { return; }
    }
    ctx->pc = 0x214C0Cu;
    // 0x214c0c: 0x8e0201d8  lw          $v0, 0x1D8($s0)
    ctx->pc = 0x214c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
    // 0x214c10: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x214c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x214c14: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x214c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_214c18:
    // 0x214c18: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x214c1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x214c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x214c20: 0x3442fff1  ori         $v0, $v0, 0xFFF1
    ctx->pc = 0x214c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65521);
    // 0x214c24: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x214c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x214c28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x214c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x214c2c: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x214c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x214c30: 0xae0301f0  sw          $v1, 0x1F0($s0)
    ctx->pc = 0x214c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 3));
    // 0x214c34: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x214c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x214c38: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x214c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x214c3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x214c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214c40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214c44: 0x3e00008  jr          $ra
    ctx->pc = 0x214C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C44u;
            // 0x214c48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214BC0u: goto label_214bc0;
            case 0x214C04u: goto label_214c04;
            case 0x214C18u: goto label_214c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214C4Cu;
    // 0x214c4c: 0x0  nop
    ctx->pc = 0x214c4cu;
    // NOP
}
