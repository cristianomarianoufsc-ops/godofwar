#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028DD70
// Address: 0x28dd70 - 0x28de40
void sub_0028DD70_0x28dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DD70_0x28dd70");
#endif

    ctx->pc = 0x28dd70u;

    // 0x28dd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28dd74: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x28dd74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28dd7c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x28dd7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28dd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd84: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x28dd84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x28dd88: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28DD88u;
    {
        const bool branch_taken_0x28dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD88u;
            // 0x28dd8c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd88) {
            ctx->pc = 0x28DE24u;
            goto label_28de24;
        }
    }
    ctx->pc = 0x28DD90u;
    // 0x28dd90: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28dd94: 0x0  nop
    ctx->pc = 0x28dd94u;
    // NOP
label_28dd98:
    // 0x28dd98: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x28dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28dd9c: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28DD9Cu;
    {
        const bool branch_taken_0x28dd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dd9c) {
            ctx->pc = 0x28DDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DD9Cu;
            // 0x28dda0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DE18u;
            goto label_28de18;
        }
    }
    ctx->pc = 0x28DDA4u;
    // 0x28dda4: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x28dda8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28DDA8u;
    {
        const bool branch_taken_0x28dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDA8u;
            // 0x28ddac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dda8) {
            ctx->pc = 0x28DE18u;
            goto label_28de18;
        }
    }
    ctx->pc = 0x28DDB0u;
label_28ddb0:
    // 0x28ddb0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x28ddb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28ddb4: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x28ddb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x28ddb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DDB8u;
    {
        const bool branch_taken_0x28ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ddb8) {
            ctx->pc = 0x28DDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDB8u;
            // 0x28ddbc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DDD0u;
            goto label_28ddd0;
        }
    }
    ctx->pc = 0x28DDC0u;
    // 0x28ddc0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x28ddc4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28DDC4u;
    {
        const bool branch_taken_0x28ddc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ddc4) {
            ctx->pc = 0x28DDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDC4u;
            // 0x28ddc8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DDB0u;
            runtime->cooperativeGuestYield();
            goto label_28ddb0;
        }
    }
    ctx->pc = 0x28DDCCu;
    // 0x28ddcc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x28ddccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_28ddd0:
    // 0x28ddd0: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x28ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x28ddd4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x28ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28ddd8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x28ddd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x28dddc: 0x2c830023  sltiu       $v1, $a0, 0x23
    ctx->pc = 0x28dddcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x28dde0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28DDE0u;
    {
        const bool branch_taken_0x28dde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDE0u;
            // 0x28dde4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dde0) {
            ctx->pc = 0x28DE14u;
            goto label_28de14;
        }
    }
    ctx->pc = 0x28DDE8u;
    // 0x28dde8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28ddec: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x28ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x28ddf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ddf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ddf8: 0x800008  jr          $a0
    ctx->pc = 0x28DDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DE00u: goto label_28de00;
            case 0x28DE14u: goto label_28de14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DE00u;
label_28de00:
    // 0x28de00: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x28de00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x28de04: 0xc0a3790  jal         func_28DE40
    ctx->pc = 0x28DE04u;
    SET_GPR_U32(ctx, 31, 0x28DE0Cu);
    ctx->pc = 0x28DE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE04u;
            // 0x28de08: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DE40u;
    if (runtime->hasFunction(0x28DE40u)) {
        auto targetFn = runtime->lookupFunction(0x28DE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE0Cu; }
        if (ctx->pc != 0x28DE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DE40_0x28de40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE0Cu; }
        if (ctx->pc != 0x28DE0Cu) { return; }
    }
    ctx->pc = 0x28DE0Cu;
    // 0x28de0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DE0Cu;
    {
        const bool branch_taken_0x28de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE0Cu;
            // 0x28de10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de0c) {
            ctx->pc = 0x28DE34u;
            goto label_28de34;
        }
    }
    ctx->pc = 0x28DE14u;
label_28de14:
    // 0x28de14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28de18:
    // 0x28de18: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x28de18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28de1c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x28DE1Cu;
    {
        const bool branch_taken_0x28de1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28de1c) {
            ctx->pc = 0x28DE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE1Cu;
            // 0x28de20: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DD98u;
            runtime->cooperativeGuestYield();
            goto label_28dd98;
        }
    }
    ctx->pc = 0x28DE24u;
label_28de24:
    // 0x28de24: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x28de28: 0xc0a3c50  jal         func_28F140
    ctx->pc = 0x28DE28u;
    SET_GPR_U32(ctx, 31, 0x28DE30u);
    ctx->pc = 0x28DE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE28u;
            // 0x28de2c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F140u;
    if (runtime->hasFunction(0x28F140u)) {
        auto targetFn = runtime->lookupFunction(0x28F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE30u; }
        if (ctx->pc != 0x28DE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F140_0x28f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE30u; }
        if (ctx->pc != 0x28DE30u) { return; }
    }
    ctx->pc = 0x28DE30u;
    // 0x28de30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28de34:
    // 0x28de34: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE34u;
            // 0x28de38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DD98u: goto label_28dd98;
            case 0x28DDB0u: goto label_28ddb0;
            case 0x28DDD0u: goto label_28ddd0;
            case 0x28DE00u: goto label_28de00;
            case 0x28DE14u: goto label_28de14;
            case 0x28DE18u: goto label_28de18;
            case 0x28DE24u: goto label_28de24;
            case 0x28DE34u: goto label_28de34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DE3Cu;
    // 0x28de3c: 0x0  nop
    ctx->pc = 0x28de3cu;
    // NOP
}
