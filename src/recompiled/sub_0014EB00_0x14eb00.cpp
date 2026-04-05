#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014EB00
// Address: 0x14eb00 - 0x14ed00
void sub_0014EB00_0x14eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EB00_0x14eb00");
#endif

    ctx->pc = 0x14eb00u;

    // 0x14eb00: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14eb00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14eb04: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14eb04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14eb08: 0x8d221904  lw          $v0, 0x1904($t1)
    ctx->pc = 0x14eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6404)));
    // 0x14eb0c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14eb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14eb14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14eb18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14eb1c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14eb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14eb20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14eb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14eb24: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14EB24u;
    {
        const bool branch_taken_0x14eb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB24u;
            // 0x14eb28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb24) {
            ctx->pc = 0x14EB50u;
            goto label_14eb50;
        }
    }
    ctx->pc = 0x14EB2Cu;
    // 0x14eb2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14eb30: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14eb34: 0x8c42190c  lw          $v0, 0x190C($v0)
    ctx->pc = 0x14eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6412)));
    // 0x14eb38: 0xad271904  sw          $a3, 0x1904($t1)
    ctx->pc = 0x14eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6404), GPR_U32(ctx, 7));
    // 0x14eb3c: 0xac671908  sw          $a3, 0x1908($v1)
    ctx->pc = 0x14eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6408), GPR_U32(ctx, 7));
    // 0x14eb40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14eb44: 0xace7004c  sw          $a3, 0x4C($a3)
    ctx->pc = 0x14eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 7));
    // 0x14eb48: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x14EB48u;
    {
        const bool branch_taken_0x14eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB48u;
            // 0x14eb4c: 0xace70048  sw          $a3, 0x48($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb48) {
            ctx->pc = 0x14ECDCu;
            goto label_14ecdc;
        }
    }
    ctx->pc = 0x14EB50u;
label_14eb50:
    // 0x14eb50: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x14eb50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x14eb54: 0x8d031908  lw          $v1, 0x1908($t0)
    ctx->pc = 0x14eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6408)));
    // 0x14eb58: 0x8c660044  lw          $a2, 0x44($v1)
    ctx->pc = 0x14eb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x14eb5c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EB5Cu;
    {
        const bool branch_taken_0x14eb5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB5Cu;
            // 0x14eb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb5c) {
            ctx->pc = 0x14EB70u;
            goto label_14eb70;
        }
    }
    ctx->pc = 0x14EB64u;
    // 0x14eb64: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x14eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14eb68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x14eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x14eb6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14eb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14eb70:
    // 0x14eb70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EB70u;
    {
        const bool branch_taken_0x14eb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb70) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB78u;
    // 0x14eb78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14EB78u;
    {
        const bool branch_taken_0x14eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB78u;
            // 0x14eb7c: 0x84c60000  lh          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb78) {
            ctx->pc = 0x14EB88u;
            goto label_14eb88;
        }
    }
    ctx->pc = 0x14EB80u;
label_14eb80:
    // 0x14eb80: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x14eb80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x14eb84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x14eb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_14eb88:
    // 0x14eb88: 0x8d031908  lw          $v1, 0x1908($t0)
    ctx->pc = 0x14eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6408)));
    // 0x14eb8c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x14eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14eb90: 0x94e40026  lhu         $a0, 0x26($a3)
    ctx->pc = 0x14eb90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x14eb94: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14eb98: 0x94630026  lhu         $v1, 0x26($v1)
    ctx->pc = 0x14eb98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x14eb9c: 0x24423128  addiu       $v0, $v0, 0x3128
    ctx->pc = 0x14eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12584));
    // 0x14eba0: 0x855018  mult        $t2, $a0, $a1
    ctx->pc = 0x14eba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x14eba4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x14eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x14eba8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x14eba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14ebac: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x14ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x14ebb0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14ebb4: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x14ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x14ebb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ebbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ebc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ebc4: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14ebc8: 0x2449821  addu        $s3, $s2, $a0
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x14ebcc: 0x14850009  bne         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EBCCu;
    {
        const bool branch_taken_0x14ebcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x14EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBCCu;
            // 0x14ebd0: 0x2e630200  sltiu       $v1, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebcc) {
            ctx->pc = 0x14EBF4u;
            goto label_14ebf4;
        }
    }
    ctx->pc = 0x14EBD4u;
    // 0x14ebd4: 0x240201f0  addiu       $v0, $zero, 0x1F0
    ctx->pc = 0x14ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x14ebd8: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x14ebd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14ebdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EBDCu;
    {
        const bool branch_taken_0x14ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBDCu;
            // 0x14ebe0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebdc) {
            ctx->pc = 0x14EBF4u;
            goto label_14ebf4;
        }
    }
    ctx->pc = 0x14EBE4u;
    // 0x14ebe4: 0x8c42190c  lw          $v0, 0x190C($v0)
    ctx->pc = 0x14ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6412)));
    // 0x14ebe8: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x14ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14ebec: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x14ebecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14ebf0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x14ebf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_14ebf4:
    // 0x14ebf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EBF4u;
    {
        const bool branch_taken_0x14ebf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBF4u;
            // 0x14ebf8: 0x8d021908  lw          $v0, 0x1908($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebf4) {
            ctx->pc = 0x14EC14u;
            goto label_14ec14;
        }
    }
    ctx->pc = 0x14EBFCu;
    // 0x14ebfc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x14ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x14ec00: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x14ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
    // 0x14ec04: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x14ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
    // 0x14ec08: 0xac67004c  sw          $a3, 0x4C($v1)
    ctx->pc = 0x14ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 7));
    // 0x14ec0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14EC0Cu;
    {
        const bool branch_taken_0x14ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC0Cu;
            // 0x14ec10: 0xac470048  sw          $a3, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec0c) {
            ctx->pc = 0x14EC3Cu;
            goto label_14ec3c;
        }
    }
    ctx->pc = 0x14EC14u;
label_14ec14:
    // 0x14ec14: 0x8d221904  lw          $v0, 0x1904($t1)
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6404)));
    // 0x14ec18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14ec1c: 0x8c72190c  lw          $s2, 0x190C($v1)
    ctx->pc = 0x14ec1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6412)));
    // 0x14ec20: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x14ec24: 0xace20048  sw          $v0, 0x48($a3)
    ctx->pc = 0x14ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 2));
    // 0x14ec28: 0x2449821  addu        $s3, $s2, $a0
    ctx->pc = 0x14ec28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x14ec2c: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x14ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x14ec30: 0xac670048  sw          $a3, 0x48($v1)
    ctx->pc = 0x14ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 7));
    // 0x14ec34: 0xac47004c  sw          $a3, 0x4C($v0)
    ctx->pc = 0x14ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 7));
    // 0x14ec38: 0xad271904  sw          $a3, 0x1904($t1)
    ctx->pc = 0x14ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6404), GPR_U32(ctx, 7));
label_14ec3c:
    // 0x14ec3c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x14ec40: 0x8cf00048  lw          $s0, 0x48($a3)
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x14ec44: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14ec48: 0x8e831904  lw          $v1, 0x1904($s4)
    ctx->pc = 0x14ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6404)));
    // 0x14ec4c: 0x12030022  beq         $s0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14EC4Cu;
    {
        const bool branch_taken_0x14ec4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x14EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC4Cu;
            // 0x14ec50: 0xac471908  sw          $a3, 0x1908($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6408), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec4c) {
            ctx->pc = 0x14ECD8u;
            goto label_14ecd8;
        }
    }
    ctx->pc = 0x14EC54u;
    // 0x14ec54: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x14ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_14ec58:
    // 0x14ec58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ec58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EC5Cu;
    {
        const bool branch_taken_0x14ec5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC5Cu;
            // 0x14ec60: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec5c) {
            ctx->pc = 0x14EC70u;
            goto label_14ec70;
        }
    }
    ctx->pc = 0x14EC64u;
    // 0x14ec64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14ec68: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x14ec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x14ec6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14ec6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14ec70:
    // 0x14ec70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EC70u;
    {
        const bool branch_taken_0x14ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec70) {
            ctx->pc = 0x14EC80u;
            goto label_14ec80;
        }
    }
    ctx->pc = 0x14EC78u;
    // 0x14ec78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14EC78u;
    {
        const bool branch_taken_0x14ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC78u;
            // 0x14ec7c: 0x84620000  lh          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec78) {
            ctx->pc = 0x14EC88u;
            goto label_14ec88;
        }
    }
    ctx->pc = 0x14EC80u;
label_14ec80:
    // 0x14ec80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14ec84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x14ec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14ec88:
    // 0x14ec88: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x14ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x14ec8c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x14ec8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14ec90: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EC90u;
    {
        const bool branch_taken_0x14ec90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC90u;
            // 0x14ec94: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec90) {
            ctx->pc = 0x14ECD8u;
            goto label_14ecd8;
        }
    }
    ctx->pc = 0x14EC98u;
    // 0x14ec98: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x14ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x14ec9c: 0x8c4416f8  lw          $a0, 0x16F8($v0)
    ctx->pc = 0x14ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5880)));
    // 0x14eca0: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x14eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x14eca4: 0xac710048  sw          $s1, 0x48($v1)
    ctx->pc = 0x14eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 17));
    // 0x14eca8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x14eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x14ecac: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x14ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x14ecb0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x14ECB0u;
    SET_GPR_U32(ctx, 31, 0x14ECB8u);
    ctx->pc = 0x14ECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECB0u;
            // 0x14ecb4: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ECB8u; }
        if (ctx->pc != 0x14ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ECB8u; }
        if (ctx->pc != 0x14ECB8u) { return; }
    }
    ctx->pc = 0x14ECB8u;
    // 0x14ecb8: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14ecb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14ecbc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x14ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x14ecc0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14ecc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x14ecc4: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x14ecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ecc8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x14ecc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eccc: 0x8e821904  lw          $v0, 0x1904($s4)
    ctx->pc = 0x14ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6404)));
    // 0x14ecd0: 0x5602ffe1  bnel        $s0, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14ECD0u;
    {
        const bool branch_taken_0x14ecd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ecd0) {
            ctx->pc = 0x14ECD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECD0u;
            // 0x14ecd4: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14EC58u;
            runtime->cooperativeGuestYield();
            goto label_14ec58;
        }
    }
    ctx->pc = 0x14ECD8u;
label_14ecd8:
    // 0x14ecd8: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x14ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_14ecdc:
    // 0x14ecdc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14ecdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ece0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14ece0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ece4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ece4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ece8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14ece8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ecec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14ececu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ecf4: 0x3e00008  jr          $ra
    ctx->pc = 0x14ECF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECF4u;
            // 0x14ecf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EB50u: goto label_14eb50;
            case 0x14EB70u: goto label_14eb70;
            case 0x14EB80u: goto label_14eb80;
            case 0x14EB88u: goto label_14eb88;
            case 0x14EBF4u: goto label_14ebf4;
            case 0x14EC14u: goto label_14ec14;
            case 0x14EC3Cu: goto label_14ec3c;
            case 0x14EC58u: goto label_14ec58;
            case 0x14EC70u: goto label_14ec70;
            case 0x14EC80u: goto label_14ec80;
            case 0x14EC88u: goto label_14ec88;
            case 0x14ECD8u: goto label_14ecd8;
            case 0x14ECDCu: goto label_14ecdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14ECFCu;
    // 0x14ecfc: 0x0  nop
    ctx->pc = 0x14ecfcu;
    // NOP
}
