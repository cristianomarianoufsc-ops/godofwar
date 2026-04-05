#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00277DD8
// Address: 0x277dd8 - 0x277e78
void sub_00277DD8_0x277dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277DD8_0x277dd8");
#endif

    ctx->pc = 0x277dd8u;

    // 0x277dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277ddc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x277ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x277de0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277de4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277de8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x277de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x277dec: 0xc0a648c  jal         func_299230
    ctx->pc = 0x277DECu;
    SET_GPR_U32(ctx, 31, 0x277DF4u);
    ctx->pc = 0x277DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277DECu;
            // 0x277df0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DF4u; }
        if (ctx->pc != 0x277DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DF4u; }
        if (ctx->pc != 0x277DF4u) { return; }
    }
    ctx->pc = 0x277DF4u;
    // 0x277df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277df8: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x277df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x277dfc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x277dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x277e00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x277E00u;
    {
        const bool branch_taken_0x277e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x277E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E00u;
            // 0x277e04: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e00) {
            ctx->pc = 0x277E1Cu;
            goto label_277e1c;
        }
    }
    ctx->pc = 0x277E08u;
    // 0x277e08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x277e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x277e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x277e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x277e10: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x277e10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x277e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x277E14u;
    {
        const bool branch_taken_0x277e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E14u;
            // 0x277e18: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e14) {
            ctx->pc = 0x277E24u;
            goto label_277e24;
        }
    }
    ctx->pc = 0x277E1Cu;
label_277e1c:
    // 0x277e1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x277e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x277e20: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x277e20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_277e24:
    // 0x277e24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x277e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x277e28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x277e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x277e2c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x277e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x277e30: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x277e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x277e34: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x277e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x277e38: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x277e38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x277e3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x277e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x277e40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x277e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x277e44: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x277e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x277e48: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x277e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x277e4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x277e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x277e50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x277E50u;
    {
        const bool branch_taken_0x277e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E50u;
            // 0x277e54: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e50) {
            ctx->pc = 0x277E68u;
            goto label_277e68;
        }
    }
    ctx->pc = 0x277E58u;
    // 0x277e58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x277e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277e60: 0x80a64a0  j           func_299280
    ctx->pc = 0x277E60u;
    ctx->pc = 0x277E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277E60u;
            // 0x277e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x277E68u;
label_277e68:
    // 0x277e68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x277e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277e70: 0x3e00008  jr          $ra
    ctx->pc = 0x277E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E70u;
            // 0x277e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277E1Cu: goto label_277e1c;
            case 0x277E24u: goto label_277e24;
            case 0x277E68u: goto label_277e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277E78u;
}
