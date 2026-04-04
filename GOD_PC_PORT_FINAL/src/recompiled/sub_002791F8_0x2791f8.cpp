#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002791F8
// Address: 0x2791f8 - 0x279270
void sub_002791F8_0x2791f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002791F8_0x2791f8");
#endif

    ctx->pc = 0x2791f8u;

    // 0x2791f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2791f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2791fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2791fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279204: 0xc0a648c  jal         func_299230
    ctx->pc = 0x279204u;
    SET_GPR_U32(ctx, 31, 0x27920Cu);
    ctx->pc = 0x279208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279204u;
            // 0x279208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27920Cu; }
        if (ctx->pc != 0x27920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27920Cu; }
        if (ctx->pc != 0x27920Cu) { return; }
    }
    ctx->pc = 0x27920Cu;
    // 0x27920c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x27920cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x279210: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x279210u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x279214: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x279214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x279218: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x279218u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x27921c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279220: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x279220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x279224: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279228: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x279228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x27922c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x27922cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x279230: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x279230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x279234: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x279234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x279238: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x279238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x27923c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x27923cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x279240: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x279240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279244: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x279244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x279248: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x279248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x27924c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27924Cu;
    {
        const bool branch_taken_0x27924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27924Cu;
            // 0x279250: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27924c) {
            ctx->pc = 0x279260u;
            goto label_279260;
        }
    }
    ctx->pc = 0x279254u;
    // 0x279254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279258: 0x80a64a0  j           func_299280
    ctx->pc = 0x279258u;
    ctx->pc = 0x27925Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279258u;
            // 0x27925c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x279260u;
label_279260:
    // 0x279260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279264: 0x3e00008  jr          $ra
    ctx->pc = 0x279264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279264u;
            // 0x279268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279260u: goto label_279260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27926Cu;
    // 0x27926c: 0x0  nop
    ctx->pc = 0x27926cu;
    // NOP
}
