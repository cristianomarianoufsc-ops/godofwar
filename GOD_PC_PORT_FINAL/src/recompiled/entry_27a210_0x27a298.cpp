#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27a210
// Address: 0x27a210 - 0x27a298
void entry_27a210_0x27a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27a210_0x27a298");
#endif

    ctx->pc = 0x27a210u;

    // 0x27a210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27a214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a21c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27a21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27a224: 0xc09e7b2  jal         func_279EC8
    ctx->pc = 0x27A224u;
    SET_GPR_U32(ctx, 31, 0x27A22Cu);
    ctx->pc = 0x27A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A224u;
            // 0x27a228: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279EC8u;
    if (runtime->hasFunction(0x279EC8u)) {
        auto targetFn = runtime->lookupFunction(0x279EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A22Cu; }
        if (ctx->pc != 0x27A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_279ec8_0x279ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A22Cu; }
        if (ctx->pc != 0x27A22Cu) { return; }
    }
    ctx->pc = 0x27A22Cu;
    // 0x27a22c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a230: 0xc09e794  jal         func_279E50
    ctx->pc = 0x27A230u;
    SET_GPR_U32(ctx, 31, 0x27A238u);
    ctx->pc = 0x27A234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A230u;
            // 0x27a234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279E50u;
    if (runtime->hasFunction(0x279E50u)) {
        auto targetFn = runtime->lookupFunction(0x279E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A238u; }
        if (ctx->pc != 0x27A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279E50_0x279e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A238u; }
        if (ctx->pc != 0x27A238u) { return; }
    }
    ctx->pc = 0x27A238u;
    // 0x27a238: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27a23c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x27a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x27a240: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27a244: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x27A244u;
    {
        const bool branch_taken_0x27a244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a244) {
            ctx->pc = 0x27A248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A244u;
            // 0x27a248: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A24Cu;
            goto label_27a24c;
        }
    }
    ctx->pc = 0x27A24Cu;
label_27a24c:
    // 0x27a24c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a250: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x27a250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x27a254: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x27a254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x27a258: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27a25c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27a25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a260: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x27a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
    // 0x27a264: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27a264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a268: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x27a26c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a270: 0x3e00008  jr          $ra
    ctx->pc = 0x27A270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A270u;
            // 0x27a274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A24Cu: goto label_27a24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A278u;
    // 0x27a278: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a27c: 0x0  nop
    ctx->pc = 0x27a27cu;
    // NOP
    // 0x27a280: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a284: 0x0  nop
    ctx->pc = 0x27a284u;
    // NOP
    // 0x27a288: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a28c: 0x0  nop
    ctx->pc = 0x27a28cu;
    // NOP
    // 0x27a290: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a294: 0x0  nop
    ctx->pc = 0x27a294u;
    // NOP
}
