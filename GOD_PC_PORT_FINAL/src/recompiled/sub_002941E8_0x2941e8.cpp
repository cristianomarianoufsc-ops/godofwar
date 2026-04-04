#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002941E8
// Address: 0x2941e8 - 0x294268
void sub_002941E8_0x2941e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002941E8_0x2941e8");
#endif

    ctx->pc = 0x2941e8u;

    // 0x2941e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2941e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2941ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2941ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2941f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2941f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2941f4: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x2941f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2941f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2941f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2941fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2941fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294200: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294204: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x294204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294208: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x294208u;
    {
        const bool branch_taken_0x294208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294208u;
            // 0x29420c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294208) {
            ctx->pc = 0x294248u;
            goto label_294248;
        }
    }
    ctx->pc = 0x294210u;
    // 0x294210: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x294210u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x294214: 0x8e024aa8  lw          $v0, 0x4AA8($s0)
    ctx->pc = 0x294214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19112)));
    // 0x294218: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294218u;
    {
        const bool branch_taken_0x294218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294218u;
            // 0x29421c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294218) {
            ctx->pc = 0x294238u;
            goto label_294238;
        }
    }
    ctx->pc = 0x294220u;
    // 0x294220: 0xc0a5448  jal         func_295120
    ctx->pc = 0x294220u;
    SET_GPR_U32(ctx, 31, 0x294228u);
    ctx->pc = 0x295120u;
    if (runtime->hasFunction(0x295120u)) {
        auto targetFn = runtime->lookupFunction(0x295120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294228u; }
        if (ctx->pc != 0x294228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295120_0x295120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294228u; }
        if (ctx->pc != 0x294228u) { return; }
    }
    ctx->pc = 0x294228u;
    // 0x294228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x294228u;
    {
        const bool branch_taken_0x294228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294228u;
            // 0x29422c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294228) {
            ctx->pc = 0x294248u;
            goto label_294248;
        }
    }
    ctx->pc = 0x294230u;
    // 0x294230: 0xae024aa8  sw          $v0, 0x4AA8($s0)
    ctx->pc = 0x294230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19112), GPR_U32(ctx, 2));
    // 0x294234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_294238:
    // 0x294238: 0xc0a53b6  jal         func_294ED8
    ctx->pc = 0x294238u;
    SET_GPR_U32(ctx, 31, 0x294240u);
    ctx->pc = 0x29423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294238u;
            // 0x29423c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294ED8u;
    if (runtime->hasFunction(0x294ED8u)) {
        auto targetFn = runtime->lookupFunction(0x294ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294240u; }
        if (ctx->pc != 0x294240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294ED8_0x294ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294240u; }
        if (ctx->pc != 0x294240u) { return; }
    }
    ctx->pc = 0x294240u;
    // 0x294240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x294240u;
    {
        const bool branch_taken_0x294240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294240u;
            // 0x294244: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294240) {
            ctx->pc = 0x294250u;
            goto label_294250;
        }
    }
    ctx->pc = 0x294248u;
label_294248:
    // 0x294248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x294248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29424c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_294250:
    // 0x294250: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29425c: 0x3e00008  jr          $ra
    ctx->pc = 0x29425Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29425Cu;
            // 0x294260: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294238u: goto label_294238;
            case 0x294248u: goto label_294248;
            case 0x294250u: goto label_294250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294264u;
    // 0x294264: 0x0  nop
    ctx->pc = 0x294264u;
    // NOP
}
