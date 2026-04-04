#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149958
// Address: 0x149958 - 0x149b10
void sub_00149958_0x149958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149958_0x149958");
#endif

    ctx->pc = 0x149958u;

    // 0x149958: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x149958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14995c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x149960: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x149960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x149964: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x149964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149968: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x149968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14996c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14996cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149970: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x149970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x149974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x149974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14997c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14997cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149980: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x149980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x149984: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x149984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149988: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x149988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x14998c: 0x30f5ffff  andi        $s5, $a3, 0xFFFF
    ctx->pc = 0x14998cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x149990: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x149990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x149994: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x149994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14999c: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x14999cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1499a0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1499A0u;
    {
        const bool branch_taken_0x1499a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499A0u;
            // 0x1499a4: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499a0) {
            ctx->pc = 0x149ABCu;
            goto label_149abc;
        }
    }
    ctx->pc = 0x1499A8u;
    // 0x1499a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1499a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1499ac: 0x0  nop
    ctx->pc = 0x1499acu;
    // NOP
label_1499b0:
    // 0x1499b0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1499b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1499b4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1499b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1499b8: 0x94c4000c  lhu         $a0, 0xC($a2)
    ctx->pc = 0x1499b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1499bc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1499bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1499c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1499C0u;
    {
        const bool branch_taken_0x1499c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1499C0u;
            // 0x1499c4: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499c0) {
            ctx->pc = 0x1499DCu;
            goto label_1499dc;
        }
    }
    ctx->pc = 0x1499C8u;
    // 0x1499c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1499cc: 0x8e030d10  lw          $v1, 0xD10($s0)
    ctx->pc = 0x1499ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3344)));
    // 0x1499d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1499d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1499d4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1499d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1499d8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1499d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1499dc:
    // 0x1499dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1499DCu;
    {
        const bool branch_taken_0x1499dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1499dc) {
            ctx->pc = 0x1499E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1499DCu;
            // 0x1499e0: 0x8e020cfc  lw          $v0, 0xCFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3324)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1499F8u;
            goto label_1499f8;
        }
    }
    ctx->pc = 0x1499E4u;
    // 0x1499e4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1499e8: 0x8e030d14  lw          $v1, 0xD14($s0)
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3348)));
    // 0x1499ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1499ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1499f0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1499f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1499f4: 0x8e020cfc  lw          $v0, 0xCFC($s0)
    ctx->pc = 0x1499f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3324)));
label_1499f8:
    // 0x1499f8: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1499F8u;
    {
        const bool branch_taken_0x1499f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1499f8) {
            ctx->pc = 0x1499FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1499F8u;
            // 0x1499fc: 0x96420008  lhu         $v0, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149AACu;
            goto label_149aac;
        }
    }
    ctx->pc = 0x149A00u;
    // 0x149a00: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x149a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x149a04: 0x8e020d18  lw          $v0, 0xD18($s0)
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3352)));
    // 0x149a08: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x149a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x149a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A0Cu;
    {
        const bool branch_taken_0x149a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A0Cu;
            // 0x149a10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a0c) {
            ctx->pc = 0x149A20u;
            goto label_149a20;
        }
    }
    ctx->pc = 0x149A14u;
    // 0x149a14: 0x30820005  andi        $v0, $a0, 0x5
    ctx->pc = 0x149a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)5);
    // 0x149a18: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x149a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x149a1c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x149a1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_149a20:
    // 0x149a20: 0x8e020d20  lw          $v0, 0xD20($s0)
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3360)));
    // 0x149a24: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x149a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x149a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A28u;
    {
        const bool branch_taken_0x149a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A28u;
            // 0x149a2c: 0x30820006  andi        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a28) {
            ctx->pc = 0x149A3Cu;
            goto label_149a3c;
        }
    }
    ctx->pc = 0x149A30u;
    // 0x149a30: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x149a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x149a34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x149a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x149a38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149a3c:
    // 0x149a3c: 0x8e020d1c  lw          $v0, 0xD1C($s0)
    ctx->pc = 0x149a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3356)));
    // 0x149a40: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x149a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x149a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A44u;
    {
        const bool branch_taken_0x149a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A44u;
            // 0x149a48: 0x30820009  andi        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a44) {
            ctx->pc = 0x149A58u;
            goto label_149a58;
        }
    }
    ctx->pc = 0x149A4Cu;
    // 0x149a4c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x149a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x149a50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x149a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x149a54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149a58:
    // 0x149a58: 0x8e020d24  lw          $v0, 0xD24($s0)
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3364)));
    // 0x149a5c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x149a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x149a60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A60u;
    {
        const bool branch_taken_0x149a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A60u;
            // 0x149a64: 0x3082000a  andi        $v0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a60) {
            ctx->pc = 0x149A74u;
            goto label_149a74;
        }
    }
    ctx->pc = 0x149A68u;
    // 0x149a68: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x149a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x149a6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x149a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x149a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x149a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_149a74:
    // 0x149a74: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x149a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x149a78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149A78u;
    {
        const bool branch_taken_0x149a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149a78) {
            ctx->pc = 0x149A94u;
            goto label_149a94;
        }
    }
    ctx->pc = 0x149A80u;
    // 0x149a80: 0x8e020d00  lw          $v0, 0xD00($s0)
    ctx->pc = 0x149a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3328)));
    // 0x149a84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149A84u;
    {
        const bool branch_taken_0x149a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149a84) {
            ctx->pc = 0x149A94u;
            goto label_149a94;
        }
    }
    ctx->pc = 0x149A8Cu;
    // 0x149a8c: 0xae000d00  sw          $zero, 0xD00($s0)
    ctx->pc = 0x149a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3328), GPR_U32(ctx, 0));
    // 0x149a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149a94:
    // 0x149a94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x149A94u;
    {
        const bool branch_taken_0x149a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149A94u;
            // 0x149a98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a94) {
            ctx->pc = 0x149AA8u;
            goto label_149aa8;
        }
    }
    ctx->pc = 0x149A9Cu;
    // 0x149a9c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x149aa0: 0xc051830  jal         func_1460C0
    ctx->pc = 0x149AA0u;
    SET_GPR_U32(ctx, 31, 0x149AA8u);
    ctx->pc = 0x149AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149AA0u;
            // 0x149aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1460C0u;
    if (runtime->hasFunction(0x1460C0u)) {
        auto targetFn = runtime->lookupFunction(0x1460C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AA8u; }
        if (ctx->pc != 0x149AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001460C0_0x1460c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AA8u; }
        if (ctx->pc != 0x149AA8u) { return; }
    }
    ctx->pc = 0x149AA8u;
label_149aa8:
    // 0x149aa8: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x149aa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_149aac:
    // 0x149aac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x149ab0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x149ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x149ab4: 0x5440ffbe  bnel        $v0, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x149AB4u;
    {
        const bool branch_taken_0x149ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ab4) {
            ctx->pc = 0x149AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149AB4u;
            // 0x149ab8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1499B0u;
            runtime->cooperativeGuestYield();
            goto label_1499b0;
        }
    }
    ctx->pc = 0x149ABCu;
label_149abc:
    // 0x149abc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x149abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ac0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149ac4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149ac8: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x149ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x149acc: 0x11580a  movz        $t3, $zero, $s1
    ctx->pc = 0x149accu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x149ad0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x149ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ad4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x149ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ad8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x149ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149adc: 0xc051d48  jal         func_147520
    ctx->pc = 0x149ADCu;
    SET_GPR_U32(ctx, 31, 0x149AE4u);
    ctx->pc = 0x149AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149ADCu;
            // 0x149ae0: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147520u;
    if (runtime->hasFunction(0x147520u)) {
        auto targetFn = runtime->lookupFunction(0x147520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AE4u; }
        if (ctx->pc != 0x149AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00147520_0x147520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149AE4u; }
        if (ctx->pc != 0x149AE4u) { return; }
    }
    ctx->pc = 0x149AE4u;
    // 0x149ae4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x149ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149ae8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x149ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149aec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x149aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149af0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x149af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149af4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x149af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149af8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x149af8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149afc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x149afcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149b00: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x149b00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b08: 0x3e00008  jr          $ra
    ctx->pc = 0x149B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149B08u;
            // 0x149b0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1499B0u: goto label_1499b0;
            case 0x1499DCu: goto label_1499dc;
            case 0x1499F8u: goto label_1499f8;
            case 0x149A20u: goto label_149a20;
            case 0x149A3Cu: goto label_149a3c;
            case 0x149A58u: goto label_149a58;
            case 0x149A74u: goto label_149a74;
            case 0x149A94u: goto label_149a94;
            case 0x149AA8u: goto label_149aa8;
            case 0x149AACu: goto label_149aac;
            case 0x149ABCu: goto label_149abc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149B10u;
}
