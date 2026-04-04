#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1db250
// Address: 0x1db250 - 0x1db2f0
void entry_1db250_0x1db2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1db250_0x1db2f0");
#endif

    ctx->pc = 0x1db250u;

    // 0x1db250: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x1db250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x1db254: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db258: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1db258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db25c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1db25cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1db260: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1db260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1db264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1db264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1db268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db26c: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x1db26cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1db270: 0x24c62cc0  addiu       $a2, $a2, 0x2CC0
    ctx->pc = 0x1db270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11456));
    // 0x1db274: 0xa4c30068  sh          $v1, 0x68($a2)
    ctx->pc = 0x1db274u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x1db278: 0x94c30074  lhu         $v1, 0x74($a2)
    ctx->pc = 0x1db278u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 116)));
    // 0x1db27c: 0x94c20068  lhu         $v0, 0x68($a2)
    ctx->pc = 0x1db27cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x1db280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db284: 0x284205dc  slti        $v0, $v0, 0x5DC
    ctx->pc = 0x1db284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1500) ? 1 : 0);
    // 0x1db288: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DB288u;
    {
        const bool branch_taken_0x1db288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB288u;
            // 0x1db28c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db288) {
            ctx->pc = 0x1DB2E0u;
            goto label_1db2e0;
        }
    }
    ctx->pc = 0x1DB290u;
    // 0x1db290: 0xdcc20078  ld          $v0, 0x78($a2)
    ctx->pc = 0x1db290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1db294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1db294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db298: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1db298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x1db29c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1db2a0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB2A0u;
    {
        const bool branch_taken_0x1db2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db2a0) {
            ctx->pc = 0x1DB2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2A0u;
            // 0x1db2a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DB2E4u;
            goto label_1db2e4;
        }
    }
    ctx->pc = 0x1DB2A8u;
    // 0x1db2a8: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x1db2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1db2ac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1db2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1db2b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1db2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1db2b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB2B4u;
    {
        const bool branch_taken_0x1db2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2B4u;
            // 0x1db2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2b4) {
            ctx->pc = 0x1DB2D8u;
            goto label_1db2d8;
        }
    }
    ctx->pc = 0x1DB2BCu;
    // 0x1db2bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1db2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1db2c0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1db2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1db2c4: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1db2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1db2c8: 0x24c66c68  addiu       $a2, $a2, 0x6C68
    ctx->pc = 0x1db2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27752));
    // 0x1db2cc: 0xc06e066  jal         func_1B8198
    ctx->pc = 0x1DB2CCu;
    SET_GPR_U32(ctx, 31, 0x1DB2D4u);
    ctx->pc = 0x1DB2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2CCu;
            // 0x1db2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8198u;
    if (runtime->hasFunction(0x1B8198u)) {
        auto targetFn = runtime->lookupFunction(0x1B8198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2D4u; }
        if (ctx->pc != 0x1DB2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8198_0x1b8198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2D4u; }
        if (ctx->pc != 0x1DB2D4u) { return; }
    }
    ctx->pc = 0x1DB2D4u;
    // 0x1db2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db2d8:
    // 0x1db2d8: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x1DB2D8u;
    SET_GPR_U32(ctx, 31, 0x1DB2E0u);
    ctx->pc = 0x1DB2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2D8u;
            // 0x1db2dc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2E0u; }
        if (ctx->pc != 0x1DB2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB2E0u; }
        if (ctx->pc != 0x1DB2E0u) { return; }
    }
    ctx->pc = 0x1DB2E0u;
label_1db2e0:
    // 0x1db2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db2e4:
    // 0x1db2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB2E8u;
            // 0x1db2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB2D8u: goto label_1db2d8;
            case 0x1DB2E0u: goto label_1db2e0;
            case 0x1DB2E4u: goto label_1db2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB2F0u;
}
