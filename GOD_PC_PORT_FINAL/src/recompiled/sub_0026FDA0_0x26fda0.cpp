#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FDA0
// Address: 0x26fda0 - 0x26fe50
void sub_0026FDA0_0x26fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FDA0_0x26fda0");
#endif

    ctx->pc = 0x26fda0u;

    // 0x26fda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fda8: 0xc0a648c  jal         func_299230
    ctx->pc = 0x26FDA8u;
    SET_GPR_U32(ctx, 31, 0x26FDB0u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDB0u; }
        if (ctx->pc != 0x26FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FDB0u; }
        if (ctx->pc != 0x26FDB0u) { return; }
    }
    ctx->pc = 0x26FDB0u;
    // 0x26fdb0: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x26fdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x26fdb4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x26fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x26fdb8: 0x3529f520  ori         $t1, $t1, 0xF520
    ctx->pc = 0x26fdb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62752);
    // 0x26fdbc: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x26fdbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x26fdc0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x26fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26fdc4: 0x354af590  ori         $t2, $t2, 0xF590
    ctx->pc = 0x26fdc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)62864);
    // 0x26fdc8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x26fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x26fdcc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x26fdccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x26fdd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26fdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26fdd4: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x26fdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x26fdd8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x26fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x26fddc: 0x3508feff  ori         $t0, $t0, 0xFEFF
    ctx->pc = 0x26fddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65279);
    // 0x26fde0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x26fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x26fde4: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x26fde4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
    // 0x26fde8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26fdec: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x26fdecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x26fdf0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x26fdf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x26fdf4: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x26fdf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x26fdf8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x26fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x26fdfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26fe00: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x26fe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x26fe04: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x26fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x26fe08: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x26fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x26fe0c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x26fe0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x26fe10: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x26fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x26fe14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE14u;
    {
        const bool branch_taken_0x26fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE14u;
            // 0x26fe18: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe14) {
            ctx->pc = 0x26FE28u;
            goto label_26fe28;
        }
    }
    ctx->pc = 0x26FE1Cu;
    // 0x26fe1c: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x26FE1Cu;
    SET_GPR_U32(ctx, 31, 0x26FE24u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE24u; }
        if (ctx->pc != 0x26FE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE24u; }
        if (ctx->pc != 0x26FE24u) { return; }
    }
    ctx->pc = 0x26FE24u;
    // 0x26fe24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x26fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_26fe28:
    // 0x26fe28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26fe2c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x26fe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x26fe30: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x26fe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x26fe34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26fe38: 0xc09e580  jal         func_279600
    ctx->pc = 0x26FE38u;
    SET_GPR_U32(ctx, 31, 0x26FE40u);
    ctx->pc = 0x26FE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE38u;
            // 0x26fe3c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279600u;
    if (runtime->hasFunction(0x279600u)) {
        auto targetFn = runtime->lookupFunction(0x279600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE40u; }
        if (ctx->pc != 0x26FE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279600_0x279600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE40u; }
        if (ctx->pc != 0x26FE40u) { return; }
    }
    ctx->pc = 0x26FE40u;
    // 0x26fe40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fe44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fe48: 0x3e00008  jr          $ra
    ctx->pc = 0x26FE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FE48u;
            // 0x26fe4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FE28u: goto label_26fe28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FE50u;
}
