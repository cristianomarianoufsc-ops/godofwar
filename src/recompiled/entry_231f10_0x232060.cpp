#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_231f10
// Address: 0x231f10 - 0x232060
void entry_231f10_0x232060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_231f10_0x232060");
#endif

    ctx->pc = 0x231f10u;

    // 0x231f10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x231f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x231f14: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x231F14u;
    {
        const bool branch_taken_0x231f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f14) {
            ctx->pc = 0x231F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231F14u;
            // 0x231f18: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231FF8u;
            goto label_231ff8;
        }
    }
    ctx->pc = 0x231F1Cu;
    // 0x231f1c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x231f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x231f20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x231f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x231f24: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x231F24u;
    {
        const bool branch_taken_0x231f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F24u;
            // 0x231f28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f24) {
            ctx->pc = 0x231FA0u;
            goto label_231fa0;
        }
    }
    ctx->pc = 0x231F2Cu;
    // 0x231f2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x231f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231f30: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x231f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231f34: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x231f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231f38: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x231F38u;
    {
        const bool branch_taken_0x231f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F38u;
            // 0x231f3c: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f38) {
            ctx->pc = 0x231FA4u;
            goto label_231fa4;
        }
    }
    ctx->pc = 0x231F40u;
    // 0x231f40: 0x18c00011  blez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x231F40u;
    {
        const bool branch_taken_0x231f40 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x231F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F40u;
            // 0x231f44: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f40) {
            ctx->pc = 0x231F88u;
            goto label_231f88;
        }
    }
    ctx->pc = 0x231F48u;
label_231f48:
    // 0x231f48: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x231f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x231f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231f50: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x231f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x231f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231f58: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x231f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x231f5c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x231F5Cu;
    {
        const bool branch_taken_0x231f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f5c) {
            ctx->pc = 0x231F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231F5Cu;
            // 0x231f60: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231F8Cu;
            goto label_231f8c;
        }
    }
    ctx->pc = 0x231F64u;
    // 0x231f64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x231f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231f68: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x231f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231f6c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x231F6Cu;
    {
        const bool branch_taken_0x231f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f6c) {
            ctx->pc = 0x231F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231F6Cu;
            // 0x231f70: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231F8Cu;
            goto label_231f8c;
        }
    }
    ctx->pc = 0x231F74u;
    // 0x231f74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x231f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x231f78: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x231f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x231f7c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x231F7Cu;
    {
        const bool branch_taken_0x231f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F7Cu;
            // 0x231f80: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f7c) {
            ctx->pc = 0x231F48u;
            runtime->cooperativeGuestYield();
            goto label_231f48;
        }
    }
    ctx->pc = 0x231F84u;
    // 0x231f84: 0x0  nop
    ctx->pc = 0x231f84u;
    // NOP
label_231f88:
    // 0x231f88: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_231f8c:
    // 0x231f8c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x231f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x231f90: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x231f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x231f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231f98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x231F98u;
    {
        const bool branch_taken_0x231f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231F98u;
            // 0x231f9c: 0x8c48000c  lw          $t0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f98) {
            ctx->pc = 0x232008u;
            goto label_232008;
        }
    }
    ctx->pc = 0x231FA0u;
label_231fa0:
    // 0x231fa0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x231fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231fa4:
    // 0x231fa4: 0x58c00014  blezl       $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x231FA4u;
    {
        const bool branch_taken_0x231fa4 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x231fa4) {
            ctx->pc = 0x231FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231FA4u;
            // 0x231fa8: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231FF8u;
            goto label_231ff8;
        }
    }
    ctx->pc = 0x231FACu;
    // 0x231fac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x231facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_231fb0:
    // 0x231fb0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x231fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x231fb4: 0x2468000c  addiu       $t0, $v1, 0xC
    ctx->pc = 0x231fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x231fb8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x231fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x231fbc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x231fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231fc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x231fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231fc4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x231fc8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x231fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231fcc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x231FCCu;
    {
        const bool branch_taken_0x231fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231fcc) {
            ctx->pc = 0x231FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231FCCu;
            // 0x231fd0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231FE8u;
            goto label_231fe8;
        }
    }
    ctx->pc = 0x231FD4u;
    // 0x231fd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x231fd8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x231fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x231fdc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x231FDCu;
    {
        const bool branch_taken_0x231fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231fdc) {
            ctx->pc = 0x231FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231FDCu;
            // 0x231fe0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231FB0u;
            runtime->cooperativeGuestYield();
            goto label_231fb0;
        }
    }
    ctx->pc = 0x231FE4u;
    // 0x231fe4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231fe8:
    // 0x231fe8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x231fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x231fec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231FECu;
    {
        const bool branch_taken_0x231fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231FECu;
            // 0x231ff0: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fec) {
            ctx->pc = 0x232000u;
            goto label_232000;
        }
    }
    ctx->pc = 0x231FF4u;
    // 0x231ff4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231ff8:
    // 0x231ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231FF8u;
    {
        const bool branch_taken_0x231ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231FF8u;
            // 0x231ffc: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ff8) {
            ctx->pc = 0x232008u;
            goto label_232008;
        }
    }
    ctx->pc = 0x232000u;
label_232000:
    // 0x232000: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x232004: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232008:
    // 0x232008: 0x4e00012  bltz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x232008u;
    {
        const bool branch_taken_0x232008 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x23200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232008u;
            // 0x23200c: 0x74880  sll         $t1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232008) {
            ctx->pc = 0x232054u;
            goto label_232054;
        }
    }
    ctx->pc = 0x232010u;
label_232010:
    // 0x232010: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x232010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x232014: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x232014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x232018: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x232018u;
    {
        const bool branch_taken_0x232018 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x232018) {
            ctx->pc = 0x23201Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232018u;
            // 0x23201c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232040u;
            goto label_232040;
        }
    }
    ctx->pc = 0x232020u;
    // 0x232020: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x232020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x232024: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232028: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x232028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x23202c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23202Cu;
    {
        const bool branch_taken_0x23202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23202c) {
            ctx->pc = 0x232030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23202Cu;
            // 0x232030: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232040u;
            goto label_232040;
        }
    }
    ctx->pc = 0x232034u;
    // 0x232034: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x232034u;
    {
        const bool branch_taken_0x232034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232034u;
            // 0x232038: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232034) {
            ctx->pc = 0x232010u;
            runtime->cooperativeGuestYield();
            goto label_232010;
        }
    }
    ctx->pc = 0x23203Cu;
    // 0x23203c: 0x0  nop
    ctx->pc = 0x23203cu;
    // NOP
label_232040:
    // 0x232040: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x232040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x232044: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x232044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x232048: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x232048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x23204c: 0x4e1fff0  bgez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23204Cu;
    {
        const bool branch_taken_0x23204c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x232050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23204Cu;
            // 0x232050: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23204c) {
            ctx->pc = 0x232010u;
            runtime->cooperativeGuestYield();
            goto label_232010;
        }
    }
    ctx->pc = 0x232054u;
label_232054:
    // 0x232054: 0x3e00008  jr          $ra
    ctx->pc = 0x232054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232054u;
            // 0x232058: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231F48u: goto label_231f48;
            case 0x231F88u: goto label_231f88;
            case 0x231F8Cu: goto label_231f8c;
            case 0x231FA0u: goto label_231fa0;
            case 0x231FA4u: goto label_231fa4;
            case 0x231FB0u: goto label_231fb0;
            case 0x231FE8u: goto label_231fe8;
            case 0x231FF8u: goto label_231ff8;
            case 0x232000u: goto label_232000;
            case 0x232008u: goto label_232008;
            case 0x232010u: goto label_232010;
            case 0x232040u: goto label_232040;
            case 0x232054u: goto label_232054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23205Cu;
    // 0x23205c: 0x0  nop
    ctx->pc = 0x23205cu;
    // NOP
}
