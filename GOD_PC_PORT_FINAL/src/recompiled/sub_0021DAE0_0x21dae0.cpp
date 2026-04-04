#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021DAE0
// Address: 0x21dae0 - 0x21db60
void sub_0021DAE0_0x21dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DAE0_0x21dae0");
#endif

    ctx->pc = 0x21dae0u;

    // 0x21dae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21dae4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21dae8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21dae8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21daec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21daf0: 0x8e42e5ec  lw          $v0, -0x1A14($s2)
    ctx->pc = 0x21daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960620)));
    // 0x21daf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21daf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21daf8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21DAF8u;
    {
        const bool branch_taken_0x21daf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DAF8u;
            // 0x21dafc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21daf8) {
            ctx->pc = 0x21DB38u;
            goto label_21db38;
        }
    }
    ctx->pc = 0x21DB00u;
    // 0x21db00: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21db04: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x21DB04u;
    SET_GPR_U32(ctx, 31, 0x21DB0Cu);
    ctx->pc = 0x21DB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB04u;
            // 0x21db08: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB0Cu; }
        if (ctx->pc != 0x21DB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB0Cu; }
        if (ctx->pc != 0x21DB0Cu) { return; }
    }
    ctx->pc = 0x21DB0Cu;
    // 0x21db0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21db0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db10: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x21db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21db14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21db18: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x21DB18u;
    SET_GPR_U32(ctx, 31, 0x21DB20u);
    ctx->pc = 0x21DB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB18u;
            // 0x21db1c: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB20u; }
        if (ctx->pc != 0x21DB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DB20u; }
        if (ctx->pc != 0x21DB20u) { return; }
    }
    ctx->pc = 0x21DB20u;
    // 0x21db20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21db20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21db24: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x21db24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x21db28: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21db2c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x21db2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x21db30: 0xae50e5ec  sw          $s0, -0x1A14($s2)
    ctx->pc = 0x21db30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960620), GPR_U32(ctx, 16));
    // 0x21db34: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x21db34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_21db38:
    // 0x21db38: 0x8e43e5ec  lw          $v1, -0x1A14($s2)
    ctx->pc = 0x21db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960620)));
    // 0x21db3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x21db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21db40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21db40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21db44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21db44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21db48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21db48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21db4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21db4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21db50: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x21db50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x21db54: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x21db54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x21db58: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB58u;
            // 0x21db5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DB38u: goto label_21db38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21DB60u;
}
