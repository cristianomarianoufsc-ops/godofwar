#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014F500
// Address: 0x14f500 - 0x14f5f0
void sub_0014F500_0x14f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F500_0x14f500");
#endif

    ctx->pc = 0x14f500u;

    // 0x14f500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14f504: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14f504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14f508: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14f50c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f510: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14f514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f518: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x14f51c: 0x8c870044  lw          $a3, 0x44($a0)
    ctx->pc = 0x14f51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x14f520: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14f524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14f524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f528: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x14f528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x14f52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f530: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14f534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f538: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x14f538u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x14f53c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14f53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f540: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14f544: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f54c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x14F54Cu;
    SET_GPR_U32(ctx, 31, 0x14F554u);
    ctx->pc = 0x14F550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F54Cu;
            // 0x14f550: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (runtime->hasFunction(0x14EF60u)) {
        auto targetFn = runtime->lookupFunction(0x14EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F554u; }
        if (ctx->pc != 0x14F554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EF60_0x14ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F554u; }
        if (ctx->pc != 0x14F554u) { return; }
    }
    ctx->pc = 0x14F554u;
    // 0x14f554: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f558: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14f558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14f55c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14f560: 0x8e653828  lw          $a1, 0x3828($s3)
    ctx->pc = 0x14f560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14376)));
    // 0x14f564: 0xac401904  sw          $zero, 0x1904($v0)
    ctx->pc = 0x14f564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6404), GPR_U32(ctx, 0));
    // 0x14f568: 0xac601908  sw          $zero, 0x1908($v1)
    ctx->pc = 0x14f568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 0));
    // 0x14f56c: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F56Cu;
    {
        const bool branch_taken_0x14f56c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x14F570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F56Cu;
            // 0x14f570: 0xac80190c  sw          $zero, 0x190C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f56c) {
            ctx->pc = 0x14F5D0u;
            goto label_14f5d0;
        }
    }
    ctx->pc = 0x14F574u;
    // 0x14f574: 0x0  nop
    ctx->pc = 0x14f574u;
    // NOP
label_14f578:
    // 0x14f578: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f57c: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x14f57cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14f580: 0x24421800  addiu       $v0, $v0, 0x1800
    ctx->pc = 0x14f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x14f584: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x14f584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14f588: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f58c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F58Cu;
    {
        const bool branch_taken_0x14f58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F58Cu;
            // 0x14f590: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f58c) {
            ctx->pc = 0x14F5B4u;
            goto label_14f5b4;
        }
    }
    ctx->pc = 0x14F594u;
    // 0x14f594: 0xc05402c  jal         func_1500B0
    ctx->pc = 0x14F594u;
    SET_GPR_U32(ctx, 31, 0x14F59Cu);
    ctx->pc = 0x14F598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F594u;
            // 0x14f598: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1500B0u;
    if (runtime->hasFunction(0x1500B0u)) {
        auto targetFn = runtime->lookupFunction(0x1500B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F59Cu; }
        if (ctx->pc != 0x14F59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001500B0_0x1500b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F59Cu; }
        if (ctx->pc != 0x14F59Cu) { return; }
    }
    ctx->pc = 0x14F59Cu;
    // 0x14f59c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f5a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f5a4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x14F5A4u;
    SET_GPR_U32(ctx, 31, 0x14F5ACu);
    ctx->pc = 0x14F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5A4u;
            // 0x14f5a8: 0x8c4416fc  lw          $a0, 0x16FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5884)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F5ACu; }
        if (ctx->pc != 0x14F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F5ACu; }
        if (ctx->pc != 0x14F5ACu) { return; }
    }
    ctx->pc = 0x14F5ACu;
    // 0x14f5ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14f5b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_14f5b4:
    // 0x14f5b4: 0x8e633828  lw          $v1, 0x3828($s3)
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14376)));
    // 0x14f5b8: 0x24421700  addiu       $v0, $v0, 0x1700
    ctx->pc = 0x14f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
    // 0x14f5bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14f5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14f5c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14f5c4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x14f5c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14f5c8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14F5C8u;
    {
        const bool branch_taken_0x14f5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5C8u;
            // 0x14f5cc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5c8) {
            ctx->pc = 0x14F578u;
            runtime->cooperativeGuestYield();
            goto label_14f578;
        }
    }
    ctx->pc = 0x14F5D0u;
label_14f5d0:
    // 0x14f5d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14f5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f5d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14f5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f5d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f5d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f5dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14f5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5E4u;
            // 0x14f5e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F578u: goto label_14f578;
            case 0x14F5B4u: goto label_14f5b4;
            case 0x14F5D0u: goto label_14f5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F5ECu;
    // 0x14f5ec: 0x0  nop
    ctx->pc = 0x14f5ecu;
    // NOP
}
