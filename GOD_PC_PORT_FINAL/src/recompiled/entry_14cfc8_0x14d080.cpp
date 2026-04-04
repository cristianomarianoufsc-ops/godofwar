#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14cfc8
// Address: 0x14cfc8 - 0x14d080
void entry_14cfc8_0x14d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14cfc8_0x14d080");
#endif

    ctx->pc = 0x14cfc8u;

    // 0x14cfc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14cfcc: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x14cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x14cfd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14cfd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14cfd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14cfd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14cfe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cfe4: 0x92430030  lbu         $v1, 0x30($s2)
    ctx->pc = 0x14cfe4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x14cfe8: 0x9644001e  lhu         $a0, 0x1E($s2)
    ctx->pc = 0x14cfe8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x14cfec: 0x306300f6  andi        $v1, $v1, 0xF6
    ctx->pc = 0x14cfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)246);
    // 0x14cff0: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14CFF0u;
    {
        const bool branch_taken_0x14cff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFF0u;
            // 0x14cff4: 0xa2430030  sb          $v1, 0x30($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cff0) {
            ctx->pc = 0x14D068u;
            goto label_14d068;
        }
    }
    ctx->pc = 0x14CFF8u;
    // 0x14cff8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x14cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14cffc: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x14d000: 0xa642001e  sh          $v0, 0x1E($s2)
    ctx->pc = 0x14d000u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x14d004: 0xc04f870  jal         func_13E1C0
    ctx->pc = 0x14D004u;
    SET_GPR_U32(ctx, 31, 0x14D00Cu);
    ctx->pc = 0x14D008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D004u;
            // 0x14d008: 0xa6420020  sh          $v0, 0x20($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C0u;
    if (runtime->hasFunction(0x13E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D00Cu; }
        if (ctx->pc != 0x14D00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1c0_0x13e1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D00Cu; }
        if (ctx->pc != 0x14D00Cu) { return; }
    }
    ctx->pc = 0x14D00Cu;
    // 0x14d00c: 0xc04f856  jal         func_13E158
    ctx->pc = 0x14D00Cu;
    SET_GPR_U32(ctx, 31, 0x14D014u);
    ctx->pc = 0x14D010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D00Cu;
            // 0x14d010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E158u;
    if (runtime->hasFunction(0x13E158u)) {
        auto targetFn = runtime->lookupFunction(0x13E158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D014u; }
        if (ctx->pc != 0x14D014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e158_0x13e180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D014u; }
        if (ctx->pc != 0x14D014u) { return; }
    }
    ctx->pc = 0x14D014u;
    // 0x14d014: 0x96500014  lhu         $s0, 0x14($s2)
    ctx->pc = 0x14d014u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14d018: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x14d018u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x14d01c: 0x9242002a  lbu         $v0, 0x2A($s2)
    ctx->pc = 0x14d01cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x14d020: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14d020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14d024: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x14d024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x14d028: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x14d028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14d02c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14D02Cu;
    SET_GPR_U32(ctx, 31, 0x14D034u);
    ctx->pc = 0x14D030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D02Cu;
            // 0x14d030: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D034u; }
        if (ctx->pc != 0x14D034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D034u; }
        if (ctx->pc != 0x14D034u) { return; }
    }
    ctx->pc = 0x14D034u;
    // 0x14d034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d03c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14D03Cu;
    SET_GPR_U32(ctx, 31, 0x14D044u);
    ctx->pc = 0x14D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D03Cu;
            // 0x14d040: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D044u; }
        if (ctx->pc != 0x14D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D044u; }
        if (ctx->pc != 0x14D044u) { return; }
    }
    ctx->pc = 0x14D044u;
    // 0x14d044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14d044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d048: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x14d048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x14d04c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14d04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d050: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x14D050u;
    SET_GPR_U32(ctx, 31, 0x14D058u);
    ctx->pc = 0x14D054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D050u;
            // 0x14d054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D058u; }
        if (ctx->pc != 0x14D058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D058u; }
        if (ctx->pc != 0x14D058u) { return; }
    }
    ctx->pc = 0x14D058u;
    // 0x14d058: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14D058u;
    SET_GPR_U32(ctx, 31, 0x14D060u);
    ctx->pc = 0x14D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D058u;
            // 0x14d05c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D060u; }
        if (ctx->pc != 0x14D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D060u; }
        if (ctx->pc != 0x14D060u) { return; }
    }
    ctx->pc = 0x14D060u;
    // 0x14d060: 0xc04f860  jal         func_13E180
    ctx->pc = 0x14D060u;
    SET_GPR_U32(ctx, 31, 0x14D068u);
    ctx->pc = 0x14D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D060u;
            // 0x14d064: 0xae510038  sw          $s1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E180u;
    if (runtime->hasFunction(0x13E180u)) {
        auto targetFn = runtime->lookupFunction(0x13E180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D068u; }
        if (ctx->pc != 0x14D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e180_0x13e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D068u; }
        if (ctx->pc != 0x14D068u) { return; }
    }
    ctx->pc = 0x14D068u;
label_14d068:
    // 0x14d068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d06c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d070: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14d070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d078: 0x3e00008  jr          $ra
    ctx->pc = 0x14D078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D078u;
            // 0x14d07c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D068u: goto label_14d068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D080u;
}
