#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002079D8
// Address: 0x2079d8 - 0x207ef8
void sub_002079D8_0x2079d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002079D8_0x2079d8");
#endif

    ctx->pc = 0x2079d8u;

    // 0x2079d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2079d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2079dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2079dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2079e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2079e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2079e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2079e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2079e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2079e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079ec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2079ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2079f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2079f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2079f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2079f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2079f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2079fc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2079fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a00: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x207a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x207a04: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x207a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a08: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x207a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x207a0c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x207a0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a10: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x207a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x207a14: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x207a14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207a1c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x207a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207a20: 0x10e2001b  beq         $a3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x207A20u;
    {
        const bool branch_taken_0x207a20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x207A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A20u;
            // 0x207a24: 0x8fb70098  lw          $s7, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a20) {
            ctx->pc = 0x207A90u;
            goto label_207a90;
        }
    }
    ctx->pc = 0x207A28u;
    // 0x207a28: 0x8222001c  lb          $v0, 0x1C($s1)
    ctx->pc = 0x207a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x207a2c: 0x14e20126  bne         $a3, $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x207A2Cu;
    {
        const bool branch_taken_0x207a2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x207A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A2Cu;
            // 0x207a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a2c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207A34u;
    // 0x207a34: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x207a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x207a38: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207A38u;
    {
        const bool branch_taken_0x207a38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x207A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A38u;
            // 0x207a3c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a38) {
            ctx->pc = 0x207A50u;
            goto label_207a50;
        }
    }
    ctx->pc = 0x207A40u;
    // 0x207a40: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207A40u;
    {
        const bool branch_taken_0x207a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x207A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A40u;
            // 0x207a44: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a40) {
            ctx->pc = 0x207A70u;
            goto label_207a70;
        }
    }
    ctx->pc = 0x207A48u;
    // 0x207a48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x207A48u;
    {
        const bool branch_taken_0x207a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A48u;
            // 0x207a4c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a48) {
            ctx->pc = 0x207A94u;
            goto label_207a94;
        }
    }
    ctx->pc = 0x207A50u;
label_207a50:
    // 0x207a50: 0x8223001d  lb          $v1, 0x1D($s1)
    ctx->pc = 0x207a50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x207a54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x207a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207a58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207A58u;
    {
        const bool branch_taken_0x207a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A58u;
            // 0x207a5c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a58) {
            ctx->pc = 0x207A68u;
            goto label_207a68;
        }
    }
    ctx->pc = 0x207A60u;
label_207a60:
    // 0x207a60: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x207A60u;
    {
        const bool branch_taken_0x207a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A60u;
            // 0x207a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a60) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207A68u;
label_207a68:
    // 0x207a68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207A68u;
    {
        const bool branch_taken_0x207a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A68u;
            // 0x207a6c: 0x8e0300a4  lw          $v1, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a68) {
            ctx->pc = 0x207A74u;
            goto label_207a74;
        }
    }
    ctx->pc = 0x207A70u;
label_207a70:
    // 0x207a70: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_207a74:
    // 0x207a74: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x207a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x207a78: 0x14620113  bne         $v1, $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x207A78u;
    {
        const bool branch_taken_0x207a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x207A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A78u;
            // 0x207a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a78) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207A80u;
    // 0x207a80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x207a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x207a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x207a88: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x207A88u;
    {
        const bool branch_taken_0x207a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A88u;
            // 0x207a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a88) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207A90u;
label_207a90:
    // 0x207a90: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x207a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207a94:
    // 0x207a94: 0xc81024  and         $v0, $a2, $t0
    ctx->pc = 0x207a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x207a98: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x207A98u;
    {
        const bool branch_taken_0x207a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207A98u;
            // 0x207a9c: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a98) {
            ctx->pc = 0x207A60u;
            runtime->cooperativeGuestYield();
            goto label_207a60;
        }
    }
    ctx->pc = 0x207AA0u;
    // 0x207aa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x207AA0u;
    {
        const bool branch_taken_0x207aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AA0u;
            // 0x207aa4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207aa0) {
            ctx->pc = 0x207ADCu;
            goto label_207adc;
        }
    }
    ctx->pc = 0x207AA8u;
    // 0x207aa8: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x207aac: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x207aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x207ab0: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x207ab4: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x207ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x207ab8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x207ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x207abc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x207abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x207ac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207ac4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207ac8: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x207AC8u;
    {
        const bool branch_taken_0x207ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x207ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AC8u;
            // 0x207acc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ac8) {
            ctx->pc = 0x207AD4u;
            goto label_207ad4;
        }
    }
    ctx->pc = 0x207AD0u;
    // 0x207ad0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_207ad4:
    // 0x207ad4: 0x10e000fc  beqz        $a3, . + 4 + (0xFC << 2)
    ctx->pc = 0x207AD4u;
    {
        const bool branch_taken_0x207ad4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AD4u;
            // 0x207ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ad4) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207ADCu;
label_207adc:
    // 0x207adc: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x207adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
    // 0x207ae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207AE0u;
    {
        const bool branch_taken_0x207ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AE0u;
            // 0x207ae4: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ae0) {
            ctx->pc = 0x207AF8u;
            goto label_207af8;
        }
    }
    ctx->pc = 0x207AE8u;
    // 0x207ae8: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x207aec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x207aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x207af0: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x207AF0u;
    {
        const bool branch_taken_0x207af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AF0u;
            // 0x207af4: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207af0) {
            ctx->pc = 0x207A60u;
            runtime->cooperativeGuestYield();
            goto label_207a60;
        }
    }
    ctx->pc = 0x207AF8u;
label_207af8:
    // 0x207af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207AF8u;
    {
        const bool branch_taken_0x207af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207AF8u;
            // 0x207afc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207af8) {
            ctx->pc = 0x207B10u;
            goto label_207b10;
        }
    }
    ctx->pc = 0x207B00u;
    // 0x207b00: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x207b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x207b04: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x207b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x207b08: 0x1040ffd5  beqz        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x207B08u;
    {
        const bool branch_taken_0x207b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B08u;
            // 0x207b0c: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b08) {
            ctx->pc = 0x207A60u;
            runtime->cooperativeGuestYield();
            goto label_207a60;
        }
    }
    ctx->pc = 0x207B10u;
label_207b10:
    // 0x207b10: 0x82230021  lb          $v1, 0x21($s1)
    ctx->pc = 0x207b10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x207b14: 0x90422d3d  lbu         $v0, 0x2D3D($v0)
    ctx->pc = 0x207b14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x207b18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x207b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x207b1c: 0x144000ea  bnez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x207B1Cu;
    {
        const bool branch_taken_0x207b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B1Cu;
            // 0x207b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b1c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207B24u;
    // 0x207b24: 0x30c28000  andi        $v0, $a2, 0x8000
    ctx->pc = 0x207b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x207b28: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207B28u;
    {
        const bool branch_taken_0x207b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B28u;
            // 0x207b2c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b28) {
            ctx->pc = 0x207B70u;
            goto label_207b70;
        }
    }
    ctx->pc = 0x207B30u;
    // 0x207b30: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x207b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x207b34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207B34u;
    {
        const bool branch_taken_0x207b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B34u;
            // 0x207b38: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b34) {
            ctx->pc = 0x207B58u;
            goto label_207b58;
        }
    }
    ctx->pc = 0x207B3Cu;
    // 0x207b3c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x207b40: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207b44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x207b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x207b48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207B48u;
    {
        const bool branch_taken_0x207b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B48u;
            // 0x207b4c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b48) {
            ctx->pc = 0x207B70u;
            goto label_207b70;
        }
    }
    ctx->pc = 0x207B50u;
    // 0x207b50: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x207B50u;
    {
        const bool branch_taken_0x207b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B50u;
            // 0x207b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b50) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207B58u;
label_207b58:
    // 0x207b58: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x207b5c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207b60: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x207b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x207b64: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x207B64u;
    {
        const bool branch_taken_0x207b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B64u;
            // 0x207b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b64) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207B6Cu;
    // 0x207b6c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_207b70:
    // 0x207b70: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207b74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207B74u;
    {
        const bool branch_taken_0x207b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B74u;
            // 0x207b78: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b74) {
            ctx->pc = 0x207BC0u;
            goto label_207bc0;
        }
    }
    ctx->pc = 0x207B7Cu;
    // 0x207b7c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x207b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x207b80: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207b84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207B84u;
    {
        const bool branch_taken_0x207b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B84u;
            // 0x207b88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b84) {
            ctx->pc = 0x207BA8u;
            goto label_207ba8;
        }
    }
    ctx->pc = 0x207B8Cu;
    // 0x207b8c: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x207b90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207b94: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x207b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x207b98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207B98u;
    {
        const bool branch_taken_0x207b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207B98u;
            // 0x207b9c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b98) {
            ctx->pc = 0x207BC0u;
            goto label_207bc0;
        }
    }
    ctx->pc = 0x207BA0u;
    // 0x207ba0: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x207BA0u;
    {
        const bool branch_taken_0x207ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BA0u;
            // 0x207ba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba0) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207BA8u;
label_207ba8:
    // 0x207ba8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x207bac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207bb0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x207bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x207bb4: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x207BB4u;
    {
        const bool branch_taken_0x207bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BB4u;
            // 0x207bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bb4) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207BBCu;
    // 0x207bbc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_207bc0:
    // 0x207bc0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207bc4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207BC4u;
    {
        const bool branch_taken_0x207bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BC4u;
            // 0x207bc8: 0x30c20200  andi        $v0, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bc4) {
            ctx->pc = 0x207C10u;
            goto label_207c10;
        }
    }
    ctx->pc = 0x207BCCu;
    // 0x207bcc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x207bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x207bd0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207bd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207BD4u;
    {
        const bool branch_taken_0x207bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BD4u;
            // 0x207bd8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bd4) {
            ctx->pc = 0x207BF8u;
            goto label_207bf8;
        }
    }
    ctx->pc = 0x207BDCu;
    // 0x207bdc: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x207be0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207be4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x207be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x207be8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207BE8u;
    {
        const bool branch_taken_0x207be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BE8u;
            // 0x207bec: 0x30c20200  andi        $v0, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207be8) {
            ctx->pc = 0x207C10u;
            goto label_207c10;
        }
    }
    ctx->pc = 0x207BF0u;
    // 0x207bf0: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x207BF0u;
    {
        const bool branch_taken_0x207bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207BF0u;
            // 0x207bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bf0) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207BF8u;
label_207bf8:
    // 0x207bf8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x207bfc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x207bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x207c00: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x207c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x207c04: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x207C04u;
    {
        const bool branch_taken_0x207c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C04u;
            // 0x207c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c04) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207C0Cu;
    // 0x207c0c: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x207c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
label_207c10:
    // 0x207c10: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x207C10u;
    {
        const bool branch_taken_0x207c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c10) {
            ctx->pc = 0x207C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207C10u;
            // 0x207c14: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207C58u;
            goto label_207c58;
        }
    }
    ctx->pc = 0x207C18u;
    // 0x207c18: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x207c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x207c1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207C1Cu;
    {
        const bool branch_taken_0x207c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C1Cu;
            // 0x207c20: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c1c) {
            ctx->pc = 0x207C40u;
            goto label_207c40;
        }
    }
    ctx->pc = 0x207C24u;
    // 0x207c24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x207c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207c28: 0xc090c5c  jal         func_243170
    ctx->pc = 0x207C28u;
    SET_GPR_U32(ctx, 31, 0x207C30u);
    ctx->pc = 0x207C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C28u;
            // 0x207c2c: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C30u; }
        if (ctx->pc != 0x207C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C30u; }
        if (ctx->pc != 0x207C30u) { return; }
    }
    ctx->pc = 0x207C30u;
    // 0x207c30: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x207C30u;
    {
        const bool branch_taken_0x207c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c30) {
            ctx->pc = 0x207C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207C30u;
            // 0x207c34: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207C58u;
            goto label_207c58;
        }
    }
    ctx->pc = 0x207C38u;
    // 0x207c38: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x207C38u;
    {
        const bool branch_taken_0x207c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C38u;
            // 0x207c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c38) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207C40u;
label_207c40:
    // 0x207c40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x207c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207c44: 0xc090c5c  jal         func_243170
    ctx->pc = 0x207C44u;
    SET_GPR_U32(ctx, 31, 0x207C4Cu);
    ctx->pc = 0x207C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207C44u;
            // 0x207c48: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C4Cu; }
        if (ctx->pc != 0x207C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207C4Cu; }
        if (ctx->pc != 0x207C4Cu) { return; }
    }
    ctx->pc = 0x207C4Cu;
    // 0x207c4c: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x207C4Cu;
    {
        const bool branch_taken_0x207c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C4Cu;
            // 0x207c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c4c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207C54u;
    // 0x207c54: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x207c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207c58:
    // 0x207c58: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x207c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x207c5c: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x207C5Cu;
    {
        const bool branch_taken_0x207c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c5c) {
            ctx->pc = 0x207C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207C5Cu;
            // 0x207c60: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207CECu;
            goto label_207cec;
        }
    }
    ctx->pc = 0x207C64u;
    // 0x207c64: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x207c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x207c68: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x207c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x207c6c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207C6Cu;
    {
        const bool branch_taken_0x207c6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x207C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C6Cu;
            // 0x207c70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c6c) {
            ctx->pc = 0x207CB4u;
            goto label_207cb4;
        }
    }
    ctx->pc = 0x207C74u;
    // 0x207c74: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x207c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x207c78: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x207c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x207c7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x207C7Cu;
    {
        const bool branch_taken_0x207c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207C7Cu;
            // 0x207c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c7c) {
            ctx->pc = 0x207CB4u;
            goto label_207cb4;
        }
    }
    ctx->pc = 0x207C84u;
    // 0x207c84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x207c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x207c88: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x207c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x207c8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x207c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x207c90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x207c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x207c94: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x207c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x207c98: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x207c9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x207c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207ca4: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207CA4u;
    {
        const bool branch_taken_0x207ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x207CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CA4u;
            // 0x207ca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ca4) {
            ctx->pc = 0x207CB0u;
            goto label_207cb0;
        }
    }
    ctx->pc = 0x207CACu;
    // 0x207cac: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x207cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_207cb0:
    // 0x207cb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x207cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207cb4:
    // 0x207cb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207CB4u;
    {
        const bool branch_taken_0x207cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CB4u;
            // 0x207cb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cb4) {
            ctx->pc = 0x207CC4u;
            goto label_207cc4;
        }
    }
    ctx->pc = 0x207CBCu;
    // 0x207cbc: 0x8c4201b8  lw          $v0, 0x1B8($v0)
    ctx->pc = 0x207cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x207cc0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x207cc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_207cc4:
    // 0x207cc4: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x207cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x207cc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207CC8u;
    {
        const bool branch_taken_0x207cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207cc8) {
            ctx->pc = 0x207CE0u;
            goto label_207ce0;
        }
    }
    ctx->pc = 0x207CD0u;
    // 0x207cd0: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x207CD0u;
    {
        const bool branch_taken_0x207cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207cd0) {
            ctx->pc = 0x207CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207CD0u;
            // 0x207cd4: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207CECu;
            goto label_207cec;
        }
    }
    ctx->pc = 0x207CD8u;
    // 0x207cd8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x207CD8u;
    {
        const bool branch_taken_0x207cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CD8u;
            // 0x207cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cd8) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207CE0u;
label_207ce0:
    // 0x207ce0: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x207CE0u;
    {
        const bool branch_taken_0x207ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CE0u;
            // 0x207ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ce0) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207CE8u;
    // 0x207ce8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_207cec:
    // 0x207cec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x207CECu;
    {
        const bool branch_taken_0x207cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207CECu;
            // 0x207cf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cec) {
            ctx->pc = 0x207D78u;
            goto label_207d78;
        }
    }
    ctx->pc = 0x207CF4u;
    // 0x207cf4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x207cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x207cf8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x207cfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x207cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207d00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207D00u;
    {
        const bool branch_taken_0x207d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D00u;
            // 0x207d04: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d00) {
            ctx->pc = 0x207D10u;
            goto label_207d10;
        }
    }
    ctx->pc = 0x207D08u;
    // 0x207d08: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x207d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207d0c: 0x0  nop
    ctx->pc = 0x207d0cu;
    // NOP
label_207d10:
    // 0x207d10: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x207d10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x207d14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x207d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x207d18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x207d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x207d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207d20: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x207d20u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x207d24: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x207d24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x207d28: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x207d28u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x207d2c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x207d30: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x207d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x207d34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x207d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x207d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x207d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x207d40: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x207d40u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x207d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207d48: 0x0  nop
    ctx->pc = 0x207d48u;
    // NOP
    // 0x207d4c: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
    ctx->pc = 0x207D4Cu;
    {
        const bool branch_taken_0x207d4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D4Cu;
            // 0x207d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d4c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207D54u;
    // 0x207d54: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x207d54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x207d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207d5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x207d5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x207d60: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x207d60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x207d64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207d68: 0x0  nop
    ctx->pc = 0x207d68u;
    // NOP
    // 0x207d6c: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x207D6Cu;
    {
        const bool branch_taken_0x207d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x207D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D6Cu;
            // 0x207d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d6c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207D74u;
    // 0x207d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_207d78:
    // 0x207d78: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x207D78u;
    {
        const bool branch_taken_0x207d78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x207d78) {
            ctx->pc = 0x207D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207D78u;
            // 0x207d7c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207DA4u;
            goto label_207da4;
        }
    }
    ctx->pc = 0x207D80u;
    // 0x207d80: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x207d84: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x207d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207d88: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x207D88u;
    {
        const bool branch_taken_0x207d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D88u;
            // 0x207d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d88) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207D90u;
    // 0x207d90: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x207d94: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x207d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x207d98: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x207D98u;
    {
        const bool branch_taken_0x207d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207D98u;
            // 0x207d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d98) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207DA0u;
    // 0x207da0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_207da4:
    // 0x207da4: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x207da8: 0xc4800178  lwc1        $f0, 0x178($a0)
    ctx->pc = 0x207da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207dac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x207dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x207db0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x207db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x207db4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x207db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207db8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x207DB8u;
    {
        const bool branch_taken_0x207db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DB8u;
            // 0x207dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207db8) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207DC0u;
    // 0x207dc0: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x207dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x207dc4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x207dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x207dc8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x207DC8u;
    {
        const bool branch_taken_0x207dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DC8u;
            // 0x207dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dc8) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207DD0u;
    // 0x207dd0: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x207dd4: 0x12e20007  beq         $s7, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207DD4u;
    {
        const bool branch_taken_0x207dd4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x207DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DD4u;
            // 0x207dd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dd4) {
            ctx->pc = 0x207DF4u;
            goto label_207df4;
        }
    }
    ctx->pc = 0x207DDCu;
    // 0x207ddc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207de0: 0x12e30004  beq         $s7, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207DE0u;
    {
        const bool branch_taken_0x207de0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x207DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DE0u;
            // 0x207de4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207de0) {
            ctx->pc = 0x207DF4u;
            goto label_207df4;
        }
    }
    ctx->pc = 0x207DE8u;
    // 0x207de8: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x207DE8u;
    {
        const bool branch_taken_0x207de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DE8u;
            // 0x207dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207de8) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207DF0u;
    // 0x207df0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207df4:
    // 0x207df4: 0x82220020  lb          $v0, 0x20($s1)
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x207df8: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207DF8u;
    {
        const bool branch_taken_0x207df8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x207DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207DF8u;
            // 0x207dfc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207df8) {
            ctx->pc = 0x207E14u;
            goto label_207e14;
        }
    }
    ctx->pc = 0x207E00u;
    // 0x207e00: 0x52630004  beql        $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207E00u;
    {
        const bool branch_taken_0x207e00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x207e00) {
            ctx->pc = 0x207E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207E00u;
            // 0x207e04: 0x36100002  ori         $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E14u;
            goto label_207e14;
        }
    }
    ctx->pc = 0x207E08u;
    // 0x207e08: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x207E08u;
    {
        const bool branch_taken_0x207e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E08u;
            // 0x207e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e08) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207E10u;
    // 0x207e10: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x207e10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_207e14:
    // 0x207e14: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x207e18: 0x16830009  bne         $s4, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x207E18u;
    {
        const bool branch_taken_0x207e18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x207E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E18u;
            // 0x207e1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e18) {
            ctx->pc = 0x207E40u;
            goto label_207e40;
        }
    }
    ctx->pc = 0x207E20u;
    // 0x207e20: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207E20u;
    {
        const bool branch_taken_0x207e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x207e20) {
            ctx->pc = 0x207E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207E20u;
            // 0x207e24: 0x86220016  lh          $v0, 0x16($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E68u;
            goto label_207e68;
        }
    }
    ctx->pc = 0x207E28u;
    // 0x207e28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x207e2c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x207e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x207e30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x207E30u;
    {
        const bool branch_taken_0x207e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E30u;
            // 0x207e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e30) {
            ctx->pc = 0x207E64u;
            goto label_207e64;
        }
    }
    ctx->pc = 0x207E38u;
    // 0x207e38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x207E38u;
    {
        const bool branch_taken_0x207e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E38u;
            // 0x207e3c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e38) {
            ctx->pc = 0x207ECCu;
            goto label_207ecc;
        }
    }
    ctx->pc = 0x207E40u;
label_207e40:
    // 0x207e40: 0x52820008  beql        $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x207E40u;
    {
        const bool branch_taken_0x207e40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x207e40) {
            ctx->pc = 0x207E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207E40u;
            // 0x207e44: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E64u;
            goto label_207e64;
        }
    }
    ctx->pc = 0x207E48u;
    // 0x207e48: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207E48u;
    {
        const bool branch_taken_0x207e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207e48) {
            ctx->pc = 0x207E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207E48u;
            // 0x207e4c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E58u;
            goto label_207e58;
        }
    }
    ctx->pc = 0x207E50u;
    // 0x207e50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207E50u;
    {
        const bool branch_taken_0x207e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E50u;
            // 0x207e54: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e50) {
            ctx->pc = 0x207E64u;
            goto label_207e64;
        }
    }
    ctx->pc = 0x207E58u;
label_207e58:
    // 0x207e58: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x207e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x207e5c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x207E5Cu;
    {
        const bool branch_taken_0x207e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E5Cu;
            // 0x207e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e5c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207E64u;
label_207e64:
    // 0x207e64: 0x86220016  lh          $v0, 0x16($s1)
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_207e68:
    // 0x207e68: 0x12a20006  beq         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207E68u;
    {
        const bool branch_taken_0x207e68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x207E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E68u;
            // 0x207e6c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e68) {
            ctx->pc = 0x207E84u;
            goto label_207e84;
        }
    }
    ctx->pc = 0x207E70u;
    // 0x207e70: 0x52a30004  beql        $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207E70u;
    {
        const bool branch_taken_0x207e70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x207e70) {
            ctx->pc = 0x207E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207E70u;
            // 0x207e74: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207E84u;
            goto label_207e84;
        }
    }
    ctx->pc = 0x207E78u;
    // 0x207e78: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x207E78u;
    {
        const bool branch_taken_0x207e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E78u;
            // 0x207e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e78) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207E80u;
    // 0x207e80: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x207e80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_207e84:
    // 0x207e84: 0x8c8301b0  lw          $v1, 0x1B0($a0)
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x207e88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x207e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x207e8c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x207e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x207e90: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x207e94: 0x40f809  jalr        $v0
    ctx->pc = 0x207E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207E9Cu);
        ctx->pc = 0x207E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207E94u;
            // 0x207e98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207E9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207A50u: goto label_207a50;
            case 0x207A60u: goto label_207a60;
            case 0x207A68u: goto label_207a68;
            case 0x207A70u: goto label_207a70;
            case 0x207A74u: goto label_207a74;
            case 0x207A90u: goto label_207a90;
            case 0x207A94u: goto label_207a94;
            case 0x207AD4u: goto label_207ad4;
            case 0x207ADCu: goto label_207adc;
            case 0x207AF8u: goto label_207af8;
            case 0x207B10u: goto label_207b10;
            case 0x207B58u: goto label_207b58;
            case 0x207B70u: goto label_207b70;
            case 0x207BA8u: goto label_207ba8;
            case 0x207BC0u: goto label_207bc0;
            case 0x207BF8u: goto label_207bf8;
            case 0x207C10u: goto label_207c10;
            case 0x207C40u: goto label_207c40;
            case 0x207C58u: goto label_207c58;
            case 0x207CB0u: goto label_207cb0;
            case 0x207CB4u: goto label_207cb4;
            case 0x207CC4u: goto label_207cc4;
            case 0x207CE0u: goto label_207ce0;
            case 0x207CECu: goto label_207cec;
            case 0x207D10u: goto label_207d10;
            case 0x207D78u: goto label_207d78;
            case 0x207DA4u: goto label_207da4;
            case 0x207DF4u: goto label_207df4;
            case 0x207E14u: goto label_207e14;
            case 0x207E40u: goto label_207e40;
            case 0x207E58u: goto label_207e58;
            case 0x207E64u: goto label_207e64;
            case 0x207E68u: goto label_207e68;
            case 0x207E84u: goto label_207e84;
            case 0x207EBCu: goto label_207ebc;
            case 0x207EC4u: goto label_207ec4;
            case 0x207EC8u: goto label_207ec8;
            case 0x207ECCu: goto label_207ecc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207E9Cu; }
            if (ctx->pc != 0x207E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x207E9Cu;
    // 0x207e9c: 0x86250014  lh          $a1, 0x14($s1)
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x207ea0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207EA0u;
    {
        const bool branch_taken_0x207ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x207EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207EA0u;
            // 0x207ea4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea0) {
            ctx->pc = 0x207EBCu;
            goto label_207ebc;
        }
    }
    ctx->pc = 0x207EA8u;
    // 0x207ea8: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207EA8u;
    {
        const bool branch_taken_0x207ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x207ea8) {
            ctx->pc = 0x207EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207EA8u;
            // 0x207eac: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207EBCu;
            goto label_207ebc;
        }
    }
    ctx->pc = 0x207EB0u;
    // 0x207eb0: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x207EB0u;
    {
        const bool branch_taken_0x207eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x207EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207EB0u;
            // 0x207eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eb0) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207EB8u;
    // 0x207eb8: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x207eb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_207ebc:
    // 0x207ebc: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207EBCu;
    {
        const bool branch_taken_0x207ebc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ebc) {
            ctx->pc = 0x207EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207EBCu;
            // 0x207ec0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207EC4u;
            goto label_207ec4;
        }
    }
    ctx->pc = 0x207EC4u;
label_207ec4:
    // 0x207ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207ec8:
    // 0x207ec8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x207ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_207ecc:
    // 0x207ecc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x207eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x207ed0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x207ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x207ed4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x207ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207ed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x207ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207edc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x207edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207ee0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x207ee0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207ee4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x207ee4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207eec: 0x3e00008  jr          $ra
    ctx->pc = 0x207EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207EECu;
            // 0x207ef0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207A50u: goto label_207a50;
            case 0x207A60u: goto label_207a60;
            case 0x207A68u: goto label_207a68;
            case 0x207A70u: goto label_207a70;
            case 0x207A74u: goto label_207a74;
            case 0x207A90u: goto label_207a90;
            case 0x207A94u: goto label_207a94;
            case 0x207AD4u: goto label_207ad4;
            case 0x207ADCu: goto label_207adc;
            case 0x207AF8u: goto label_207af8;
            case 0x207B10u: goto label_207b10;
            case 0x207B58u: goto label_207b58;
            case 0x207B70u: goto label_207b70;
            case 0x207BA8u: goto label_207ba8;
            case 0x207BC0u: goto label_207bc0;
            case 0x207BF8u: goto label_207bf8;
            case 0x207C10u: goto label_207c10;
            case 0x207C40u: goto label_207c40;
            case 0x207C58u: goto label_207c58;
            case 0x207CB0u: goto label_207cb0;
            case 0x207CB4u: goto label_207cb4;
            case 0x207CC4u: goto label_207cc4;
            case 0x207CE0u: goto label_207ce0;
            case 0x207CECu: goto label_207cec;
            case 0x207D10u: goto label_207d10;
            case 0x207D78u: goto label_207d78;
            case 0x207DA4u: goto label_207da4;
            case 0x207DF4u: goto label_207df4;
            case 0x207E14u: goto label_207e14;
            case 0x207E40u: goto label_207e40;
            case 0x207E58u: goto label_207e58;
            case 0x207E64u: goto label_207e64;
            case 0x207E68u: goto label_207e68;
            case 0x207E84u: goto label_207e84;
            case 0x207EBCu: goto label_207ebc;
            case 0x207EC4u: goto label_207ec4;
            case 0x207EC8u: goto label_207ec8;
            case 0x207ECCu: goto label_207ecc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207EF4u;
    // 0x207ef4: 0x0  nop
    ctx->pc = 0x207ef4u;
    // NOP
}
