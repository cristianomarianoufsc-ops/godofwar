#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002021F8
// Address: 0x2021f8 - 0x202278
void sub_002021F8_0x2021f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002021F8_0x2021f8");
#endif

    ctx->pc = 0x2021f8u;

    // 0x2021f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2021f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2021fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2021fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20220c: 0xc08085e  jal         func_202178
    ctx->pc = 0x20220Cu;
    SET_GPR_U32(ctx, 31, 0x202214u);
    ctx->pc = 0x202210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20220Cu;
            // 0x202210: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202178u;
    if (runtime->hasFunction(0x202178u)) {
        auto targetFn = runtime->lookupFunction(0x202178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202214u; }
        if (ctx->pc != 0x202214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202178_0x202178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202214u; }
        if (ctx->pc != 0x202214u) { return; }
    }
    ctx->pc = 0x202214u;
    // 0x202214: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x202214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_202218:
    // 0x202218: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x202218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x20221c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x20221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x202220: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202224: 0x84420024  lh          $v0, 0x24($v0)
    ctx->pc = 0x202224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x202228: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20222c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20222Cu;
    {
        const bool branch_taken_0x20222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x202230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20222Cu;
            // 0x202230: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20222c) {
            ctx->pc = 0x202254u;
            goto label_202254;
        }
    }
    ctx->pc = 0x202234u;
    // 0x202234: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x202234u;
    SET_GPR_U32(ctx, 31, 0x20223Cu);
    ctx->pc = 0x202238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202234u;
            // 0x202238: 0x8c84e434  lw          $a0, -0x1BCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20223Cu; }
        if (ctx->pc != 0x20223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20223Cu; }
        if (ctx->pc != 0x20223Cu) { return; }
    }
    ctx->pc = 0x20223Cu;
    // 0x20223c: 0x94440010  lhu         $a0, 0x10($v0)
    ctx->pc = 0x20223cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x202240: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x202240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x202244: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x202244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x202248: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x202248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20224c: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x20224cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x202250: 0xa4440010  sh          $a0, 0x10($v0)
    ctx->pc = 0x202250u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 4));
label_202254:
    // 0x202254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202258: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x202258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x20225c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20225Cu;
    {
        const bool branch_taken_0x20225c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20225c) {
            ctx->pc = 0x202260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20225Cu;
            // 0x202260: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x202218u;
            runtime->cooperativeGuestYield();
            goto label_202218;
        }
    }
    ctx->pc = 0x202264u;
    // 0x202264: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20226c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202270: 0x3e00008  jr          $ra
    ctx->pc = 0x202270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202270u;
            // 0x202274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202218u: goto label_202218;
            case 0x202254u: goto label_202254;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202278u;
}
