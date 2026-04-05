#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155BA0
// Address: 0x155ba0 - 0x156288
void sub_00155BA0_0x155ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155BA0_0x155ba0");
#endif

    ctx->pc = 0x155ba0u;

    // 0x155ba0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x155ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x155ba4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x155ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x155ba8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x155ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x155bac: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x155bacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bb0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x155bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x155bb4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x155bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x155bb8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x155bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x155bbc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x155bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x155bc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x155bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x155bc4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x155bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x155bc8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x155bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x155bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155bd0: 0x8ec400d4  lw          $a0, 0xD4($s6)
    ctx->pc = 0x155bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
    // 0x155bd4: 0x8ec30044  lw          $v1, 0x44($s6)
    ctx->pc = 0x155bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x155bd8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x155bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x155bdc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x155bdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155be0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x155be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x155be4: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x155be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155bec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155bf0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x155bf4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155bf8: 0x10800111  beqz        $a0, . + 4 + (0x111 << 2)
    ctx->pc = 0x155BF8u;
    {
        const bool branch_taken_0x155bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155BF8u;
            // 0x155bfc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bf8) {
            ctx->pc = 0x156040u;
            goto label_156040;
        }
    }
    ctx->pc = 0x155C00u;
    // 0x155c00: 0xc055584  jal         func_155610
    ctx->pc = 0x155C00u;
    SET_GPR_U32(ctx, 31, 0x155C08u);
    ctx->pc = 0x155C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C00u;
            // 0x155c04: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155610u;
    if (runtime->hasFunction(0x155610u)) {
        auto targetFn = runtime->lookupFunction(0x155610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C08u; }
        if (ctx->pc != 0x155C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155610_0x155610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C08u; }
        if (ctx->pc != 0x155C08u) { return; }
    }
    ctx->pc = 0x155C08u;
    // 0x155c08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x155c08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c0c: 0xc055516  jal         func_155458
    ctx->pc = 0x155C0Cu;
    SET_GPR_U32(ctx, 31, 0x155C14u);
    ctx->pc = 0x155C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C0Cu;
            // 0x155c10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155458u;
    if (runtime->hasFunction(0x155458u)) {
        auto targetFn = runtime->lookupFunction(0x155458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C14u; }
        if (ctx->pc != 0x155C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155458_0x155458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C14u; }
        if (ctx->pc != 0x155C14u) { return; }
    }
    ctx->pc = 0x155C14u;
    // 0x155c14: 0x267049a8  addiu       $s0, $s3, 0x49A8
    ctx->pc = 0x155c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 18856));
    // 0x155c18: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x155c1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155c20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155c24: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x155c24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x155c28: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x155c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x155c2c: 0x27b20002  addiu       $s2, $sp, 0x2
    ctx->pc = 0x155c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x155c30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c38: 0xae6049a8  sw          $zero, 0x49A8($s3)
    ctx->pc = 0x155c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 18856), GPR_U32(ctx, 0));
    // 0x155c3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c40: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x155c40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x155c44: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x155c44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x155c48: 0x73d78  dsll        $a3, $a3, 21
    ctx->pc = 0x155c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 21);
    // 0x155c4c: 0x3408f000  ori         $t0, $zero, 0xF000
    ctx->pc = 0x155c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x155c50: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x155c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x155c54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c58: 0xc055674  jal         func_1559D0
    ctx->pc = 0x155C58u;
    SET_GPR_U32(ctx, 31, 0x155C60u);
    ctx->pc = 0x155C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155C58u;
            // 0x155c5c: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559D0u;
    if (runtime->hasFunction(0x1559D0u)) {
        auto targetFn = runtime->lookupFunction(0x1559D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C60u; }
        if (ctx->pc != 0x155C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001559d0_0x1559d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155C60u; }
        if (ctx->pc != 0x155C60u) { return; }
    }
    ctx->pc = 0x155C60u;
    // 0x155c60: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155c60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155c64: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x155c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155c68: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x155c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x155c6c: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x155c6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x155c70: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x155c74: 0xa7b10000  sh          $s1, 0x0($sp)
    ctx->pc = 0x155c74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x155c78: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x155c78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x155c7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155c8c: 0x3408e000  ori         $t0, $zero, 0xE000
    ctx->pc = 0x155c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x155c90: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x155c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x155c94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c98: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155c98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c9c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x155c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x155ca0: 0xc055674  jal         func_1559D0
    ctx->pc = 0x155CA0u;
    SET_GPR_U32(ctx, 31, 0x155CA8u);
    ctx->pc = 0x155CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155CA0u;
            // 0x155ca4: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559D0u;
    if (runtime->hasFunction(0x1559D0u)) {
        auto targetFn = runtime->lookupFunction(0x1559D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CA8u; }
        if (ctx->pc != 0x155CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001559d0_0x1559d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CA8u; }
        if (ctx->pc != 0x155CA8u) { return; }
    }
    ctx->pc = 0x155CA8u;
    // 0x155ca8: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155ca8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155cac: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x155cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x155cb0: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x155cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x155cb4: 0x3408c000  ori         $t0, $zero, 0xC000
    ctx->pc = 0x155cb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x155cb8: 0x844b8  dsll        $t0, $t0, 18
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 18);
    // 0x155cbc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x155cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x155cc0: 0xa7b10000  sh          $s1, 0x0($sp)
    ctx->pc = 0x155cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x155cc4: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x155cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x155cc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ccc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155cd8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155cdc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155cdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ce0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x155ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x155ce4: 0xc055674  jal         func_1559D0
    ctx->pc = 0x155CE4u;
    SET_GPR_U32(ctx, 31, 0x155CECu);
    ctx->pc = 0x155CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155CE4u;
            // 0x155ce8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559D0u;
    if (runtime->hasFunction(0x1559D0u)) {
        auto targetFn = runtime->lookupFunction(0x1559D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CECu; }
        if (ctx->pc != 0x155CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001559d0_0x1559d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155CECu; }
        if (ctx->pc != 0x155CECu) { return; }
    }
    ctx->pc = 0x155CECu;
    // 0x155cec: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155cecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155cf0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x155cf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x155cf4: 0x73cb8  dsll        $a3, $a3, 18
    ctx->pc = 0x155cf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 18);
    // 0x155cf8: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x155cf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x155cfc: 0x84478  dsll        $t0, $t0, 17
    ctx->pc = 0x155cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 17);
    // 0x155d00: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x155d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x155d04: 0xa7b10000  sh          $s1, 0x0($sp)
    ctx->pc = 0x155d04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x155d08: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x155d08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x155d0c: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x155d0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155d1c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x155d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155d24: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155d24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d28: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x155d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x155d2c: 0xc055674  jal         func_1559D0
    ctx->pc = 0x155D2Cu;
    SET_GPR_U32(ctx, 31, 0x155D34u);
    ctx->pc = 0x155D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155D2Cu;
            // 0x155d30: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559D0u;
    if (runtime->hasFunction(0x1559D0u)) {
        auto targetFn = runtime->lookupFunction(0x1559D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D34u; }
        if (ctx->pc != 0x155D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001559d0_0x1559d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D34u; }
        if (ctx->pc != 0x155D34u) { return; }
    }
    ctx->pc = 0x155D34u;
    // 0x155d34: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155d34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155d38: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x155d38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d3c: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x155d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155d40: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x155d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x155d44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d48: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x155d48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x155d4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x155d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155d54: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x155d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x155d58: 0xc05563c  jal         func_1558F0
    ctx->pc = 0x155D58u;
    SET_GPR_U32(ctx, 31, 0x155D60u);
    ctx->pc = 0x155D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155D58u;
            // 0x155d5c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1558F0u;
    if (runtime->hasFunction(0x1558F0u)) {
        auto targetFn = runtime->lookupFunction(0x1558F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D60u; }
        if (ctx->pc != 0x155D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001558F0_0x1558f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D60u; }
        if (ctx->pc != 0x155D60u) { return; }
    }
    ctx->pc = 0x155D60u;
    // 0x155d60: 0xc055558  jal         func_155560
    ctx->pc = 0x155D60u;
    SET_GPR_U32(ctx, 31, 0x155D68u);
    ctx->pc = 0x155D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155D60u;
            // 0x155d64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155560u;
    if (runtime->hasFunction(0x155560u)) {
        auto targetFn = runtime->lookupFunction(0x155560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D68u; }
        if (ctx->pc != 0x155D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155560_0x155560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155D68u; }
        if (ctx->pc != 0x155D68u) { return; }
    }
    ctx->pc = 0x155D68u;
label_155d68:
    // 0x155d68: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x155d68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x155d6c: 0x3c0a0030  lui         $t2, 0x30
    ctx->pc = 0x155d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)48 << 16));
    // 0x155d70: 0x263149a8  addiu       $s1, $s1, 0x49A8
    ctx->pc = 0x155d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18856));
    // 0x155d74: 0x3c0b0030  lui         $t3, 0x30
    ctx->pc = 0x155d74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48 << 16));
    // 0x155d78: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x155d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x155d7c: 0x2632001c  addiu       $s2, $s1, 0x1C
    ctx->pc = 0x155d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x155d80: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x155d80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155d84: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x155d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x155d88: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x155d88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155d8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d90: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x155d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x155d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d98: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x155d98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x155d9c: 0x27a60002  addiu       $a2, $sp, 0x2
    ctx->pc = 0x155d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x155da0: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x155da0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x155da4: 0x34078005  ori         $a3, $zero, 0x8005
    ctx->pc = 0x155da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x155da8: 0x73e78  dsll        $a3, $a3, 25
    ctx->pc = 0x155da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 25);
    // 0x155dac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x155db0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x155db0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x155db4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x155db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x155db8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155dbc: 0xad424988  sw          $v0, 0x4988($t2)
    ctx->pc = 0x155dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 18824), GPR_U32(ctx, 2));
    // 0x155dc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155dc4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155dc8: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x155DC8u;
    SET_GPR_U32(ctx, 31, 0x155DD0u);
    ctx->pc = 0x155DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155DC8u;
            // 0x155dcc: 0xad63498c  sw          $v1, 0x498C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 18828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (runtime->hasFunction(0x155AB0u)) {
        auto targetFn = runtime->lookupFunction(0x155AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DD0u; }
        if (ctx->pc != 0x155DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_155ab0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155DD0u; }
        if (ctx->pc != 0x155DD0u) { return; }
    }
    ctx->pc = 0x155DD0u;
    // 0x155dd0: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x155dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x155dd4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155dd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155dd8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x155dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x155ddc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155de0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155de4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x155de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x155de8: 0x27a60002  addiu       $a2, $sp, 0x2
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x155dec: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x155df0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x155df4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x155df4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x155df8: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x155df8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x155dfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155e00: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x155e00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155e04: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155e04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x155e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x155e0c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x155e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x155e10: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x155E10u;
    SET_GPR_U32(ctx, 31, 0x155E18u);
    ctx->pc = 0x155E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E10u;
            // 0x155e14: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (runtime->hasFunction(0x155AB0u)) {
        auto targetFn = runtime->lookupFunction(0x155AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E18u; }
        if (ctx->pc != 0x155E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_155ab0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E18u; }
        if (ctx->pc != 0x155E18u) { return; }
    }
    ctx->pc = 0x155E18u;
    // 0x155e18: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x155e1c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155e1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155e20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e28: 0x27a60002  addiu       $a2, $sp, 0x2
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x155e2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x155e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x155e30: 0x3c070a00  lui         $a3, 0xA00
    ctx->pc = 0x155e30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2560 << 16));
    // 0x155e34: 0x34e70400  ori         $a3, $a3, 0x400
    ctx->pc = 0x155e34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1024);
    // 0x155e38: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x155e3c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x155e3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x155e40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155e44: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x155e44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155e48: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e4c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x155e4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155e50: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x155e50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x155e54: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x155E54u;
    SET_GPR_U32(ctx, 31, 0x155E5Cu);
    ctx->pc = 0x155E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E54u;
            // 0x155e58: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (runtime->hasFunction(0x155AB0u)) {
        auto targetFn = runtime->lookupFunction(0x155AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E5Cu; }
        if (ctx->pc != 0x155E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_155ab0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E5Cu; }
        if (ctx->pc != 0x155E5Cu) { return; }
    }
    ctx->pc = 0x155E5Cu;
    // 0x155e5c: 0x2353021  addu        $a2, $s1, $s5
    ctx->pc = 0x155e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x155e60: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155e60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155e64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e68: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x155e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155e6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e70: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x155e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x155e74: 0x3c070a00  lui         $a3, 0xA00
    ctx->pc = 0x155e74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2560 << 16));
    // 0x155e78: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x155e78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x155e7c: 0x27a60002  addiu       $a2, $sp, 0x2
    ctx->pc = 0x155e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x155e80: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x155e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x155e84: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x155e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155e88: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x155e88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155e8c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e90: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x155E90u;
    SET_GPR_U32(ctx, 31, 0x155E98u);
    ctx->pc = 0x155E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155E90u;
            // 0x155e94: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (runtime->hasFunction(0x155AB0u)) {
        auto targetFn = runtime->lookupFunction(0x155AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E98u; }
        if (ctx->pc != 0x155E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_155ab0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155E98u; }
        if (ctx->pc != 0x155E98u) { return; }
    }
    ctx->pc = 0x155E98u;
    // 0x155e98: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x155e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x155e9c: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x155e9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155ea0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x155ea4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ea8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155eac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x155eb0: 0x27a60002  addiu       $a2, $sp, 0x2
    ctx->pc = 0x155eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x155eb4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x155eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x155eb8: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x155eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    // 0x155ebc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x155ebcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155ec0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x155ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155ec4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x155ec4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155ec8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155ec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ecc: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x155eccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x155ed0: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x155ED0u;
    SET_GPR_U32(ctx, 31, 0x155ED8u);
    ctx->pc = 0x155ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155ED0u;
            // 0x155ed4: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (runtime->hasFunction(0x155AB0u)) {
        auto targetFn = runtime->lookupFunction(0x155AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155ED8u; }
        if (ctx->pc != 0x155ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_155ab0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155ED8u; }
        if (ctx->pc != 0x155ED8u) { return; }
    }
    ctx->pc = 0x155ED8u;
    // 0x155ed8: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x155ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x155edc: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x155edcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155ee0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x155ee4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ee8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155eec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x155eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x155ef0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x155ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ef4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x155ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x155ef8: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    // 0x155efc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x155efcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155f00: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x155f00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155f04: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x155f04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155f08: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x155f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f0c: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x155f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x155f10: 0xc0556ac  jal         func_155AB0
    ctx->pc = 0x155F10u;
    SET_GPR_U32(ctx, 31, 0x155F18u);
    ctx->pc = 0x155F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F10u;
            // 0x155f14: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155AB0u;
    if (runtime->hasFunction(0x155AB0u)) {
        auto targetFn = runtime->lookupFunction(0x155AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F18u; }
        if (ctx->pc != 0x155F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_155ab0_0x155ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F18u; }
        if (ctx->pc != 0x155F18u) { return; }
    }
    ctx->pc = 0x155F18u;
    // 0x155f18: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x155f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x155f1c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x155f1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x155f20: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x155f20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x155f24: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x155f24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x155f28: 0x6e1ff8f  bgez        $s7, . + 4 + (-0x71 << 2)
    ctx->pc = 0x155F28u;
    {
        const bool branch_taken_0x155f28 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x155F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F28u;
            // 0x155f2c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f28) {
            ctx->pc = 0x155D68u;
            runtime->cooperativeGuestYield();
            goto label_155d68;
        }
    }
    ctx->pc = 0x155F30u;
    // 0x155f30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f34: 0xc055558  jal         func_155560
    ctx->pc = 0x155F34u;
    SET_GPR_U32(ctx, 31, 0x155F3Cu);
    ctx->pc = 0x155F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F34u;
            // 0x155f38: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155560u;
    if (runtime->hasFunction(0x155560u)) {
        auto targetFn = runtime->lookupFunction(0x155560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F3Cu; }
        if (ctx->pc != 0x155F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155560_0x155560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F3Cu; }
        if (ctx->pc != 0x155F3Cu) { return; }
    }
    ctx->pc = 0x155F3Cu;
    // 0x155f3c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155f40:
    // 0x155f40: 0x17a140  sll         $s4, $s7, 5
    ctx->pc = 0x155f40u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x155f44: 0x245349a8  addiu       $s3, $v0, 0x49A8
    ctx->pc = 0x155f44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x155f48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f4c: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x155f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x155f50: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x155f50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x155f54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x155f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155f58: 0x295a821  addu        $s5, $s4, $s5
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x155f5c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x155f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155f60: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x155f60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x155f64: 0xc05559a  jal         func_155668
    ctx->pc = 0x155F64u;
    SET_GPR_U32(ctx, 31, 0x155F6Cu);
    ctx->pc = 0x155F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F64u;
            // 0x155f68: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F6Cu; }
        if (ctx->pc != 0x155F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F6Cu; }
        if (ctx->pc != 0x155F6Cu) { return; }
    }
    ctx->pc = 0x155F6Cu;
    // 0x155f6c: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x155f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x155f70: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155f74: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x155f78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f7c: 0xc05559a  jal         func_155668
    ctx->pc = 0x155F7Cu;
    SET_GPR_U32(ctx, 31, 0x155F84u);
    ctx->pc = 0x155F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F7Cu;
            // 0x155f80: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F84u; }
        if (ctx->pc != 0x155F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F84u; }
        if (ctx->pc != 0x155F84u) { return; }
    }
    ctx->pc = 0x155F84u;
    // 0x155f84: 0x2671000c  addiu       $s1, $s3, 0xC
    ctx->pc = 0x155f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x155f88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x155f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155f8c: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x155f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x155f90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f94: 0xc05559a  jal         func_155668
    ctx->pc = 0x155F94u;
    SET_GPR_U32(ctx, 31, 0x155F9Cu);
    ctx->pc = 0x155F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155F94u;
            // 0x155f98: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F9Cu; }
        if (ctx->pc != 0x155F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155F9Cu; }
        if (ctx->pc != 0x155F9Cu) { return; }
    }
    ctx->pc = 0x155F9Cu;
    // 0x155f9c: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x155f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x155fa0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155fa4: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x155fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x155fa8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fac: 0xc05559a  jal         func_155668
    ctx->pc = 0x155FACu;
    SET_GPR_U32(ctx, 31, 0x155FB4u);
    ctx->pc = 0x155FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155FACu;
            // 0x155fb0: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FB4u; }
        if (ctx->pc != 0x155FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FB4u; }
        if (ctx->pc != 0x155FB4u) { return; }
    }
    ctx->pc = 0x155FB4u;
    // 0x155fb4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155fb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fbc: 0xc05559a  jal         func_155668
    ctx->pc = 0x155FBCu;
    SET_GPR_U32(ctx, 31, 0x155FC4u);
    ctx->pc = 0x155FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155FBCu;
            // 0x155fc0: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FC4u; }
        if (ctx->pc != 0x155FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FC4u; }
        if (ctx->pc != 0x155FC4u) { return; }
    }
    ctx->pc = 0x155FC4u;
    // 0x155fc4: 0x26700014  addiu       $s0, $s3, 0x14
    ctx->pc = 0x155fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x155fc8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x155fcc: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x155fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x155fd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fd4: 0xc05559a  jal         func_155668
    ctx->pc = 0x155FD4u;
    SET_GPR_U32(ctx, 31, 0x155FDCu);
    ctx->pc = 0x155FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155FD4u;
            // 0x155fd8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FDCu; }
        if (ctx->pc != 0x155FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FDCu; }
        if (ctx->pc != 0x155FDCu) { return; }
    }
    ctx->pc = 0x155FDCu;
    // 0x155fdc: 0x26710018  addiu       $s1, $s3, 0x18
    ctx->pc = 0x155fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x155fe0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x155fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155fe4: 0x2918821  addu        $s1, $s4, $s1
    ctx->pc = 0x155fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x155fe8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fec: 0xc05559a  jal         func_155668
    ctx->pc = 0x155FECu;
    SET_GPR_U32(ctx, 31, 0x155FF4u);
    ctx->pc = 0x155FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155FECu;
            // 0x155ff0: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FF4u; }
        if (ctx->pc != 0x155FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155FF4u; }
        if (ctx->pc != 0x155FF4u) { return; }
    }
    ctx->pc = 0x155FF4u;
    // 0x155ff4: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x155ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x155ff8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x155ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155ffc: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x155ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x156000: 0xc05559a  jal         func_155668
    ctx->pc = 0x156000u;
    SET_GPR_U32(ctx, 31, 0x156008u);
    ctx->pc = 0x156004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156000u;
            // 0x156004: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155668u;
    if (runtime->hasFunction(0x155668u)) {
        auto targetFn = runtime->lookupFunction(0x155668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156008u; }
        if (ctx->pc != 0x156008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155668_0x155668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156008u; }
        if (ctx->pc != 0x156008u) { return; }
    }
    ctx->pc = 0x156008u;
    // 0x156008: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x156008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15600c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x15600Cu;
    {
        const bool branch_taken_0x15600c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15600Cu;
            // 0x156010: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15600c) {
            ctx->pc = 0x155F40u;
            runtime->cooperativeGuestYield();
            goto label_155f40;
        }
    }
    ctx->pc = 0x156014u;
    // 0x156014: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x156014u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156018: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x156018u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15601c: 0x0  nop
    ctx->pc = 0x15601cu;
    // NOP
label_156020:
    // 0x156020: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x156020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x156024: 0x0  nop
    ctx->pc = 0x156024u;
    // NOP
    // 0x156028: 0x0  nop
    ctx->pc = 0x156028u;
    // NOP
    // 0x15602c: 0x0  nop
    ctx->pc = 0x15602cu;
    // NOP
    // 0x156030: 0x0  nop
    ctx->pc = 0x156030u;
    // NOP
    // 0x156034: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156034u;
    {
        const bool branch_taken_0x156034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156034u;
            // 0x156038: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156034) {
            ctx->pc = 0x156020u;
            runtime->cooperativeGuestYield();
            goto label_156020;
        }
    }
    ctx->pc = 0x15603Cu;
    // 0x15603c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x15603cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_156040:
    // 0x156040: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x156040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x156044: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x156044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x156048: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x156048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15604c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x15604cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x156050: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x156050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156054: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x156054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156058: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x156058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15605c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x15605cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156064: 0x3e00008  jr          $ra
    ctx->pc = 0x156064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156064u;
            // 0x156068: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155D68u: goto label_155d68;
            case 0x155F40u: goto label_155f40;
            case 0x156020u: goto label_156020;
            case 0x156040u: goto label_156040;
            case 0x1560A0u: goto label_1560a0;
            case 0x1560B4u: goto label_1560b4;
            case 0x1560E8u: goto label_1560e8;
            case 0x1560F8u: goto label_1560f8;
            case 0x156114u: goto label_156114;
            case 0x156130u: goto label_156130;
            case 0x156134u: goto label_156134;
            case 0x156158u: goto label_156158;
            case 0x1561B4u: goto label_1561b4;
            case 0x1561B8u: goto label_1561b8;
            case 0x1561C4u: goto label_1561c4;
            case 0x1561C8u: goto label_1561c8;
            case 0x156200u: goto label_156200;
            case 0x156248u: goto label_156248;
            case 0x156264u: goto label_156264;
            case 0x156270u: goto label_156270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15606Cu;
    // 0x15606c: 0x0  nop
    ctx->pc = 0x15606cu;
    // NOP
    // 0x156070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156074: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x156078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15607c: 0xc054c94  jal         func_153250
    ctx->pc = 0x15607Cu;
    SET_GPR_U32(ctx, 31, 0x156084u);
    ctx->pc = 0x156080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15607Cu;
            // 0x156080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153250u;
    if (runtime->hasFunction(0x153250u)) {
        auto targetFn = runtime->lookupFunction(0x153250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156084u; }
        if (ctx->pc != 0x156084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_153250_0x153290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156084u; }
        if (ctx->pc != 0x156084u) { return; }
    }
    ctx->pc = 0x156084u;
    // 0x156084: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x156084u;
    {
        const bool branch_taken_0x156084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156084) {
            ctx->pc = 0x156088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156084u;
            // 0x156088: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1561C8u;
            goto label_1561c8;
        }
    }
    ctx->pc = 0x15608Cu;
    // 0x15608c: 0x8c440360  lw          $a0, 0x360($v0)
    ctx->pc = 0x15608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x156090: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x156094: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x156094u;
    {
        const bool branch_taken_0x156094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x156098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156094u;
            // 0x156098: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156094) {
            ctx->pc = 0x1560A0u;
            goto label_1560a0;
        }
    }
    ctx->pc = 0x15609Cu;
    // 0x15609c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1560a0:
    // 0x1560a0: 0x50600049  beql        $v1, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1560A0u;
    {
        const bool branch_taken_0x1560a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1560a0) {
            ctx->pc = 0x1560A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1560A0u;
            // 0x1560a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1561C8u;
            goto label_1561c8;
        }
    }
    ctx->pc = 0x1560A8u;
    // 0x1560a8: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1560A8u;
    {
        const bool branch_taken_0x1560a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1560a8) {
            ctx->pc = 0x1560ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1560A8u;
            // 0x1560ac: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1560B4u;
            goto label_1560b4;
        }
    }
    ctx->pc = 0x1560B0u;
    // 0x1560b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1560b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1560b4:
    // 0x1560b4: 0xc04fb12  jal         func_13EC48
    ctx->pc = 0x1560B4u;
    SET_GPR_U32(ctx, 31, 0x1560BCu);
    ctx->pc = 0x13EC48u;
    if (runtime->hasFunction(0x13EC48u)) {
        auto targetFn = runtime->lookupFunction(0x13EC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1560BCu; }
        if (ctx->pc != 0x1560BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EC48_0x13ec48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1560BCu; }
        if (ctx->pc != 0x1560BCu) { return; }
    }
    ctx->pc = 0x1560BCu;
    // 0x1560bc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1560bcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1560c0: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1560c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1560c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1560c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1560c8: 0x0  nop
    ctx->pc = 0x1560c8u;
    // NOP
    // 0x1560cc: 0x4503003e  bc1tl       . + 4 + (0x3E << 2)
    ctx->pc = 0x1560CCu;
    {
        const bool branch_taken_0x1560cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1560cc) {
            ctx->pc = 0x1560D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1560CCu;
            // 0x1560d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1561C8u;
            goto label_1561c8;
        }
    }
    ctx->pc = 0x1560D4u;
    // 0x1560d4: 0x8e090050  lw          $t1, 0x50($s0)
    ctx->pc = 0x1560d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1560d8: 0x260b0050  addiu       $t3, $s0, 0x50
    ctx->pc = 0x1560d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1560dc: 0x512b0039  beql        $t1, $t3, . + 4 + (0x39 << 2)
    ctx->pc = 0x1560DCu;
    {
        const bool branch_taken_0x1560dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        if (branch_taken_0x1560dc) {
            ctx->pc = 0x1560E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1560DCu;
            // 0x1560e0: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1561C4u;
            goto label_1561c4;
        }
    }
    ctx->pc = 0x1560E4u;
    // 0x1560e4: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x1560e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_1560e8:
    // 0x1560e8: 0x85020040  lh          $v0, 0x40($t0)
    ctx->pc = 0x1560e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x1560ec: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1560ECu;
    {
        const bool branch_taken_0x1560ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1560F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1560ECu;
            // 0x1560f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560ec) {
            ctx->pc = 0x156130u;
            goto label_156130;
        }
    }
    ctx->pc = 0x1560F4u;
    // 0x1560f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1560f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1560f8:
    // 0x1560f8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1560f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1560fc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x156100: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x156104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156104u;
    {
        const bool branch_taken_0x156104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156104u;
            // 0x156108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156104) {
            ctx->pc = 0x156114u;
            goto label_156114;
        }
    }
    ctx->pc = 0x15610Cu;
    // 0x15610c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x156110: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x156110u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_156114:
    // 0x156114: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x156114u;
    {
        const bool branch_taken_0x156114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x156118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156114u;
            // 0x156118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156114) {
            ctx->pc = 0x156134u;
            goto label_156134;
        }
    }
    ctx->pc = 0x15611Cu;
    // 0x15611c: 0x85020040  lh          $v0, 0x40($t0)
    ctx->pc = 0x15611cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x156120: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156124: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x156124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x156128: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x156128u;
    {
        const bool branch_taken_0x156128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156128u;
            // 0x15612c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156128) {
            ctx->pc = 0x1560F8u;
            runtime->cooperativeGuestYield();
            goto label_1560f8;
        }
    }
    ctx->pc = 0x156130u;
label_156130:
    // 0x156130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x156130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156134:
    // 0x156134: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x156134u;
    {
        const bool branch_taken_0x156134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156134) {
            ctx->pc = 0x156138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156134u;
            // 0x156138: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1561B8u;
            goto label_1561b8;
        }
    }
    ctx->pc = 0x15613Cu;
    // 0x15613c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15613cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156144: 0x95020040  lhu         $v0, 0x40($t0)
    ctx->pc = 0x156144u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x156148: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x156148u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x15614c: 0x25400  sll         $t2, $v0, 16
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x156150: 0x19400018  blez        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x156150u;
    {
        const bool branch_taken_0x156150 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x156154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156150u;
            // 0x156154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156150) {
            ctx->pc = 0x1561B4u;
            goto label_1561b4;
        }
    }
    ctx->pc = 0x156158u;
label_156158:
    // 0x156158: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15615c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156160: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x156164: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x156164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x156168: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x156168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x15616c: 0xa3403  sra         $a2, $t2, 16
    ctx->pc = 0x15616cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 16));
    // 0x156170: 0xe6302a  slt         $a2, $a3, $a2
    ctx->pc = 0x156170u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x156174: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x156174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x156178: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x156178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15617c: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x156180: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x156180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156184: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x156184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x156188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15618c: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x15618cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x156190: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x156190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x156194: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156198: 0x2442ff81  addiu       $v0, $v0, -0x7F
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x15619c: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x15619cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1561a0: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1561a0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1561a4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1561a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1561a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1561ac: 0x14c0ffea  bnez        $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1561ACu;
    {
        const bool branch_taken_0x1561ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1561B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561ACu;
            // 0x1561b0: 0xac820058  sw          $v0, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561ac) {
            ctx->pc = 0x156158u;
            runtime->cooperativeGuestYield();
            goto label_156158;
        }
    }
    ctx->pc = 0x1561B4u;
label_1561b4:
    // 0x1561b4: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x1561b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1561b8:
    // 0x1561b8: 0x552bffcb  bnel        $t1, $t3, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1561B8u;
    {
        const bool branch_taken_0x1561b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 11));
        if (branch_taken_0x1561b8) {
            ctx->pc = 0x1561BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1561B8u;
            // 0x1561bc: 0x8d280008  lw          $t0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1560E8u;
            runtime->cooperativeGuestYield();
            goto label_1560e8;
        }
    }
    ctx->pc = 0x1561C0u;
    // 0x1561c0: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x1561c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1561c4:
    // 0x1561c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1561c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1561c8:
    // 0x1561c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1561c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1561cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1561CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561CCu;
            // 0x1561d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155D68u: goto label_155d68;
            case 0x155F40u: goto label_155f40;
            case 0x156020u: goto label_156020;
            case 0x156040u: goto label_156040;
            case 0x1560A0u: goto label_1560a0;
            case 0x1560B4u: goto label_1560b4;
            case 0x1560E8u: goto label_1560e8;
            case 0x1560F8u: goto label_1560f8;
            case 0x156114u: goto label_156114;
            case 0x156130u: goto label_156130;
            case 0x156134u: goto label_156134;
            case 0x156158u: goto label_156158;
            case 0x1561B4u: goto label_1561b4;
            case 0x1561B8u: goto label_1561b8;
            case 0x1561C4u: goto label_1561c4;
            case 0x1561C8u: goto label_1561c8;
            case 0x156200u: goto label_156200;
            case 0x156248u: goto label_156248;
            case 0x156264u: goto label_156264;
            case 0x156270u: goto label_156270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1561D4u;
    // 0x1561d4: 0x0  nop
    ctx->pc = 0x1561d4u;
    // NOP
    // 0x1561d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1561d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1561dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1561dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1561e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1561e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1561e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1561e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1561e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1561ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1561ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1561f0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1561f4: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1561F4u;
    {
        const bool branch_taken_0x1561f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1561f4) {
            ctx->pc = 0x1561F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1561F4u;
            // 0x1561f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156270u;
            goto label_156270;
        }
    }
    ctx->pc = 0x1561FCu;
    // 0x1561fc: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1561fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_156200:
    // 0x156200: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156208: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x156208u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x15620c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x15620cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x156210: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x156210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x156214: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x156214u;
    {
        const bool branch_taken_0x156214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156214u;
            // 0x156218: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156214) {
            ctx->pc = 0x156264u;
            goto label_156264;
        }
    }
    ctx->pc = 0x15621Cu;
    // 0x15621c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x15621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x156220: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x156220u;
    {
        const bool branch_taken_0x156220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156220) {
            ctx->pc = 0x156224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156220u;
            // 0x156224: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156248u;
            goto label_156248;
        }
    }
    ctx->pc = 0x156228u;
    // 0x156228: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15622c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x156230: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x156234: 0x40f809  jalr        $v0
    ctx->pc = 0x156234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15623Cu);
        ctx->pc = 0x156238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156234u;
            // 0x156238: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15623Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155D68u: goto label_155d68;
            case 0x155F40u: goto label_155f40;
            case 0x156020u: goto label_156020;
            case 0x156040u: goto label_156040;
            case 0x1560A0u: goto label_1560a0;
            case 0x1560B4u: goto label_1560b4;
            case 0x1560E8u: goto label_1560e8;
            case 0x1560F8u: goto label_1560f8;
            case 0x156114u: goto label_156114;
            case 0x156130u: goto label_156130;
            case 0x156134u: goto label_156134;
            case 0x156158u: goto label_156158;
            case 0x1561B4u: goto label_1561b4;
            case 0x1561B8u: goto label_1561b8;
            case 0x1561C4u: goto label_1561c4;
            case 0x1561C8u: goto label_1561c8;
            case 0x156200u: goto label_156200;
            case 0x156248u: goto label_156248;
            case 0x156264u: goto label_156264;
            case 0x156270u: goto label_156270;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15623Cu; }
            if (ctx->pc != 0x15623Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15623Cu;
    // 0x15623c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15623Cu;
    {
        const bool branch_taken_0x15623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15623c) {
            ctx->pc = 0x156264u;
            goto label_156264;
        }
    }
    ctx->pc = 0x156244u;
    // 0x156244: 0x0  nop
    ctx->pc = 0x156244u;
    // NOP
label_156248:
    // 0x156248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x156248u;
    {
        const bool branch_taken_0x156248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156248) {
            ctx->pc = 0x156264u;
            goto label_156264;
        }
    }
    ctx->pc = 0x156250u;
    // 0x156250: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x156250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x156254: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x156254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x156258: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x156258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x15625c: 0x40f809  jalr        $v0
    ctx->pc = 0x15625Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156264u);
        ctx->pc = 0x156260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15625Cu;
            // 0x156260: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x156264u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155D68u: goto label_155d68;
            case 0x155F40u: goto label_155f40;
            case 0x156020u: goto label_156020;
            case 0x156040u: goto label_156040;
            case 0x1560A0u: goto label_1560a0;
            case 0x1560B4u: goto label_1560b4;
            case 0x1560E8u: goto label_1560e8;
            case 0x1560F8u: goto label_1560f8;
            case 0x156114u: goto label_156114;
            case 0x156130u: goto label_156130;
            case 0x156134u: goto label_156134;
            case 0x156158u: goto label_156158;
            case 0x1561B4u: goto label_1561b4;
            case 0x1561B8u: goto label_1561b8;
            case 0x1561C4u: goto label_1561c4;
            case 0x1561C8u: goto label_1561c8;
            case 0x156200u: goto label_156200;
            case 0x156248u: goto label_156248;
            case 0x156264u: goto label_156264;
            case 0x156270u: goto label_156270;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x156264u; }
            if (ctx->pc != 0x156264u) { return; }
        }
        }
    }
    ctx->pc = 0x156264u;
label_156264:
    // 0x156264: 0x1640ffe6  bnez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x156264u;
    {
        const bool branch_taken_0x156264 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x156268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156264u;
            // 0x156268: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156264) {
            ctx->pc = 0x156200u;
            runtime->cooperativeGuestYield();
            goto label_156200;
        }
    }
    ctx->pc = 0x15626Cu;
    // 0x15626c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15626cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156270:
    // 0x156270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156274: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x156274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15627c: 0x3e00008  jr          $ra
    ctx->pc = 0x15627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15627Cu;
            // 0x156280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155D68u: goto label_155d68;
            case 0x155F40u: goto label_155f40;
            case 0x156020u: goto label_156020;
            case 0x156040u: goto label_156040;
            case 0x1560A0u: goto label_1560a0;
            case 0x1560B4u: goto label_1560b4;
            case 0x1560E8u: goto label_1560e8;
            case 0x1560F8u: goto label_1560f8;
            case 0x156114u: goto label_156114;
            case 0x156130u: goto label_156130;
            case 0x156134u: goto label_156134;
            case 0x156158u: goto label_156158;
            case 0x1561B4u: goto label_1561b4;
            case 0x1561B8u: goto label_1561b8;
            case 0x1561C4u: goto label_1561c4;
            case 0x1561C8u: goto label_1561c8;
            case 0x156200u: goto label_156200;
            case 0x156248u: goto label_156248;
            case 0x156264u: goto label_156264;
            case 0x156270u: goto label_156270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156284u;
    // 0x156284: 0x0  nop
    ctx->pc = 0x156284u;
    // NOP
}
