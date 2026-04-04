#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9080
// Address: 0x1f9080 - 0x1f99f8
void sub_001F9080_0x1f9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9080_0x1f9080");
#endif

    ctx->pc = 0x1f9080u;

    // 0x1f9080: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1f9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1f9084: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f9084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9088: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1f9088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x1f908c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1f908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x1f9090: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f9090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9094: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1f9094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x1f9098: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1f9098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f909c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1f909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x1f90a0: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1f90a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90a4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1f90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x1f90a8: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1f90a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90ac: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1f90acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x1f90b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f90b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90b4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1f90b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x1f90b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f90b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90bc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1f90bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1f90c0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1f90c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f90c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f90c8: 0xaec20080  sw          $v0, 0x80($s6)
    ctx->pc = 0x1f90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    // 0x1f90cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f90ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f90d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90d8: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F90D8u;
    SET_GPR_U32(ctx, 31, 0x1F90E0u);
    ctx->pc = 0x1F90DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90D8u;
            // 0x1f90dc: 0x8c500104  lw          $s0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90E0u; }
        if (ctx->pc != 0x1F90E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90E0u; }
        if (ctx->pc != 0x1F90E0u) { return; }
    }
    ctx->pc = 0x1F90E0u;
    // 0x1f90e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90e4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F90E4u;
    SET_GPR_U32(ctx, 31, 0x1F90ECu);
    ctx->pc = 0x1F90E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90E4u;
            // 0x1f90e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90ECu; }
        if (ctx->pc != 0x1F90ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90ECu; }
        if (ctx->pc != 0x1F90ECu) { return; }
    }
    ctx->pc = 0x1F90ECu;
    // 0x1f90ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f90ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90f0: 0xa6c20084  sh          $v0, 0x84($s6)
    ctx->pc = 0x1f90f0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90f4: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F90F4u;
    SET_GPR_U32(ctx, 31, 0x1F90FCu);
    ctx->pc = 0x1F90F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F90F4u;
            // 0x1f90f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90FCu; }
        if (ctx->pc != 0x1F90FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F90FCu; }
        if (ctx->pc != 0x1F90FCu) { return; }
    }
    ctx->pc = 0x1F90FCu;
    // 0x1f90fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9100: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F9100u;
    SET_GPR_U32(ctx, 31, 0x1F9108u);
    ctx->pc = 0x1F9104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9100u;
            // 0x1f9104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9108u; }
        if (ctx->pc != 0x1F9108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9108u; }
        if (ctx->pc != 0x1F9108u) { return; }
    }
    ctx->pc = 0x1F9108u;
    // 0x1f9108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f9108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f910c: 0xa6c20086  sh          $v0, 0x86($s6)
    ctx->pc = 0x1f910cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9110: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F9110u;
    SET_GPR_U32(ctx, 31, 0x1F9118u);
    ctx->pc = 0x1F9114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9110u;
            // 0x1f9114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9118u; }
        if (ctx->pc != 0x1F9118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9118u; }
        if (ctx->pc != 0x1F9118u) { return; }
    }
    ctx->pc = 0x1F9118u;
    // 0x1f9118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f911c: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F911Cu;
    SET_GPR_U32(ctx, 31, 0x1F9124u);
    ctx->pc = 0x1F9120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F911Cu;
            // 0x1f9120: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9124u; }
        if (ctx->pc != 0x1F9124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9124u; }
        if (ctx->pc != 0x1F9124u) { return; }
    }
    ctx->pc = 0x1F9124u;
    // 0x1f9124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f9124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9128: 0xa6c20088  sh          $v0, 0x88($s6)
    ctx->pc = 0x1f9128u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f912c: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F912Cu;
    SET_GPR_U32(ctx, 31, 0x1F9134u);
    ctx->pc = 0x1F9130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F912Cu;
            // 0x1f9130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9134u; }
        if (ctx->pc != 0x1F9134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9134u; }
        if (ctx->pc != 0x1F9134u) { return; }
    }
    ctx->pc = 0x1F9134u;
    // 0x1f9134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9138: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F9138u;
    SET_GPR_U32(ctx, 31, 0x1F9140u);
    ctx->pc = 0x1F913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9138u;
            // 0x1f913c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9140u; }
        if (ctx->pc != 0x1F9140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9140u; }
        if (ctx->pc != 0x1F9140u) { return; }
    }
    ctx->pc = 0x1F9140u;
    // 0x1f9140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9144: 0xa6c2008a  sh          $v0, 0x8A($s6)
    ctx->pc = 0x1f9144u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9148: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F9148u;
    SET_GPR_U32(ctx, 31, 0x1F9150u);
    ctx->pc = 0x1F914Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9148u;
            // 0x1f914c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9150u; }
        if (ctx->pc != 0x1F9150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9150u; }
        if (ctx->pc != 0x1F9150u) { return; }
    }
    ctx->pc = 0x1F9150u;
    // 0x1f9150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9154: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F9154u;
    SET_GPR_U32(ctx, 31, 0x1F915Cu);
    ctx->pc = 0x1F9158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9154u;
            // 0x1f9158: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F915Cu; }
        if (ctx->pc != 0x1F915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F915Cu; }
        if (ctx->pc != 0x1F915Cu) { return; }
    }
    ctx->pc = 0x1F915Cu;
    // 0x1f915c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f915cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f9160: 0xa6c2008c  sh          $v0, 0x8C($s6)
    ctx->pc = 0x1f9160u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 140), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9164: 0x24847818  addiu       $a0, $a0, 0x7818
    ctx->pc = 0x1f9164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30744));
    // 0x1f9168: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F9168u;
    SET_GPR_U32(ctx, 31, 0x1F9170u);
    ctx->pc = 0x1F916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9168u;
            // 0x1f916c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9170u; }
        if (ctx->pc != 0x1F9170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9170u; }
        if (ctx->pc != 0x1F9170u) { return; }
    }
    ctx->pc = 0x1F9170u;
    // 0x1f9170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9174: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F9174u;
    SET_GPR_U32(ctx, 31, 0x1F917Cu);
    ctx->pc = 0x1F9178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9174u;
            // 0x1f9178: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F917Cu; }
        if (ctx->pc != 0x1F917Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F917Cu; }
        if (ctx->pc != 0x1F917Cu) { return; }
    }
    ctx->pc = 0x1F917Cu;
    // 0x1f917c: 0xa6c2008e  sh          $v0, 0x8E($s6)
    ctx->pc = 0x1f917cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9180: 0xa6d50090  sh          $s5, 0x90($s6)
    ctx->pc = 0x1f9180u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 144), (uint16_t)GPR_U32(ctx, 21));
    // 0x1f9184: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x1f9188: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f9188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f918c: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x1f918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
    // 0x1f9190: 0xa7a3000a  sh          $v1, 0xA($sp)
    ctx->pc = 0x1f9190u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9194: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f9194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f9198: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1f9198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f919c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1f919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1f91a0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1f91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1f91a4: 0xa7a00008  sh          $zero, 0x8($sp)
    ctx->pc = 0x1f91a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f91a8: 0x24471300  addiu       $a3, $v0, 0x1300
    ctx->pc = 0x1f91a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1f91ac: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f91acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f91b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f91b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f91b8:
    // 0x1f91b8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f91bc: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x1f91bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f91c0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1f91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f91c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f91c8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F91C8u;
    {
        const bool branch_taken_0x1f91c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f91c8) {
            ctx->pc = 0x1F91CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91C8u;
            // 0x1f91cc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F91D0u;
            goto label_1f91d0;
        }
    }
    ctx->pc = 0x1F91D0u;
label_1f91d0:
    // 0x1f91d0: 0x2810  mfhi        $a1
    ctx->pc = 0x1f91d0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f91d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F91D4u;
    {
        const bool branch_taken_0x1f91d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f91d4) {
            ctx->pc = 0x1F91E4u;
            goto label_1f91e4;
        }
    }
    ctx->pc = 0x1F91DCu;
    // 0x1f91dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F91DCu;
    {
        const bool branch_taken_0x1f91dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91DCu;
            // 0x1f91e0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91dc) {
            ctx->pc = 0x1F91F0u;
            goto label_1f91f0;
        }
    }
    ctx->pc = 0x1F91E4u;
label_1f91e4:
    // 0x1f91e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f91e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f91e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f91e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f91ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f91f0:
    // 0x1f91f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f91f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f91f4: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1f91f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f91f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F91F8u;
    {
        const bool branch_taken_0x1f91f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F91F8u;
            // 0x1f91fc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f8) {
            ctx->pc = 0x1F91B8u;
            runtime->cooperativeGuestYield();
            goto label_1f91b8;
        }
    }
    ctx->pc = 0x1F9200u;
    // 0x1f9200: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1f9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f9204: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f9204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9208: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x1f9208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1f920c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1F920Cu;
    SET_GPR_U32(ctx, 31, 0x1F9214u);
    ctx->pc = 0x1F9210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F920Cu;
            // 0x1f9210: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9214u; }
        if (ctx->pc != 0x1F9214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9214u; }
        if (ctx->pc != 0x1F9214u) { return; }
    }
    ctx->pc = 0x1F9214u;
    // 0x1f9214: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f9214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f9218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f9218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f921c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F921Cu;
    SET_GPR_U32(ctx, 31, 0x1F9224u);
    ctx->pc = 0x1F9220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F921Cu;
            // 0x1f9220: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9224u; }
        if (ctx->pc != 0x1F9224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9224u; }
        if (ctx->pc != 0x1F9224u) { return; }
    }
    ctx->pc = 0x1F9224u;
    // 0x1f9224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9228: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f922c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1F922Cu;
    SET_GPR_U32(ctx, 31, 0x1F9234u);
    ctx->pc = 0x1F9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F922Cu;
            // 0x1f9230: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9234u; }
        if (ctx->pc != 0x1F9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9234u; }
        if (ctx->pc != 0x1F9234u) { return; }
    }
    ctx->pc = 0x1F9234u;
    // 0x1f9234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9238: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f923c: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x1F923Cu;
    SET_GPR_U32(ctx, 31, 0x1F9244u);
    ctx->pc = 0x1F9240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F923Cu;
            // 0x1f9240: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9244u; }
        if (ctx->pc != 0x1F9244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DD60_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9244u; }
        if (ctx->pc != 0x1F9244u) { return; }
    }
    ctx->pc = 0x1F9244u;
    // 0x1f9244: 0xaec200b0  sw          $v0, 0xB0($s6)
    ctx->pc = 0x1f9244u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 176), GPR_U32(ctx, 2));
    // 0x1f9248: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f9248u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f924c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1f924cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1f9250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9254: 0x2611e848  addiu       $s1, $s0, -0x17B8
    ctx->pc = 0x1f9254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1f9258: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f925c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9260: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9264: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9268: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f9268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f926c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f9270: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9278u);
        ctx->pc = 0x1F9274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9270u;
            // 0x1f9274: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9278u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9278u; }
            if (ctx->pc != 0x1F9278u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9278u;
    // 0x1f9278: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f9278u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f927c: 0xaec200b4  sw          $v0, 0xB4($s6)
    ctx->pc = 0x1f927cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 2));
    // 0x1f9280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9284: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f9284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f9288: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f9288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f928c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9290: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9294: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f9294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f9298: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1f9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1f929c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F929Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F92A4u);
        ctx->pc = 0x1F92A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F929Cu;
            // 0x1f92a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F92A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F92A4u; }
            if (ctx->pc != 0x1F92A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F92A4u;
    // 0x1f92a4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f92a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f92a8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F92A8u;
    SET_GPR_U32(ctx, 31, 0x1F92B0u);
    ctx->pc = 0x1F92ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92A8u;
            // 0x1f92ac: 0x24841530  addiu       $a0, $a0, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92B0u; }
        if (ctx->pc != 0x1F92B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92B0u; }
        if (ctx->pc != 0x1F92B0u) { return; }
    }
    ctx->pc = 0x1F92B0u;
    // 0x1f92b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f92b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92b4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1F92B4u;
    SET_GPR_U32(ctx, 31, 0x1F92BCu);
    ctx->pc = 0x1F92B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92B4u;
            // 0x1f92b8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92BCu; }
        if (ctx->pc != 0x1F92BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92BCu; }
        if (ctx->pc != 0x1F92BCu) { return; }
    }
    ctx->pc = 0x1F92BCu;
    // 0x1f92bc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f92c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f92c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92c4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1f92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f92c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f92c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f92cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f92d0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F92D0u;
    SET_GPR_U32(ctx, 31, 0x1F92D8u);
    ctx->pc = 0x1F92D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92D0u;
            // 0x1f92d4: 0x26320014  addiu       $s2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92D8u; }
        if (ctx->pc != 0x1F92D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92D8u; }
        if (ctx->pc != 0x1F92D8u) { return; }
    }
    ctx->pc = 0x1F92D8u;
    // 0x1f92d8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1f92dc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1f92e0: 0x2483f970  addiu       $v1, $a0, -0x690
    ctx->pc = 0x1f92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x1f92e4: 0xae570010  sw          $s7, 0x10($s2)
    ctx->pc = 0x1f92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 23));
    // 0x1f92e8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f92ec: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f92ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f92f0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1f92f4: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F92F4u;
    SET_GPR_U32(ctx, 31, 0x1F92FCu);
    ctx->pc = 0x1F92F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F92F4u;
            // 0x1f92f8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92FCu; }
        if (ctx->pc != 0x1F92FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F92FCu; }
        if (ctx->pc != 0x1F92FCu) { return; }
    }
    ctx->pc = 0x1F92FCu;
    // 0x1f92fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f92fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9300: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9300u;
    {
        const bool branch_taken_0x1f9300 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9300) {
            ctx->pc = 0x1F9320u;
            goto label_1f9320;
        }
    }
    ctx->pc = 0x1F9308u;
    // 0x1f9308: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f930c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F930Cu;
    {
        const bool branch_taken_0x1f930c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F930Cu;
            // 0x1f9310: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f930c) {
            ctx->pc = 0x1F9318u;
            goto label_1f9318;
        }
    }
    ctx->pc = 0x1F9314u;
    // 0x1f9314: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1f9314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1f9318:
    // 0x1f9318: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F9318u;
    SET_GPR_U32(ctx, 31, 0x1F9320u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9320u; }
        if (ctx->pc != 0x1F9320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9320u; }
        if (ctx->pc != 0x1F9320u) { return; }
    }
    ctx->pc = 0x1F9320u;
label_1f9320:
    // 0x1f9320: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1F9320u;
    SET_GPR_U32(ctx, 31, 0x1F9328u);
    ctx->pc = 0x1F9324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9320u;
            // 0x1f9324: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9328u; }
        if (ctx->pc != 0x1F9328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9328u; }
        if (ctx->pc != 0x1F9328u) { return; }
    }
    ctx->pc = 0x1F9328u;
    // 0x1f9328: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9328u;
    {
        const bool branch_taken_0x1f9328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9328u;
            // 0x1f932c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9328) {
            ctx->pc = 0x1F9338u;
            goto label_1f9338;
        }
    }
    ctx->pc = 0x1F9330u;
    // 0x1f9330: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F9330u;
    SET_GPR_U32(ctx, 31, 0x1F9338u);
    ctx->pc = 0x1F9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9330u;
            // 0x1f9334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9338u; }
        if (ctx->pc != 0x1F9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9338u; }
        if (ctx->pc != 0x1F9338u) { return; }
    }
    ctx->pc = 0x1F9338u;
label_1f9338:
    // 0x1f9338: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1f9338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1f933c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f9340: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1f9340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1f9344: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f9344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9348: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x1f9348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f934c: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x1f934cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x1f9350: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f9350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f9354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9358: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1f9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f935c: 0xae370034  sw          $s7, 0x34($s1)
    ctx->pc = 0x1f935cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 23));
    // 0x1f9360: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f9360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1f9364: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f9364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f9368: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1f9368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1f936c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f9370: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x1F9370u;
    SET_GPR_U32(ctx, 31, 0x1F9378u);
    ctx->pc = 0x1F9374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9370u;
            // 0x1f9374: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9378u; }
        if (ctx->pc != 0x1F9378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9378u; }
        if (ctx->pc != 0x1F9378u) { return; }
    }
    ctx->pc = 0x1F9378u;
    // 0x1f9378: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f9378u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f937c: 0xaed100bc  sw          $s1, 0xBC($s6)
    ctx->pc = 0x1f937cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 188), GPR_U32(ctx, 17));
    // 0x1f9380: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f9380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1f9384: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x1f9384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x1f9388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f938c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9394: 0x241e0088  addiu       $fp, $zero, 0x88
    ctx->pc = 0x1f9394u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x1f9398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f939c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f93a0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f93a4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f93a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1F93A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F93B0u);
        ctx->pc = 0x1F93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F93A8u;
            // 0x1f93ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F93B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F93B0u; }
            if (ctx->pc != 0x1F93B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F93B0u;
    // 0x1f93b0: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f93b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f93b4: 0x2408f7ff  addiu       $t0, $zero, -0x801
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1f93b8: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1f93b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1f93bc: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f93c0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1f93c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1f93c4: 0x3c090002  lui         $t1, 0x2
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2 << 16));
    // 0x1f93c8: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f93c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f93cc: 0x3c0afffd  lui         $t2, 0xFFFD
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65533 << 16));
    // 0x1f93d0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1f93d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1f93d4: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1f93d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f93dc: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f93dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f93e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f93e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93e4: 0xac4500d4  sw          $a1, 0xD4($v0)
    ctx->pc = 0x1f93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 5));
    // 0x1f93e8: 0x240cefff  addiu       $t4, $zero, -0x1001
    ctx->pc = 0x1f93e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1f93ec: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1f93ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1f93f0: 0xaec200b8  sw          $v0, 0xB8($s6)
    ctx->pc = 0x1f93f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 184), GPR_U32(ctx, 2));
    // 0x1f93f4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f93f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f93f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f93fc: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f93fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9400: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f9400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f9404: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f9404u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9408: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f9408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f940c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f9410: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f9410u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f9414: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9414u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9418: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1f9418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1f941c: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f941cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9420: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f9420u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f9424: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1f9424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1f9428: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f9428u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f942c: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f942cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9430: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f9430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f9434: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f9434u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9438: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f9438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f943c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f943cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f9440: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f9440u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f9444: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9448: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x1f9448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x1f944c: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f944cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9450: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1f9450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f9454: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1f9454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1f9458: 0xc0541a6  jal         func_150698
    ctx->pc = 0x1F9458u;
    SET_GPR_U32(ctx, 31, 0x1F9460u);
    ctx->pc = 0x1F945Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9458u;
            // 0x1f945c: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150698u;
    if (runtime->hasFunction(0x150698u)) {
        auto targetFn = runtime->lookupFunction(0x150698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9460u; }
        if (ctx->pc != 0x1F9460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150698_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9460u; }
        if (ctx->pc != 0x1F9460u) { return; }
    }
    ctx->pc = 0x1F9460u;
    // 0x1f9460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9464: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x1f9464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1f9468: 0x3c2001a  div         $zero, $fp, $v0
    ctx->pc = 0x1f9468u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 30);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f946c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F946Cu;
    {
        const bool branch_taken_0x1f946c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f946c) {
            ctx->pc = 0x1F9470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F946Cu;
            // 0x1f9470: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9474u;
            goto label_1f9474;
        }
    }
    ctx->pc = 0x1F9474u;
label_1f9474:
    // 0x1f9474: 0xaec200d0  sw          $v0, 0xD0($s6)
    ctx->pc = 0x1f9474u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 208), GPR_U32(ctx, 2));
    // 0x1f9478: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f9478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f947c: 0x24847820  addiu       $a0, $a0, 0x7820
    ctx->pc = 0x1f947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30752));
    // 0x1f9480: 0x2812  mflo        $a1
    ctx->pc = 0x1f9480u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1f9484: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F9484u;
    SET_GPR_U32(ctx, 31, 0x1F948Cu);
    ctx->pc = 0x1F9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9484u;
            // 0x1f9488: 0xaec500d4  sw          $a1, 0xD4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F948Cu; }
        if (ctx->pc != 0x1F948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F948Cu; }
        if (ctx->pc != 0x1F948Cu) { return; }
    }
    ctx->pc = 0x1F948Cu;
    // 0x1f948c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f948cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9490: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1F9490u;
    SET_GPR_U32(ctx, 31, 0x1F9498u);
    ctx->pc = 0x1F9494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9490u;
            // 0x1f9494: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9498u; }
        if (ctx->pc != 0x1F9498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9498u; }
        if (ctx->pc != 0x1F9498u) { return; }
    }
    ctx->pc = 0x1F9498u;
    // 0x1f9498: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f949c: 0x8ed700d4  lw          $s7, 0xD4($s6)
    ctx->pc = 0x1f949cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
    // 0x1f94a0: 0x8ed000d0  lw          $s0, 0xD0($s6)
    ctx->pc = 0x1f94a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 208)));
    // 0x1f94a4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1f94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f94a8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f94ac: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x1f94acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f94b0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F94B0u;
    SET_GPR_U32(ctx, 31, 0x1F94B8u);
    ctx->pc = 0x1F94B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94B0u;
            // 0x1f94b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94B8u; }
        if (ctx->pc != 0x1F94B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94B8u; }
        if (ctx->pc != 0x1F94B8u) { return; }
    }
    ctx->pc = 0x1F94B8u;
    // 0x1f94b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1f94bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f94c0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1f94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1f94c4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1f94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1f94c8: 0x2483f970  addiu       $v1, $a0, -0x690
    ctx->pc = 0x1f94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x1f94cc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f94d0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f94d4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1f94d8: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F94D8u;
    SET_GPR_U32(ctx, 31, 0x1F94E0u);
    ctx->pc = 0x1F94DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94D8u;
            // 0x1f94dc: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94E0u; }
        if (ctx->pc != 0x1F94E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F94E0u; }
        if (ctx->pc != 0x1F94E0u) { return; }
    }
    ctx->pc = 0x1F94E0u;
    // 0x1f94e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f94e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F94E4u;
    {
        const bool branch_taken_0x1f94e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f94e4) {
            ctx->pc = 0x1F9508u;
            goto label_1f9508;
        }
    }
    ctx->pc = 0x1F94ECu;
    // 0x1f94ec: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f94f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F94F0u;
    {
        const bool branch_taken_0x1f94f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F94F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F94F0u;
            // 0x1f94f4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94f0) {
            ctx->pc = 0x1F9500u;
            goto label_1f9500;
        }
    }
    ctx->pc = 0x1F94F8u;
    // 0x1f94f8: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1f94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
    // 0x1f94fc: 0x0  nop
    ctx->pc = 0x1f94fcu;
    // NOP
label_1f9500:
    // 0x1f9500: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F9500u;
    SET_GPR_U32(ctx, 31, 0x1F9508u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9508u; }
        if (ctx->pc != 0x1F9508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9508u; }
        if (ctx->pc != 0x1F9508u) { return; }
    }
    ctx->pc = 0x1F9508u;
label_1f9508:
    // 0x1f9508: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1F9508u;
    SET_GPR_U32(ctx, 31, 0x1F9510u);
    ctx->pc = 0x1F950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9508u;
            // 0x1f950c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9510u; }
        if (ctx->pc != 0x1F9510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9510u; }
        if (ctx->pc != 0x1F9510u) { return; }
    }
    ctx->pc = 0x1F9510u;
    // 0x1f9510: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9510u;
    {
        const bool branch_taken_0x1f9510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9510u;
            // 0x1f9514: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9510) {
            ctx->pc = 0x1F9520u;
            goto label_1f9520;
        }
    }
    ctx->pc = 0x1F9518u;
    // 0x1f9518: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F9518u;
    SET_GPR_U32(ctx, 31, 0x1F9520u);
    ctx->pc = 0x1F951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9518u;
            // 0x1f951c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9520u; }
        if (ctx->pc != 0x1F9520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9520u; }
        if (ctx->pc != 0x1F9520u) { return; }
    }
    ctx->pc = 0x1F9520u;
label_1f9520:
    // 0x1f9520: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1f9520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1f9524: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f9524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f9528: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1f9528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1f952c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9530: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x1f9530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f9534: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x1f9534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x1f9538: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f9538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f953c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9540: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f9544: 0xae370030  sw          $s7, 0x30($s1)
    ctx->pc = 0x1f9544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
    // 0x1f9548: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f9548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1f954c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f9550: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1f9550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1f9554: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x1F9554u;
    SET_GPR_U32(ctx, 31, 0x1F955Cu);
    ctx->pc = 0x1F9558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9554u;
            // 0x1f9558: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F955Cu; }
        if (ctx->pc != 0x1F955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F955Cu; }
        if (ctx->pc != 0x1F955Cu) { return; }
    }
    ctx->pc = 0x1F955Cu;
    // 0x1f955c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f955cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9560: 0xaed100c4  sw          $s1, 0xC4($s6)
    ctx->pc = 0x1f9560u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 196), GPR_U32(ctx, 17));
    // 0x1f9564: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f9564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1f9568: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x1f956c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f956cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f957c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9580: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f9580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f9584: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f9588: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9590u);
        ctx->pc = 0x1F958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9588u;
            // 0x1f958c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9590u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9590u; }
            if (ctx->pc != 0x1F9590u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9590u;
    // 0x1f9590: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9594: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x1f9594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1f9598: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1f9598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1f959c: 0x2408fffb  addiu       $t0, $zero, -0x5
    ctx->pc = 0x1f959cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f95a0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f95a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f95a4: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x1f95a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1f95a8: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f95a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f95ac: 0x240aefff  addiu       $t2, $zero, -0x1001
    ctx->pc = 0x1f95acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1f95b0: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x1f95b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f95b4: 0xb5bbc  dsll32      $t3, $t3, 14
    ctx->pc = 0x1f95b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 14));
    // 0x1f95b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f95b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95bc: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f95bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f95c0: 0x3c0cdfff  lui         $t4, 0xDFFF
    ctx->pc = 0x1f95c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)57343 << 16));
    // 0x1f95c4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1f95c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1f95c8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x1f95c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x1f95cc: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1f95ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1f95d0: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x1f95d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x1f95d4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1f95d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1f95d8: 0xaec200c0  sw          $v0, 0xC0($s6)
    ctx->pc = 0x1f95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 192), GPR_U32(ctx, 2));
    // 0x1f95dc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f95dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f95e0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f95e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f95e4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f95e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f95e8: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f95e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f95ec: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1f95ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1f95f0: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f95f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f95f4: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f95f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f95f8: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1f95f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1f95fc: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f95fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f9600: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9604: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1f9604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1f9608: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f9608u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f960c: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f960cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f9610: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1f9610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1f9614: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f9614u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f9618: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9618u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f961c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x1f961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x1f9620: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f9620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9624: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1f9624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f9628: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x1f9628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1f962c: 0xc05420c  jal         func_150830
    ctx->pc = 0x1F962Cu;
    SET_GPR_U32(ctx, 31, 0x1F9634u);
    ctx->pc = 0x1F9630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F962Cu;
            // 0x1f9630: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9634u; }
        if (ctx->pc != 0x1F9634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9634u; }
        if (ctx->pc != 0x1F9634u) { return; }
    }
    ctx->pc = 0x1F9634u;
    // 0x1f9634: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f9634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f9638: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F9638u;
    SET_GPR_U32(ctx, 31, 0x1F9640u);
    ctx->pc = 0x1F963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9638u;
            // 0x1f963c: 0x24847830  addiu       $a0, $a0, 0x7830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9640u; }
        if (ctx->pc != 0x1F9640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9640u; }
        if (ctx->pc != 0x1F9640u) { return; }
    }
    ctx->pc = 0x1F9640u;
    // 0x1f9640: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f9640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9644: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1F9644u;
    SET_GPR_U32(ctx, 31, 0x1F964Cu);
    ctx->pc = 0x1F9648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9644u;
            // 0x1f9648: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F964Cu; }
        if (ctx->pc != 0x1F964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F964Cu; }
        if (ctx->pc != 0x1F964Cu) { return; }
    }
    ctx->pc = 0x1F964Cu;
    // 0x1f964c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f964cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9650: 0x8ed700d4  lw          $s7, 0xD4($s6)
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 212)));
    // 0x1f9654: 0x8ed000d0  lw          $s0, 0xD0($s6)
    ctx->pc = 0x1f9654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 208)));
    // 0x1f9658: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1f9658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f965c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f965cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f9660: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x1f9660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f9664: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F9664u;
    SET_GPR_U32(ctx, 31, 0x1F966Cu);
    ctx->pc = 0x1F9668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9664u;
            // 0x1f9668: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F966Cu; }
        if (ctx->pc != 0x1F966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F966Cu; }
        if (ctx->pc != 0x1F966Cu) { return; }
    }
    ctx->pc = 0x1F966Cu;
    // 0x1f966c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f966cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1f9670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9674: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1f9674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x1f9678: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1f967c: 0x2483f970  addiu       $v1, $a0, -0x690
    ctx->pc = 0x1f967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x1f9680: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f9680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f9684: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f9684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f9688: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f9688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1f968c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F968Cu;
    SET_GPR_U32(ctx, 31, 0x1F9694u);
    ctx->pc = 0x1F9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F968Cu;
            // 0x1f9690: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9694u; }
        if (ctx->pc != 0x1F9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9694u; }
        if (ctx->pc != 0x1F9694u) { return; }
    }
    ctx->pc = 0x1F9694u;
    // 0x1f9694: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f9694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9698: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9698u;
    {
        const bool branch_taken_0x1f9698 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9698) {
            ctx->pc = 0x1F96B8u;
            goto label_1f96b8;
        }
    }
    ctx->pc = 0x1F96A0u;
    // 0x1f96a0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f96a4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F96A4u;
    {
        const bool branch_taken_0x1f96a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F96A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96A4u;
            // 0x1f96a8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96a4) {
            ctx->pc = 0x1F96B0u;
            goto label_1f96b0;
        }
    }
    ctx->pc = 0x1F96ACu;
    // 0x1f96ac: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1f96acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1f96b0:
    // 0x1f96b0: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F96B0u;
    SET_GPR_U32(ctx, 31, 0x1F96B8u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96B8u; }
        if (ctx->pc != 0x1F96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96B8u; }
        if (ctx->pc != 0x1F96B8u) { return; }
    }
    ctx->pc = 0x1F96B8u;
label_1f96b8:
    // 0x1f96b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1F96B8u;
    SET_GPR_U32(ctx, 31, 0x1F96C0u);
    ctx->pc = 0x1F96BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96B8u;
            // 0x1f96bc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96C0u; }
        if (ctx->pc != 0x1F96C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96C0u; }
        if (ctx->pc != 0x1F96C0u) { return; }
    }
    ctx->pc = 0x1F96C0u;
    // 0x1f96c0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F96C0u;
    {
        const bool branch_taken_0x1f96c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96C0u;
            // 0x1f96c4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96c0) {
            ctx->pc = 0x1F96D0u;
            goto label_1f96d0;
        }
    }
    ctx->pc = 0x1F96C8u;
    // 0x1f96c8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F96C8u;
    SET_GPR_U32(ctx, 31, 0x1F96D0u);
    ctx->pc = 0x1F96CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96C8u;
            // 0x1f96cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96D0u; }
        if (ctx->pc != 0x1F96D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F96D0u; }
        if (ctx->pc != 0x1F96D0u) { return; }
    }
    ctx->pc = 0x1F96D0u;
label_1f96d0:
    // 0x1f96d0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1f96d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1f96d4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f96d8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1f96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1f96dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f96dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96e0: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f96e4: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x1f96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x1f96e8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f96ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f96ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96f0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1f96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1f96f4: 0xae370030  sw          $s7, 0x30($s1)
    ctx->pc = 0x1f96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
    // 0x1f96f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f96f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1f96fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f9700: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1f9700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1f9704: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x1F9704u;
    SET_GPR_U32(ctx, 31, 0x1F970Cu);
    ctx->pc = 0x1F9708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9704u;
            // 0x1f9708: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F970Cu; }
        if (ctx->pc != 0x1F970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F970Cu; }
        if (ctx->pc != 0x1F970Cu) { return; }
    }
    ctx->pc = 0x1F970Cu;
    // 0x1f970c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f970cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9710: 0xaed100cc  sw          $s1, 0xCC($s6)
    ctx->pc = 0x1f9710u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 204), GPR_U32(ctx, 17));
    // 0x1f9714: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f9714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1f9718: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x1f9718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x1f971c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f972c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9730: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f9734: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f9738: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9740u);
        ctx->pc = 0x1F973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9738u;
            // 0x1f973c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9740u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9740u; }
            if (ctx->pc != 0x1F9740u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9740u;
    // 0x1f9740: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9740u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9744: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1f9748: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1f974c: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f9750: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1f9750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1f9754: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x1f9758: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f9758u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f975c: 0x3c09fffd  lui         $t1, 0xFFFD
    ctx->pc = 0x1f975cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65533 << 16));
    // 0x1f9760: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1f9760u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1f9764: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1f9768: 0x240befff  addiu       $t3, $zero, -0x1001
    ctx->pc = 0x1f9768u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1f976c: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f976cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f9770: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x1f9770u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f9774: 0xc63bc  dsll32      $t4, $t4, 14
    ctx->pc = 0x1f9774u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 14));
    // 0x1f9778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f977c: 0xaec200c8  sw          $v0, 0xC8($s6)
    ctx->pc = 0x1f977cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 200), GPR_U32(ctx, 2));
    // 0x1f9780: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1f9780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1f9784: 0x3c0ddfff  lui         $t5, 0xDFFF
    ctx->pc = 0x1f9784u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)57343 << 16));
    // 0x1f9788: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1f9788u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x1f978c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x1f978cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x1f9790: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1f9790u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x1f9794: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x1f9794u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x1f9798: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1f9798u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x1f979c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f979cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f97a0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f97a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f97a4: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f97a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f97a8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f97a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f97ac: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f97acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f97b0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f97b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f97b4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f97b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f97b8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f97b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f97bc: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f97bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f97c0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1f97c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1f97c4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f97c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f97c8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f97c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f97cc: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x1f97ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1f97d0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f97d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f97d4: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f97d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f97d8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f97d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f97dc: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f97dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f97e0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f97e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f97e4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f97e8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f97e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f97ec: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f97ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f97f0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1f97f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1f97f4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f97f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f97f8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1f97f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f97fc: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x1f97fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x1f9800: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f9800u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f9804: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f9804u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9808: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x1f9808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x1f980c: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f980cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9810: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1f9810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f9814: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x1f9814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x1f9818: 0xc05420c  jal         func_150830
    ctx->pc = 0x1F9818u;
    SET_GPR_U32(ctx, 31, 0x1F9820u);
    ctx->pc = 0x1F981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9818u;
            // 0x1f981c: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9820u; }
        if (ctx->pc != 0x1F9820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9820u; }
        if (ctx->pc != 0x1F9820u) { return; }
    }
    ctx->pc = 0x1F9820u;
    // 0x1f9820: 0x8ec400c8  lw          $a0, 0xC8($s6)
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x1f9824: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1f9824u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f9828: 0xd88200b0  lqc2        $vf2, 0xB0($a0)
    ctx->pc = 0x1f9828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1f982c: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x1f982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x1f9830: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x1f9830u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1f9834: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1f9838: 0xf88100b0  sqc2        $vf1, 0xB0($a0)
    ctx->pc = 0x1f9838u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f983c: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1f9840: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F9840u;
    {
        const bool branch_taken_0x1f9840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9840) {
            ctx->pc = 0x1F9844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9840u;
            // 0x1f9844: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9848u;
            goto label_1f9848;
        }
    }
    ctx->pc = 0x1F9848u;
label_1f9848:
    // 0x1f9848: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f9848u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f984c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f984cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f9850: 0x248423c0  addiu       $a0, $a0, 0x23C0
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9152));
    // 0x1f9854: 0x1012  mflo        $v0
    ctx->pc = 0x1f9854u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f9858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f985c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f985cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f9860: 0xaec200e0  sw          $v0, 0xE0($s6)
    ctx->pc = 0x1f9860u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 224), GPR_U32(ctx, 2));
    // 0x1f9864: 0x1812  mflo        $v1
    ctx->pc = 0x1f9864u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f9868: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F9868u;
    SET_GPR_U32(ctx, 31, 0x1F9870u);
    ctx->pc = 0x1F986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9868u;
            // 0x1f986c: 0xaec300e4  sw          $v1, 0xE4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9870u; }
        if (ctx->pc != 0x1F9870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9870u; }
        if (ctx->pc != 0x1F9870u) { return; }
    }
    ctx->pc = 0x1F9870u;
    // 0x1f9870: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f9870u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9874: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1F9874u;
    SET_GPR_U32(ctx, 31, 0x1F987Cu);
    ctx->pc = 0x1F9878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9874u;
            // 0x1f9878: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F987Cu; }
        if (ctx->pc != 0x1F987Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F987Cu; }
        if (ctx->pc != 0x1F987Cu) { return; }
    }
    ctx->pc = 0x1F987Cu;
    // 0x1f987c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9884: 0x8ed700e4  lw          $s7, 0xE4($s6)
    ctx->pc = 0x1f9884u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 228)));
    // 0x1f9888: 0x8ed000e0  lw          $s0, 0xE0($s6)
    ctx->pc = 0x1f9888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 224)));
    // 0x1f988c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f9890: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f9890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f9894: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f9898: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F9898u;
    SET_GPR_U32(ctx, 31, 0x1F98A0u);
    ctx->pc = 0x1F989Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9898u;
            // 0x1f989c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98A0u; }
        if (ctx->pc != 0x1F98A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98A0u; }
        if (ctx->pc != 0x1F98A0u) { return; }
    }
    ctx->pc = 0x1F98A0u;
    // 0x1f98a0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f98a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1f98a4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1f98a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x1f98a8: 0x2483f970  addiu       $v1, $a0, -0x690
    ctx->pc = 0x1f98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x1f98ac: 0xae5e0010  sw          $fp, 0x10($s2)
    ctx->pc = 0x1f98acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 30));
    // 0x1f98b0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f98b4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1f98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1f98b8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1f98bc: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1F98BCu;
    SET_GPR_U32(ctx, 31, 0x1F98C4u);
    ctx->pc = 0x1F98C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98BCu;
            // 0x1f98c0: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98C4u; }
        if (ctx->pc != 0x1F98C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98C4u; }
        if (ctx->pc != 0x1F98C4u) { return; }
    }
    ctx->pc = 0x1F98C4u;
    // 0x1f98c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f98c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98c8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F98C8u;
    {
        const bool branch_taken_0x1f98c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98c8) {
            ctx->pc = 0x1F98E8u;
            goto label_1f98e8;
        }
    }
    ctx->pc = 0x1F98D0u;
    // 0x1f98d0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f98d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f98d4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F98D4u;
    {
        const bool branch_taken_0x1f98d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F98D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98D4u;
            // 0x1f98d8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98d4) {
            ctx->pc = 0x1F98E0u;
            goto label_1f98e0;
        }
    }
    ctx->pc = 0x1F98DCu;
    // 0x1f98dc: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x1f98dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_1f98e0:
    // 0x1f98e0: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F98E0u;
    SET_GPR_U32(ctx, 31, 0x1F98E8u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98E8u; }
        if (ctx->pc != 0x1F98E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98E8u; }
        if (ctx->pc != 0x1F98E8u) { return; }
    }
    ctx->pc = 0x1F98E8u;
label_1f98e8:
    // 0x1f98e8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1F98E8u;
    SET_GPR_U32(ctx, 31, 0x1F98F0u);
    ctx->pc = 0x1F98ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98E8u;
            // 0x1f98ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98F0u; }
        if (ctx->pc != 0x1F98F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98F0u; }
        if (ctx->pc != 0x1F98F0u) { return; }
    }
    ctx->pc = 0x1F98F0u;
    // 0x1f98f0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F98F0u;
    {
        const bool branch_taken_0x1f98f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98F0u;
            // 0x1f98f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98f0) {
            ctx->pc = 0x1F9900u;
            goto label_1f9900;
        }
    }
    ctx->pc = 0x1F98F8u;
    // 0x1f98f8: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1F98F8u;
    SET_GPR_U32(ctx, 31, 0x1F9900u);
    ctx->pc = 0x1F98FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98F8u;
            // 0x1f98fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9900u; }
        if (ctx->pc != 0x1F9900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9900u; }
        if (ctx->pc != 0x1F9900u) { return; }
    }
    ctx->pc = 0x1F9900u;
label_1f9900:
    // 0x1f9900: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1f9900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1f9904: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f9904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9908: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f9908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f990c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f990cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9910: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1f9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f9914: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x1f9914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x1f9918: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f9918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1f991c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9920: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f9924: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x1f9924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
    // 0x1f9928: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1f9928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1f992c: 0xae370030  sw          $s7, 0x30($s1)
    ctx->pc = 0x1f992cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
    // 0x1f9930: 0xc08f7bc  jal         func_23DEF0
    ctx->pc = 0x1F9930u;
    SET_GPR_U32(ctx, 31, 0x1F9938u);
    ctx->pc = 0x1F9934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9930u;
            // 0x1f9934: 0xae300034  sw          $s0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DEF0u;
    if (runtime->hasFunction(0x23DEF0u)) {
        auto targetFn = runtime->lookupFunction(0x23DEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9938u; }
        if (ctx->pc != 0x1F9938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DEF0_0x23def0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9938u; }
        if (ctx->pc != 0x1F9938u) { return; }
    }
    ctx->pc = 0x1F9938u;
    // 0x1f9938: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f9938u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f993c: 0xaed100dc  sw          $s1, 0xDC($s6)
    ctx->pc = 0x1f993cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 220), GPR_U32(ctx, 17));
    // 0x1f9940: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1f9940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1f9944: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x1f9944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x1f9948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f994c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f9954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9958: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f995c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1f995cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1f9960: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f9964: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F996Cu);
        ctx->pc = 0x1F9968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9964u;
            // 0x1f9968: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F996Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F996Cu; }
            if (ctx->pc != 0x1F996Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F996Cu;
    // 0x1f996c: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f996cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f9970: 0x2406f7ff  addiu       $a2, $zero, -0x801
    ctx->pc = 0x1f9970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1f9974: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x1f9974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1f9978: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x1f9978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f997c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1f997cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1f9980: 0xaec200d8  sw          $v0, 0xD8($s6)
    ctx->pc = 0x1f9980u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 216), GPR_U32(ctx, 2));
    // 0x1f9984: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f9984u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f9988: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f9988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f998c: 0xaec000ac  sw          $zero, 0xAC($s6)
    ctx->pc = 0x1f998cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 172), GPR_U32(ctx, 0));
    // 0x1f9990: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1f9990u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9994: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1f9994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1f9998: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1f9998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1f999c: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x1f999cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f99a0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1f99a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1f99a4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1f99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1f99a8: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1f99a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f99ac: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1f99acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1f99b0: 0xc07e67e  jal         func_1F99F8
    ctx->pc = 0x1F99B0u;
    SET_GPR_U32(ctx, 31, 0x1F99B8u);
    ctx->pc = 0x1F99B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99B0u;
            // 0x1f99b4: 0xfca20008  sd          $v0, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F99F8u;
    if (runtime->hasFunction(0x1F99F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F99F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F99B8u; }
        if (ctx->pc != 0x1F99B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F99F8_0x1f99f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F99B8u; }
        if (ctx->pc != 0x1F99B8u) { return; }
    }
    ctx->pc = 0x1F99B8u;
    // 0x1f99b8: 0xc07e788  jal         func_1F9E20
    ctx->pc = 0x1F99B8u;
    SET_GPR_U32(ctx, 31, 0x1F99C0u);
    ctx->pc = 0x1F99BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99B8u;
            // 0x1f99bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E20u;
    if (runtime->hasFunction(0x1F9E20u)) {
        auto targetFn = runtime->lookupFunction(0x1F9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F99C0u; }
        if (ctx->pc != 0x1F99C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9E20_0x1f9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F99C0u; }
        if (ctx->pc != 0x1F99C0u) { return; }
    }
    ctx->pc = 0x1F99C0u;
    // 0x1f99c0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1f99c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99c4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1f99c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f99c8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1f99c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f99cc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1f99ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f99d0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1f99d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f99d4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1f99d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f99d8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1f99d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f99dc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1f99dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f99e0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1f99e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f99e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f99e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f99e8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f99e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f99ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F99ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F99F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99ECu;
            // 0x1f99f0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F91B8u: goto label_1f91b8;
            case 0x1F91D0u: goto label_1f91d0;
            case 0x1F91E4u: goto label_1f91e4;
            case 0x1F91F0u: goto label_1f91f0;
            case 0x1F9318u: goto label_1f9318;
            case 0x1F9320u: goto label_1f9320;
            case 0x1F9338u: goto label_1f9338;
            case 0x1F9474u: goto label_1f9474;
            case 0x1F9500u: goto label_1f9500;
            case 0x1F9508u: goto label_1f9508;
            case 0x1F9520u: goto label_1f9520;
            case 0x1F96B0u: goto label_1f96b0;
            case 0x1F96B8u: goto label_1f96b8;
            case 0x1F96D0u: goto label_1f96d0;
            case 0x1F9848u: goto label_1f9848;
            case 0x1F98E0u: goto label_1f98e0;
            case 0x1F98E8u: goto label_1f98e8;
            case 0x1F9900u: goto label_1f9900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F99F4u;
    // 0x1f99f4: 0x0  nop
    ctx->pc = 0x1f99f4u;
    // NOP
}
