#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292220
// Address: 0x292220 - 0x292280
void sub_00292220_0x292220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292220_0x292220");
#endif

    ctx->pc = 0x292220u;

    // 0x292220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292224: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29222c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292230: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x292230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292234: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x292234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x292238: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x292238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29223c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292240: 0xae20c1a4  sw          $zero, -0x3E5C($s1)
    ctx->pc = 0x292240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951332), GPR_U32(ctx, 0));
    // 0x292244: 0xc0a507a  jal         func_2941E8
    ctx->pc = 0x292244u;
    SET_GPR_U32(ctx, 31, 0x29224Cu);
    ctx->pc = 0x292248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292244u;
            // 0x292248: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2941E8u;
    if (runtime->hasFunction(0x2941E8u)) {
        auto targetFn = runtime->lookupFunction(0x2941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29224Cu; }
        if (ctx->pc != 0x29224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002941E8_0x2941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29224Cu; }
        if (ctx->pc != 0x29224Cu) { return; }
    }
    ctx->pc = 0x29224Cu;
    // 0x29224c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29224cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x292250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292254: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292254u;
    {
        const bool branch_taken_0x292254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292254) {
            ctx->pc = 0x292258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292254u;
            // 0x292258: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29226Cu;
            goto label_29226c;
        }
    }
    ctx->pc = 0x29225Cu;
    // 0x29225c: 0x8e22c1a4  lw          $v0, -0x3E5C($s1)
    ctx->pc = 0x29225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951332)));
    // 0x292260: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x292260u;
    {
        const bool branch_taken_0x292260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292260) {
            ctx->pc = 0x292264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292260u;
            // 0x292264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292268u;
            goto label_292268;
        }
    }
    ctx->pc = 0x292268u;
label_292268:
    // 0x292268: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29226c:
    // 0x29226c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29226cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292278: 0x3e00008  jr          $ra
    ctx->pc = 0x292278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292278u;
            // 0x29227c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292268u: goto label_292268;
            case 0x29226Cu: goto label_29226c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292280u;
}
