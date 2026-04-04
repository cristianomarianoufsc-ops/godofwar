#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5B50
// Address: 0x1d5b50 - 0x1d5c58
void sub_001D5B50_0x1d5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5B50_0x1d5b50");
#endif

    ctx->pc = 0x1d5b50u;

    // 0x1d5b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5b54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5b58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d5b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d5b5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d5b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d5b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5b64: 0xc075716  jal         func_1D5C58
    ctx->pc = 0x1D5B64u;
    SET_GPR_U32(ctx, 31, 0x1D5B6Cu);
    ctx->pc = 0x1D5B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B64u;
            // 0x1d5b68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C58u;
    if (runtime->hasFunction(0x1D5C58u)) {
        auto targetFn = runtime->lookupFunction(0x1D5C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B6Cu; }
        if (ctx->pc != 0x1D5B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5C58_0x1d5c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B6Cu; }
        if (ctx->pc != 0x1D5B6Cu) { return; }
    }
    ctx->pc = 0x1D5B6Cu;
    // 0x1d5b6c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5b70: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1d5b74: 0x26102cc0  addiu       $s0, $s0, 0x2CC0
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
    // 0x1d5b78: 0xc64c017c  lwc1        $f12, 0x17C($s2)
    ctx->pc = 0x1d5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d5b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b80: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D5B80u;
    SET_GPR_U32(ctx, 31, 0x1D5B88u);
    ctx->pc = 0x1D5B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B80u;
            // 0x1d5b84: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B88u; }
        if (ctx->pc != 0x1D5B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5B88u; }
        if (ctx->pc != 0x1D5B88u) { return; }
    }
    ctx->pc = 0x1D5B88u;
    // 0x1d5b88: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x1d5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1d5b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5b98: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x1d5b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1d5b9c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1d5b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1d5ba0: 0xa6000082  sh          $zero, 0x82($s0)
    ctx->pc = 0x1d5ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5ba4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1d5ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1d5ba8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d5bac: 0xa6000068  sh          $zero, 0x68($s0)
    ctx->pc = 0x1d5bacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bb0: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x1d5bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bb4: 0xa600006c  sh          $zero, 0x6C($s0)
    ctx->pc = 0x1d5bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bb8: 0xa600006e  sh          $zero, 0x6E($s0)
    ctx->pc = 0x1d5bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bbc: 0xa6000070  sh          $zero, 0x70($s0)
    ctx->pc = 0x1d5bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bc0: 0xa6000072  sh          $zero, 0x72($s0)
    ctx->pc = 0x1d5bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bc4: 0xa6000074  sh          $zero, 0x74($s0)
    ctx->pc = 0x1d5bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d5bc8: 0xa2000076  sb          $zero, 0x76($s0)
    ctx->pc = 0x1d5bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bcc: 0xa2000077  sb          $zero, 0x77($s0)
    ctx->pc = 0x1d5bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bd0: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x1d5bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bd4: 0xa2000079  sb          $zero, 0x79($s0)
    ctx->pc = 0x1d5bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bd8: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x1d5bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bdc: 0xa200007b  sb          $zero, 0x7B($s0)
    ctx->pc = 0x1d5bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5be0: 0xa200007c  sb          $zero, 0x7C($s0)
    ctx->pc = 0x1d5be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5be4: 0xa200007d  sb          $zero, 0x7D($s0)
    ctx->pc = 0x1d5be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5be8: 0xa200007e  sb          $zero, 0x7E($s0)
    ctx->pc = 0x1d5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bec: 0xa200007f  sb          $zero, 0x7F($s0)
    ctx->pc = 0x1d5becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 127), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bf0: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x1d5bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5bf4: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1D5BF4u;
    SET_GPR_U32(ctx, 31, 0x1D5BFCu);
    ctx->pc = 0x1D5BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BF4u;
            // 0x1d5bf8: 0xa2000081  sb          $zero, 0x81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BFCu; }
        if (ctx->pc != 0x1D5BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BFCu; }
        if (ctx->pc != 0x1D5BFCu) { return; }
    }
    ctx->pc = 0x1D5BFCu;
    // 0x1d5bfc: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1d5c00: 0xe640017c  swc1        $f0, 0x17C($s2)
    ctx->pc = 0x1d5c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
    // 0x1d5c04: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1d5c04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d5c08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d5c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d5c0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5C0Cu;
    {
        const bool branch_taken_0x1d5c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C0Cu;
            // 0x1d5c10: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c0c) {
            ctx->pc = 0x1D5C40u;
            goto label_1d5c40;
        }
    }
    ctx->pc = 0x1D5C14u;
    // 0x1d5c14: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1d5c14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5c18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d5c1c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1d5c20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5c24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5c28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5c2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d5c30: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1d5c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d5c34: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d5c38: 0x40f809  jalr        $v0
    ctx->pc = 0x1D5C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5C40u);
        ctx->pc = 0x1D5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C38u;
            // 0x1d5c3c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5C40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5C40u: goto label_1d5c40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C40u; }
            if (ctx->pc != 0x1D5C40u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5C40u;
label_1d5c40:
    // 0x1d5c40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d5c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5c44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5c48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d5c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C50u;
            // 0x1d5c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5C40u: goto label_1d5c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5C58u;
}
