#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29afd0
// Address: 0x29afd0 - 0x29b638
void entry_29afd0_0x29b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29afd0_0x29b638");
#endif

    ctx->pc = 0x29afd0u;

    // 0x29afd0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x29afd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afd4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29afd8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29afdc: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x29afdcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29afe0: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x29afe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29afe4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29afe4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x29afe8: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29AFE8u;
    {
        const bool branch_taken_0x29afe8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AFE8u;
            // 0x29afec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afe8) {
            ctx->pc = 0x29B044u;
            goto label_29b044;
        }
    }
    ctx->pc = 0x29AFF0u;
    // 0x29aff0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x29aff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29aff4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29aff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29aff8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29affc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b000: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29b004: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x29b004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x29b008: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b00c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x29b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x29b010: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b014: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x29b014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x29b018: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x29b018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x29b01c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b01cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b020: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29b020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b024: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x29b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b028: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b02c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29b02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29b030: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x29b030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x29b034: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29b034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b038: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b03c: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x29b03cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29b040: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x29b040u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_29b044:
    // 0x29b044: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x29b044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b048: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29B048u;
    {
        const bool branch_taken_0x29b048 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29B04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B048u;
            // 0x29b04c: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b048) {
            ctx->pc = 0x29B098u;
            goto label_29b098;
        }
    }
    ctx->pc = 0x29B050u;
    // 0x29b050: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x29b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29b054: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b05c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b060: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29b060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29b064: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x29b064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x29b068: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b06c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b070: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x29b074: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x29b074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x29b078: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x29b078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x29b07c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x29b07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29b080: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b080u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b084: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x29b084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29b088: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x29b088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x29b08c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x29b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29b090: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29b090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b094: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x29b094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_29b098:
    // 0x29b098: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x29b098u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b09c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x29b09cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x29b0a0: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x29b0a0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b0a4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x29b0a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29b0a8: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x29b0a8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29b0ac: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x29b0acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29b0b0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x29b0b0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29b0b4: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x29B0B4u;
    {
        const bool branch_taken_0x29b0b4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0B4u;
            // 0x29b0b8: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0b4) {
            ctx->pc = 0x29B384u;
            goto label_29b384;
        }
    }
    ctx->pc = 0x29B0BCu;
    // 0x29b0bc: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x29b0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b0c0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x29B0C0u;
    {
        const bool branch_taken_0x29b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0C0u;
            // 0x29b0c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0c0) {
            ctx->pc = 0x29B150u;
            goto label_29b150;
        }
    }
    ctx->pc = 0x29B0C8u;
    // 0x29b0c8: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b0cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B0CCu;
    {
        const bool branch_taken_0x29b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0CCu;
            // 0x29b0d0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0cc) {
            ctx->pc = 0x29B0E8u;
            goto label_29b0e8;
        }
    }
    ctx->pc = 0x29B0D4u;
    // 0x29b0d4: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x29b0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29b0d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b0dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B0DCu;
    {
        const bool branch_taken_0x29b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B0DCu;
            // 0x29b0e0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b0dc) {
            ctx->pc = 0x29B100u;
            goto label_29b100;
        }
    }
    ctx->pc = 0x29B0E4u;
    // 0x29b0e4: 0x0  nop
    ctx->pc = 0x29b0e4u;
    // NOP
label_29b0e8:
    // 0x29b0e8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x29b0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29b0ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b0f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b0f4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b0f8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x29b0f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29b0fc: 0x0  nop
    ctx->pc = 0x29b0fcu;
    // NOP
label_29b100:
    // 0x29b100: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29b104: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x29b104u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x29b108: 0x24426e18  addiu       $v0, $v0, 0x6E18
    ctx->pc = 0x29b108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28184));
    // 0x29b10c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x29b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b110: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b114: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29b114u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b118: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b11c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x29b11cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b120: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B120u;
    {
        const bool branch_taken_0x29b120 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B120u;
            // 0x29b124: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b120) {
            ctx->pc = 0x29B13Cu;
            goto label_29b13c;
        }
    }
    ctx->pc = 0x29B128u;
    // 0x29b128: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b12c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x29b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x29b130: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b134: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x29b134u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b138: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x29b138u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_29b13c:
    // 0x29b13c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x29b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29b140: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x29b140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x29b144: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x29B144u;
    {
        const bool branch_taken_0x29b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B144u;
            // 0x29b148: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b144) {
            ctx->pc = 0x29B2C8u;
            goto label_29b2c8;
        }
    }
    ctx->pc = 0x29B14Cu;
    // 0x29b14c: 0x0  nop
    ctx->pc = 0x29b14cu;
    // NOP
label_29b150:
    // 0x29b150: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B150u;
    {
        const bool branch_taken_0x29b150 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B150u;
            // 0x29b154: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b150) {
            ctx->pc = 0x29B178u;
            goto label_29b178;
        }
    }
    ctx->pc = 0x29B158u;
    // 0x29b158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b15c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B15Cu;
    {
        const bool branch_taken_0x29b15c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b15c) {
            ctx->pc = 0x29B160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B15Cu;
            // 0x29b160: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B164u;
            goto label_29b164;
        }
    }
    ctx->pc = 0x29B164u;
label_29b164:
    // 0x29b164: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x29b164u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x29b168: 0x1012  mflo        $v0
    ctx->pc = 0x29b168u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b16c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x29b16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b170: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b174: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_29b178:
    // 0x29b178: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B178u;
    {
        const bool branch_taken_0x29b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B178u;
            // 0x29b17c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b178) {
            ctx->pc = 0x29B190u;
            goto label_29b190;
        }
    }
    ctx->pc = 0x29B180u;
    // 0x29b180: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x29b180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29b184: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B188u;
    {
        const bool branch_taken_0x29b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B188u;
            // 0x29b18c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b188) {
            ctx->pc = 0x29B1A8u;
            goto label_29b1a8;
        }
    }
    ctx->pc = 0x29B190u;
label_29b190:
    // 0x29b190: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x29b190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29b194: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b198: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b19c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b1a0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x29b1a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29b1a4: 0x0  nop
    ctx->pc = 0x29b1a4u;
    // NOP
label_29b1a8:
    // 0x29b1a8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29b1ac: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x29b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x29b1b0: 0x24426e18  addiu       $v0, $v0, 0x6E18
    ctx->pc = 0x29b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28184));
    // 0x29b1b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x29b1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b1b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b1bc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29b1bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b1c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b1c4: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x29b1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b1c8: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B1C8u;
    {
        const bool branch_taken_0x29b1c8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1C8u;
            // 0x29b1cc: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1c8) {
            ctx->pc = 0x29B1E0u;
            goto label_29b1e0;
        }
    }
    ctx->pc = 0x29B1D0u;
    // 0x29b1d0: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x29b1d4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x29b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29b1d8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x29B1D8u;
    {
        const bool branch_taken_0x29b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1D8u;
            // 0x29b1dc: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1d8) {
            ctx->pc = 0x29B2BCu;
            goto label_29b2bc;
        }
    }
    ctx->pc = 0x29B1E0u;
label_29b1e0:
    // 0x29b1e0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x29b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b1e4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x29b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b1e8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x29b1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b1ec: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x29b1ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b1f0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x29b1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b1f4: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x29b1f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b1f8: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29b1fc: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x29b1fcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x29b200: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x29b200u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x29b204: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29b204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b208: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x29b20c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B20Cu;
    {
        const bool branch_taken_0x29b20c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b20c) {
            ctx->pc = 0x29B210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B20Cu;
            // 0x29b210: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B214u;
            goto label_29b214;
        }
    }
    ctx->pc = 0x29B214u;
label_29b214:
    // 0x29b214: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x29b214u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b218: 0x1012  mflo        $v0
    ctx->pc = 0x29b218u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b21c: 0x1810  mfhi        $v1
    ctx->pc = 0x29b21cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b220: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b224: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b22c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x29b22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b230: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b234: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b238: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29B238u;
    {
        const bool branch_taken_0x29b238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b238) {
            ctx->pc = 0x29B23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B238u;
            // 0x29b23c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B264u;
            goto label_29b264;
        }
    }
    ctx->pc = 0x29B240u;
    // 0x29b240: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b244: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b248: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B248u;
    {
        const bool branch_taken_0x29b248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b248) {
            ctx->pc = 0x29B24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B248u;
            // 0x29b24c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B264u;
            goto label_29b264;
        }
    }
    ctx->pc = 0x29B250u;
    // 0x29b250: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b254: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B254u;
    {
        const bool branch_taken_0x29b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b254) {
            ctx->pc = 0x29B258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B254u;
            // 0x29b258: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B260u;
            goto label_29b260;
        }
    }
    ctx->pc = 0x29B25Cu;
    // 0x29b25c: 0x0  nop
    ctx->pc = 0x29b25cu;
    // NOP
label_29b260:
    // 0x29b260: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x29b260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29b264:
    // 0x29b264: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x29b264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x29b268: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x29b268u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29b26c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B26Cu;
    {
        const bool branch_taken_0x29b26c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b26c) {
            ctx->pc = 0x29B270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B26Cu;
            // 0x29b270: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B274u;
            goto label_29b274;
        }
    }
    ctx->pc = 0x29B274u;
label_29b274:
    // 0x29b274: 0x1012  mflo        $v0
    ctx->pc = 0x29b274u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b278: 0x1810  mfhi        $v1
    ctx->pc = 0x29b278u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b27c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b280: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b284: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b284u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b288: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x29b288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b28c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b290: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b294: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B294u;
    {
        const bool branch_taken_0x29b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b294) {
            ctx->pc = 0x29B298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B294u;
            // 0x29b298: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B2BCu;
            goto label_29b2bc;
        }
    }
    ctx->pc = 0x29B29Cu;
    // 0x29b29c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b2a0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b2a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B2A4u;
    {
        const bool branch_taken_0x29b2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2A4u;
            // 0x29b2a8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b2a4) {
            ctx->pc = 0x29B2BCu;
            goto label_29b2bc;
        }
    }
    ctx->pc = 0x29B2ACu;
    // 0x29b2ac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b2b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B2B0u;
    {
        const bool branch_taken_0x29b2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b2b0) {
            ctx->pc = 0x29B2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2B0u;
            // 0x29b2b4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B2B8u;
            goto label_29b2b8;
        }
    }
    ctx->pc = 0x29B2B8u;
label_29b2b8:
    // 0x29b2b8: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29b2bc:
    // 0x29b2bc: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x29b2bcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x29b2c0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x29b2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2c4: 0x0  nop
    ctx->pc = 0x29b2c4u;
    // NOP
label_29b2c8:
    // 0x29b2c8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x29b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x29b2cc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B2CCu;
    {
        const bool branch_taken_0x29b2cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b2cc) {
            ctx->pc = 0x29B2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2CCu;
            // 0x29b2d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B2D4u;
            goto label_29b2d4;
        }
    }
    ctx->pc = 0x29B2D4u;
label_29b2d4:
    // 0x29b2d4: 0x1012  mflo        $v0
    ctx->pc = 0x29b2d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b2d8: 0x1810  mfhi        $v1
    ctx->pc = 0x29b2d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b2dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b2e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b2e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b2e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b2e8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x29b2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b2ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b2f0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b2f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B2F4u;
    {
        const bool branch_taken_0x29b2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b2f4) {
            ctx->pc = 0x29B2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B2F4u;
            // 0x29b2f8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B31Cu;
            goto label_29b31c;
        }
    }
    ctx->pc = 0x29B2FCu;
    // 0x29b2fc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b300: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b304: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B304u;
    {
        const bool branch_taken_0x29b304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b304) {
            ctx->pc = 0x29B308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B304u;
            // 0x29b308: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B31Cu;
            goto label_29b31c;
        }
    }
    ctx->pc = 0x29B30Cu;
    // 0x29b30c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b310: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B310u;
    {
        const bool branch_taken_0x29b310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b310) {
            ctx->pc = 0x29B314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B310u;
            // 0x29b314: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B318u;
            goto label_29b318;
        }
    }
    ctx->pc = 0x29B318u;
label_29b318:
    // 0x29b318: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29b31c:
    // 0x29b31c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x29b31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x29b320: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x29b320u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29b324: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B324u;
    {
        const bool branch_taken_0x29b324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b324) {
            ctx->pc = 0x29B328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B324u;
            // 0x29b328: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B32Cu;
            goto label_29b32c;
        }
    }
    ctx->pc = 0x29B32Cu;
label_29b32c:
    // 0x29b32c: 0x1012  mflo        $v0
    ctx->pc = 0x29b32cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b330: 0x1810  mfhi        $v1
    ctx->pc = 0x29b330u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b334: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b338: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b33c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b33cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b340: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x29b340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b344: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b348: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b34c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B34Cu;
    {
        const bool branch_taken_0x29b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b34c) {
            ctx->pc = 0x29B36Cu;
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B354u;
    // 0x29b354: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b358: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b35c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B35Cu;
    {
        const bool branch_taken_0x29b35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B35Cu;
            // 0x29b360: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b35c) {
            ctx->pc = 0x29B36Cu;
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B364u;
    // 0x29b364: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B364u;
    {
        const bool branch_taken_0x29b364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b364) {
            ctx->pc = 0x29B368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B364u;
            // 0x29b368: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B36Cu;
            goto label_29b36c;
        }
    }
    ctx->pc = 0x29B36Cu;
label_29b36c:
    // 0x29b36c: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x29B36Cu;
    {
        const bool branch_taken_0x29b36c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B36Cu;
            // 0x29b370: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b36c) {
            ctx->pc = 0x29B5CCu;
            goto label_29b5cc;
        }
    }
    ctx->pc = 0x29B374u;
    // 0x29b374: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x29b374u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b378: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b37c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x29B37Cu;
    {
        const bool branch_taken_0x29b37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B37Cu;
            // 0x29b380: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b37c) {
            ctx->pc = 0x29B5C8u;
            goto label_29b5c8;
        }
    }
    ctx->pc = 0x29B384u;
label_29b384:
    // 0x29b384: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x29b384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B388u;
    {
        const bool branch_taken_0x29b388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B388u;
            // 0x29b38c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b388) {
            ctx->pc = 0x29B3A4u;
            goto label_29b3a4;
        }
    }
    ctx->pc = 0x29B390u;
    // 0x29b390: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x29b390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29b394: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x29b394u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b398: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x29b398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x29b39c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x29B39Cu;
    {
        const bool branch_taken_0x29b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B39Cu;
            // 0x29b3a0: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b39c) {
            ctx->pc = 0x29B5CCu;
            goto label_29b5cc;
        }
    }
    ctx->pc = 0x29B3A4u;
label_29b3a4:
    // 0x29b3a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29b3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b3a8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x29b3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b3ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B3ACu;
    {
        const bool branch_taken_0x29b3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3ACu;
            // 0x29b3b0: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3ac) {
            ctx->pc = 0x29B3C8u;
            goto label_29b3c8;
        }
    }
    ctx->pc = 0x29B3B4u;
    // 0x29b3b4: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x29b3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29b3b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b3bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B3BCu;
    {
        const bool branch_taken_0x29b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3BCu;
            // 0x29b3c0: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3bc) {
            ctx->pc = 0x29B3E0u;
            goto label_29b3e0;
        }
    }
    ctx->pc = 0x29B3C4u;
    // 0x29b3c4: 0x0  nop
    ctx->pc = 0x29b3c4u;
    // NOP
label_29b3c8:
    // 0x29b3c8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x29b3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29b3cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b3d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b3d4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x29b3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b3d8: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x29b3d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29b3dc: 0x0  nop
    ctx->pc = 0x29b3dcu;
    // NOP
label_29b3e0:
    // 0x29b3e0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29b3e4: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x29b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x29b3e8: 0x24426e18  addiu       $v0, $v0, 0x6E18
    ctx->pc = 0x29b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28184));
    // 0x29b3ec: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x29b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b3f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b3f4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29b3f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b3f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29b3fc: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29b400: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x29B400u;
    {
        const bool branch_taken_0x29b400 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B400u;
            // 0x29b404: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b400) {
            ctx->pc = 0x29B448u;
            goto label_29b448;
        }
    }
    ctx->pc = 0x29B408u;
    // 0x29b408: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x29b408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x29b40c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B40Cu;
    {
        const bool branch_taken_0x29b40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B40Cu;
            // 0x29b410: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b40c) {
            ctx->pc = 0x29B420u;
            goto label_29b420;
        }
    }
    ctx->pc = 0x29B414u;
    // 0x29b414: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x29b414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B418u;
    {
        const bool branch_taken_0x29b418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b418) {
            ctx->pc = 0x29B430u;
            goto label_29b430;
        }
    }
    ctx->pc = 0x29B420u;
label_29b420:
    // 0x29b420: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x29b420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x29b424: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x29b424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29b428: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b42c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b430:
    // 0x29b430: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x29B430u;
    {
        const bool branch_taken_0x29b430 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B430u;
            // 0x29b434: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b430) {
            ctx->pc = 0x29B5CCu;
            goto label_29b5cc;
        }
    }
    ctx->pc = 0x29B438u;
    // 0x29b438: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x29b438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29b43c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x29b43cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b440: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x29B440u;
    {
        const bool branch_taken_0x29b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B440u;
            // 0x29b444: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b440) {
            ctx->pc = 0x29B5C8u;
            goto label_29b5c8;
        }
    }
    ctx->pc = 0x29B448u;
label_29b448:
    // 0x29b448: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x29b448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b44c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x29b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b450: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x29b450u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b454: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x29b454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b458: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b45c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x29b45cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b460: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x29b460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29b464: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x29b464u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b468: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b46c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x29b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x29b470: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x29b470u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x29b474: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x29b474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x29b478: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x29b478u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x29b47c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B47Cu;
    {
        const bool branch_taken_0x29b47c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b47c) {
            ctx->pc = 0x29B480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B47Cu;
            // 0x29b480: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B484u;
            goto label_29b484;
        }
    }
    ctx->pc = 0x29B484u;
label_29b484:
    // 0x29b484: 0x1012  mflo        $v0
    ctx->pc = 0x29b484u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b488: 0x1810  mfhi        $v1
    ctx->pc = 0x29b488u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b48c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x29b48cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b490: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b494: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b498: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b49c: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x29b49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29b4a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b4a4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x29b4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29b4a8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x29B4A8u;
    {
        const bool branch_taken_0x29b4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4a8) {
            ctx->pc = 0x29B4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4A8u;
            // 0x29b4ac: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B4DCu;
            goto label_29b4dc;
        }
    }
    ctx->pc = 0x29B4B0u;
    // 0x29b4b0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29b4b4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x29b4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b4b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B4B8u;
    {
        const bool branch_taken_0x29b4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4B8u;
            // 0x29b4bc: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4b8) {
            ctx->pc = 0x29B4D8u;
            goto label_29b4d8;
        }
    }
    ctx->pc = 0x29B4C0u;
    // 0x29b4c0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x29b4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29b4c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B4C4u;
    {
        const bool branch_taken_0x29b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4c4) {
            ctx->pc = 0x29B4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4C4u;
            // 0x29b4c8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B4DCu;
            goto label_29b4dc;
        }
    }
    ctx->pc = 0x29B4CCu;
    // 0x29b4cc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x29b4ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x29b4d0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29b4d4: 0x0  nop
    ctx->pc = 0x29b4d4u;
    // NOP
label_29b4d8:
    // 0x29b4d8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x29b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_29b4dc:
    // 0x29b4dc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B4DCu;
    {
        const bool branch_taken_0x29b4dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4dc) {
            ctx->pc = 0x29B4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4DCu;
            // 0x29b4e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B4E4u;
            goto label_29b4e4;
        }
    }
    ctx->pc = 0x29B4E4u;
label_29b4e4:
    // 0x29b4e4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x29b4e4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29b4e8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x29b4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x29b4ec: 0x1012  mflo        $v0
    ctx->pc = 0x29b4ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b4f0: 0x1810  mfhi        $v1
    ctx->pc = 0x29b4f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b4f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29b4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b4fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b500: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b504: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x29b504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29b508: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x29b508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b50c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x29b50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29b510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29B510u;
    {
        const bool branch_taken_0x29b510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B510u;
            // 0x29b514: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b510) {
            ctx->pc = 0x29B540u;
            goto label_29b540;
        }
    }
    ctx->pc = 0x29B518u;
    // 0x29b518: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x29b518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x29b51c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x29b51cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b520: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B520u;
    {
        const bool branch_taken_0x29b520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B520u;
            // 0x29b524: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b520) {
            ctx->pc = 0x29B53Cu;
            goto label_29b53c;
        }
    }
    ctx->pc = 0x29B528u;
    // 0x29b528: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x29b528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29b52c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B52Cu;
    {
        const bool branch_taken_0x29b52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B52Cu;
            // 0x29b530: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b52c) {
            ctx->pc = 0x29B540u;
            goto label_29b540;
        }
    }
    ctx->pc = 0x29B534u;
    // 0x29b534: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b538: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x29b538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_29b53c:
    // 0x29b53c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_29b540:
    // 0x29b540: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x29b540u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29b544: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29b548: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b54c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x29b54cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b550: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x29b550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29b554: 0x480019  multu       $v0, $t0
    ctx->pc = 0x29b554u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29b558: 0x3810  mfhi        $a3
    ctx->pc = 0x29b558u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29b55c: 0x3012  mflo        $a2
    ctx->pc = 0x29b55cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x29b560: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x29b560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29b564: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B564u;
    {
        const bool branch_taken_0x29b564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B564u;
            // 0x29b568: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b564) {
            ctx->pc = 0x29B580u;
            goto label_29b580;
        }
    }
    ctx->pc = 0x29B56Cu;
    // 0x29b56c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B56Cu;
    {
        const bool branch_taken_0x29b56c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x29B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B56Cu;
            // 0x29b570: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b56c) {
            ctx->pc = 0x29B590u;
            goto label_29b590;
        }
    }
    ctx->pc = 0x29B574u;
    // 0x29b574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B574u;
    {
        const bool branch_taken_0x29b574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b574) {
            ctx->pc = 0x29B590u;
            goto label_29b590;
        }
    }
    ctx->pc = 0x29B57Cu;
    // 0x29b57c: 0x0  nop
    ctx->pc = 0x29b57cu;
    // NOP
label_29b580:
    // 0x29b580: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x29b580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29b584: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x29b584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29b588: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x29b588u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b58c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29b58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b590:
    // 0x29b590: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x29B590u;
    {
        const bool branch_taken_0x29b590 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B590u;
            // 0x29b594: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b590) {
            ctx->pc = 0x29B5CCu;
            goto label_29b5cc;
        }
    }
    ctx->pc = 0x29B598u;
    // 0x29b598: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x29b598u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29b59c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x29b59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29b5a0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x29b5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b5a4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x29b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b5a8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b5ac: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x29b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b5b0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29b5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29b5b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b5b8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x29b5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29b5bc: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x29b5bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x29b5c0: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x29b5c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x29b5c4: 0x0  nop
    ctx->pc = 0x29b5c4u;
    // NOP
label_29b5c8:
    // 0x29b5c8: 0xff2f0000  sd          $t7, 0x0($t9)
    ctx->pc = 0x29b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 15));
label_29b5cc:
    // 0x29b5cc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29B5CCu;
    {
        const bool branch_taken_0x29b5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5CCu;
            // 0x29b5d0: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5cc) {
            ctx->pc = 0x29B628u;
            goto label_29b628;
        }
    }
    ctx->pc = 0x29B5D4u;
    // 0x29b5d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b5d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29b5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b5dc: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x29b5dcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x29b5e0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x29b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b5e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29b5e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29b5e8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x29b5ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b5ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b5f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b5f4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x29b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x29b5f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b5fc: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x29b5fcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x29b600: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x29b600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x29b604: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29b604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x29b608: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29b60c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b610: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x29b610u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29b614: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x29b614u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x29b618: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x29b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29b61c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b620: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x29b620u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x29b624: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x29b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_29b628:
    // 0x29b628: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29b628u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b62c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29b62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b630: 0x3e00008  jr          $ra
    ctx->pc = 0x29B630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B630u;
            // 0x29b634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B044u: goto label_29b044;
            case 0x29B098u: goto label_29b098;
            case 0x29B0E8u: goto label_29b0e8;
            case 0x29B100u: goto label_29b100;
            case 0x29B13Cu: goto label_29b13c;
            case 0x29B150u: goto label_29b150;
            case 0x29B164u: goto label_29b164;
            case 0x29B178u: goto label_29b178;
            case 0x29B190u: goto label_29b190;
            case 0x29B1A8u: goto label_29b1a8;
            case 0x29B1E0u: goto label_29b1e0;
            case 0x29B214u: goto label_29b214;
            case 0x29B260u: goto label_29b260;
            case 0x29B264u: goto label_29b264;
            case 0x29B274u: goto label_29b274;
            case 0x29B2B8u: goto label_29b2b8;
            case 0x29B2BCu: goto label_29b2bc;
            case 0x29B2C8u: goto label_29b2c8;
            case 0x29B2D4u: goto label_29b2d4;
            case 0x29B318u: goto label_29b318;
            case 0x29B31Cu: goto label_29b31c;
            case 0x29B32Cu: goto label_29b32c;
            case 0x29B36Cu: goto label_29b36c;
            case 0x29B384u: goto label_29b384;
            case 0x29B3A4u: goto label_29b3a4;
            case 0x29B3C8u: goto label_29b3c8;
            case 0x29B3E0u: goto label_29b3e0;
            case 0x29B420u: goto label_29b420;
            case 0x29B430u: goto label_29b430;
            case 0x29B448u: goto label_29b448;
            case 0x29B484u: goto label_29b484;
            case 0x29B4D8u: goto label_29b4d8;
            case 0x29B4DCu: goto label_29b4dc;
            case 0x29B4E4u: goto label_29b4e4;
            case 0x29B53Cu: goto label_29b53c;
            case 0x29B540u: goto label_29b540;
            case 0x29B580u: goto label_29b580;
            case 0x29B590u: goto label_29b590;
            case 0x29B5C8u: goto label_29b5c8;
            case 0x29B5CCu: goto label_29b5cc;
            case 0x29B628u: goto label_29b628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B638u;
}
