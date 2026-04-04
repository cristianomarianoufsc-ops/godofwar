#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C11A8
// Address: 0x1c11a8 - 0x1c1278
void sub_001C11A8_0x1c11a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C11A8_0x1c11a8");
#endif

    ctx->pc = 0x1c11a8u;

    // 0x1c11a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c11a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c11ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c11acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c11b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c11b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c11b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c11b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c11b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c11bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c11c0: 0xc07049e  jal         func_1C1278
    ctx->pc = 0x1C11C0u;
    SET_GPR_U32(ctx, 31, 0x1C11C8u);
    ctx->pc = 0x1C11C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11C0u;
            // 0x1c11c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1278u;
    if (runtime->hasFunction(0x1C1278u)) {
        auto targetFn = runtime->lookupFunction(0x1C1278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11C8u; }
        if (ctx->pc != 0x1C11C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c1278_0x1c12e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11C8u; }
        if (ctx->pc != 0x1C11C8u) { return; }
    }
    ctx->pc = 0x1C11C8u;
    // 0x1c11c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c11c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1c11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1c11d0:
    // 0x1c11d0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1c11d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c11d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c11d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C11D8u;
    {
        const bool branch_taken_0x1c11d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11D8u;
            // 0x1c11dc: 0x8c450394  lw          $a1, 0x394($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11d8) {
            ctx->pc = 0x1C11F8u;
            goto label_1c11f8;
        }
    }
    ctx->pc = 0x1C11E0u;
    // 0x1c11e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c11e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c11e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c11e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c11e8: 0xc06ff8c  jal         func_1BFE30
    ctx->pc = 0x1C11E8u;
    SET_GPR_U32(ctx, 31, 0x1C11F0u);
    ctx->pc = 0x1C11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11E8u;
            // 0x1c11ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFE30u;
    if (runtime->hasFunction(0x1BFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1BFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11F0u; }
        if (ctx->pc != 0x1C11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bfe30_0x1bfe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11F0u; }
        if (ctx->pc != 0x1C11F0u) { return; }
    }
    ctx->pc = 0x1C11F0u;
    // 0x1c11f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C11F0u;
    {
        const bool branch_taken_0x1c11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11F0u;
            // 0x1c11f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11f0) {
            ctx->pc = 0x1C1208u;
            goto label_1c1208;
        }
    }
    ctx->pc = 0x1C11F8u;
label_1c11f8:
    // 0x1c11f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c11f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c11fc: 0xc06ff8c  jal         func_1BFE30
    ctx->pc = 0x1C11FCu;
    SET_GPR_U32(ctx, 31, 0x1C1204u);
    ctx->pc = 0x1C1200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11FCu;
            // 0x1c1200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFE30u;
    if (runtime->hasFunction(0x1BFE30u)) {
        auto targetFn = runtime->lookupFunction(0x1BFE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1204u; }
        if (ctx->pc != 0x1C1204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1bfe30_0x1bfe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1204u; }
        if (ctx->pc != 0x1C1204u) { return; }
    }
    ctx->pc = 0x1C1204u;
    // 0x1c1204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1208:
    // 0x1c1208: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1c1208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c120c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C120Cu;
    {
        const bool branch_taken_0x1c120c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C120Cu;
            // 0x1c1210: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c120c) {
            ctx->pc = 0x1C11D0u;
            runtime->cooperativeGuestYield();
            goto label_1c11d0;
        }
    }
    ctx->pc = 0x1C1214u;
    // 0x1c1214: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x1c1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1c1218: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c1218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c121c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C121Cu;
    {
        const bool branch_taken_0x1c121c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C121Cu;
            // 0x1c1220: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c121c) {
            ctx->pc = 0x1C1250u;
            goto label_1c1250;
        }
    }
    ctx->pc = 0x1C1224u;
    // 0x1c1224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C1224u;
    {
        const bool branch_taken_0x1c1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1224u;
            // 0x1c1228: 0x8e300378  lw          $s0, 0x378($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1224) {
            ctx->pc = 0x1C1250u;
            goto label_1c1250;
        }
    }
    ctx->pc = 0x1C122Cu;
    // 0x1c122c: 0x0  nop
    ctx->pc = 0x1c122cu;
    // NOP
label_1c1230:
    // 0x1c1230: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c1230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c1234: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1238: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c123c: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C123Cu;
    SET_GPR_U32(ctx, 31, 0x1C1244u);
    ctx->pc = 0x1C1240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C123Cu;
            // 0x1c1240: 0x24a55dd0  addiu       $a1, $a1, 0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1244u; }
        if (ctx->pc != 0x1C1244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1244u; }
        if (ctx->pc != 0x1C1244u) { return; }
    }
    ctx->pc = 0x1C1244u;
    // 0x1c1244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1248: 0xc07023e  jal         func_1C08F8
    ctx->pc = 0x1C1248u;
    SET_GPR_U32(ctx, 31, 0x1C1250u);
    ctx->pc = 0x1C124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1248u;
            // 0x1c124c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C08F8u;
    if (runtime->hasFunction(0x1C08F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C08F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1250u; }
        if (ctx->pc != 0x1C1250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C08F8_0x1c08f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1250u; }
        if (ctx->pc != 0x1C1250u) { return; }
    }
    ctx->pc = 0x1C1250u;
label_1c1250:
    // 0x1c1250: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1c1250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c1254: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C1254u;
    {
        const bool branch_taken_0x1c1254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1254u;
            // 0x1c1258: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1254) {
            ctx->pc = 0x1C1230u;
            runtime->cooperativeGuestYield();
            goto label_1c1230;
        }
    }
    ctx->pc = 0x1C125Cu;
    // 0x1c125c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c125cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1260: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c1260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c1264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c126c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C126Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C126Cu;
            // 0x1c1270: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C11D0u: goto label_1c11d0;
            case 0x1C11F8u: goto label_1c11f8;
            case 0x1C1208u: goto label_1c1208;
            case 0x1C1230u: goto label_1c1230;
            case 0x1C1250u: goto label_1c1250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1274u;
    // 0x1c1274: 0x0  nop
    ctx->pc = 0x1c1274u;
    // NOP
}
