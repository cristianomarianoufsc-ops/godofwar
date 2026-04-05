#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287378
// Address: 0x287378 - 0x287470
void sub_00287378_0x287378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287378_0x287378");
#endif

    ctx->pc = 0x287378u;

    // 0x287378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28737c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28737cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287380: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x287380u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287384: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x287384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x287388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x287388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28738c: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x28738cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x287390: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x287390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x287394: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x287394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x287398: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x287398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28739c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28739Cu;
    {
        const bool branch_taken_0x28739c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2873A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28739Cu;
            // 0x2873a0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28739c) {
            ctx->pc = 0x2873B8u;
            goto label_2873b8;
        }
    }
    ctx->pc = 0x2873A4u;
    // 0x2873a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2873a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873a8: 0xc0a22ee  jal         func_288BB8
    ctx->pc = 0x2873A8u;
    SET_GPR_U32(ctx, 31, 0x2873B0u);
    ctx->pc = 0x2873ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2873A8u;
            // 0x2873ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288BB8u;
    if (runtime->hasFunction(0x288BB8u)) {
        auto targetFn = runtime->lookupFunction(0x288BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873B0u; }
        if (ctx->pc != 0x2873B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288BB8_0x288bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873B0u; }
        if (ctx->pc != 0x2873B0u) { return; }
    }
    ctx->pc = 0x2873B0u;
    // 0x2873b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2873B0u;
    {
        const bool branch_taken_0x2873b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873B0u;
            // 0x2873b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873b0) {
            ctx->pc = 0x287464u;
            goto label_287464;
        }
    }
    ctx->pc = 0x2873B8u;
label_2873b8:
    // 0x2873b8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x2873b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x2873bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2873bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2873c0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2873c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2873c4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2873C4u;
    {
        const bool branch_taken_0x2873c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2873C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873C4u;
            // 0x2873c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873c4) {
            ctx->pc = 0x287458u;
            goto label_287458;
        }
    }
    ctx->pc = 0x2873CCu;
    // 0x2873cc: 0xc0a1d6e  jal         func_2875B8
    ctx->pc = 0x2873CCu;
    SET_GPR_U32(ctx, 31, 0x2873D4u);
    ctx->pc = 0x2873D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2873CCu;
            // 0x2873d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2875B8u;
    if (runtime->hasFunction(0x2875B8u)) {
        auto targetFn = runtime->lookupFunction(0x2875B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873D4u; }
        if (ctx->pc != 0x2873D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002875B8_0x2875b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2873D4u; }
        if (ctx->pc != 0x2873D4u) { return; }
    }
    ctx->pc = 0x2873D4u;
    // 0x2873d4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2873d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2873d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2873d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2873dc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2873DCu;
    {
        const bool branch_taken_0x2873dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2873E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873DCu;
            // 0x2873e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873dc) {
            ctx->pc = 0x287420u;
            goto label_287420;
        }
    }
    ctx->pc = 0x2873E4u;
    // 0x2873e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2873E4u;
    {
        const bool branch_taken_0x2873e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873E4u;
            // 0x2873e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873e4) {
            ctx->pc = 0x2873FCu;
            goto label_2873fc;
        }
    }
    ctx->pc = 0x2873ECu;
    // 0x2873ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2873ECu;
    {
        const bool branch_taken_0x2873ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873ECu;
            // 0x2873f0: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873ec) {
            ctx->pc = 0x28740Cu;
            goto label_28740c;
        }
    }
    ctx->pc = 0x2873F4u;
    // 0x2873f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2873F4u;
    {
        const bool branch_taken_0x2873f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2873f4) {
            ctx->pc = 0x287448u;
            goto label_287448;
        }
    }
    ctx->pc = 0x2873FCu;
label_2873fc:
    // 0x2873fc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2873FCu;
    {
        const bool branch_taken_0x2873fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873FCu;
            // 0x287400: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873fc) {
            ctx->pc = 0x287434u;
            goto label_287434;
        }
    }
    ctx->pc = 0x287404u;
    // 0x287404: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x287404u;
    {
        const bool branch_taken_0x287404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287404) {
            ctx->pc = 0x287448u;
            goto label_287448;
        }
    }
    ctx->pc = 0x28740Cu;
label_28740c:
    // 0x28740c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287410: 0xc0a22ee  jal         func_288BB8
    ctx->pc = 0x287410u;
    SET_GPR_U32(ctx, 31, 0x287418u);
    ctx->pc = 0x287414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287410u;
            // 0x287414: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288BB8u;
    if (runtime->hasFunction(0x288BB8u)) {
        auto targetFn = runtime->lookupFunction(0x288BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287418u; }
        if (ctx->pc != 0x287418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288BB8_0x288bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287418u; }
        if (ctx->pc != 0x287418u) { return; }
    }
    ctx->pc = 0x287418u;
    // 0x287418: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x287418u;
    {
        const bool branch_taken_0x287418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28741Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287418u;
            // 0x28741c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287418) {
            ctx->pc = 0x287464u;
            goto label_287464;
        }
    }
    ctx->pc = 0x287420u;
label_287420:
    // 0x287420: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x287420u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287424: 0xc0a1f80  jal         func_287E00
    ctx->pc = 0x287424u;
    SET_GPR_U32(ctx, 31, 0x28742Cu);
    ctx->pc = 0x287428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287424u;
            // 0x287428: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287E00u;
    if (runtime->hasFunction(0x287E00u)) {
        auto targetFn = runtime->lookupFunction(0x287E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28742Cu; }
        if (ctx->pc != 0x28742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287E00_0x287e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28742Cu; }
        if (ctx->pc != 0x28742Cu) { return; }
    }
    ctx->pc = 0x28742Cu;
    // 0x28742c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28742Cu;
    {
        const bool branch_taken_0x28742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28742Cu;
            // 0x287430: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28742c) {
            ctx->pc = 0x287464u;
            goto label_287464;
        }
    }
    ctx->pc = 0x287434u;
label_287434:
    // 0x287434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x287434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287438: 0xc0a22ee  jal         func_288BB8
    ctx->pc = 0x287438u;
    SET_GPR_U32(ctx, 31, 0x287440u);
    ctx->pc = 0x28743Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287438u;
            // 0x28743c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288BB8u;
    if (runtime->hasFunction(0x288BB8u)) {
        auto targetFn = runtime->lookupFunction(0x288BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287440u; }
        if (ctx->pc != 0x287440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288BB8_0x288bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287440u; }
        if (ctx->pc != 0x287440u) { return; }
    }
    ctx->pc = 0x287440u;
    // 0x287440: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x287440u;
    {
        const bool branch_taken_0x287440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287440u;
            // 0x287444: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287440) {
            ctx->pc = 0x287454u;
            goto label_287454;
        }
    }
    ctx->pc = 0x287448u;
label_287448:
    // 0x287448: 0xc0a1f80  jal         func_287E00
    ctx->pc = 0x287448u;
    SET_GPR_U32(ctx, 31, 0x287450u);
    ctx->pc = 0x28744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287448u;
            // 0x28744c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287E00u;
    if (runtime->hasFunction(0x287E00u)) {
        auto targetFn = runtime->lookupFunction(0x287E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287450u; }
        if (ctx->pc != 0x287450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287E00_0x287e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287450u; }
        if (ctx->pc != 0x287450u) { return; }
    }
    ctx->pc = 0x287450u;
    // 0x287450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287454:
    // 0x287454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287458:
    // 0x287458: 0xc0a1254  jal         func_284950
    ctx->pc = 0x287458u;
    SET_GPR_U32(ctx, 31, 0x287460u);
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287460u; }
        if (ctx->pc != 0x287460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287460u; }
        if (ctx->pc != 0x287460u) { return; }
    }
    ctx->pc = 0x287460u;
    // 0x287460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_287464:
    // 0x287464: 0x3e00008  jr          $ra
    ctx->pc = 0x287464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287464u;
            // 0x287468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2873B8u: goto label_2873b8;
            case 0x2873FCu: goto label_2873fc;
            case 0x28740Cu: goto label_28740c;
            case 0x287420u: goto label_287420;
            case 0x287434u: goto label_287434;
            case 0x287448u: goto label_287448;
            case 0x287454u: goto label_287454;
            case 0x287458u: goto label_287458;
            case 0x287464u: goto label_287464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28746Cu;
    // 0x28746c: 0x0  nop
    ctx->pc = 0x28746cu;
    // NOP
}
