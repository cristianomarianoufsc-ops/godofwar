#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144F18
// Address: 0x144f18 - 0x1451e0
void sub_00144F18_0x144f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144F18_0x144f18");
#endif

    ctx->pc = 0x144f18u;

    // 0x144f18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x144f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x144f1c: 0x2ca20013  sltiu       $v0, $a1, 0x13
    ctx->pc = 0x144f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x144f20: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x144f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x144f24: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x144f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x144f28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x144f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x144f30: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x144f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f34: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x144f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x144f38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144f3c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x144f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x144f40: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x144f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x144f44: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x144f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x144f48: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x144F48u;
    {
        const bool branch_taken_0x144f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F48u;
            // 0x144f4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f48) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x144F50u;
    // 0x144f50: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x144f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x144f54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x144f58: 0x24421860  addiu       $v0, $v0, 0x1860
    ctx->pc = 0x144f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6240));
    // 0x144f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x144f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144f60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x144f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144f64: 0x400008  jr          $v0
    ctx->pc = 0x144F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144F6Cu: goto label_144f6c;
            case 0x144F78u: goto label_144f78;
            case 0x144F84u: goto label_144f84;
            case 0x144F90u: goto label_144f90;
            case 0x144F9Cu: goto label_144f9c;
            case 0x144FC0u: goto label_144fc0;
            case 0x144FD0u: goto label_144fd0;
            case 0x144FDCu: goto label_144fdc;
            case 0x144FFCu: goto label_144ffc;
            case 0x145008u: goto label_145008;
            case 0x145014u: goto label_145014;
            case 0x145034u: goto label_145034;
            case 0x1450F0u: goto label_1450f0;
            case 0x14510Cu: goto label_14510c;
            case 0x14511Cu: goto label_14511c;
            case 0x145134u: goto label_145134;
            case 0x145160u: goto label_145160;
            case 0x145178u: goto label_145178;
            case 0x145194u: goto label_145194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144F6Cu;
label_144f6c:
    // 0x144f6c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144f70: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x144F70u;
    {
        const bool branch_taken_0x144f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F70u;
            // 0x144f74: 0xc6200038  lwc1        $f0, 0x38($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f70) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x144F78u;
label_144f78:
    // 0x144f78: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144f7c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x144F7Cu;
    {
        const bool branch_taken_0x144f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F7Cu;
            // 0x144f80: 0xc620003c  lwc1        $f0, 0x3C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f7c) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x144F84u;
label_144f84:
    // 0x144f84: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144f88: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x144F88u;
    {
        const bool branch_taken_0x144f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F88u;
            // 0x144f8c: 0xc6200040  lwc1        $f0, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f88) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x144F90u;
label_144f90:
    // 0x144f90: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144f94: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x144F94u;
    {
        const bool branch_taken_0x144f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F94u;
            // 0x144f98: 0xc6200044  lwc1        $f0, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f94) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x144F9Cu;
label_144f9c:
    // 0x144f9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x144f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144fa0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144fa4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x144fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x144fa8: 0x2462bff4  addiu       $v0, $v1, -0x400C
    ctx->pc = 0x144fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950900));
    // 0x144fac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x144facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x144fb0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x144fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x144fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144fb8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x144FB8u;
    {
        const bool branch_taken_0x144fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144FB8u;
            // 0x144fbc: 0xac62bff4  sw          $v0, -0x400C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294950900), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fb8) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x144FC0u;
label_144fc0:
    // 0x144fc0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x144fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x144fc4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x144fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144fc8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x144FC8u;
    {
        const bool branch_taken_0x144fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144FC8u;
            // 0x144fcc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fc8) {
            ctx->pc = 0x1451A8u;
            goto label_1451a8;
        }
    }
    ctx->pc = 0x144FD0u;
label_144fd0:
    // 0x144fd0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144fd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x144FD4u;
    {
        const bool branch_taken_0x144fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144FD4u;
            // 0x144fd8: 0xc6200050  lwc1        $f0, 0x50($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fd4) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x144FDCu;
label_144fdc:
    // 0x144fdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x144fe0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x144fe4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x144fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x144fe8: 0x2464bff0  addiu       $a0, $v1, -0x4010
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950896));
    // 0x144fec: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x144fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x144ff0: 0xa062bff0  sb          $v0, -0x4010($v1)
    ctx->pc = 0x144ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950896), (uint8_t)GPR_U32(ctx, 2));
    // 0x144ff4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x144FF4u;
    {
        const bool branch_taken_0x144ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144FF4u;
            // 0x144ff8: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ff4) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x144FFCu;
label_144ffc:
    // 0x144ffc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x144ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x145000: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145000u;
    {
        const bool branch_taken_0x145000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145000u;
            // 0x145004: 0xc6200048  lwc1        $f0, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145000) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x145008u;
label_145008:
    // 0x145008: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x145008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x14500c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14500Cu;
    {
        const bool branch_taken_0x14500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14500Cu;
            // 0x145010: 0xc620004c  lwc1        $f0, 0x4C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14500c) {
            ctx->pc = 0x14501Cu;
            goto label_14501c;
        }
    }
    ctx->pc = 0x145014u;
label_145014:
    // 0x145014: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x145014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x145018: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x145018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14501c:
    // 0x14501c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145020: 0x2464bff8  addiu       $a0, $v1, -0x4008
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950904));
    // 0x145024: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x145024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x145028: 0xe460bff8  swc1        $f0, -0x4008($v1)
    ctx->pc = 0x145028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294950904), bits); }
    // 0x14502c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x14502Cu;
    {
        const bool branch_taken_0x14502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14502Cu;
            // 0x145030: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14502c) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x145034u;
label_145034:
    // 0x145034: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x145034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x145038: 0x3c17002c  lui         $s7, 0x2C
    ctx->pc = 0x145038u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)44 << 16));
    // 0x14503c: 0xa2e07210  sb          $zero, 0x7210($s7)
    ctx->pc = 0x14503cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 29200), (uint8_t)GPR_U32(ctx, 0));
    // 0x145040: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x145040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145044: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x145044u;
    {
        const bool branch_taken_0x145044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x145048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145044u;
            // 0x145048: 0x3c10002c  lui         $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145044) {
            ctx->pc = 0x1450C8u;
            goto label_1450c8;
        }
    }
    ctx->pc = 0x14504Cu;
    // 0x14504c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_145050:
    // 0x145050: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x145050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x145054: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x145054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x145058: 0x40f809  jalr        $v0
    ctx->pc = 0x145058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145060u);
        ctx->pc = 0x14505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145058u;
            // 0x14505c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x145060u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144F6Cu: goto label_144f6c;
            case 0x144F78u: goto label_144f78;
            case 0x144F84u: goto label_144f84;
            case 0x144F90u: goto label_144f90;
            case 0x144F9Cu: goto label_144f9c;
            case 0x144FC0u: goto label_144fc0;
            case 0x144FD0u: goto label_144fd0;
            case 0x144FDCu: goto label_144fdc;
            case 0x144FFCu: goto label_144ffc;
            case 0x145008u: goto label_145008;
            case 0x145014u: goto label_145014;
            case 0x14501Cu: goto label_14501c;
            case 0x145034u: goto label_145034;
            case 0x145050u: goto label_145050;
            case 0x1450A4u: goto label_1450a4;
            case 0x1450B8u: goto label_1450b8;
            case 0x1450C8u: goto label_1450c8;
            case 0x1450F0u: goto label_1450f0;
            case 0x14510Cu: goto label_14510c;
            case 0x14511Cu: goto label_14511c;
            case 0x145134u: goto label_145134;
            case 0x145160u: goto label_145160;
            case 0x145178u: goto label_145178;
            case 0x145194u: goto label_145194;
            case 0x1451A8u: goto label_1451a8;
            case 0x1451B0u: goto label_1451b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x145060u; }
            if (ctx->pc != 0x145060u) { return; }
        }
        }
    }
    ctx->pc = 0x145060u;
    // 0x145060: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x145060u;
    {
        const bool branch_taken_0x145060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145060u;
            // 0x145064: 0x26f47210  addiu       $s4, $s7, 0x7210 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 29200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145060) {
            ctx->pc = 0x1450B8u;
            goto label_1450b8;
        }
    }
    ctx->pc = 0x145068u;
    // 0x145068: 0x8e560008  lw          $s6, 0x8($s2)
    ctx->pc = 0x145068u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14506c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x14506Cu;
    SET_GPR_U32(ctx, 31, 0x145074u);
    ctx->pc = 0x145070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14506Cu;
            // 0x145070: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145074u; }
        if (ctx->pc != 0x145074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145074u; }
        if (ctx->pc != 0x145074u) { return; }
    }
    ctx->pc = 0x145074u;
    // 0x145074: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x145074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145078: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x145078u;
    SET_GPR_U32(ctx, 31, 0x145080u);
    ctx->pc = 0x14507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145078u;
            // 0x14507c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145080u; }
        if (ctx->pc != 0x145080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145080u; }
        if (ctx->pc != 0x145080u) { return; }
    }
    ctx->pc = 0x145080u;
    // 0x145080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145080u;
    {
        const bool branch_taken_0x145080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145080u;
            // 0x145084: 0x26900001  addiu       $s0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145080) {
            ctx->pc = 0x1450A4u;
            goto label_1450a4;
        }
    }
    ctx->pc = 0x145088u;
    // 0x145088: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14508c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x14508Cu;
    SET_GPR_U32(ctx, 31, 0x145094u);
    ctx->pc = 0x145090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14508Cu;
            // 0x145090: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145094u; }
        if (ctx->pc != 0x145094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145094u; }
        if (ctx->pc != 0x145094u) { return; }
    }
    ctx->pc = 0x145094u;
    // 0x145094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145098: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14509c: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x14509Cu;
    SET_GPR_U32(ctx, 31, 0x1450A4u);
    ctx->pc = 0x1450A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14509Cu;
            // 0x1450a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450A4u; }
        if (ctx->pc != 0x1450A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450A4u; }
        if (ctx->pc != 0x1450A4u) { return; }
    }
    ctx->pc = 0x1450A4u;
label_1450a4:
    // 0x1450a4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1450a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1450a8: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x1450a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1450ac: 0xa2e27210  sb          $v0, 0x7210($s7)
    ctx->pc = 0x1450acu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 29200), (uint8_t)GPR_U32(ctx, 2));
    // 0x1450b0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1450B0u;
    SET_GPR_U32(ctx, 31, 0x1450B8u);
    ctx->pc = 0x1450B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450B0u;
            // 0x1450b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450B8u; }
        if (ctx->pc != 0x1450B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450B8u; }
        if (ctx->pc != 0x1450B8u) { return; }
    }
    ctx->pc = 0x1450B8u;
label_1450b8:
    // 0x1450b8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1450b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1450bc: 0x5640ffe4  bnel        $s2, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1450BCu;
    {
        const bool branch_taken_0x1450bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1450bc) {
            ctx->pc = 0x1450C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1450BCu;
            // 0x1450c0: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145050u;
            runtime->cooperativeGuestYield();
            goto label_145050;
        }
    }
    ctx->pc = 0x1450C4u;
    // 0x1450c4: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1450c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
label_1450c8:
    // 0x1450c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1450c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1450cc: 0x26107210  addiu       $s0, $s0, 0x7210
    ctx->pc = 0x1450ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29200));
    // 0x1450d0: 0x24a51800  addiu       $a1, $a1, 0x1800
    ctx->pc = 0x1450d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6144));
    // 0x1450d4: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x1450D4u;
    SET_GPR_U32(ctx, 31, 0x1450DCu);
    ctx->pc = 0x1450D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450D4u;
            // 0x1450d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450DCu; }
        if (ctx->pc != 0x1450DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450DCu; }
        if (ctx->pc != 0x1450DCu) { return; }
    }
    ctx->pc = 0x1450DCu;
    // 0x1450dc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1450dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1450e0: 0xc0a253d  jal         func_2894F4
    ctx->pc = 0x1450E0u;
    SET_GPR_U32(ctx, 31, 0x1450E8u);
    ctx->pc = 0x1450E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450E0u;
            // 0x1450e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2894F4u;
    if (runtime->hasFunction(0x2894F4u)) {
        auto targetFn = runtime->lookupFunction(0x2894F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450E8u; }
        if (ctx->pc != 0x1450E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002894F4_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450E8u; }
        if (ctx->pc != 0x1450E8u) { return; }
    }
    ctx->pc = 0x1450E8u;
    // 0x1450e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1450E8u;
    {
        const bool branch_taken_0x1450e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1450E8u;
            // 0x1450ec: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450e8) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x1450F0u;
label_1450f0:
    // 0x1450f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1450f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1450f4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1450f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1450f8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1450f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1450fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1450fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145100: 0xa062bff0  sb          $v0, -0x4010($v1)
    ctx->pc = 0x145100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950896), (uint8_t)GPR_U32(ctx, 2));
    // 0x145104: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x145104u;
    {
        const bool branch_taken_0x145104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145104u;
            // 0x145108: 0x2463bff0  addiu       $v1, $v1, -0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145104) {
            ctx->pc = 0x1451A8u;
            goto label_1451a8;
        }
    }
    ctx->pc = 0x14510Cu;
label_14510c:
    // 0x14510c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145110: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x145110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x145114: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x145114u;
    {
        const bool branch_taken_0x145114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145114u;
            // 0x145118: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145114) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x14511Cu;
label_14511c:
    // 0x14511c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x145120: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x145120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x145124: 0xa0407210  sb          $zero, 0x7210($v0)
    ctx->pc = 0x145124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29200), (uint8_t)GPR_U32(ctx, 0));
    // 0x145128: 0x24427210  addiu       $v0, $v0, 0x7210
    ctx->pc = 0x145128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29200));
    // 0x14512c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14512Cu;
    {
        const bool branch_taken_0x14512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14512Cu;
            // 0x145130: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14512c) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x145134u;
label_145134:
    // 0x145134: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x145134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x145138: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x145138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x14513c: 0x24461850  addiu       $a2, $v0, 0x1850
    ctx->pc = 0x14513cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
    // 0x145140: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x145140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x145144: 0xdc451850  ld          $a1, 0x1850($v0)
    ctx->pc = 0x145144u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6224)));
    // 0x145148: 0x24647210  addiu       $a0, $v1, 0x7210
    ctx->pc = 0x145148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29200));
    // 0x14514c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x145150: 0xfc657210  sd          $a1, 0x7210($v1)
    ctx->pc = 0x145150u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 29200), GPR_U64(ctx, 5));
    // 0x145154: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x145154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x145158: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x145158u;
    {
        const bool branch_taken_0x145158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145158u;
            // 0x14515c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145158) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x145160u;
label_145160:
    // 0x145160: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x145164: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x145164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x145168: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x145168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x14516c: 0x24420d34  addiu       $v0, $v0, 0xD34
    ctx->pc = 0x14516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3380));
    // 0x145170: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x145170u;
    {
        const bool branch_taken_0x145170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145170u;
            // 0x145174: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145170) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x145178u;
label_145178:
    // 0x145178: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x145178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14517c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x14517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x145180: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x145180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x145184: 0x2462bff0  addiu       $v0, $v1, -0x4010
    ctx->pc = 0x145184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950896));
    // 0x145188: 0xa060bff0  sb          $zero, -0x4010($v1)
    ctx->pc = 0x145188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950896), (uint8_t)GPR_U32(ctx, 0));
    // 0x14518c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14518Cu;
    {
        const bool branch_taken_0x14518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14518Cu;
            // 0x145190: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14518c) {
            ctx->pc = 0x1451B0u;
            goto label_1451b0;
        }
    }
    ctx->pc = 0x145194u;
label_145194:
    // 0x145194: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x145194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x145198: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x145198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x14519c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14519cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1451a0: 0x2443bff4  addiu       $v1, $v0, -0x400C
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950900));
    // 0x1451a4: 0xac40bff4  sw          $zero, -0x400C($v0)
    ctx->pc = 0x1451a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950900), GPR_U32(ctx, 0));
label_1451a8:
    // 0x1451a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1451a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1451ac: 0x0  nop
    ctx->pc = 0x1451acu;
    // NOP
label_1451b0:
    // 0x1451b0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1451b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1451b4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1451b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1451b8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1451b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1451bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1451bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1451c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1451c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1451c4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1451c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1451c8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1451c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451cc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1451ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1451d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1451D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451D4u;
            // 0x1451d8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144F6Cu: goto label_144f6c;
            case 0x144F78u: goto label_144f78;
            case 0x144F84u: goto label_144f84;
            case 0x144F90u: goto label_144f90;
            case 0x144F9Cu: goto label_144f9c;
            case 0x144FC0u: goto label_144fc0;
            case 0x144FD0u: goto label_144fd0;
            case 0x144FDCu: goto label_144fdc;
            case 0x144FFCu: goto label_144ffc;
            case 0x145008u: goto label_145008;
            case 0x145014u: goto label_145014;
            case 0x14501Cu: goto label_14501c;
            case 0x145034u: goto label_145034;
            case 0x145050u: goto label_145050;
            case 0x1450A4u: goto label_1450a4;
            case 0x1450B8u: goto label_1450b8;
            case 0x1450C8u: goto label_1450c8;
            case 0x1450F0u: goto label_1450f0;
            case 0x14510Cu: goto label_14510c;
            case 0x14511Cu: goto label_14511c;
            case 0x145134u: goto label_145134;
            case 0x145160u: goto label_145160;
            case 0x145178u: goto label_145178;
            case 0x145194u: goto label_145194;
            case 0x1451A8u: goto label_1451a8;
            case 0x1451B0u: goto label_1451b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1451DCu;
    // 0x1451dc: 0x0  nop
    ctx->pc = 0x1451dcu;
    // NOP
}
