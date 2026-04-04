#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299ab8
// Address: 0x299ab8 - 0x299c48
void entry_299ab8_0x299c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299ab8_0x299c48");
#endif

    ctx->pc = 0x299ab8u;

    // 0x299ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x299ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x299abc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x299abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x299ac0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x299ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x299ac4: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x299ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x299ac8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x299acc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x299accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ad0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x299ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x299ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299ad8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x299ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x299adc: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x299ADCu;
    {
        const bool branch_taken_0x299adc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x299AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299ADCu;
            // 0x299ae0: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299adc) {
            ctx->pc = 0x299C30u;
            goto label_299c30;
        }
    }
    ctx->pc = 0x299AE4u;
    // 0x299ae4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x299ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x299ae8: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x299ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x299aec: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x299aecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299af0: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x299AF0u;
    {
        const bool branch_taken_0x299af0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x299af0) {
            ctx->pc = 0x299AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299AF0u;
            // 0x299af4: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299B24u;
            goto label_299b24;
        }
    }
    ctx->pc = 0x299AF8u;
    // 0x299af8: 0xc0a662c  jal         func_2998B0
    ctx->pc = 0x299AF8u;
    SET_GPR_U32(ctx, 31, 0x299B00u);
    ctx->pc = 0x299AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299AF8u;
            // 0x299afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998B0u;
    if (runtime->hasFunction(0x2998B0u)) {
        auto targetFn = runtime->lookupFunction(0x2998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B00u; }
        if (ctx->pc != 0x299B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998b0_0x2998c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B00u; }
        if (ctx->pc != 0x299B00u) { return; }
    }
    ctx->pc = 0x299B00u;
    // 0x299b00: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x299b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x299b04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299b08: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x299b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x299b0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299b10: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x299b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x299b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299b18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299b1c: 0x80a6628  j           func_2998A0
    ctx->pc = 0x299B1Cu;
    ctx->pc = 0x299B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299B1Cu;
            // 0x299b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (runtime->hasFunction(0x2998A0u)) {
        auto targetFn = runtime->lookupFunction(0x2998A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2998a0_0x2998b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x299B24u;
label_299b24:
    // 0x299b24: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x299b24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x299b28: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x299b28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x299b2c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x299b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x299b30: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x299b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299b34: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x299B34u;
    {
        const bool branch_taken_0x299b34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B34u;
            // 0x299b38: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b34) {
            ctx->pc = 0x299B9Cu;
            goto label_299b9c;
        }
    }
    ctx->pc = 0x299B3Cu;
    // 0x299b3c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x299b3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x299b40: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x299b40u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x299b44: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x299b44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x299b48: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x299b48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x299b4c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x299b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x299b50: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x299b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x299b54: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x299b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x299b58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x299B58u;
    {
        const bool branch_taken_0x299b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B58u;
            // 0x299b5c: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b58) {
            ctx->pc = 0x299B9Cu;
            goto label_299b9c;
        }
    }
    ctx->pc = 0x299B60u;
    // 0x299b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b64: 0x0  nop
    ctx->pc = 0x299b64u;
    // NOP
label_299b68:
    // 0x299b68: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x299b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299b6c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x299B6Cu;
    {
        const bool branch_taken_0x299b6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B6Cu;
            // 0x299b70: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b6c) {
            ctx->pc = 0x299BA0u;
            goto label_299ba0;
        }
    }
    ctx->pc = 0x299B74u;
    // 0x299b74: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x299b74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x299b78: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x299b78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x299b7c: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x299b7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x299b80: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x299b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x299b84: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x299b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x299b88: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x299b88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x299b8c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x299B8Cu;
    {
        const bool branch_taken_0x299b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b8c) {
            ctx->pc = 0x299B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299B8Cu;
            // 0x299b90: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299BA4u;
            goto label_299ba4;
        }
    }
    ctx->pc = 0x299B94u;
    // 0x299b94: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x299B94u;
    {
        const bool branch_taken_0x299b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B94u;
            // 0x299b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299b94) {
            ctx->pc = 0x299B68u;
            runtime->cooperativeGuestYield();
            goto label_299b68;
        }
    }
    ctx->pc = 0x299B9Cu;
label_299b9c:
    // 0x299b9c: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x299b9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_299ba0:
    // 0x299ba0: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x299ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_299ba4:
    // 0x299ba4: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x299ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x299ba8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x299BA8u;
    {
        const bool branch_taken_0x299ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299BA8u;
            // 0x299bac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ba8) {
            ctx->pc = 0x299BF8u;
            goto label_299bf8;
        }
    }
    ctx->pc = 0x299BB0u;
    // 0x299bb0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x299bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x299bb4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x299bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x299bb8: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x299bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x299bbc: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x299bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x299bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x299bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299bc4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x299bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x299bc8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x299bc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x299bcc: 0xc0a662c  jal         func_2998B0
    ctx->pc = 0x299BCCu;
    SET_GPR_U32(ctx, 31, 0x299BD4u);
    ctx->pc = 0x299BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299BCCu;
            // 0x299bd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998B0u;
    if (runtime->hasFunction(0x2998B0u)) {
        auto targetFn = runtime->lookupFunction(0x2998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299BD4u; }
        if (ctx->pc != 0x299BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998b0_0x2998c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299BD4u; }
        if (ctx->pc != 0x299BD4u) { return; }
    }
    ctx->pc = 0x299BD4u;
    // 0x299bd4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x299bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x299bd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299bdc: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x299bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x299be0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299be4: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x299be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x299be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299bec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299bf0: 0x80a6628  j           func_2998A0
    ctx->pc = 0x299BF0u;
    ctx->pc = 0x299BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299BF0u;
            // 0x299bf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (runtime->hasFunction(0x2998A0u)) {
        auto targetFn = runtime->lookupFunction(0x2998A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2998a0_0x2998b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x299BF8u;
label_299bf8:
    // 0x299bf8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x299bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x299bfc: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x299bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x299c00: 0xc0a6628  jal         func_2998A0
    ctx->pc = 0x299C00u;
    SET_GPR_U32(ctx, 31, 0x299C08u);
    ctx->pc = 0x299C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299C00u;
            // 0x299c04: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (runtime->hasFunction(0x2998A0u)) {
        auto targetFn = runtime->lookupFunction(0x2998A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C08u; }
        if (ctx->pc != 0x299C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998a0_0x2998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C08u; }
        if (ctx->pc != 0x299C08u) { return; }
    }
    ctx->pc = 0x299C08u;
    // 0x299c08: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x299c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x299c0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299c10: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x299c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x299c14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299c18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c1c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x299c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x299c20: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x299c20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x299c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299c28: 0x80a662c  j           func_2998B0
    ctx->pc = 0x299C28u;
    ctx->pc = 0x299C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299C28u;
            // 0x299c2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998B0u;
    if (runtime->hasFunction(0x2998B0u)) {
        auto targetFn = runtime->lookupFunction(0x2998B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2998b0_0x2998c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x299C30u;
label_299c30:
    // 0x299c30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299c34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299c38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299c40: 0x3e00008  jr          $ra
    ctx->pc = 0x299C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299C40u;
            // 0x299c44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299B24u: goto label_299b24;
            case 0x299B68u: goto label_299b68;
            case 0x299B9Cu: goto label_299b9c;
            case 0x299BA0u: goto label_299ba0;
            case 0x299BA4u: goto label_299ba4;
            case 0x299BF8u: goto label_299bf8;
            case 0x299C30u: goto label_299c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299C48u;
}
