#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7078
// Address: 0x1f7078 - 0x1f7290
void sub_001F7078_0x1f7078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7078_0x1f7078");
#endif

    ctx->pc = 0x1f7078u;

    // 0x1f7078: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f7078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f707c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f7080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7084: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f7084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f7088: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f7088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f708c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f708cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7090: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1f7090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1f7094: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f7094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7098: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1f7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1f709c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1f709cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70a0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1f70a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1f70a4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1f70a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f70a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f70ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f70acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f70b0: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x1F70B0u;
    SET_GPR_U32(ctx, 31, 0x1F70B8u);
    ctx->pc = 0x1F70B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70B0u;
            // 0x1f70b4: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70B8u; }
        if (ctx->pc != 0x1F70B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70B8u; }
        if (ctx->pc != 0x1F70B8u) { return; }
    }
    ctx->pc = 0x1F70B8u;
    // 0x1f70b8: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x1f70b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f70bc: 0xc08e492  jal         func_239248
    ctx->pc = 0x1F70BCu;
    SET_GPR_U32(ctx, 31, 0x1F70C4u);
    ctx->pc = 0x1F70C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70BCu;
            // 0x1f70c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239248u;
    if (runtime->hasFunction(0x239248u)) {
        auto targetFn = runtime->lookupFunction(0x239248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70C4u; }
        if (ctx->pc != 0x1F70C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239248_0x239260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70C4u; }
        if (ctx->pc != 0x1F70C4u) { return; }
    }
    ctx->pc = 0x1F70C4u;
    // 0x1f70c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f70c8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1f70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1f70cc: 0x24429800  addiu       $v0, $v0, -0x6800
    ctx->pc = 0x1f70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940672));
    // 0x1f70d0: 0x24639818  addiu       $v1, $v1, -0x67E8
    ctx->pc = 0x1f70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940696));
    // 0x1f70d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f70d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f70d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f70dc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1f70dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1f70e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f70e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70e4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1f70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1f70e8: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1f70e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1f70ec: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1f70ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1f70f0: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1f70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1f70f4: 0xa60000dc  sh          $zero, 0xDC($s0)
    ctx->pc = 0x1f70f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f70f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f70fc: 0x0  nop
    ctx->pc = 0x1f70fcu;
    // NOP
label_1f7100:
    // 0x1f7100: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f7100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f7104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f7104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f7108: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x1f7108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x1f710c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1f710cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f7110: 0x0  nop
    ctx->pc = 0x1f7110u;
    // NOP
    // 0x1f7114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7114u;
    {
        const bool branch_taken_0x1f7114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7114u;
            // 0x1f7118: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7114) {
            ctx->pc = 0x1F7100u;
            runtime->cooperativeGuestYield();
            goto label_1f7100;
        }
    }
    ctx->pc = 0x1F711Cu;
    // 0x1f711c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7124: 0xae110090  sw          $s1, 0x90($s0)
    ctx->pc = 0x1f7124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    // 0x1f7128: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x1f7128u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1f712c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x1f712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1f7130: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1f7134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7138: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x1f7138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
    // 0x1f713c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1f713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1f7140: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1f7140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1f7144: 0xc04065e  jal         func_101978
    ctx->pc = 0x1F7144u;
    SET_GPR_U32(ctx, 31, 0x1F714Cu);
    ctx->pc = 0x1F7148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7144u;
            // 0x1f7148: 0xac430034  sw          $v1, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101978u;
    if (runtime->hasFunction(0x101978u)) {
        auto targetFn = runtime->lookupFunction(0x101978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F714Cu; }
        if (ctx->pc != 0x1F714Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101978_0x101978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F714Cu; }
        if (ctx->pc != 0x1F714Cu) { return; }
    }
    ctx->pc = 0x1F714Cu;
    // 0x1f714c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f7150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7154: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F7154u;
    SET_GPR_U32(ctx, 31, 0x1F715Cu);
    ctx->pc = 0x1F7158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7154u;
            // 0x1f7158: 0x24847670  addiu       $a0, $a0, 0x7670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F715Cu; }
        if (ctx->pc != 0x1F715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F715Cu; }
        if (ctx->pc != 0x1F715Cu) { return; }
    }
    ctx->pc = 0x1F715Cu;
    // 0x1f715c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7160: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F7160u;
    SET_GPR_U32(ctx, 31, 0x1F7168u);
    ctx->pc = 0x1F7164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7160u;
            // 0x1f7164: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7168u; }
        if (ctx->pc != 0x1F7168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7168u; }
        if (ctx->pc != 0x1F7168u) { return; }
    }
    ctx->pc = 0x1F7168u;
    // 0x1f7168: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1f7168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1f716c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7170: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x1f7174: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x1F7174u;
    SET_GPR_U32(ctx, 31, 0x1F717Cu);
    ctx->pc = 0x1F7178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7174u;
            // 0x1f7178: 0xa60200e8  sh          $v0, 0xE8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F717Cu; }
        if (ctx->pc != 0x1F717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F717Cu; }
        if (ctx->pc != 0x1F717Cu) { return; }
    }
    ctx->pc = 0x1F717Cu;
    // 0x1f717c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7180: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1F7180u;
    SET_GPR_U32(ctx, 31, 0x1F7188u);
    ctx->pc = 0x1F7184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7180u;
            // 0x1f7184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7188u; }
        if (ctx->pc != 0x1F7188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7188u; }
        if (ctx->pc != 0x1F7188u) { return; }
    }
    ctx->pc = 0x1F7188u;
    // 0x1f7188: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1f7188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1f718c: 0xa60200ea  sh          $v0, 0xEA($s0)
    ctx->pc = 0x1f718cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 234), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7190: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f7194: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7194u;
    {
        const bool branch_taken_0x1f7194 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7194u;
            // 0x1f7198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7194) {
            ctx->pc = 0x1F71ACu;
            goto label_1f71ac;
        }
    }
    ctx->pc = 0x1F719Cu;
    // 0x1f719c: 0x96220086  lhu         $v0, 0x86($s1)
    ctx->pc = 0x1f719cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
    // 0x1f71a0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1f71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f71a4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1f71a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1f71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f71ac:
    // 0x1f71ac: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1f71acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f71b0: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1f71b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f71b4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1f71b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f71b8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1f71b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f71bc: 0xae1400a0  sw          $s4, 0xA0($s0)
    ctx->pc = 0x1f71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 20));
    // 0x1f71c0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1f71c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f71c4: 0xa61200aa  sh          $s2, 0xAA($s0)
    ctx->pc = 0x1f71c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 18));
    // 0x1f71c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f71c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f71cc: 0x46000004  c1          0x4
    ctx->pc = 0x1f71ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f71d0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F71D0u;
    {
        const bool branch_taken_0x1f71d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71D0u;
            // 0x1f71d4: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71d0) {
            ctx->pc = 0x1F71F8u;
            goto label_1f71f8;
        }
    }
    ctx->pc = 0x1F71D8u;
    // 0x1f71d8: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f71dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f71dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f71e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71e4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f71e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71e8: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1f71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f71ec: 0xc062f70  jal         func_18BDC0
    ctx->pc = 0x1F71ECu;
    SET_GPR_U32(ctx, 31, 0x1F71F4u);
    ctx->pc = 0x1F71F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71ECu;
            // 0x1f71f0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BDC0u;
    if (runtime->hasFunction(0x18BDC0u)) {
        auto targetFn = runtime->lookupFunction(0x18BDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71F4u; }
        if (ctx->pc != 0x1F71F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BDC0_0x18bdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71F4u; }
        if (ctx->pc != 0x1F71F4u) { return; }
    }
    ctx->pc = 0x1F71F4u;
    // 0x1f71f4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1f71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1f71f8:
    // 0x1f71f8: 0xa60000a8  sh          $zero, 0xA8($s0)
    ctx->pc = 0x1f71f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f71fc: 0xc07dca4  jal         func_1F7290
    ctx->pc = 0x1F71FCu;
    SET_GPR_U32(ctx, 31, 0x1F7204u);
    ctx->pc = 0x1F7200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71FCu;
            // 0x1f7200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7290u;
    if (runtime->hasFunction(0x1F7290u)) {
        auto targetFn = runtime->lookupFunction(0x1F7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7204u; }
        if (ctx->pc != 0x1F7204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7290_0x1f7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7204u; }
        if (ctx->pc != 0x1F7204u) { return; }
    }
    ctx->pc = 0x1F7204u;
    // 0x1f7204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7208: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f7208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f720c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f720cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7210: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f7210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7214: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f7214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7218: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f7218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f721c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1f721cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7220: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1f7220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7228: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F722Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7228u;
            // 0x1f722c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7100u: goto label_1f7100;
            case 0x1F71ACu: goto label_1f71ac;
            case 0x1F71F8u: goto label_1f71f8;
            case 0x1F7274u: goto label_1f7274;
            case 0x1F7288u: goto label_1f7288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7230u;
    // 0x1f7230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7234: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f7234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f723c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1f723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1f7240: 0x24429800  addiu       $v0, $v0, -0x6800
    ctx->pc = 0x1f7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940672));
    // 0x1f7244: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1f7244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1f7248: 0x8cc400ac  lw          $a0, 0xAC($a2)
    ctx->pc = 0x1f7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x1f724c: 0x24639818  addiu       $v1, $v1, -0x67E8
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940696));
    // 0x1f7250: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1f7250u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1f7254: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1f7254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1f7258: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1f7258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1f725c: 0x84c200dc  lh          $v0, 0xDC($a2)
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x1f7260: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7260u;
    {
        const bool branch_taken_0x1f7260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7260u;
            // 0x1f7264: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7260) {
            ctx->pc = 0x1F7274u;
            goto label_1f7274;
        }
    }
    ctx->pc = 0x1F7268u;
    // 0x1f7268: 0x8cc200cc  lw          $v0, 0xCC($a2)
    ctx->pc = 0x1f7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x1f726c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1f726cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1f7270: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1f7270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1f7274:
    // 0x1f7274: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7274u;
    {
        const bool branch_taken_0x1f7274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7274u;
            // 0x1f7278: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7274) {
            ctx->pc = 0x1F7288u;
            goto label_1f7288;
        }
    }
    ctx->pc = 0x1F727Cu;
    // 0x1f727c: 0xc07d8ca  jal         func_1F6328
    ctx->pc = 0x1F727Cu;
    SET_GPR_U32(ctx, 31, 0x1F7284u);
    ctx->pc = 0x1F7280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F727Cu;
            // 0x1f7280: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6328u;
    if (runtime->hasFunction(0x1F6328u)) {
        auto targetFn = runtime->lookupFunction(0x1F6328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7284u; }
        if (ctx->pc != 0x1F7284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f6328_0x1f6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7284u; }
        if (ctx->pc != 0x1F7284u) { return; }
    }
    ctx->pc = 0x1F7284u;
    // 0x1f7284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7288:
    // 0x1f7288: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7288u;
            // 0x1f728c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7100u: goto label_1f7100;
            case 0x1F71ACu: goto label_1f71ac;
            case 0x1F71F8u: goto label_1f71f8;
            case 0x1F7274u: goto label_1f7274;
            case 0x1F7288u: goto label_1f7288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7290u;
}
