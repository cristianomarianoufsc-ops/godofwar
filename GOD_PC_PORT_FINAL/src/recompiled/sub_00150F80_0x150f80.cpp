#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150F80
// Address: 0x150f80 - 0x151150
void sub_00150F80_0x150f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150F80_0x150f80");
#endif

    ctx->pc = 0x150f80u;

    // 0x150f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150f84: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x150f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x150f88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x150f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x150f8c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x150f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x150f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150f9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fa0: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x150fa4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x150fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x150fa8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x150fac: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x150fb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x150fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x150fb4: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x150fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x150fb8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x150fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x150fbc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x150fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x150fc0: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x150fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x150fc4: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x150fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x150fc8: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x150fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x150fcc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x150fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x150fd0: 0xc08e222  jal         func_238888
    ctx->pc = 0x150FD0u;
    SET_GPR_U32(ctx, 31, 0x150FD8u);
    ctx->pc = 0x150FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FD0u;
            // 0x150fd4: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FD8u; }
        if (ctx->pc != 0x150FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FD8u; }
        if (ctx->pc != 0x150FD8u) { return; }
    }
    ctx->pc = 0x150FD8u;
    // 0x150fd8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x150fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fe4: 0xc08e222  jal         func_238888
    ctx->pc = 0x150FE4u;
    SET_GPR_U32(ctx, 31, 0x150FECu);
    ctx->pc = 0x150FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150FE4u;
            // 0x150fe8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FECu; }
        if (ctx->pc != 0x150FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150FECu; }
        if (ctx->pc != 0x150FECu) { return; }
    }
    ctx->pc = 0x150FECu;
    // 0x150fec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x150fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x150ff0: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x150ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x150ff4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x150ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x150ff8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x150ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x150ffc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x150ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151000: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x151000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x151004: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x151004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x151008: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x151008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15100c: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x15100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
    // 0x151010: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x151010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x151014: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151018: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x151018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x15101c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x15101cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x151020: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x151020u;
    SET_GPR_U32(ctx, 31, 0x151028u);
    ctx->pc = 0x151024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151020u;
            // 0x151024: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151028u; }
        if (ctx->pc != 0x151028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151028u; }
        if (ctx->pc != 0x151028u) { return; }
    }
    ctx->pc = 0x151028u;
    // 0x151028: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x15102c: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x15102cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151030: 0x8c48c080  lw          $t0, -0x3F80($v0)
    ctx->pc = 0x151030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951040)));
    // 0x151034: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x151038: 0x2463f880  addiu       $v1, $v1, -0x780
    ctx->pc = 0x151038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965376));
    // 0x15103c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151044: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151048: 0xa6060002  sh          $a2, 0x2($s0)
    ctx->pc = 0x151048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x15104c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15104cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151050: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x151050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x151054: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x151054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x151058: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x151058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x15105c: 0xae080048  sw          $t0, 0x48($s0)
    ctx->pc = 0x15105cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 8));
    // 0x151060: 0xae07004c  sw          $a3, 0x4C($s0)
    ctx->pc = 0x151060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 7));
    // 0x151064: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x151064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x151068: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15106c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15106cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151074: 0x3e00008  jr          $ra
    ctx->pc = 0x151074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151074u;
            // 0x151078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1510C8u: goto label_1510c8;
            case 0x15110Cu: goto label_15110c;
            case 0x15112Cu: goto label_15112c;
            case 0x151138u: goto label_151138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15107Cu;
    // 0x15107c: 0x0  nop
    ctx->pc = 0x15107cu;
    // NOP
    // 0x151080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151084: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x151084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x151088: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x151088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15108c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x151090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151098: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x151098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15109c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1510a0: 0x8c43104c  lw          $v1, 0x104C($v0)
    ctx->pc = 0x1510a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x1510a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1510a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1510a8: 0x8c7303ac  lw          $s3, 0x3AC($v1)
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x1510ac: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1510acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1510b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510B0u;
            // 0x1510b4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x151138u;
            goto label_151138;
        }
    }
    ctx->pc = 0x1510B8u;
    // 0x1510b8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1510b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1510bc: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1510BCu;
    {
        const bool branch_taken_0x1510bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510bc) {
            ctx->pc = 0x1510C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1510BCu;
            // 0x1510c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151138u;
            goto label_151138;
        }
    }
    ctx->pc = 0x1510C4u;
    // 0x1510c4: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1510c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1510c8:
    // 0x1510c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1510c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510cc: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x1510ccu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1510d0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1510d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1510d4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1510d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1510d8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1510d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1510dc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1510DCu;
    {
        const bool branch_taken_0x1510dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1510E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510DCu;
            // 0x1510e0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510dc) {
            ctx->pc = 0x15112Cu;
            goto label_15112c;
        }
    }
    ctx->pc = 0x1510E4u;
    // 0x1510e4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1510e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1510e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1510E8u;
    {
        const bool branch_taken_0x1510e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510e8) {
            ctx->pc = 0x1510ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1510E8u;
            // 0x1510ec: 0x8ca200d8  lw          $v0, 0xD8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15110Cu;
            goto label_15110c;
        }
    }
    ctx->pc = 0x1510F0u;
    // 0x1510f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1510f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1510f4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1510f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1510f8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1510f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1510fc: 0x40f809  jalr        $v0
    ctx->pc = 0x1510FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x151104u);
        ctx->pc = 0x151100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510FCu;
            // 0x151100: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x151104u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1510C8u: goto label_1510c8;
            case 0x15110Cu: goto label_15110c;
            case 0x15112Cu: goto label_15112c;
            case 0x151138u: goto label_151138;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x151104u; }
            if (ctx->pc != 0x151104u) { return; }
        }
        }
    }
    ctx->pc = 0x151104u;
    // 0x151104: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151104u;
    {
        const bool branch_taken_0x151104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151104) {
            ctx->pc = 0x15112Cu;
            goto label_15112c;
        }
    }
    ctx->pc = 0x15110Cu;
label_15110c:
    // 0x15110c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x15110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x151110: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151110u;
    {
        const bool branch_taken_0x151110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151110) {
            ctx->pc = 0x15112Cu;
            goto label_15112c;
        }
    }
    ctx->pc = 0x151118u;
    // 0x151118: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x151118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15111c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15111cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x151120: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x151120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x151124: 0x40f809  jalr        $v0
    ctx->pc = 0x151124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15112Cu);
        ctx->pc = 0x151128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151124u;
            // 0x151128: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15112Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1510C8u: goto label_1510c8;
            case 0x15110Cu: goto label_15110c;
            case 0x15112Cu: goto label_15112c;
            case 0x151138u: goto label_151138;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15112Cu; }
            if (ctx->pc != 0x15112Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15112Cu;
label_15112c:
    // 0x15112c: 0x1640ffe6  bnez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x15112Cu;
    {
        const bool branch_taken_0x15112c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x151130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15112Cu;
            // 0x151130: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15112c) {
            ctx->pc = 0x1510C8u;
            runtime->cooperativeGuestYield();
            goto label_1510c8;
        }
    }
    ctx->pc = 0x151134u;
    // 0x151134: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x151134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_151138:
    // 0x151138: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x151138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15113c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15113cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151140: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x151140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151148: 0x3e00008  jr          $ra
    ctx->pc = 0x151148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151148u;
            // 0x15114c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1510C8u: goto label_1510c8;
            case 0x15110Cu: goto label_15110c;
            case 0x15112Cu: goto label_15112c;
            case 0x151138u: goto label_151138;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151150u;
}
