#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA8F8
// Address: 0x1ba8f8 - 0x1babe8
void sub_001BA8F8_0x1ba8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA8F8_0x1ba8f8");
#endif

    ctx->pc = 0x1ba8f8u;

    // 0x1ba8f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ba8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ba8fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ba8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ba900: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ba900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ba904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba908: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ba908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ba90c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ba90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba910: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ba910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ba914: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ba914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba91c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ba91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba920: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA920u;
    {
        const bool branch_taken_0x1ba920 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BA924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA920u;
            // 0x1ba924: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba920) {
            ctx->pc = 0x1BA948u;
            goto label_1ba948;
        }
    }
    ctx->pc = 0x1BA928u;
    // 0x1ba928: 0x8e2214f8  lw          $v0, 0x14F8($s1)
    ctx->pc = 0x1ba928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5368)));
    // 0x1ba92c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ba92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ba930: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA930u;
    {
        const bool branch_taken_0x1ba930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA930u;
            // 0x1ba934: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba930) {
            ctx->pc = 0x1BA94Cu;
            goto label_1ba94c;
        }
    }
    ctx->pc = 0x1BA938u;
    // 0x1ba938: 0x24a40384  addiu       $a0, $a1, 0x384
    ctx->pc = 0x1ba938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 900));
    // 0x1ba93c: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1BA93Cu;
    SET_GPR_U32(ctx, 31, 0x1BA944u);
    ctx->pc = 0x1BA940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA93Cu;
            // 0x1ba940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA944u; }
        if (ctx->pc != 0x1BA944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA944u; }
        if (ctx->pc != 0x1BA944u) { return; }
    }
    ctx->pc = 0x1BA944u;
    // 0x1ba944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ba944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba948:
    // 0x1ba948: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1ba948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ba94c:
    // 0x1ba94c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA94Cu;
    {
        const bool branch_taken_0x1ba94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA94Cu;
            // 0x1ba950: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba94c) {
            ctx->pc = 0x1BA970u;
            goto label_1ba970;
        }
    }
    ctx->pc = 0x1BA954u;
    // 0x1ba954: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba958: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba95c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1ba95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1ba960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA968u;
    {
        const bool branch_taken_0x1ba968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA968u;
            // 0x1ba96c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba968) {
            ctx->pc = 0x1BA974u;
            goto label_1ba974;
        }
    }
    ctx->pc = 0x1BA970u;
label_1ba970:
    // 0x1ba970: 0x24455920  addiu       $a1, $v0, 0x5920
    ctx->pc = 0x1ba970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22816));
label_1ba974:
    // 0x1ba974: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ba974u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ba978: 0x2442ffbf  addiu       $v0, $v0, -0x41
    ctx->pc = 0x1ba978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967231));
    // 0x1ba97c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ba97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ba980: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1ba984: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x1ba984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1ba988: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BA988u;
    {
        const bool branch_taken_0x1ba988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA988u;
            // 0x1ba98c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba988) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA990u;
    // 0x1ba990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba994: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x1ba994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
    // 0x1ba998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ba99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba9a0: 0x400008  jr          $v0
    ctx->pc = 0x1BA9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA9A8u: goto label_1ba9a8;
            case 0x1BA9B0u: goto label_1ba9b0;
            case 0x1BA9B8u: goto label_1ba9b8;
            case 0x1BA9CCu: goto label_1ba9cc;
            case 0x1BA9E0u: goto label_1ba9e0;
            case 0x1BA9F0u: goto label_1ba9f0;
            case 0x1BAA00u: goto label_1baa00;
            case 0x1BAA18u: goto label_1baa18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA9A8u;
label_1ba9a8:
    // 0x1ba9a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BA9A8u;
    {
        const bool branch_taken_0x1ba9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9A8u;
            // 0x1ba9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a8) {
            ctx->pc = 0x1BAA14u;
            goto label_1baa14;
        }
    }
    ctx->pc = 0x1BA9B0u;
label_1ba9b0:
    // 0x1ba9b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BA9B0u;
    {
        const bool branch_taken_0x1ba9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9B0u;
            // 0x1ba9b4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9b0) {
            ctx->pc = 0x1BAA18u;
            goto label_1baa18;
        }
    }
    ctx->pc = 0x1BA9B8u;
label_1ba9b8:
    // 0x1ba9b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba9bc: 0x8c4212c8  lw          $v0, 0x12C8($v0)
    ctx->pc = 0x1ba9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x1ba9c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ba9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ba9c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA9C4u;
    {
        const bool branch_taken_0x1ba9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9C4u;
            // 0x1ba9c8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9c4) {
            ctx->pc = 0x1BAA14u;
            goto label_1baa14;
        }
    }
    ctx->pc = 0x1BA9CCu;
label_1ba9cc:
    // 0x1ba9cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba9d0: 0x8c4212c8  lw          $v0, 0x12C8($v0)
    ctx->pc = 0x1ba9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x1ba9d4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x1ba9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x1ba9d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BA9D8u;
    {
        const bool branch_taken_0x1ba9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9D8u;
            // 0x1ba9dc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9d8) {
            ctx->pc = 0x1BAA14u;
            goto label_1baa14;
        }
    }
    ctx->pc = 0x1BA9E0u;
label_1ba9e0:
    // 0x1ba9e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba9e4: 0x8c4212c8  lw          $v0, 0x12C8($v0)
    ctx->pc = 0x1ba9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x1ba9e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA9E8u;
    {
        const bool branch_taken_0x1ba9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9E8u;
            // 0x1ba9ec: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9e8) {
            ctx->pc = 0x1BAA0Cu;
            goto label_1baa0c;
        }
    }
    ctx->pc = 0x1BA9F0u;
label_1ba9f0:
    // 0x1ba9f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba9f4: 0x8c4212c8  lw          $v0, 0x12C8($v0)
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x1ba9f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA9F8u;
    {
        const bool branch_taken_0x1ba9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA9F8u;
            // 0x1ba9fc: 0x210c3  sra         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9f8) {
            ctx->pc = 0x1BAA0Cu;
            goto label_1baa0c;
        }
    }
    ctx->pc = 0x1BAA00u;
label_1baa00:
    // 0x1baa00: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1baa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1baa04: 0x8c4212c8  lw          $v0, 0x12C8($v0)
    ctx->pc = 0x1baa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x1baa08: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1baa08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1baa0c:
    // 0x1baa0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1baa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1baa10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1baa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1baa14:
    // 0x1baa14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1baa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1baa18:
    // 0x1baa18: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAA18u;
    {
        const bool branch_taken_0x1baa18 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1BAA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA18u;
            // 0x1baa1c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa18) {
            ctx->pc = 0x1BAA38u;
            goto label_1baa38;
        }
    }
    ctx->pc = 0x1BAA20u;
    // 0x1baa20: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baa24: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1baa28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1baa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baa2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baa30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAA30u;
    {
        const bool branch_taken_0x1baa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA30u;
            // 0x1baa34: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa30) {
            ctx->pc = 0x1BAA40u;
            goto label_1baa40;
        }
    }
    ctx->pc = 0x1BAA38u;
label_1baa38:
    // 0x1baa38: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1baa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1baa3c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1baa40:
    // 0x1baa40: 0x12400050  beqz        $s2, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BAA40u;
    {
        const bool branch_taken_0x1baa40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA40u;
            // 0x1baa44: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa40) {
            ctx->pc = 0x1BAB84u;
            goto label_1bab84;
        }
    }
    ctx->pc = 0x1BAA48u;
    // 0x1baa48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1baa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baa4c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BAA4Cu;
    {
        const bool branch_taken_0x1baa4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA4Cu;
            // 0x1baa50: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa4c) {
            ctx->pc = 0x1BAAECu;
            goto label_1baaec;
        }
    }
    ctx->pc = 0x1BAA54u;
    // 0x1baa54: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1baa54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1baa58: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA58u;
    {
        const bool branch_taken_0x1baa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baa58) {
            ctx->pc = 0x1BAA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA58u;
            // 0x1baa5c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAA7Cu;
            goto label_1baa7c;
        }
    }
    ctx->pc = 0x1BAA60u;
    // 0x1baa60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1baa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa64: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baa68: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1baa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1baa6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1baa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baa70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baa74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAA74u;
    {
        const bool branch_taken_0x1baa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA74u;
            // 0x1baa78: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa74) {
            ctx->pc = 0x1BAA80u;
            goto label_1baa80;
        }
    }
    ctx->pc = 0x1BAA7Cu;
label_1baa7c:
    // 0x1baa7c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1baa80:
    // 0x1baa80: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x1baa80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x1baa84: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1baa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1baa88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAA88u;
    {
        const bool branch_taken_0x1baa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baa88) {
            ctx->pc = 0x1BAA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAA88u;
            // 0x1baa8c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAAACu;
            goto label_1baaac;
        }
    }
    ctx->pc = 0x1BAA90u;
    // 0x1baa90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1baa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa94: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baa98: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1baa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1baa9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1baa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baaa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baaa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAAA4u;
    {
        const bool branch_taken_0x1baaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAA4u;
            // 0x1baaa8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baaa4) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BAAACu;
label_1baaac:
    // 0x1baaac: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1baaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1baab0:
    // 0x1baab0: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x1baab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x1baab4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1baab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1baab8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAAB8u;
    {
        const bool branch_taken_0x1baab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAB8u;
            // 0x1baabc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baab8) {
            ctx->pc = 0x1BAADCu;
            goto label_1baadc;
        }
    }
    ctx->pc = 0x1BAAC0u;
    // 0x1baac0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baac4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baac8: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1baac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1baacc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1baaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baad4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAAD4u;
    {
        const bool branch_taken_0x1baad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAD4u;
            // 0x1baad8: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baad4) {
            ctx->pc = 0x1BAAE0u;
            goto label_1baae0;
        }
    }
    ctx->pc = 0x1BAADCu;
label_1baadc:
    // 0x1baadc: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1baadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1baae0:
    // 0x1baae0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1baae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1baae4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BAAE4u;
    {
        const bool branch_taken_0x1baae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAE4u;
            // 0x1baae8: 0xae230158  sw          $v1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baae4) {
            ctx->pc = 0x1BAB80u;
            goto label_1bab80;
        }
    }
    ctx->pc = 0x1BAAECu;
label_1baaec:
    // 0x1baaec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAAECu;
    {
        const bool branch_taken_0x1baaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baaec) {
            ctx->pc = 0x1BAAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAAECu;
            // 0x1baaf0: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAB10u;
            goto label_1bab10;
        }
    }
    ctx->pc = 0x1BAAF4u;
    // 0x1baaf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1baaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baaf8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1baafc: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1baafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1bab00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bab04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bab08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAB08u;
    {
        const bool branch_taken_0x1bab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB08u;
            // 0x1bab0c: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab08) {
            ctx->pc = 0x1BAB14u;
            goto label_1bab14;
        }
    }
    ctx->pc = 0x1BAB10u;
label_1bab10:
    // 0x1bab10: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1bab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1bab14:
    // 0x1bab14: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x1bab14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x1bab18: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x1bab18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bab1c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAB1Cu;
    {
        const bool branch_taken_0x1bab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bab1c) {
            ctx->pc = 0x1BAB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB1Cu;
            // 0x1bab20: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAB40u;
            goto label_1bab40;
        }
    }
    ctx->pc = 0x1BAB24u;
    // 0x1bab24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bab28: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bab2c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1bab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1bab30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bab34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bab38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAB38u;
    {
        const bool branch_taken_0x1bab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB38u;
            // 0x1bab3c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab38) {
            ctx->pc = 0x1BAB44u;
            goto label_1bab44;
        }
    }
    ctx->pc = 0x1BAB40u;
label_1bab40:
    // 0x1bab40: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1bab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1bab44:
    // 0x1bab44: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x1bab44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
    // 0x1bab48: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1bab48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bab4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAB4Cu;
    {
        const bool branch_taken_0x1bab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB4Cu;
            // 0x1bab50: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab4c) {
            ctx->pc = 0x1BAB70u;
            goto label_1bab70;
        }
    }
    ctx->pc = 0x1BAB54u;
    // 0x1bab54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bab58: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bab5c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1bab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1bab60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bab64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bab68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAB68u;
    {
        const bool branch_taken_0x1bab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB68u;
            // 0x1bab6c: 0x8c43001c  lw          $v1, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab68) {
            ctx->pc = 0x1BAB74u;
            goto label_1bab74;
        }
    }
    ctx->pc = 0x1BAB70u;
label_1bab70:
    // 0x1bab70: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1bab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1bab74:
    // 0x1bab74: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1bab74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1bab78: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x1bab78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
    // 0x1bab7c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1bab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1bab80:
    // 0x1bab80: 0xae221510  sw          $v0, 0x1510($s1)
    ctx->pc = 0x1bab80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5392), GPR_U32(ctx, 2));
label_1bab84:
    // 0x1bab84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bab84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bab88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bab88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bab8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bab8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bab90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bab90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bab94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bab98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB98u;
            // 0x1bab9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA948u: goto label_1ba948;
            case 0x1BA94Cu: goto label_1ba94c;
            case 0x1BA970u: goto label_1ba970;
            case 0x1BA974u: goto label_1ba974;
            case 0x1BA9A8u: goto label_1ba9a8;
            case 0x1BA9B0u: goto label_1ba9b0;
            case 0x1BA9B8u: goto label_1ba9b8;
            case 0x1BA9CCu: goto label_1ba9cc;
            case 0x1BA9E0u: goto label_1ba9e0;
            case 0x1BA9F0u: goto label_1ba9f0;
            case 0x1BAA00u: goto label_1baa00;
            case 0x1BAA0Cu: goto label_1baa0c;
            case 0x1BAA14u: goto label_1baa14;
            case 0x1BAA18u: goto label_1baa18;
            case 0x1BAA38u: goto label_1baa38;
            case 0x1BAA40u: goto label_1baa40;
            case 0x1BAA7Cu: goto label_1baa7c;
            case 0x1BAA80u: goto label_1baa80;
            case 0x1BAAACu: goto label_1baaac;
            case 0x1BAAB0u: goto label_1baab0;
            case 0x1BAADCu: goto label_1baadc;
            case 0x1BAAE0u: goto label_1baae0;
            case 0x1BAAECu: goto label_1baaec;
            case 0x1BAB10u: goto label_1bab10;
            case 0x1BAB14u: goto label_1bab14;
            case 0x1BAB40u: goto label_1bab40;
            case 0x1BAB44u: goto label_1bab44;
            case 0x1BAB70u: goto label_1bab70;
            case 0x1BAB74u: goto label_1bab74;
            case 0x1BAB80u: goto label_1bab80;
            case 0x1BAB84u: goto label_1bab84;
            case 0x1BABCCu: goto label_1babcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BABA0u;
    // 0x1baba0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1baba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1baba4: 0x0  nop
    ctx->pc = 0x1baba4u;
    // NOP
    // 0x1baba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1babac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1babacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1babb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1babb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1babb4: 0x244298f8  addiu       $v0, $v0, -0x6708
    ctx->pc = 0x1babb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940920));
    // 0x1babb8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1babb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1babbc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BABBCu;
    {
        const bool branch_taken_0x1babbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABBCu;
            // 0x1babc0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babbc) {
            ctx->pc = 0x1BABCCu;
            goto label_1babcc;
        }
    }
    ctx->pc = 0x1BABC4u;
    // 0x1babc4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1BABC4u;
    SET_GPR_U32(ctx, 31, 0x1BABCCu);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABCCu; }
        if (ctx->pc != 0x1BABCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BABCCu; }
        if (ctx->pc != 0x1BABCCu) { return; }
    }
    ctx->pc = 0x1BABCCu;
label_1babcc:
    // 0x1babcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1babccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1babd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BABD0u;
            // 0x1babd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA948u: goto label_1ba948;
            case 0x1BA94Cu: goto label_1ba94c;
            case 0x1BA970u: goto label_1ba970;
            case 0x1BA974u: goto label_1ba974;
            case 0x1BA9A8u: goto label_1ba9a8;
            case 0x1BA9B0u: goto label_1ba9b0;
            case 0x1BA9B8u: goto label_1ba9b8;
            case 0x1BA9CCu: goto label_1ba9cc;
            case 0x1BA9E0u: goto label_1ba9e0;
            case 0x1BA9F0u: goto label_1ba9f0;
            case 0x1BAA00u: goto label_1baa00;
            case 0x1BAA0Cu: goto label_1baa0c;
            case 0x1BAA14u: goto label_1baa14;
            case 0x1BAA18u: goto label_1baa18;
            case 0x1BAA38u: goto label_1baa38;
            case 0x1BAA40u: goto label_1baa40;
            case 0x1BAA7Cu: goto label_1baa7c;
            case 0x1BAA80u: goto label_1baa80;
            case 0x1BAAACu: goto label_1baaac;
            case 0x1BAAB0u: goto label_1baab0;
            case 0x1BAADCu: goto label_1baadc;
            case 0x1BAAE0u: goto label_1baae0;
            case 0x1BAAECu: goto label_1baaec;
            case 0x1BAB10u: goto label_1bab10;
            case 0x1BAB14u: goto label_1bab14;
            case 0x1BAB40u: goto label_1bab40;
            case 0x1BAB44u: goto label_1bab44;
            case 0x1BAB70u: goto label_1bab70;
            case 0x1BAB74u: goto label_1bab74;
            case 0x1BAB80u: goto label_1bab80;
            case 0x1BAB84u: goto label_1bab84;
            case 0x1BABCCu: goto label_1babcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BABD8u;
    // 0x1babd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1babd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1babdc: 0x0  nop
    ctx->pc = 0x1babdcu;
    // NOP
    // 0x1babe0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1babe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1babe4: 0x0  nop
    ctx->pc = 0x1babe4u;
    // NOP
}
