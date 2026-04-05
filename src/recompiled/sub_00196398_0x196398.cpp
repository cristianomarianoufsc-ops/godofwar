#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196398
// Address: 0x196398 - 0x196418
void sub_00196398_0x196398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196398_0x196398");
#endif

    ctx->pc = 0x196398u;

    // 0x196398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19639c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1963a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1963a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1963a4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1963a8: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1963ac: 0x8c43d2ac  lw          $v1, -0x2D54($v0)
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1963b0: 0x8e25e160  lw          $a1, -0x1EA0($s1)
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959456)));
    // 0x1963b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1963b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1963b8: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1963bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1963bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1963c0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1963c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1963c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1963c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1963c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1963c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1963cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1963d0: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1963D0u;
    {
        const bool branch_taken_0x1963d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1963D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963D0u;
            // 0x1963d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963d0) {
            ctx->pc = 0x1963DCu;
            goto label_1963dc;
        }
    }
    ctx->pc = 0x1963D8u;
    // 0x1963d8: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1963d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1963dc:
    // 0x1963dc: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1963DCu;
    {
        const bool branch_taken_0x1963dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963dc) {
            ctx->pc = 0x1963E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1963DCu;
            // 0x1963e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196408u;
            goto label_196408;
        }
    }
    ctx->pc = 0x1963E4u;
    // 0x1963e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1963e8: 0xc04c55c  jal         func_131570
    ctx->pc = 0x1963E8u;
    SET_GPR_U32(ctx, 31, 0x1963F0u);
    ctx->pc = 0x1963ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963E8u;
            // 0x1963ec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963F0u; }
        if (ctx->pc != 0x1963F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963F0u; }
        if (ctx->pc != 0x1963F0u) { return; }
    }
    ctx->pc = 0x1963F0u;
    // 0x1963f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1963f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1963f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1963f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1963f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1963fc: 0xae20e160  sw          $zero, -0x1EA0($s1)
    ctx->pc = 0x1963fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294959456), GPR_U32(ctx, 0));
    // 0x196400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x196400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196404: 0x0  nop
    ctx->pc = 0x196404u;
    // NOP
label_196408:
    // 0x196408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19640c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19640cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196410: 0x3e00008  jr          $ra
    ctx->pc = 0x196410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196410u;
            // 0x196414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1963DCu: goto label_1963dc;
            case 0x196408u: goto label_196408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196418u;
}
