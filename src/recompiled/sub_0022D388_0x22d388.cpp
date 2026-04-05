#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D388
// Address: 0x22d388 - 0x22d440
void sub_0022D388_0x22d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D388_0x22d388");
#endif

    ctx->pc = 0x22d388u;

    // 0x22d388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22d38c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d390: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22d394: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x22d394u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x22d398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22d39c: 0x8e66120c  lw          $a2, 0x120C($s3)
    ctx->pc = 0x22d39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4620)));
    // 0x22d3a0: 0x2452aec0  addiu       $s2, $v0, -0x5140
    ctx->pc = 0x22d3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x22d3a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22d3a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22d3ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3b0: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x22d3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x22d3b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22D3B4u;
    {
        const bool branch_taken_0x22d3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3B4u;
            // 0x22d3b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3b4) {
            ctx->pc = 0x22D420u;
            goto label_22d420;
        }
    }
    ctx->pc = 0x22D3BCu;
    // 0x22d3bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d3c0: 0x8c421214  lw          $v0, 0x1214($v0)
    ctx->pc = 0x22d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    // 0x22d3c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3C4u;
            // 0x22d3c8: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D404u;
            goto label_22d404;
        }
    }
    ctx->pc = 0x22D3CCu;
    // 0x22d3cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d3d0: 0x8c431218  lw          $v1, 0x1218($v0)
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4632)));
    // 0x22d3d4: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x22d3d8: 0x8e04121c  lw          $a0, 0x121C($s0)
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x22d3dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22d3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22d3e8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x22d3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22d3ec: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x22d3ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x22d3f0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D3F0u;
    SET_GPR_U32(ctx, 31, 0x22D3F8u);
    ctx->pc = 0x22D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D3F0u;
            // 0x22d3f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D3F8u; }
        if (ctx->pc != 0x22D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D3F8u; }
        if (ctx->pc != 0x22D3F8u) { return; }
    }
    ctx->pc = 0x22D3F8u;
    // 0x22d3f8: 0x8e02121c  lw          $v0, 0x121C($s0)
    ctx->pc = 0x22d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x22d3fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d400: 0xae02121c  sw          $v0, 0x121C($s0)
    ctx->pc = 0x22d400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
label_22d404:
    // 0x22d404: 0x8e62120c  lw          $v0, 0x120C($s3)
    ctx->pc = 0x22d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4620)));
    // 0x22d408: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x22d408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22d40c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D40Cu;
    {
        const bool branch_taken_0x22d40c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D40Cu;
            // 0x22d410: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d40c) {
            ctx->pc = 0x22D41Cu;
            goto label_22d41c;
        }
    }
    ctx->pc = 0x22D414u;
    // 0x22d414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d418: 0xac621228  sw          $v0, 0x1228($v1)
    ctx->pc = 0x22d418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 2));
label_22d41c:
    // 0x22d41c: 0xae72120c  sw          $s2, 0x120C($s3)
    ctx->pc = 0x22d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4620), GPR_U32(ctx, 18));
label_22d420:
    // 0x22d420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22d420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d424: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22d424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d428: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22d428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d42c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d430: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22d430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d438: 0x3e00008  jr          $ra
    ctx->pc = 0x22D438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D438u;
            // 0x22d43c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D404u: goto label_22d404;
            case 0x22D41Cu: goto label_22d41c;
            case 0x22D420u: goto label_22d420;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D440u;
}
