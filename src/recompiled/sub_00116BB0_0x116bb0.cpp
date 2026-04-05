#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116BB0
// Address: 0x116bb0 - 0x116d08
void sub_00116BB0_0x116bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116BB0_0x116bb0");
#endif

    ctx->pc = 0x116bb0u;

    // 0x116bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x116bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x116bb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x116bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x116bb8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x116bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x116bbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x116bbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bc0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x116bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x116bc4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x116bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bc8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x116bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x116bcc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x116bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x116bd0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x116bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x116bd4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x116bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x116bd8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x116bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x116bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116be0: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x116be0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x116be4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x116BE4u;
    {
        const bool branch_taken_0x116be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116BE4u;
            // 0x116be8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116be4) {
            ctx->pc = 0x116CDCu;
            goto label_116cdc;
        }
    }
    ctx->pc = 0x116BECu;
    // 0x116bec: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x116becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_116bf0:
    // 0x116bf0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x116bf4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x116bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x116bf8: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x116bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x116bfc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x116bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x116c00: 0x41443  sra         $v0, $a0, 17
    ctx->pc = 0x116c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 17));
    // 0x116c04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x116c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x116c08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116c0c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x116C0Cu;
    {
        const bool branch_taken_0x116c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C0Cu;
            // 0x116c10: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c0c) {
            ctx->pc = 0x116CC8u;
            goto label_116cc8;
        }
    }
    ctx->pc = 0x116C14u;
    // 0x116c14: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x116c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116c18: 0x82b024  and         $s6, $a0, $v0
    ctx->pc = 0x116c18u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x116c1c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x116C1Cu;
    {
        const bool branch_taken_0x116c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C1Cu;
            // 0x116c20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c1c) {
            ctx->pc = 0x116CC8u;
            goto label_116cc8;
        }
    }
    ctx->pc = 0x116C24u;
    // 0x116c24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x116c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_116c28:
    // 0x116c28: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x116c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x116c2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x116c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x116c30: 0x24841368  addiu       $a0, $a0, 0x1368
    ctx->pc = 0x116c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x116c34: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x116c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x116c38: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x116c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x116c3c: 0x8e130024  lw          $s3, 0x24($s0)
    ctx->pc = 0x116c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x116c40: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x116C40u;
    SET_GPR_U32(ctx, 31, 0x116C48u);
    ctx->pc = 0x116C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C40u;
            // 0x116c44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C48u; }
        if (ctx->pc != 0x116C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C48u; }
        if (ctx->pc != 0x116C48u) { return; }
    }
    ctx->pc = 0x116C48u;
    // 0x116c48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x116c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c50: 0xc05f6f4  jal         func_17DBD0
    ctx->pc = 0x116C50u;
    SET_GPR_U32(ctx, 31, 0x116C58u);
    ctx->pc = 0x116C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C50u;
            // 0x116c54: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD0u;
    if (runtime->hasFunction(0x17DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C58u; }
        if (ctx->pc != 0x116C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DBD0_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C58u; }
        if (ctx->pc != 0x116C58u) { return; }
    }
    ctx->pc = 0x116C58u;
    // 0x116c58: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x116C58u;
    {
        const bool branch_taken_0x116c58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C58u;
            // 0x116c5c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c58) {
            ctx->pc = 0x116C70u;
            goto label_116c70;
        }
    }
    ctx->pc = 0x116C60u;
    // 0x116c60: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x116c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x116c64: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x116c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x116c68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116C68u;
    {
        const bool branch_taken_0x116c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116C68u;
            // 0x116c6c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c68) {
            ctx->pc = 0x116C80u;
            goto label_116c80;
        }
    }
    ctx->pc = 0x116C70u;
label_116c70:
    // 0x116c70: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x116c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x116c74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x116c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x116c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x116c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116c7c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x116c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_116c80:
    // 0x116c80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x116c84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x116c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c88: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x116C88u;
    SET_GPR_U32(ctx, 31, 0x116C90u);
    ctx->pc = 0x116C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C88u;
            // 0x116c8c: 0x24841370  addiu       $a0, $a0, 0x1370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C90u; }
        if (ctx->pc != 0x116C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116C90u; }
        if (ctx->pc != 0x116C90u) { return; }
    }
    ctx->pc = 0x116C90u;
    // 0x116c90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c94: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x116c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x116c98: 0xc05f6f4  jal         func_17DBD0
    ctx->pc = 0x116C98u;
    SET_GPR_U32(ctx, 31, 0x116CA0u);
    ctx->pc = 0x116C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116C98u;
            // 0x116c9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD0u;
    if (runtime->hasFunction(0x17DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x17DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CA0u; }
        if (ctx->pc != 0x116CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DBD0_0x17dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116CA0u; }
        if (ctx->pc != 0x116CA0u) { return; }
    }
    ctx->pc = 0x116CA0u;
    // 0x116ca0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x116CA0u;
    {
        const bool branch_taken_0x116ca0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x116CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CA0u;
            // 0x116ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ca0) {
            ctx->pc = 0x116CB4u;
            goto label_116cb4;
        }
    }
    ctx->pc = 0x116CA8u;
    // 0x116ca8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x116ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x116cac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x116cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x116cb0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x116cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_116cb4:
    // 0x116cb4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x116cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x116cbc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x116cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x116cc0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x116CC0u;
    {
        const bool branch_taken_0x116cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CC0u;
            // 0x116cc4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cc0) {
            ctx->pc = 0x116C28u;
            runtime->cooperativeGuestYield();
            goto label_116c28;
        }
    }
    ctx->pc = 0x116CC8u;
label_116cc8:
    // 0x116cc8: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x116cc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x116ccc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x116cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x116cd0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x116cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x116cd4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x116CD4u;
    {
        const bool branch_taken_0x116cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116CD4u;
            // 0x116cd8: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cd4) {
            ctx->pc = 0x116BF0u;
            runtime->cooperativeGuestYield();
            goto label_116bf0;
        }
    }
    ctx->pc = 0x116CDCu;
label_116cdc:
    // 0x116cdc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x116cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116ce0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x116ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116ce4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x116ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116ce8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x116ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116cec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x116cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116cf0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x116cf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116cf4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x116cf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116cf8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x116cf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116d00: 0x3e00008  jr          $ra
    ctx->pc = 0x116D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116D00u;
            // 0x116d04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116BF0u: goto label_116bf0;
            case 0x116C28u: goto label_116c28;
            case 0x116C70u: goto label_116c70;
            case 0x116C80u: goto label_116c80;
            case 0x116CB4u: goto label_116cb4;
            case 0x116CC8u: goto label_116cc8;
            case 0x116CDCu: goto label_116cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116D08u;
}
