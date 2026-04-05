#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BFE0
// Address: 0x11bfe0 - 0x11c0c0
void sub_0011BFE0_0x11bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFE0_0x11bfe0");
#endif

    ctx->pc = 0x11bfe0u;

    // 0x11bfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11bfe4: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x11bfe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11bfec: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x11bfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x11bff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11bff4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11bff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c000: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x11c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11c004: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x11c004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x11c008: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11c008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c00c: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x11c00cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x11c010: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x11c014: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x11c014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x11c018: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x11c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x11c01c: 0xa6250000  sh          $a1, 0x0($s1)
    ctx->pc = 0x11c01cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x11c020: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11c024: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x11c024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x11c028: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x11C028u;
    SET_GPR_U32(ctx, 31, 0x11C030u);
    ctx->pc = 0x11C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C028u;
            // 0x11c02c: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C030u; }
        if (ctx->pc != 0x11C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C030u; }
        if (ctx->pc != 0x11C030u) { return; }
    }
    ctx->pc = 0x11C030u;
    // 0x11c030: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11c034: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x11c034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x11c038: 0x2442e9a8  addiu       $v0, $v0, -0x1658
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961576));
    // 0x11c03c: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x11c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x11c040: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x11c040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x11c044: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x11c044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x11c048: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x11c048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x11c04c: 0xc04e22c  jal         func_1388B0
    ctx->pc = 0x11C04Cu;
    SET_GPR_U32(ctx, 31, 0x11C054u);
    ctx->pc = 0x11C050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C04Cu;
            // 0x11c050: 0x82040008  lb          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388B0u;
    if (runtime->hasFunction(0x1388B0u)) {
        auto targetFn = runtime->lookupFunction(0x1388B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C054u; }
        if (ctx->pc != 0x11C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001388B0_0x1388b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C054u; }
        if (ctx->pc != 0x11C054u) { return; }
    }
    ctx->pc = 0x11C054u;
    // 0x11c054: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x11c054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x11c058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c05c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x11C05Cu;
    SET_GPR_U32(ctx, 31, 0x11C064u);
    ctx->pc = 0x11C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C05Cu;
            // 0x11c060: 0x24a51388  addiu       $a1, $a1, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C064u; }
        if (ctx->pc != 0x11C064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C064u; }
        if (ctx->pc != 0x11C064u) { return; }
    }
    ctx->pc = 0x11C064u;
    // 0x11c064: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C064u;
            // 0x11c068: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C090u;
            goto label_11c090;
        }
    }
    ctx->pc = 0x11C06Cu;
    // 0x11c06c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11c070: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11c074: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x11c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x11c078: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x11c078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x11c07c: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x11c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x11c080: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11c080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11c084: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x11c084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x11c088: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x11c088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x11c08c: 0x0  nop
    ctx->pc = 0x11c08cu;
    // NOP
label_11c090:
    // 0x11c090: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11c094: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x11c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x11c098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c09c: 0xc046fee  jal         func_11BFB8
    ctx->pc = 0x11C09Cu;
    SET_GPR_U32(ctx, 31, 0x11C0A4u);
    ctx->pc = 0x11C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C09Cu;
            // 0x11c0a0: 0x8c4500d8  lw          $a1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BFB8u;
    if (runtime->hasFunction(0x11BFB8u)) {
        auto targetFn = runtime->lookupFunction(0x11BFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0A4u; }
        if (ctx->pc != 0x11C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BFB8_0x11bfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0A4u; }
        if (ctx->pc != 0x11C0A4u) { return; }
    }
    ctx->pc = 0x11C0A4u;
    // 0x11c0a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11c0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11c0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c0ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11c0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11C0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0B4u;
            // 0x11c0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C090u: goto label_11c090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C0BCu;
    // 0x11c0bc: 0x0  nop
    ctx->pc = 0x11c0bcu;
    // NOP
}
