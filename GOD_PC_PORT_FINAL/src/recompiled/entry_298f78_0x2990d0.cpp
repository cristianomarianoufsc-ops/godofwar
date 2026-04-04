#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_298f78
// Address: 0x298f78 - 0x2990d0
void entry_298f78_0x2990d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_298f78_0x2990d0");
#endif

    ctx->pc = 0x298f78u;

    // 0x298f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298f7c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298f80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298f84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x298f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f94: 0xc0a69c0  jal         func_29A700
    ctx->pc = 0x298F94u;
    SET_GPR_U32(ctx, 31, 0x298F9Cu);
    ctx->pc = 0x298F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298F94u;
            // 0x298f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A700u;
    if (runtime->hasFunction(0x29A700u)) {
        auto targetFn = runtime->lookupFunction(0x29A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F9Cu; }
        if (ctx->pc != 0x298F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a700_0x29a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F9Cu; }
        if (ctx->pc != 0x298F9Cu) { return; }
    }
    ctx->pc = 0x298F9Cu;
    // 0x298f9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298fa0: 0xc0a69c0  jal         func_29A700
    ctx->pc = 0x298FA0u;
    SET_GPR_U32(ctx, 31, 0x298FA8u);
    ctx->pc = 0x298FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298FA0u;
            // 0x298fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A700u;
    if (runtime->hasFunction(0x29A700u)) {
        auto targetFn = runtime->lookupFunction(0x29A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FA8u; }
        if (ctx->pc != 0x298FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a700_0x29a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FA8u; }
        if (ctx->pc != 0x298FA8u) { return; }
    }
    ctx->pc = 0x298FA8u;
    // 0x298fa8: 0xc0a4fbc  jal         func_293EF0
    ctx->pc = 0x298FA8u;
    SET_GPR_U32(ctx, 31, 0x298FB0u);
    ctx->pc = 0x293EF0u;
    if (runtime->hasFunction(0x293EF0u)) {
        auto targetFn = runtime->lookupFunction(0x293EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FB0u; }
        if (ctx->pc != 0x298FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ef0_0x293f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FB0u; }
        if (ctx->pc != 0x298FB0u) { return; }
    }
    ctx->pc = 0x298FB0u;
    // 0x298fb0: 0xc0a500c  jal         func_294030
    ctx->pc = 0x298FB0u;
    SET_GPR_U32(ctx, 31, 0x298FB8u);
    ctx->pc = 0x298FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298FB0u;
            // 0x298fb4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294030u;
    if (runtime->hasFunction(0x294030u)) {
        auto targetFn = runtime->lookupFunction(0x294030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FB8u; }
        if (ctx->pc != 0x298FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294030_0x294050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FB8u; }
        if (ctx->pc != 0x298FB8u) { return; }
    }
    ctx->pc = 0x298FB8u;
    // 0x298fb8: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x298fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x298fbc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x298fbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fc0: 0x2543af40  addiu       $v1, $t2, -0x50C0
    ctx->pc = 0x298fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946624));
    // 0x298fc4: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x298fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x298fc8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x298fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298fcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298FCCu;
    {
        const bool branch_taken_0x298fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298FCCu;
            // 0x298fd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fcc) {
            ctx->pc = 0x299000u;
            goto label_299000;
        }
    }
    ctx->pc = 0x298FD4u;
    // 0x298fd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x298fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fd8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x298fd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298fdc: 0x0  nop
    ctx->pc = 0x298fdcu;
    // NOP
label_298fe0:
    // 0x298fe0: 0x2543af40  addiu       $v1, $t2, -0x50C0
    ctx->pc = 0x298fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946624));
    // 0x298fe4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x298fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x298fe8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x298fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x298fec: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x298fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x298ff0: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x298ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x298ff4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x298ff4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ff8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x298FF8u;
    {
        const bool branch_taken_0x298ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298ff8) {
            ctx->pc = 0x298FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298FF8u;
            // 0x298ffc: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298FE0u;
            runtime->cooperativeGuestYield();
            goto label_298fe0;
        }
    }
    ctx->pc = 0x299000u;
label_299000:
    // 0x299000: 0x2546af40  addiu       $a2, $t2, -0x50C0
    ctx->pc = 0x299000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946624));
    // 0x299004: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x299004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x299008: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x299008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x29900c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299010: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x299010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x299014: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x299014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x299018: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x299018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x29901c: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x29901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x299020: 0xdd42af40  ld          $v0, -0x50C0($t2)
    ctx->pc = 0x299020u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294946624)));
    // 0x299024: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x299024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x299028: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x299028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x29902c: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x29902cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x299030: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x299030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x299034: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x299034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x299038: 0xfd42af40  sd          $v0, -0x50C0($t2)
    ctx->pc = 0x299038u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294946624), GPR_U64(ctx, 2));
    // 0x29903c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x29903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299040: 0xa145af40  sb          $a1, -0x50C0($t2)
    ctx->pc = 0x299040u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294946624), (uint8_t)GPR_U32(ctx, 5));
    // 0x299044: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x299044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x299048: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x299048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x29904c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x29904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x299050: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x299050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x299054: 0xc0a5ae6  jal         func_296B98
    ctx->pc = 0x299054u;
    SET_GPR_U32(ctx, 31, 0x29905Cu);
    ctx->pc = 0x299058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299054u;
            // 0x299058: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B98u;
    if (runtime->hasFunction(0x296B98u)) {
        auto targetFn = runtime->lookupFunction(0x296B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29905Cu; }
        if (ctx->pc != 0x29905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296b98_0x296c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29905Cu; }
        if (ctx->pc != 0x29905Cu) { return; }
    }
    ctx->pc = 0x29905Cu;
    // 0x29905c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299060: 0xc0a5008  jal         func_294020
    ctx->pc = 0x299060u;
    SET_GPR_U32(ctx, 31, 0x299068u);
    ctx->pc = 0x299064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299060u;
            // 0x299064: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299068u; }
        if (ctx->pc != 0x299068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299068u; }
        if (ctx->pc != 0x299068u) { return; }
    }
    ctx->pc = 0x299068u;
    // 0x299068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29906c: 0xc0a4ff8  jal         func_293FE0
    ctx->pc = 0x29906Cu;
    SET_GPR_U32(ctx, 31, 0x299074u);
    ctx->pc = 0x299070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29906Cu;
            // 0x299070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293FE0u;
    if (runtime->hasFunction(0x293FE0u)) {
        auto targetFn = runtime->lookupFunction(0x293FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299074u; }
        if (ctx->pc != 0x299074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293fe0_0x293ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299074u; }
        if (ctx->pc != 0x299074u) { return; }
    }
    ctx->pc = 0x299074u;
    // 0x299074: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x299074u;
    {
        const bool branch_taken_0x299074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299074u;
            // 0x299078: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299074) {
            ctx->pc = 0x2990B4u;
            goto label_2990b4;
        }
    }
    ctx->pc = 0x29907Cu;
    // 0x29907c: 0xc0a5008  jal         func_294020
    ctx->pc = 0x29907Cu;
    SET_GPR_U32(ctx, 31, 0x299084u);
    ctx->pc = 0x299080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29907Cu;
            // 0x299080: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299084u; }
        if (ctx->pc != 0x299084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299084u; }
        if (ctx->pc != 0x299084u) { return; }
    }
    ctx->pc = 0x299084u;
    // 0x299084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x299084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299088: 0xc0a5008  jal         func_294020
    ctx->pc = 0x299088u;
    SET_GPR_U32(ctx, 31, 0x299090u);
    ctx->pc = 0x29908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299088u;
            // 0x29908c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299090u; }
        if (ctx->pc != 0x299090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299090u; }
        if (ctx->pc != 0x299090u) { return; }
    }
    ctx->pc = 0x299090u;
    // 0x299090: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x299090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x299094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299098: 0xc0a5008  jal         func_294020
    ctx->pc = 0x299098u;
    SET_GPR_U32(ctx, 31, 0x2990A0u);
    ctx->pc = 0x29909Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299098u;
            // 0x29909c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990A0u; }
        if (ctx->pc != 0x2990A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990A0u; }
        if (ctx->pc != 0x2990A0u) { return; }
    }
    ctx->pc = 0x2990A0u;
    // 0x2990a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2990a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2990a4: 0xc0a5008  jal         func_294020
    ctx->pc = 0x2990A4u;
    SET_GPR_U32(ctx, 31, 0x2990ACu);
    ctx->pc = 0x2990A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2990A4u;
            // 0x2990a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294020u;
    if (runtime->hasFunction(0x294020u)) {
        auto targetFn = runtime->lookupFunction(0x294020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990ACu; }
        if (ctx->pc != 0x2990ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294020_0x294030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990ACu; }
        if (ctx->pc != 0x2990ACu) { return; }
    }
    ctx->pc = 0x2990ACu;
    // 0x2990ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2990ACu;
    {
        const bool branch_taken_0x2990ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2990ACu;
            // 0x2990b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990ac) {
            ctx->pc = 0x2990B8u;
            goto label_2990b8;
        }
    }
    ctx->pc = 0x2990B4u;
label_2990b4:
    // 0x2990b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2990b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2990b8:
    // 0x2990b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2990b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2990bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2990bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2990c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2990c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2990c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2990C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2990C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2990C4u;
            // 0x2990c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298FE0u: goto label_298fe0;
            case 0x299000u: goto label_299000;
            case 0x2990B4u: goto label_2990b4;
            case 0x2990B8u: goto label_2990b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2990CCu;
    // 0x2990cc: 0x0  nop
    ctx->pc = 0x2990ccu;
    // NOP
}
