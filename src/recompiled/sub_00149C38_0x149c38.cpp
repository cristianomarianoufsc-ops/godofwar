#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149C38
// Address: 0x149c38 - 0x149f78
void sub_00149C38_0x149c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149C38_0x149c38");
#endif

    ctx->pc = 0x149c38u;

    // 0x149c38: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x149c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x149c3c: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x149c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x149c40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x149c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c44: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x149c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x149c48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c4c: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x149c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x149c50: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x149c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x149c54: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x149c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x149c58: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x149c58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x149c5c: 0xc0526d8  jal         func_149B60
    ctx->pc = 0x149C5Cu;
    SET_GPR_U32(ctx, 31, 0x149C64u);
    ctx->pc = 0x149C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C5Cu;
            // 0x149c60: 0xe7b401d0  swc1        $f20, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B60u;
    if (runtime->hasFunction(0x149B60u)) {
        auto targetFn = runtime->lookupFunction(0x149B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C64u; }
        if (ctx->pc != 0x149C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_149b60_0x149c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C64u; }
        if (ctx->pc != 0x149C64u) { return; }
    }
    ctx->pc = 0x149C64u;
    // 0x149c64: 0x8e640d10  lw          $a0, 0xD10($s3)
    ctx->pc = 0x149c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3344)));
    // 0x149c68: 0x23827  nor         $a3, $zero, $v0
    ctx->pc = 0x149c68u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x149c6c: 0x8e650d18  lw          $a1, 0xD18($s3)
    ctx->pc = 0x149c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3352)));
    // 0x149c70: 0x8e660d1c  lw          $a2, 0xD1C($s3)
    ctx->pc = 0x149c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3356)));
    // 0x149c74: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x149c74u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x149c78: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x149c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x149c7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x149c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149c80: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x149c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x149c84: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x149c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x149c88: 0xae650d18  sw          $a1, 0xD18($s3)
    ctx->pc = 0x149c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3352), GPR_U32(ctx, 5));
    // 0x149c8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149c90: 0xae660d1c  sw          $a2, 0xD1C($s3)
    ctx->pc = 0x149c90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3356), GPR_U32(ctx, 6));
    // 0x149c94: 0xc0526d8  jal         func_149B60
    ctx->pc = 0x149C94u;
    SET_GPR_U32(ctx, 31, 0x149C9Cu);
    ctx->pc = 0x149C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C94u;
            // 0x149c98: 0xae620d10  sw          $v0, 0xD10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B60u;
    if (runtime->hasFunction(0x149B60u)) {
        auto targetFn = runtime->lookupFunction(0x149B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C9Cu; }
        if (ctx->pc != 0x149C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_149b60_0x149c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C9Cu; }
        if (ctx->pc != 0x149C9Cu) { return; }
    }
    ctx->pc = 0x149C9Cu;
    // 0x149c9c: 0x8e640d14  lw          $a0, 0xD14($s3)
    ctx->pc = 0x149c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3348)));
    // 0x149ca0: 0x23827  nor         $a3, $zero, $v0
    ctx->pc = 0x149ca0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x149ca4: 0x8e660d20  lw          $a2, 0xD20($s3)
    ctx->pc = 0x149ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3360)));
    // 0x149ca8: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x149ca8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x149cac: 0x8e650d24  lw          $a1, 0xD24($s3)
    ctx->pc = 0x149cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3364)));
    // 0x149cb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x149cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149cb4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x149cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x149cb8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x149cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x149cbc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x149cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x149cc0: 0x8e630ce8  lw          $v1, 0xCE8($s3)
    ctx->pc = 0x149cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3304)));
    // 0x149cc4: 0xae660d20  sw          $a2, 0xD20($s3)
    ctx->pc = 0x149cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3360), GPR_U32(ctx, 6));
    // 0x149cc8: 0xae650d24  sw          $a1, 0xD24($s3)
    ctx->pc = 0x149cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3364), GPR_U32(ctx, 5));
    // 0x149ccc: 0x14600098  bnez        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x149CCCu;
    {
        const bool branch_taken_0x149ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149CCCu;
            // 0x149cd0: 0xae620d14  sw          $v0, 0xD14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ccc) {
            ctx->pc = 0x149F30u;
            goto label_149f30;
        }
    }
    ctx->pc = 0x149CD4u;
    // 0x149cd4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x149CD4u;
    SET_GPR_U32(ctx, 31, 0x149CDCu);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CDCu; }
        if (ctx->pc != 0x149CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CDCu; }
        if (ctx->pc != 0x149CDCu) { return; }
    }
    ctx->pc = 0x149CDCu;
    // 0x149cdc: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x149cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x149ce0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x149ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x149ce4: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x149CE4u;
    SET_GPR_U32(ctx, 31, 0x149CECu);
    ctx->pc = 0x149CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CE4u;
            // 0x149ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CECu; }
        if (ctx->pc != 0x149CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CECu; }
        if (ctx->pc != 0x149CECu) { return; }
    }
    ctx->pc = 0x149CECu;
    // 0x149cec: 0xc05a326  jal         func_168C98
    ctx->pc = 0x149CECu;
    SET_GPR_U32(ctx, 31, 0x149CF4u);
    ctx->pc = 0x149CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CECu;
            // 0x149cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168C98u;
    if (runtime->hasFunction(0x168C98u)) {
        auto targetFn = runtime->lookupFunction(0x168C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CF4u; }
        if (ctx->pc != 0x149CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168C98_0x168c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CF4u; }
        if (ctx->pc != 0x149CF4u) { return; }
    }
    ctx->pc = 0x149CF4u;
    // 0x149cf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149cf8: 0xae720ce8  sw          $s2, 0xCE8($s3)
    ctx->pc = 0x149cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3304), GPR_U32(ctx, 18));
    // 0x149cfc: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x149cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d00: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x149d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x149d04: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x149d04u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x149d08: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x149d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d0c: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x149d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d10: 0x70438389  pcpyld      $s0, $v0, $v1
    ctx->pc = 0x149d10u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x149d14: 0x720424c8  ppacw       $a0, $s0, $a0
    ctx->pc = 0x149d14u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x149d18: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x149d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x149d1c: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x149d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x149d20: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x149d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x149d24: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x149d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d28: 0x70a21b89  pcpyld      $v1, $a1, $v0
    ctx->pc = 0x149d28u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x149d2c: 0x72031cc8  ppacw       $v1, $s0, $v1
    ctx->pc = 0x149d2cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x149d30: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x149d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x149d34: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x149d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x149d38: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x149d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d3c: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d40: 0x70a68b89  pcpyld      $s1, $a1, $a2
    ctx->pc = 0x149d40u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x149d44: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d48: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x149d4c: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x149d4cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x149d50: 0x705114c8  ppacw       $v0, $v0, $s1
    ctx->pc = 0x149d50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x149d54: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x149d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x149d58: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x149d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x149d5c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x149d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x149d60: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x149d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149d64: 0x70e62b89  pcpyld      $a1, $a3, $a2
    ctx->pc = 0x149d64u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x149d68: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x149d68u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
    // 0x149d6c: 0x70b12cc8  ppacw       $a1, $a1, $s1
    ctx->pc = 0x149d6cu;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 17)));
    // 0x149d70: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x149d70u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x149d74: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x149d74u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x149d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d7c: 0x7e650030  sq          $a1, 0x30($s3)
    ctx->pc = 0x149d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 5));
    // 0x149d80: 0x8e620cd0  lw          $v0, 0xCD0($s3)
    ctx->pc = 0x149d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3280)));
    // 0x149d84: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x149d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x149d88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x149d88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149d8c: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x149d8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x149d90: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x149d90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x149d94: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x149d94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x149d98: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x149d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x149d9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x149d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x149da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x149da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149da4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x149da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x149da8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x149da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x149dac: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x149dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x149db0: 0x7fa50130  sq          $a1, 0x130($sp)
    ctx->pc = 0x149db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 5));
    // 0x149db4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x149db4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x149db8: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x149DB8u;
    SET_GPR_U32(ctx, 31, 0x149DC0u);
    ctx->pc = 0x149DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DB8u;
            // 0x149dbc: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DC0u; }
        if (ctx->pc != 0x149DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DC0u; }
        if (ctx->pc != 0x149DC0u) { return; }
    }
    ctx->pc = 0x149DC0u;
    // 0x149dc0: 0x8e630cd0  lw          $v1, 0xCD0($s3)
    ctx->pc = 0x149dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3280)));
    // 0x149dc4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x149dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x149dc8: 0xc444f1b0  lwc1        $f4, -0xE50($v0)
    ctx->pc = 0x149dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x149dcc: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x149dccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x149dd0: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x149dd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x149dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x149dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x149ddc: 0xc643037c  lwc1        $f3, 0x37C($s2)
    ctx->pc = 0x149ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149de0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x149de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149de4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x149de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x149de8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x149de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x149dec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x149decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x149df0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x149df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x149df4: 0x4603a0c3  div.s       $f3, $f20, $f3
    ctx->pc = 0x149df4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[3];
    // 0x149df8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x149df8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x149dfc: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x149dfcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x149e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e04: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x149e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x149e08: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x149e08u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x149e0c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x149e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x149e10: 0x720424c8  ppacw       $a0, $s0, $a0
    ctx->pc = 0x149e10u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x149e14: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x149e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x149e18: 0x7fa40140  sq          $a0, 0x140($sp)
    ctx->pc = 0x149e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 4));
    // 0x149e1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x149e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x149e20: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x149e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x149e24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x149e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e28: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x149e28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x149e2c: 0x72021cc8  ppacw       $v1, $s0, $v0
    ctx->pc = 0x149e2cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x149e30: 0x48a33000  qmtc2.ni    $v1, $vf6
    ctx->pc = 0x149e30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x149e34: 0xfba60050  sqc2        $vf6, 0x50($sp)
    ctx->pc = 0x149e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x149e38: 0xfba60150  sqc2        $vf6, 0x150($sp)
    ctx->pc = 0x149e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x149e3c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x149e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x149e40: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x149e44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x149e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x149e48: 0x70a31389  pcpyld      $v0, $a1, $v1
    ctx->pc = 0x149e48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x149e4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x149e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x149e50: 0x70512cc8  ppacw       $a1, $v0, $s1
    ctx->pc = 0x149e50u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x149e54: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x149e54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x149e58: 0x48a52800  qmtc2.ni    $a1, $vf5
    ctx->pc = 0x149e58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x149e5c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x149e5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x149e60: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x149e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x149e64: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x149e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x149e68: 0xfba50160  sqc2        $vf5, 0x160($sp)
    ctx->pc = 0x149e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x149e6c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x149e6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x149e70: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x149e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x149e74: 0x70e81b89  pcpyld      $v1, $a3, $t0
    ctx->pc = 0x149e74u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x149e78: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x149e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x149e7c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x149e7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x149e80: 0x7e640040  sq          $a0, 0x40($s3)
    ctx->pc = 0x149e80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 4));
    // 0x149e84: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x149e84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x149e88: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x149e88u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x149e8c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x149e8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x149e90: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x149e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x149e94: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x149e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x149e98: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x149e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x149e9c: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x149e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x149ea0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x149ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x149ea4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x149ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x149ea8: 0xda670040  lqc2        $vf7, 0x40($s3)
    ctx->pc = 0x149ea8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x149eac: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x149eacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149eb0: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x149eb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x149eb4: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x149eb4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x149eb8: 0xda680030  lqc2        $vf8, 0x30($s3)
    ctx->pc = 0x149eb8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x149ebc: 0x4be139bc  vmulax.xyzw $ACC, $vf7, $vf1x
    ctx->pc = 0x149ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x149ec0: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x149ec0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149ec4: 0x4be128be  vmaddaz.xyzw $ACC, $vf5, $vf1z
    ctx->pc = 0x149ec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149ec8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x149ec8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x149ecc: 0x4be239bc  vmulax.xyzw $ACC, $vf7, $vf2x
    ctx->pc = 0x149eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x149ed0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x149ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149ed4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x149ed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149ed8: 0x4be228be  vmaddaz.xyzw $ACC, $vf5, $vf2z
    ctx->pc = 0x149ed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149edc: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x149edcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x149ee0: 0x4be339bc  vmulax.xyzw $ACC, $vf7, $vf3x
    ctx->pc = 0x149ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x149ee4: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x149ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x149ee8: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x149ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149eec: 0x4be328be  vmaddaz.xyzw $ACC, $vf5, $vf3z
    ctx->pc = 0x149eecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149ef0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x149ef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x149ef4: 0x4be839bc  vmulax.xyzw $ACC, $vf7, $vf8x
    ctx->pc = 0x149ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x149ef8: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x149ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x149efc: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x149efcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149f00: 0x4be828be  vmaddaz.xyzw $ACC, $vf5, $vf8z
    ctx->pc = 0x149f00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x149f04: 0x4be8210b  vmaddw.xyzw $vf4, $vf4, $vf8w
    ctx->pc = 0x149f04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x149f08: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x149f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x149f0c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x149f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149f10: 0xfa610080  sqc2        $vf1, 0x80($s3)
    ctx->pc = 0x149f10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x149f14: 0xfa620090  sqc2        $vf2, 0x90($s3)
    ctx->pc = 0x149f14u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x149f18: 0xfa6300a0  sqc2        $vf3, 0xA0($s3)
    ctx->pc = 0x149f18u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x149f1c: 0xfa6400b0  sqc2        $vf4, 0xB0($s3)
    ctx->pc = 0x149f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x149f20: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x149f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x149f24: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x149f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x149f28: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x149f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x149f2c: 0x0  nop
    ctx->pc = 0x149f2cu;
    // NOP
label_149f30:
    // 0x149f30: 0xc05a75c  jal         func_169D70
    ctx->pc = 0x149F30u;
    SET_GPR_U32(ctx, 31, 0x149F38u);
    ctx->pc = 0x149F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F30u;
            // 0x149f34: 0x8e640ce8  lw          $a0, 0xCE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169D70u;
    if (runtime->hasFunction(0x169D70u)) {
        auto targetFn = runtime->lookupFunction(0x169D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F38u; }
        if (ctx->pc != 0x149F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169d70_0x169df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F38u; }
        if (ctx->pc != 0x149F38u) { return; }
    }
    ctx->pc = 0x149F38u;
    // 0x149f38: 0x26630d28  addiu       $v1, $s3, 0xD28
    ctx->pc = 0x149f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3368));
    // 0x149f3c: 0xae620cec  sw          $v0, 0xCEC($s3)
    ctx->pc = 0x149f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3308), GPR_U32(ctx, 2));
    // 0x149f40: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x149f40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x149f44: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x149f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x149f48: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x149f48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x149f4c: 0xa6600d28  sh          $zero, 0xD28($s3)
    ctx->pc = 0x149f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3368), (uint16_t)GPR_U32(ctx, 0));
    // 0x149f50: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x149f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x149f54: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x149f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x149f58: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x149f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x149f5c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x149f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x149f60: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x149f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x149f64: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x149f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x149f68: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x149f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x149f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x149F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149F6Cu;
            // 0x149f70: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149F30u: goto label_149f30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149F74u;
    // 0x149f74: 0x0  nop
    ctx->pc = 0x149f74u;
    // NOP
}
