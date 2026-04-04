#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131570
// Address: 0x131570 - 0x1315c8
void sub_00131570_0x131570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131570_0x131570");
#endif

    ctx->pc = 0x131570u;

    // 0x131570: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x131570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x131574: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131578: 0xdcc2bdf8  ld          $v0, -0x4208($a2)
    ctx->pc = 0x131578u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 4294950392)));
    // 0x13157c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13157cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131580: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x131580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x131584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131588: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x131588u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x13158c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131590: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131598: 0xfcc2bdf8  sd          $v0, -0x4208($a2)
    ctx->pc = 0x131598u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294950392), GPR_U64(ctx, 2));
    // 0x13159c: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x13159cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x1315a0: 0xc08c936  jal         func_2324D8
    ctx->pc = 0x1315A0u;
    SET_GPR_U32(ctx, 31, 0x1315A8u);
    ctx->pc = 0x1315A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1315A0u;
            // 0x1315a4: 0xfe020068  sd          $v0, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2324D8u;
    if (runtime->hasFunction(0x2324D8u)) {
        auto targetFn = runtime->lookupFunction(0x2324D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315A8u; }
        if (ctx->pc != 0x1315A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002324D8_0x2324d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315A8u; }
        if (ctx->pc != 0x1315A8u) { return; }
    }
    ctx->pc = 0x1315A8u;
    // 0x1315a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1315a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1315ac: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x1315ACu;
    SET_GPR_U32(ctx, 31, 0x1315B4u);
    ctx->pc = 0x1315B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1315ACu;
            // 0x1315b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315B4u; }
        if (ctx->pc != 0x1315B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1315B4u; }
        if (ctx->pc != 0x1315B4u) { return; }
    }
    ctx->pc = 0x1315B4u;
    // 0x1315b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1315b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1315b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1315b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1315bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1315c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1315C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1315C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1315C0u;
            // 0x1315c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1315C8u;
}
