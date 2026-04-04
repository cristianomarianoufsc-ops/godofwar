#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_274230
// Address: 0x274230 - 0x2742d0
void entry_274230_0x2742d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_274230_0x2742d0");
#endif

    ctx->pc = 0x274230u;

    // 0x274230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274238: 0xc0a648c  jal         func_299230
    ctx->pc = 0x274238u;
    SET_GPR_U32(ctx, 31, 0x274240u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274240u; }
        if (ctx->pc != 0x274240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274240u; }
        if (ctx->pc != 0x274240u) { return; }
    }
    ctx->pc = 0x274240u;
    // 0x274240: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x274244: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x274248: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x274248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x27424c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x274250: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x274254: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x274254u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x274258: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x274258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x27425c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x27425cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x274260: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x274260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x274264: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x274264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x274268: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x274268u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x27426c: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x27426cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x274270: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x274270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x274274: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x274274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x274278: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x274278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x27427c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x27427cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x274280: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x274284: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x274284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x274288: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x274288u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x27428c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27428Cu;
    {
        const bool branch_taken_0x27428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27428Cu;
            // 0x274290: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27428c) {
            ctx->pc = 0x2742A0u;
            goto label_2742a0;
        }
    }
    ctx->pc = 0x274294u;
    // 0x274294: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x274294u;
    SET_GPR_U32(ctx, 31, 0x27429Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27429Cu; }
        if (ctx->pc != 0x27429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27429Cu; }
        if (ctx->pc != 0x27429Cu) { return; }
    }
    ctx->pc = 0x27429Cu;
    // 0x27429c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2742a0:
    // 0x2742a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2742a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2742a4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x2742a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x2742a8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x2742a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x2742ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2742acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2742b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2742b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2742b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2742b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2742b8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2742b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2742bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2742bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2742c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2742c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2742c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2742c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2742c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2742C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2742CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2742C8u;
            // 0x2742cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2742A0u: goto label_2742a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2742D0u;
}
