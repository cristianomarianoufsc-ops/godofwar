#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16afd8
// Address: 0x16afd8 - 0x16b120
void entry_16afd8_0x16b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16afd8_0x16b120");
#endif

    ctx->pc = 0x16afd8u;

    // 0x16afd8: 0x857826  xor         $t7, $a0, $a1
    ctx->pc = 0x16afd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x16afdc: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x16afdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x16afe0: 0xf7022  neg         $t6, $t7
    ctx->pc = 0x16afe0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 15), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x16afe4: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x16afe4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x16afe8: 0x200d0010  addi        $t5, $zero, 0x10
    ctx->pc = 0x16afe8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x16afec: 0x1af700a  movz        $t6, $t5, $t7
    ctx->pc = 0x16afecu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
    // 0x16aff0: 0x21cfffff  addi        $t7, $t6, -0x1
    ctx->pc = 0x16aff0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 14), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x16aff4: 0xaf7824  and         $t7, $a1, $t7
    ctx->pc = 0x16aff4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x16aff8: 0x1cf7822  sub         $t7, $t6, $t7
    ctx->pc = 0x16aff8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 14), GPR_U32(ctx, 15), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x16affc: 0x31ef000f  andi        $t7, $t7, 0xF
    ctx->pc = 0x16affcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x16b000: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x16B000u;
    {
        const bool branch_taken_0x16b000 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B000u;
            // 0x16b004: 0xcf102a  slt         $v0, $a2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b000) {
            ctx->pc = 0x16B030u;
            goto label_16b030;
        }
    }
    ctx->pc = 0x16B008u;
    // 0x16b008: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x16B008u;
    {
        const bool branch_taken_0x16b008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b008) {
            ctx->pc = 0x16B0F0u;
            goto label_16b0f0;
        }
    }
    ctx->pc = 0x16B010u;
    // 0x16b010: 0xcf3022  sub         $a2, $a2, $t7
    ctx->pc = 0x16b010u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 6), GPR_U32(ctx, 15), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_16b014:
    // 0x16b014: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x16b014u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x16b018: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x16b018u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b01c: 0x20a50001  addi        $a1, $a1, 0x1
    ctx->pc = 0x16b01cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x16b020: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x16b020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x16b024: 0x0  nop
    ctx->pc = 0x16b024u;
    // NOP
    // 0x16b028: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B028u;
    {
        const bool branch_taken_0x16b028 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B028u;
            // 0x16b02c: 0x20840001  addi        $a0, $a0, 0x1 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b028) {
            ctx->pc = 0x16B014u;
            runtime->cooperativeGuestYield();
            goto label_16b014;
        }
    }
    ctx->pc = 0x16B030u;
label_16b030:
    // 0x16b030: 0x29cf0010  slti        $t7, $t6, 0x10
    ctx->pc = 0x16b030u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b034: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x16B034u;
    {
        const bool branch_taken_0x16b034 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B034u;
            // 0x16b038: 0x61142  srl         $v0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b034) {
            ctx->pc = 0x16B070u;
            goto label_16b070;
        }
    }
    ctx->pc = 0x16B03Cu;
    // 0x16b03c: 0x0  nop
    ctx->pc = 0x16b03cu;
    // NOP
    // 0x16b040: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16B040u;
    {
        const bool branch_taken_0x16b040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B040u;
            // 0x16b044: 0x21940  sll         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b040) {
            ctx->pc = 0x16B070u;
            goto label_16b070;
        }
    }
    ctx->pc = 0x16B048u;
    // 0x16b048: 0xc33022  sub         $a2, $a2, $v1
    ctx->pc = 0x16b048u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 6), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x16b04c: 0x0  nop
    ctx->pc = 0x16b04cu;
    // NOP
label_16b050:
    // 0x16b050: 0x20840020  addi        $a0, $a0, 0x20
    ctx->pc = 0x16b050u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)32, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x16b054: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x16b054u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b058: 0x20a50020  addi        $a1, $a1, 0x20
    ctx->pc = 0x16b058u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)32, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x16b05c: 0x7c87ffe0  sq          $a3, -0x20($a0)
    ctx->pc = 0x16b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_VEC(ctx, 7));
    // 0x16b060: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x16b060u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x16b064: 0x78a8fff0  lq          $t0, -0x10($a1)
    ctx->pc = 0x16b064u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x16b068: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B068u;
    {
        const bool branch_taken_0x16b068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B068u;
            // 0x16b06c: 0x7c88fff0  sq          $t0, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b068) {
            ctx->pc = 0x16B050u;
            runtime->cooperativeGuestYield();
            goto label_16b050;
        }
    }
    ctx->pc = 0x16B070u;
label_16b070:
    // 0x16b070: 0x29cf0008  slti        $t7, $t6, 0x8
    ctx->pc = 0x16b070u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16b074: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x16B074u;
    {
        const bool branch_taken_0x16b074 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B074u;
            // 0x16b078: 0x61102  srl         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b074) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B07Cu;
    // 0x16b07c: 0x0  nop
    ctx->pc = 0x16b07cu;
    // NOP
    // 0x16b080: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16B080u;
    {
        const bool branch_taken_0x16b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B080u;
            // 0x16b084: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b080) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B088u;
    // 0x16b088: 0xc33022  sub         $a2, $a2, $v1
    ctx->pc = 0x16b088u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 6), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x16b08c: 0x0  nop
    ctx->pc = 0x16b08cu;
    // NOP
label_16b090:
    // 0x16b090: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x16b090u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x16b094: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x16b094u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b098: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x16b098u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x16b09c: 0xfc87fff0  sd          $a3, -0x10($a0)
    ctx->pc = 0x16b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U64(ctx, 7));
    // 0x16b0a0: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x16b0a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x16b0a4: 0xdca8fff8  ld          $t0, -0x8($a1)
    ctx->pc = 0x16b0a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x16b0a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B0A8u;
    {
        const bool branch_taken_0x16b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0A8u;
            // 0x16b0ac: 0xfc88fff8  sd          $t0, -0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0a8) {
            ctx->pc = 0x16B090u;
            runtime->cooperativeGuestYield();
            goto label_16b090;
        }
    }
    ctx->pc = 0x16B0B0u;
label_16b0b0:
    // 0x16b0b0: 0x29cf0004  slti        $t7, $t6, 0x4
    ctx->pc = 0x16b0b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16b0b4: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x16B0B4u;
    {
        const bool branch_taken_0x16b0b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0B4u;
            // 0x16b0b8: 0x610c2  srl         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0b4) {
            ctx->pc = 0x16B0F0u;
            goto label_16b0f0;
        }
    }
    ctx->pc = 0x16B0BCu;
    // 0x16b0bc: 0x0  nop
    ctx->pc = 0x16b0bcu;
    // NOP
    // 0x16b0c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16B0C0u;
    {
        const bool branch_taken_0x16b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0C0u;
            // 0x16b0c4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0c0) {
            ctx->pc = 0x16B0F0u;
            goto label_16b0f0;
        }
    }
    ctx->pc = 0x16B0C8u;
    // 0x16b0c8: 0xc33022  sub         $a2, $a2, $v1
    ctx->pc = 0x16b0c8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 6), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x16b0cc: 0x0  nop
    ctx->pc = 0x16b0ccu;
    // NOP
label_16b0d0:
    // 0x16b0d0: 0x20840008  addi        $a0, $a0, 0x8
    ctx->pc = 0x16b0d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x16b0d4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x16b0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b0d8: 0x20a50008  addi        $a1, $a1, 0x8
    ctx->pc = 0x16b0d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x16b0dc: 0xac87fff8  sw          $a3, -0x8($a0)
    ctx->pc = 0x16b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 7));
    // 0x16b0e0: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x16b0e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x16b0e4: 0x8ca8fffc  lw          $t0, -0x4($a1)
    ctx->pc = 0x16b0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x16b0e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B0E8u;
    {
        const bool branch_taken_0x16b0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0E8u;
            // 0x16b0ec: 0xac88fffc  sw          $t0, -0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0e8) {
            ctx->pc = 0x16B0D0u;
            runtime->cooperativeGuestYield();
            goto label_16b0d0;
        }
    }
    ctx->pc = 0x16B0F0u;
label_16b0f0:
    // 0x16b0f0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B0F0u;
    {
        const bool branch_taken_0x16b0f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b0f0) {
            ctx->pc = 0x16B114u;
            goto label_16b114;
        }
    }
    ctx->pc = 0x16B0F8u;
label_16b0f8:
    // 0x16b0f8: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x16b0f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x16b0fc: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x16b0fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16b100: 0x20a50001  addi        $a1, $a1, 0x1
    ctx->pc = 0x16b100u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x16b104: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x16b104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x16b108: 0x20840001  addi        $a0, $a0, 0x1
    ctx->pc = 0x16b108u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x16b10c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16B10Cu;
    {
        const bool branch_taken_0x16b10c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b10c) {
            ctx->pc = 0x16B0F8u;
            runtime->cooperativeGuestYield();
            goto label_16b0f8;
        }
    }
    ctx->pc = 0x16B114u;
label_16b114:
    // 0x16b114: 0x3e00008  jr          $ra
    ctx->pc = 0x16B114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B014u: goto label_16b014;
            case 0x16B030u: goto label_16b030;
            case 0x16B050u: goto label_16b050;
            case 0x16B070u: goto label_16b070;
            case 0x16B090u: goto label_16b090;
            case 0x16B0B0u: goto label_16b0b0;
            case 0x16B0D0u: goto label_16b0d0;
            case 0x16B0F0u: goto label_16b0f0;
            case 0x16B0F8u: goto label_16b0f8;
            case 0x16B114u: goto label_16b114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B11Cu;
    // 0x16b11c: 0x0  nop
    ctx->pc = 0x16b11cu;
    // NOP
}
