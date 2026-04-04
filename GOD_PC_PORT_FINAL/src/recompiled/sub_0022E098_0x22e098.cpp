#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E098
// Address: 0x22e098 - 0x22e148
void sub_0022E098_0x22e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E098_0x22e098");
#endif

    ctx->pc = 0x22e098u;

    // 0x22e098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e09c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22e0a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22e0a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0ac: 0xc09f3ce  jal         func_27CF38
    ctx->pc = 0x22E0ACu;
    SET_GPR_U32(ctx, 31, 0x22E0B4u);
    ctx->pc = 0x22E0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0ACu;
            // 0x22e0b0: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x27CF38u;
    if (runtime->hasFunction(0x27CF38u)) {
        auto targetFn = runtime->lookupFunction(0x27CF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E0B4u; }
        if (ctx->pc != 0x22E0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27cf38_0x27cf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E0B4u; }
        if (ctx->pc != 0x22E0B4u) { return; }
    }
    ctx->pc = 0x22E0B4u;
    // 0x22e0b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0b8: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22E0B8u;
    {
        const bool branch_taken_0x22e0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0B8u;
            // 0x22e0bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0b8) {
            ctx->pc = 0x22E130u;
            goto label_22e130;
        }
    }
    ctx->pc = 0x22E0C0u;
    // 0x22e0c0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E0C0u;
    {
        const bool branch_taken_0x22e0c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0C0u;
            // 0x22e0c4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0c0) {
            ctx->pc = 0x22E0E8u;
            goto label_22e0e8;
        }
    }
    ctx->pc = 0x22E0C8u;
    // 0x22e0c8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22e0cc: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E0CCu;
    {
        const bool branch_taken_0x22e0cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x22E0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0CCu;
            // 0x22e0d0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0cc) {
            ctx->pc = 0x22E10Cu;
            goto label_22e10c;
        }
    }
    ctx->pc = 0x22E0D4u;
    // 0x22e0d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22e0d8: 0xac441288  sw          $a0, 0x1288($v0)
    ctx->pc = 0x22e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4744), GPR_U32(ctx, 4));
    // 0x22e0dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22E0DCu;
    {
        const bool branch_taken_0x22e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0DCu;
            // 0x22e0e0: 0xac601284  sw          $zero, 0x1284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0dc) {
            ctx->pc = 0x22E128u;
            goto label_22e128;
        }
    }
    ctx->pc = 0x22E0E4u;
    // 0x22e0e4: 0x0  nop
    ctx->pc = 0x22e0e4u;
    // NOP
label_22e0e8:
    // 0x22e0e8: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22E0E8u;
    {
        const bool branch_taken_0x22e0e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0E8u;
            // 0x22e0ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0e8) {
            ctx->pc = 0x22E11Cu;
            goto label_22e11c;
        }
    }
    ctx->pc = 0x22E0F0u;
    // 0x22e0f0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22e0f4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E0F4u;
    {
        const bool branch_taken_0x22e0f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x22E0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0F4u;
            // 0x22e0f8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0f4) {
            ctx->pc = 0x22E10Cu;
            goto label_22e10c;
        }
    }
    ctx->pc = 0x22E0FCu;
    // 0x22e0fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22e100: 0xac44128c  sw          $a0, 0x128C($v0)
    ctx->pc = 0x22e100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 4));
    // 0x22e104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22E104u;
    {
        const bool branch_taken_0x22e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E104u;
            // 0x22e108: 0xac601284  sw          $zero, 0x1284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e104) {
            ctx->pc = 0x22E128u;
            goto label_22e128;
        }
    }
    ctx->pc = 0x22E10Cu;
label_22e10c:
    // 0x22e10c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x22e10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x22e110: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e114: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22E114u;
    {
        const bool branch_taken_0x22e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E114u;
            // 0x22e118: 0xac431284  sw          $v1, 0x1284($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e114) {
            ctx->pc = 0x22E128u;
            goto label_22e128;
        }
    }
    ctx->pc = 0x22E11Cu;
label_22e11c:
    // 0x22e11c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22e120: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22e124: 0xac621284  sw          $v0, 0x1284($v1)
    ctx->pc = 0x22e124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4740), GPR_U32(ctx, 2));
label_22e128:
    // 0x22e128: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22e12c: 0xac401280  sw          $zero, 0x1280($v0)
    ctx->pc = 0x22e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4736), GPR_U32(ctx, 0));
label_22e130:
    // 0x22e130: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e134: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22e134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22e138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e13c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E13Cu;
            // 0x22e140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E0E8u: goto label_22e0e8;
            case 0x22E10Cu: goto label_22e10c;
            case 0x22E11Cu: goto label_22e11c;
            case 0x22E128u: goto label_22e128;
            case 0x22E130u: goto label_22e130;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E144u;
    // 0x22e144: 0x0  nop
    ctx->pc = 0x22e144u;
    // NOP
}
