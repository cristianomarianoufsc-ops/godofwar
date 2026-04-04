#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189BD0
// Address: 0x189bd0 - 0x18a170
void sub_00189BD0_0x189bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189BD0_0x189bd0");
#endif

    ctx->pc = 0x189bd0u;

    // 0x189bd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x189bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x189bd4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x189bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x189bd8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x189bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x189bdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x189bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189be0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x189be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x189be4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x189be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x189be8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x189be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x189becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x189bf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bf4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x189bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x189bf8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x189bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x189c00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x189c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c04: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x189c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x189c08: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x189c08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c0c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x189c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x189c10: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x189c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c14: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x189c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x189c18: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x189c18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189c20: 0xac514f20  sw          $s1, 0x4F20($v0)
    ctx->pc = 0x189c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20256), GPR_U32(ctx, 17));
    // 0x189c24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x189c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189c28: 0xc0a648c  jal         func_299230
    ctx->pc = 0x189C28u;
    SET_GPR_U32(ctx, 31, 0x189C30u);
    ctx->pc = 0x189C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C28u;
            // 0x189c2c: 0x8fbe00c8  lw          $fp, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C30u; }
        if (ctx->pc != 0x189C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C30u; }
        if (ctx->pc != 0x189C30u) { return; }
    }
    ctx->pc = 0x189C30u;
    // 0x189c30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x189c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x189c34: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x189c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x189c38: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x189c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x189c3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x189c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x189c40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x189c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x189c44: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x189c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x189c48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x189c4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x189c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x189c50: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x189c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x189c54: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x189c58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x189c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x189c5c: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x189c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x189c60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x189c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x189c64: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x189c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x189c68: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x189c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x189c6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x189c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x189c70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x189c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x189c74: 0xf  sync
    ctx->pc = 0x189c74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x189c78: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x189C78u;
    SET_GPR_U32(ctx, 31, 0x189C80u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C80u; }
        if (ctx->pc != 0x189C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C80u; }
        if (ctx->pc != 0x189C80u) { return; }
    }
    ctx->pc = 0x189C80u;
    // 0x189c80: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x189C80u;
    {
        const bool branch_taken_0x189c80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C80u;
            // 0x189c84: 0xae200154  sw          $zero, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c80) {
            ctx->pc = 0x189CF4u;
            goto label_189cf4;
        }
    }
    ctx->pc = 0x189C88u;
    // 0x189c88: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x189C88u;
    SET_GPR_U32(ctx, 31, 0x189C90u);
    ctx->pc = 0x189C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C88u;
            // 0x189c8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C90u; }
        if (ctx->pc != 0x189C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C90u; }
        if (ctx->pc != 0x189C90u) { return; }
    }
    ctx->pc = 0x189C90u;
    // 0x189c90: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x189c94: 0xc062620  jal         func_189880
    ctx->pc = 0x189C94u;
    SET_GPR_U32(ctx, 31, 0x189C9Cu);
    ctx->pc = 0x189C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C94u;
            // 0x189c98: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C9Cu; }
        if (ctx->pc != 0x189C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C9Cu; }
        if (ctx->pc != 0x189C9Cu) { return; }
    }
    ctx->pc = 0x189C9Cu;
    // 0x189c9c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x189C9Cu;
    {
        const bool branch_taken_0x189c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C9Cu;
            // 0x189ca0: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c9c) {
            ctx->pc = 0x189D78u;
            goto label_189d78;
        }
    }
    ctx->pc = 0x189CA4u;
    // 0x189ca4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x189ca8: 0xc062620  jal         func_189880
    ctx->pc = 0x189CA8u;
    SET_GPR_U32(ctx, 31, 0x189CB0u);
    ctx->pc = 0x189CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189CA8u;
            // 0x189cac: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CB0u; }
        if (ctx->pc != 0x189CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CB0u; }
        if (ctx->pc != 0x189CB0u) { return; }
    }
    ctx->pc = 0x189CB0u;
    // 0x189cb0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x189CB0u;
    {
        const bool branch_taken_0x189cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189CB0u;
            // 0x189cb4: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cb0) {
            ctx->pc = 0x189D78u;
            goto label_189d78;
        }
    }
    ctx->pc = 0x189CB8u;
    // 0x189cb8: 0xae350060  sw          $s5, 0x60($s1)
    ctx->pc = 0x189cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 21));
    // 0x189cbc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x189cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x189cc0: 0xae360064  sw          $s6, 0x64($s1)
    ctx->pc = 0x189cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 22));
    // 0x189cc4: 0xae370148  sw          $s7, 0x148($s1)
    ctx->pc = 0x189cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 23));
    // 0x189cc8: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x189cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x189ccc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x189cd0: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x189cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x189cd4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x189cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x189cd8: 0xae34013c  sw          $s4, 0x13C($s1)
    ctx->pc = 0x189cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 20));
    // 0x189cdc: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x189cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x189ce0: 0xae330140  sw          $s3, 0x140($s1)
    ctx->pc = 0x189ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 19));
    // 0x189ce4: 0xae300144  sw          $s0, 0x144($s1)
    ctx->pc = 0x189ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 16));
    // 0x189ce8: 0xae3e014c  sw          $fp, 0x14C($s1)
    ctx->pc = 0x189ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 30));
    // 0x189cec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x189cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x189cf0: 0xae240150  sw          $a0, 0x150($s1)
    ctx->pc = 0x189cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 4));
label_189cf4:
    // 0x189cf4: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x189cf8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x189cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x189cfc: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x189cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189d00: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x189d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x189d04: 0xae2300f8  sw          $v1, 0xF8($s1)
    ctx->pc = 0x189d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 3));
    // 0x189d08: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x189D08u;
    {
        const bool branch_taken_0x189d08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D08u;
            // 0x189d0c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d08) {
            ctx->pc = 0x189D90u;
            goto label_189d90;
        }
    }
    ctx->pc = 0x189D10u;
    // 0x189d10: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x189D10u;
    {
        const bool branch_taken_0x189d10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D10u;
            // 0x189d14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d10) {
            ctx->pc = 0x189D80u;
            goto label_189d80;
        }
    }
    ctx->pc = 0x189D18u;
    // 0x189d18: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x189d1c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x189D1Cu;
    {
        const bool branch_taken_0x189d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D1Cu;
            // 0x189d20: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d1c) {
            ctx->pc = 0x189D50u;
            goto label_189d50;
        }
    }
    ctx->pc = 0x189D24u;
    // 0x189d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189D24u;
    {
        const bool branch_taken_0x189d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D24u;
            // 0x189d28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d24) {
            ctx->pc = 0x189D3Cu;
            goto label_189d3c;
        }
    }
    ctx->pc = 0x189D2Cu;
    // 0x189d2c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189D2Cu;
    {
        const bool branch_taken_0x189d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D2Cu;
            // 0x189d30: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d2c) {
            ctx->pc = 0x189D58u;
            goto label_189d58;
        }
    }
    ctx->pc = 0x189D34u;
    // 0x189d34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x189D34u;
    {
        const bool branch_taken_0x189d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D34u;
            // 0x189d38: 0x8e250100  lw          $a1, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d34) {
            ctx->pc = 0x189D68u;
            goto label_189d68;
        }
    }
    ctx->pc = 0x189D3Cu;
label_189d3c:
    // 0x189d3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189d40: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189D40u;
    {
        const bool branch_taken_0x189d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D40u;
            // 0x189d44: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d40) {
            ctx->pc = 0x189D58u;
            goto label_189d58;
        }
    }
    ctx->pc = 0x189D48u;
    // 0x189d48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189D48u;
    {
        const bool branch_taken_0x189d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D48u;
            // 0x189d4c: 0x8e250100  lw          $a1, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d48) {
            ctx->pc = 0x189D68u;
            goto label_189d68;
        }
    }
    ctx->pc = 0x189D50u;
label_189d50:
    // 0x189d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189D50u;
    {
        const bool branch_taken_0x189d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D50u;
            // 0x189d54: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d50) {
            ctx->pc = 0x189D5Cu;
            goto label_189d5c;
        }
    }
    ctx->pc = 0x189D58u;
label_189d58:
    // 0x189d58: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x189d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_189d5c:
    // 0x189d5c: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x189d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
    // 0x189d60: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x189d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x189d64: 0x0  nop
    ctx->pc = 0x189d64u;
    // NOP
label_189d68:
    // 0x189d68: 0xc062620  jal         func_189880
    ctx->pc = 0x189D68u;
    SET_GPR_U32(ctx, 31, 0x189D70u);
    ctx->pc = 0x189D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D68u;
            // 0x189d6c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D70u; }
        if (ctx->pc != 0x189D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D70u; }
        if (ctx->pc != 0x189D70u) { return; }
    }
    ctx->pc = 0x189D70u;
    // 0x189d70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189D70u;
    {
        const bool branch_taken_0x189d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D70u;
            // 0x189d74: 0xae2200fc  sw          $v0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d70) {
            ctx->pc = 0x189D84u;
            goto label_189d84;
        }
    }
    ctx->pc = 0x189D78u;
label_189d78:
    // 0x189d78: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x189D78u;
    {
        const bool branch_taken_0x189d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D78u;
            // 0x189d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d78) {
            ctx->pc = 0x18A13Cu;
            goto label_18a13c;
        }
    }
    ctx->pc = 0x189D80u;
label_189d80:
    // 0x189d80: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x189d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_189d84:
    // 0x189d84: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x189d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x189d88: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x189d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x189d8c: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x189d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
label_189d90:
    // 0x189d90: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x189d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x189d94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189D94u;
    {
        const bool branch_taken_0x189d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d94) {
            ctx->pc = 0x189DA4u;
            goto label_189da4;
        }
    }
    ctx->pc = 0x189D9Cu;
    // 0x189d9c: 0x40f809  jalr        $v0
    ctx->pc = 0x189D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x189DA4u);
        ctx->pc = 0x189DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189D9Cu;
            // 0x189da0: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x189DA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189CF4u: goto label_189cf4;
            case 0x189D3Cu: goto label_189d3c;
            case 0x189D50u: goto label_189d50;
            case 0x189D58u: goto label_189d58;
            case 0x189D5Cu: goto label_189d5c;
            case 0x189D68u: goto label_189d68;
            case 0x189D78u: goto label_189d78;
            case 0x189D80u: goto label_189d80;
            case 0x189D84u: goto label_189d84;
            case 0x189D90u: goto label_189d90;
            case 0x189DA4u: goto label_189da4;
            case 0x189DF4u: goto label_189df4;
            case 0x189E30u: goto label_189e30;
            case 0x189E3Cu: goto label_189e3c;
            case 0x189E78u: goto label_189e78;
            case 0x189E7Cu: goto label_189e7c;
            case 0x189E8Cu: goto label_189e8c;
            case 0x189EB8u: goto label_189eb8;
            case 0x189F1Cu: goto label_189f1c;
            case 0x189F4Cu: goto label_189f4c;
            case 0x189F54u: goto label_189f54;
            case 0x189F88u: goto label_189f88;
            case 0x189F8Cu: goto label_189f8c;
            case 0x189F98u: goto label_189f98;
            case 0x189FBCu: goto label_189fbc;
            case 0x18A028u: goto label_18a028;
            case 0x18A02Cu: goto label_18a02c;
            case 0x18A0A4u: goto label_18a0a4;
            case 0x18A104u: goto label_18a104;
            case 0x18A108u: goto label_18a108;
            case 0x18A128u: goto label_18a128;
            case 0x18A130u: goto label_18a130;
            case 0x18A13Cu: goto label_18a13c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189DA4u; }
            if (ctx->pc != 0x189DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x189DA4u;
label_189da4:
    // 0x189da4: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x189DA4u;
    {
        const bool branch_taken_0x189da4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189DA4u;
            // 0x189da8: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189da4) {
            ctx->pc = 0x189DF4u;
            goto label_189df4;
        }
    }
    ctx->pc = 0x189DACu;
    // 0x189dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189db0: 0x16820010  bne         $s4, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x189DB0u;
    {
        const bool branch_taken_0x189db0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x189db0) {
            ctx->pc = 0x189DF4u;
            goto label_189df4;
        }
    }
    ctx->pc = 0x189DB8u;
    // 0x189db8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x189DB8u;
    SET_GPR_U32(ctx, 31, 0x189DC0u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DC0u; }
        if (ctx->pc != 0x189DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DC0u; }
        if (ctx->pc != 0x189DC0u) { return; }
    }
    ctx->pc = 0x189DC0u;
    // 0x189dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x189dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dc4: 0x24052800  addiu       $a1, $zero, 0x2800
    ctx->pc = 0x189dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x189dc8: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x189DC8u;
    SET_GPR_U32(ctx, 31, 0x189DD0u);
    ctx->pc = 0x189DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DC8u;
            // 0x189dcc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DD0u; }
        if (ctx->pc != 0x189DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DD0u; }
        if (ctx->pc != 0x189DD0u) { return; }
    }
    ctx->pc = 0x189DD0u;
    // 0x189dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ddc: 0xc09bcbe  jal         func_26F2F8
    ctx->pc = 0x189DDCu;
    SET_GPR_U32(ctx, 31, 0x189DE4u);
    ctx->pc = 0x189DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DDCu;
            // 0x189de0: 0x24062800  addiu       $a2, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F2F8u;
    if (runtime->hasFunction(0x26F2F8u)) {
        auto targetFn = runtime->lookupFunction(0x26F2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DE4u; }
        if (ctx->pc != 0x189DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f2f8_0x26f530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DE4u; }
        if (ctx->pc != 0x189DE4u) { return; }
    }
    ctx->pc = 0x189DE4u;
    // 0x189de4: 0xc0629aa  jal         func_18A6A8
    ctx->pc = 0x189DE4u;
    SET_GPR_U32(ctx, 31, 0x189DECu);
    ctx->pc = 0x189DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DE4u;
            // 0x189de8: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A6A8u;
    if (runtime->hasFunction(0x18A6A8u)) {
        auto targetFn = runtime->lookupFunction(0x18A6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DECu; }
        if (ctx->pc != 0x189DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A6A8_0x18a6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DECu; }
        if (ctx->pc != 0x189DECu) { return; }
    }
    ctx->pc = 0x189DECu;
    // 0x189dec: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x189DECu;
    SET_GPR_U32(ctx, 31, 0x189DF4u);
    ctx->pc = 0x189DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DECu;
            // 0x189df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DF4u; }
        if (ctx->pc != 0x189DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DF4u; }
        if (ctx->pc != 0x189DF4u) { return; }
    }
    ctx->pc = 0x189DF4u;
label_189df4:
    // 0x189df4: 0xc062b08  jal         func_18AC20
    ctx->pc = 0x189DF4u;
    SET_GPR_U32(ctx, 31, 0x189DFCu);
    ctx->pc = 0x189DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DF4u;
            // 0x189df8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC20u;
    if (runtime->hasFunction(0x18AC20u)) {
        auto targetFn = runtime->lookupFunction(0x18AC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DFCu; }
        if (ctx->pc != 0x189DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AC20_0x18ac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DFCu; }
        if (ctx->pc != 0x189DFCu) { return; }
    }
    ctx->pc = 0x189DFCu;
    // 0x189dfc: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x189DFCu;
    {
        const bool branch_taken_0x189dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189DFCu;
            // 0x189e00: 0x2e650002  sltiu       $a1, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189dfc) {
            ctx->pc = 0x189D78u;
            runtime->cooperativeGuestYield();
            goto label_189d78;
        }
    }
    ctx->pc = 0x189E04u;
    // 0x189e04: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x189E04u;
    {
        const bool branch_taken_0x189e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e04) {
            ctx->pc = 0x189E3Cu;
            goto label_189e3c;
        }
    }
    ctx->pc = 0x189E0Cu;
    // 0x189e0c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x189E0Cu;
    {
        const bool branch_taken_0x189e0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E0Cu;
            // 0x189e10: 0x8e2200f8  lw          $v0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e0c) {
            ctx->pc = 0x189E30u;
            goto label_189e30;
        }
    }
    ctx->pc = 0x189E14u;
    // 0x189e14: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x189e14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x189e18: 0x9444000a  lhu         $a0, 0xA($v0)
    ctx->pc = 0x189e18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x189e1c: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x189e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x189e20: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x189e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
    // 0x189e24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x189e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x189e28: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x189e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x189e2c: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x189e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_189e30:
    // 0x189e30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x189e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x189e34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x189E34u;
    {
        const bool branch_taken_0x189e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E34u;
            // 0x189e38: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e34) {
            ctx->pc = 0x189E78u;
            goto label_189e78;
        }
    }
    ctx->pc = 0x189E3Cu;
label_189e3c:
    // 0x189e3c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x189E3Cu;
    {
        const bool branch_taken_0x189e3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E3Cu;
            // 0x189e40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e3c) {
            ctx->pc = 0x189E7Cu;
            goto label_189e7c;
        }
    }
    ctx->pc = 0x189E44u;
    // 0x189e44: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x189e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x189e48: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x189e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189e4c: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x189e4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x189e50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x189e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x189e54: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x189e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x189e58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189e5c: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x189e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x189e60: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x189e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x189e64: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x189e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x189e68: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x189e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x189e6c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x189e70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189e74: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x189e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_189e78:
    // 0x189e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189e7c:
    // 0x189e7c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189E7Cu;
    {
        const bool branch_taken_0x189e7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x189E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E7Cu;
            // 0x189e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e7c) {
            ctx->pc = 0x189E8Cu;
            goto label_189e8c;
        }
    }
    ctx->pc = 0x189E84u;
    // 0x189e84: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x189E84u;
    {
        const bool branch_taken_0x189e84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x189e84) {
            ctx->pc = 0x189F54u;
            goto label_189f54;
        }
    }
    ctx->pc = 0x189E8Cu;
label_189e8c:
    // 0x189e8c: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x189E8Cu;
    {
        const bool branch_taken_0x189e8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e8c) {
            ctx->pc = 0x189F4Cu;
            goto label_189f4c;
        }
    }
    ctx->pc = 0x189E94u;
    // 0x189e94: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x189E94u;
    {
        const bool branch_taken_0x189e94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x189E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189E94u;
            // 0x189e98: 0x24102800  addiu       $s0, $zero, 0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e94) {
            ctx->pc = 0x189EB8u;
            goto label_189eb8;
        }
    }
    ctx->pc = 0x189E9Cu;
    // 0x189e9c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x189ea0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x189ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x189ea4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x189ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x189ea8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x189ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189eac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189eb0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x189eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x189eb4: 0x24502800  addiu       $s0, $v0, 0x2800
    ctx->pc = 0x189eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
label_189eb8:
    // 0x189eb8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x189eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x189ebc: 0xc062620  jal         func_189880
    ctx->pc = 0x189EBCu;
    SET_GPR_U32(ctx, 31, 0x189EC4u);
    ctx->pc = 0x189EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189EBCu;
            // 0x189ec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EC4u; }
        if (ctx->pc != 0x189EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EC4u; }
        if (ctx->pc != 0x189EC4u) { return; }
    }
    ctx->pc = 0x189EC4u;
    // 0x189ec4: 0x1040ffac  beqz        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x189EC4u;
    {
        const bool branch_taken_0x189ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189EC4u;
            // 0x189ec8: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ec4) {
            ctx->pc = 0x189D78u;
            runtime->cooperativeGuestYield();
            goto label_189d78;
        }
    }
    ctx->pc = 0x189ECCu;
    // 0x189ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ed0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x189ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ed4: 0xc09bcbe  jal         func_26F2F8
    ctx->pc = 0x189ED4u;
    SET_GPR_U32(ctx, 31, 0x189EDCu);
    ctx->pc = 0x189ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189ED4u;
            // 0x189ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F2F8u;
    if (runtime->hasFunction(0x26F2F8u)) {
        auto targetFn = runtime->lookupFunction(0x26F2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EDCu; }
        if (ctx->pc != 0x189EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26f2f8_0x26f530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189EDCu; }
        if (ctx->pc != 0x189EDCu) { return; }
    }
    ctx->pc = 0x189EDCu;
    // 0x189edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189ee0: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x189EE0u;
    {
        const bool branch_taken_0x189ee0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x189EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189EE0u;
            // 0x189ee4: 0x3c060019  lui         $a2, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ee0) {
            ctx->pc = 0x189F1Cu;
            goto label_189f1c;
        }
    }
    ctx->pc = 0x189EE8u;
    // 0x189ee8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x189ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x189eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef0: 0x24c6aaa8  addiu       $a2, $a2, -0x5558
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945448));
    // 0x189ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189ef8: 0xc09bfe2  jal         func_26FF88
    ctx->pc = 0x189EF8u;
    SET_GPR_U32(ctx, 31, 0x189F00u);
    ctx->pc = 0x189EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189EF8u;
            // 0x189efc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FF88u;
    if (runtime->hasFunction(0x26FF88u)) {
        auto targetFn = runtime->lookupFunction(0x26FF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F00u; }
        if (ctx->pc != 0x189F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ff88_0x26ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F00u; }
        if (ctx->pc != 0x189F00u) { return; }
    }
    ctx->pc = 0x189F00u;
    // 0x189f00: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x189f00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x189f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f08: 0x24c6abe0  addiu       $a2, $a2, -0x5420
    ctx->pc = 0x189f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945760));
    // 0x189f0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x189f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189f10: 0xc09bfe2  jal         func_26FF88
    ctx->pc = 0x189F10u;
    SET_GPR_U32(ctx, 31, 0x189F18u);
    ctx->pc = 0x189F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F10u;
            // 0x189f14: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FF88u;
    if (runtime->hasFunction(0x26FF88u)) {
        auto targetFn = runtime->lookupFunction(0x26FF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F18u; }
        if (ctx->pc != 0x189F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ff88_0x26ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F18u; }
        if (ctx->pc != 0x189F18u) { return; }
    }
    ctx->pc = 0x189F18u;
    // 0x189f18: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x189f18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
label_189f1c:
    // 0x189f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f20: 0x24c6ac18  addiu       $a2, $a2, -0x53E8
    ctx->pc = 0x189f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945816));
    // 0x189f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f28: 0xc09bfe2  jal         func_26FF88
    ctx->pc = 0x189F28u;
    SET_GPR_U32(ctx, 31, 0x189F30u);
    ctx->pc = 0x189F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F28u;
            // 0x189f2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FF88u;
    if (runtime->hasFunction(0x26FF88u)) {
        auto targetFn = runtime->lookupFunction(0x26FF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F30u; }
        if (ctx->pc != 0x189F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ff88_0x26ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F30u; }
        if (ctx->pc != 0x189F30u) { return; }
    }
    ctx->pc = 0x189F30u;
    // 0x189f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189f34: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x189F34u;
    {
        const bool branch_taken_0x189f34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x189f34) {
            ctx->pc = 0x189F54u;
            goto label_189f54;
        }
    }
    ctx->pc = 0x189F3Cu;
    // 0x189f3c: 0xc0629aa  jal         func_18A6A8
    ctx->pc = 0x189F3Cu;
    SET_GPR_U32(ctx, 31, 0x189F44u);
    ctx->pc = 0x189F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F3Cu;
            // 0x189f40: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A6A8u;
    if (runtime->hasFunction(0x18A6A8u)) {
        auto targetFn = runtime->lookupFunction(0x18A6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F44u; }
        if (ctx->pc != 0x189F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A6A8_0x18a6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F44u; }
        if (ctx->pc != 0x189F44u) { return; }
    }
    ctx->pc = 0x189F44u;
    // 0x189f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189F44u;
    {
        const bool branch_taken_0x189f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f44) {
            ctx->pc = 0x189F54u;
            goto label_189f54;
        }
    }
    ctx->pc = 0x189F4Cu;
label_189f4c:
    // 0x189f4c: 0xc09bfbc  jal         func_26FEF0
    ctx->pc = 0x189F4Cu;
    SET_GPR_U32(ctx, 31, 0x189F54u);
    ctx->pc = 0x189F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F4Cu;
            // 0x189f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FEF0u;
    if (runtime->hasFunction(0x26FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x26FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F54u; }
        if (ctx->pc != 0x189F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FEF0_0x26fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F54u; }
        if (ctx->pc != 0x189F54u) { return; }
    }
    ctx->pc = 0x189F54u;
label_189f54:
    // 0x189f54: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x189F54u;
    {
        const bool branch_taken_0x189f54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F54u;
            // 0x189f58: 0x2bc20100  slti        $v0, $fp, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f54) {
            ctx->pc = 0x189F8Cu;
            goto label_189f8c;
        }
    }
    ctx->pc = 0x189F5Cu;
    // 0x189f5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x189F5Cu;
    {
        const bool branch_taken_0x189f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F5Cu;
            // 0x189f60: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f5c) {
            ctx->pc = 0x189F88u;
            goto label_189f88;
        }
    }
    ctx->pc = 0x189F64u;
    // 0x189f64: 0x2bc20102  slti        $v0, $fp, 0x102
    ctx->pc = 0x189f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)258) ? 1 : 0);
    // 0x189f68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x189F68u;
    {
        const bool branch_taken_0x189f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189f68) {
            ctx->pc = 0x189F88u;
            goto label_189f88;
        }
    }
    ctx->pc = 0x189F70u;
    // 0x189f70: 0x2bc20104  slti        $v0, $fp, 0x104
    ctx->pc = 0x189f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)260) ? 1 : 0);
    // 0x189f74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x189F74u;
    {
        const bool branch_taken_0x189f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f74) {
            ctx->pc = 0x189F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189F74u;
            // 0x189f78: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189F8Cu;
            goto label_189f8c;
        }
    }
    ctx->pc = 0x189F7Cu;
    // 0x189f7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x189f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x189f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189F80u;
    {
        const bool branch_taken_0x189f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F80u;
            // 0x189f84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f80) {
            ctx->pc = 0x189F8Cu;
            goto label_189f8c;
        }
    }
    ctx->pc = 0x189F88u;
label_189f88:
    // 0x189f88: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x189f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_189f8c:
    // 0x189f8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x189f8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f90: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x189F90u;
    {
        const bool branch_taken_0x189f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F90u;
            // 0x189f94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f90) {
            ctx->pc = 0x18A108u;
            goto label_18a108;
        }
    }
    ctx->pc = 0x189F98u;
label_189f98:
    // 0x189f98: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x189f9c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x189f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x189fa0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x189fa4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x189fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x189fa8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x189fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x189fac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x189facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189fb0: 0x54440002  bnel        $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189FB0u;
    {
        const bool branch_taken_0x189fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x189fb0) {
            ctx->pc = 0x189FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189FB0u;
            // 0x189fb4: 0x52a80  sll         $a1, $a1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189FBCu;
            goto label_189fbc;
        }
    }
    ctx->pc = 0x189FB8u;
    // 0x189fb8: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
label_189fbc:
    // 0x189fbc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x189fc0: 0xc062620  jal         func_189880
    ctx->pc = 0x189FC0u;
    SET_GPR_U32(ctx, 31, 0x189FC8u);
    ctx->pc = 0x189FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189FC0u;
            // 0x189fc4: 0x26300094  addiu       $s0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FC8u; }
        if (ctx->pc != 0x189FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FC8u; }
        if (ctx->pc != 0x189FC8u) { return; }
    }
    ctx->pc = 0x189FC8u;
    // 0x189fc8: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x189fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x189fcc: 0x1040ff6a  beqz        $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x189FCCu;
    {
        const bool branch_taken_0x189fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189FCCu;
            // 0x189fd0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fcc) {
            ctx->pc = 0x189D78u;
            runtime->cooperativeGuestYield();
            goto label_189d78;
        }
    }
    ctx->pc = 0x189FD4u;
    // 0x189fd4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x189fd8: 0x2442fefe  addiu       $v0, $v0, -0x102
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967038));
    // 0x189fdc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x189fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x189fe0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189FE0u;
    {
        const bool branch_taken_0x189fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189FE0u;
            // 0x189fe4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fe0) {
            ctx->pc = 0x18A028u;
            goto label_18a028;
        }
    }
    ctx->pc = 0x189FE8u;
    // 0x189fe8: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x189fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x189fec: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x189FECu;
    {
        const bool branch_taken_0x189fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189fec) {
            ctx->pc = 0x189FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x189FECu;
            // 0x189ff0: 0x8e220140  lw          $v0, 0x140($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18A02Cu;
            goto label_18a02c;
        }
    }
    ctx->pc = 0x189FF4u;
    // 0x189ff4: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x189ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x189ff8: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x189ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x189ffc: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x189ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x18a000: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x18a000u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x18a004: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18a004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18a008: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x18a008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18a00c: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x18a00cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18a010: 0x2812  mflo        $a1
    ctx->pc = 0x18a010u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x18a014: 0xc062620  jal         func_189880
    ctx->pc = 0x18A014u;
    SET_GPR_U32(ctx, 31, 0x18A01Cu);
    ctx->pc = 0x18A018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A014u;
            // 0x18a018: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A01Cu; }
        if (ctx->pc != 0x18A01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A01Cu; }
        if (ctx->pc != 0x18A01Cu) { return; }
    }
    ctx->pc = 0x18A01Cu;
    // 0x18a01c: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x18a020: 0x1040ff55  beqz        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x18A020u;
    {
        const bool branch_taken_0x18a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A020u;
            // 0x18a024: 0xac62009c  sw          $v0, 0x9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a020) {
            ctx->pc = 0x189D78u;
            runtime->cooperativeGuestYield();
            goto label_189d78;
        }
    }
    ctx->pc = 0x18A028u;
label_18a028:
    // 0x18a028: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_18a02c:
    // 0x18a02c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18A02Cu;
    {
        const bool branch_taken_0x18a02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A02Cu;
            // 0x18a030: 0x8e250058  lw          $a1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a02c) {
            ctx->pc = 0x18A0A4u;
            goto label_18a0a4;
        }
    }
    ctx->pc = 0x18A034u;
    // 0x18a034: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x18a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x18a038: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18a03c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x18a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18a040: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18a044: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18a044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18a048: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x18a048u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x18a04c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x18a04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18a050: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18a054: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x18a058: 0xc062620  jal         func_189880
    ctx->pc = 0x18A058u;
    SET_GPR_U32(ctx, 31, 0x18A060u);
    ctx->pc = 0x18A05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A058u;
            // 0x18a05c: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A060u; }
        if (ctx->pc != 0x18A060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A060u; }
        if (ctx->pc != 0x18A060u) { return; }
    }
    ctx->pc = 0x18A060u;
    // 0x18a060: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x18a064: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x18a068: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18a06c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a070: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x18a070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x18a074: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a078: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x18a078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x18a07c: 0x8e27005c  lw          $a3, 0x5C($s1)
    ctx->pc = 0x18a07cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x18a080: 0x38830010  xori        $v1, $a0, 0x10
    ctx->pc = 0x18a080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x18a084: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18a084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a08c: 0x3400b  movn        $t0, $zero, $v1
    ctx->pc = 0x18a08cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x18a090: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x18a090u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x18a094: 0xc09bbac  jal         func_26EEB0
    ctx->pc = 0x18A094u;
    SET_GPR_U32(ctx, 31, 0x18A09Cu);
    ctx->pc = 0x18A098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A094u;
            // 0x18a098: 0x73902  srl         $a3, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26EEB0u;
    if (runtime->hasFunction(0x26EEB0u)) {
        auto targetFn = runtime->lookupFunction(0x26EEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A09Cu; }
        if (ctx->pc != 0x18A09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026EEB0_0x26eeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A09Cu; }
        if (ctx->pc != 0x18A09Cu) { return; }
    }
    ctx->pc = 0x18A09Cu;
    // 0x18a09c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18A09Cu;
    {
        const bool branch_taken_0x18a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A09Cu;
            // 0x18a0a0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a09c) {
            ctx->pc = 0x18A104u;
            goto label_18a104;
        }
    }
    ctx->pc = 0x18A0A4u;
label_18a0a4:
    // 0x18a0a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18a0a8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18a0ac: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x18a0b0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x18a0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18a0b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18a0b8: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x18a0bc: 0xc062620  jal         func_189880
    ctx->pc = 0x18A0BCu;
    SET_GPR_U32(ctx, 31, 0x18A0C4u);
    ctx->pc = 0x18A0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0BCu;
            // 0x18a0c0: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189880u;
    if (runtime->hasFunction(0x189880u)) {
        auto targetFn = runtime->lookupFunction(0x189880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0C4u; }
        if (ctx->pc != 0x18A0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189880_0x189880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0C4u; }
        if (ctx->pc != 0x18A0C4u) { return; }
    }
    ctx->pc = 0x18A0C4u;
    // 0x18a0c4: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x18a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x18a0c8: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x18a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x18a0cc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18a0d0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18a0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a0d4: 0xac6200a8  sw          $v0, 0xA8($v1)
    ctx->pc = 0x18a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 2));
    // 0x18a0d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a0dc: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x18a0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x18a0e0: 0x8e27005c  lw          $a3, 0x5C($s1)
    ctx->pc = 0x18a0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x18a0e4: 0x38830010  xori        $v1, $a0, 0x10
    ctx->pc = 0x18a0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x18a0e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a0ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0f0: 0x3400b  movn        $t0, $zero, $v1
    ctx->pc = 0x18a0f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x18a0f4: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x18a0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x18a0f8: 0xc09bc20  jal         func_26F080
    ctx->pc = 0x18A0F8u;
    SET_GPR_U32(ctx, 31, 0x18A100u);
    ctx->pc = 0x18A0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0F8u;
            // 0x18a0fc: 0x73902  srl         $a3, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26F080u;
    if (runtime->hasFunction(0x26F080u)) {
        auto targetFn = runtime->lookupFunction(0x26F080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A100u; }
        if (ctx->pc != 0x18A100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F080_0x26f080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A100u; }
        if (ctx->pc != 0x18A100u) { return; }
    }
    ctx->pc = 0x18A100u;
    // 0x18a100: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18a100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18a104:
    // 0x18a104: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18a104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_18a108:
    // 0x18a108: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A108u;
    {
        const bool branch_taken_0x18a108 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A108u;
            // 0x18a10c: 0x8fa200b8  lw          $v0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a108) {
            ctx->pc = 0x18A130u;
            goto label_18a130;
        }
    }
    ctx->pc = 0x18A110u;
    // 0x18a110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A110u;
    {
        const bool branch_taken_0x18a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A110u;
            // 0x18a114: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a110) {
            ctx->pc = 0x18A128u;
            goto label_18a128;
        }
    }
    ctx->pc = 0x18A118u;
    // 0x18a118: 0x5440ff9f  bnel        $v0, $zero, . + 4 + (-0x61 << 2)
    ctx->pc = 0x18A118u;
    {
        const bool branch_taken_0x18a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a118) {
            ctx->pc = 0x18A11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A118u;
            // 0x18a11c: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189F98u;
            runtime->cooperativeGuestYield();
            goto label_189f98;
        }
    }
    ctx->pc = 0x18A120u;
    // 0x18a120: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18A120u;
    {
        const bool branch_taken_0x18a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a120) {
            ctx->pc = 0x18A130u;
            goto label_18a130;
        }
    }
    ctx->pc = 0x18A128u;
label_18a128:
    // 0x18a128: 0x5a80ff9b  blezl       $s4, . + 4 + (-0x65 << 2)
    ctx->pc = 0x18A128u;
    {
        const bool branch_taken_0x18a128 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x18a128) {
            ctx->pc = 0x18A12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18A128u;
            // 0x18a12c: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x189F98u;
            runtime->cooperativeGuestYield();
            goto label_189f98;
        }
    }
    ctx->pc = 0x18A130u;
label_18a130:
    // 0x18a130: 0xc09e4ba  jal         func_2792E8
    ctx->pc = 0x18A130u;
    SET_GPR_U32(ctx, 31, 0x18A138u);
    ctx->pc = 0x18A134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A130u;
            // 0x18a134: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2792E8u;
    if (runtime->hasFunction(0x2792E8u)) {
        auto targetFn = runtime->lookupFunction(0x2792E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A138u; }
        if (ctx->pc != 0x18A138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002792E8_0x2792e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A138u; }
        if (ctx->pc != 0x18A138u) { return; }
    }
    ctx->pc = 0x18A138u;
    // 0x18a138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a13c:
    // 0x18a13c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18a13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18a140: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18a140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18a144: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18a144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a148: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18a148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a14c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18a14cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a150: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a154: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x18a154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a158: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x18a158u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a15c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x18a15cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a164: 0x3e00008  jr          $ra
    ctx->pc = 0x18A164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A164u;
            // 0x18a168: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189CF4u: goto label_189cf4;
            case 0x189D3Cu: goto label_189d3c;
            case 0x189D50u: goto label_189d50;
            case 0x189D58u: goto label_189d58;
            case 0x189D5Cu: goto label_189d5c;
            case 0x189D68u: goto label_189d68;
            case 0x189D78u: goto label_189d78;
            case 0x189D80u: goto label_189d80;
            case 0x189D84u: goto label_189d84;
            case 0x189D90u: goto label_189d90;
            case 0x189DA4u: goto label_189da4;
            case 0x189DF4u: goto label_189df4;
            case 0x189E30u: goto label_189e30;
            case 0x189E3Cu: goto label_189e3c;
            case 0x189E78u: goto label_189e78;
            case 0x189E7Cu: goto label_189e7c;
            case 0x189E8Cu: goto label_189e8c;
            case 0x189EB8u: goto label_189eb8;
            case 0x189F1Cu: goto label_189f1c;
            case 0x189F4Cu: goto label_189f4c;
            case 0x189F54u: goto label_189f54;
            case 0x189F88u: goto label_189f88;
            case 0x189F8Cu: goto label_189f8c;
            case 0x189F98u: goto label_189f98;
            case 0x189FBCu: goto label_189fbc;
            case 0x18A028u: goto label_18a028;
            case 0x18A02Cu: goto label_18a02c;
            case 0x18A0A4u: goto label_18a0a4;
            case 0x18A104u: goto label_18a104;
            case 0x18A108u: goto label_18a108;
            case 0x18A128u: goto label_18a128;
            case 0x18A130u: goto label_18a130;
            case 0x18A13Cu: goto label_18a13c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A16Cu;
    // 0x18a16c: 0x0  nop
    ctx->pc = 0x18a16cu;
    // NOP
}
