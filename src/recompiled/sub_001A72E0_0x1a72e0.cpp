#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A72E0
// Address: 0x1a72e0 - 0x1a7ef0
void sub_001A72E0_0x1a72e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A72E0_0x1a72e0");
#endif

    ctx->pc = 0x1a72e0u;

    // 0x1a72e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a72e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a72e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a72e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a72e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a72ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a72f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a72f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a72f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a72f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a72f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a72f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a72fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7300: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1A7300u;
    SET_GPR_U32(ctx, 31, 0x1A7308u);
    ctx->pc = 0x1A7304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7300u;
            // 0x1a7304: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7308u; }
        if (ctx->pc != 0x1A7308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7308u; }
        if (ctx->pc != 0x1A7308u) { return; }
    }
    ctx->pc = 0x1A7308u;
    // 0x1a7308: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a7308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a730c: 0x96720062  lhu         $s2, 0x62($s3)
    ctx->pc = 0x1a730cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
    // 0x1a7310: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7310u;
    {
        const bool branch_taken_0x1a7310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7310u;
            // 0x1a7314: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7310) {
            ctx->pc = 0x1A735Cu;
            goto label_1a735c;
        }
    }
    ctx->pc = 0x1A7318u;
    // 0x1a7318: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1a731c: 0x0  nop
    ctx->pc = 0x1a731cu;
    // NOP
label_1a7320:
    // 0x1a7320: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a7324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7328: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a7328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a732c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A732Cu;
    {
        const bool branch_taken_0x1a732c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a732c) {
            ctx->pc = 0x1A7330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A732Cu;
            // 0x1a7330: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7350u;
            goto label_1a7350;
        }
    }
    ctx->pc = 0x1A7334u;
    // 0x1a7334: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1a7338: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1A7338u;
    SET_GPR_U32(ctx, 31, 0x1A7340u);
    ctx->pc = 0x1A733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7338u;
            // 0x1a733c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7340u; }
        if (ctx->pc != 0x1A7340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7340u; }
        if (ctx->pc != 0x1A7340u) { return; }
    }
    ctx->pc = 0x1A7340u;
    // 0x1a7340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7340u;
    {
        const bool branch_taken_0x1a7340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7340u;
            // 0x1a7344: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7340) {
            ctx->pc = 0x1A7350u;
            goto label_1a7350;
        }
    }
    ctx->pc = 0x1A7348u;
    // 0x1a7348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7348u;
    {
        const bool branch_taken_0x1a7348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7348u;
            // 0x1a734c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7348) {
            ctx->pc = 0x1A7360u;
            goto label_1a7360;
        }
    }
    ctx->pc = 0x1A7350u;
label_1a7350:
    // 0x1a7350: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1a7350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a7354: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A7354u;
    {
        const bool branch_taken_0x1a7354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7354) {
            ctx->pc = 0x1A7358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7354u;
            // 0x1a7358: 0x8e630064  lw          $v1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7320u;
            runtime->cooperativeGuestYield();
            goto label_1a7320;
        }
    }
    ctx->pc = 0x1A735Cu;
label_1a735c:
    // 0x1a735c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a735cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7360:
    // 0x1a7360: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a7360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7364: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a7364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7368: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a7368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a736c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a736cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7370: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a7370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7378: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7378u;
            // 0x1a737c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7380u;
    // 0x1a7380: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a7384: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a7388: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a738c: 0x8c45ed58  lw          $a1, -0x12A8($v0)
    ctx->pc = 0x1a738cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1a7390: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1a7390u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1a7394: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1a7394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1a7398: 0x8ea2e560  lw          $v0, -0x1AA0($s5)
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960480)));
    // 0x1a739c: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x1a739cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x1a73a0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1a73a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1a73a4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1a73a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1a73a8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1a73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1a73ac: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1a73acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1a73b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1a73b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1a73b4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a73b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1a73b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a73b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a73bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A73BCu;
    {
        const bool branch_taken_0x1a73bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A73C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73BCu;
            // 0x1a73c0: 0xaec5cabc  sw          $a1, -0x3544($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294953660), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73bc) {
            ctx->pc = 0x1A73DCu;
            goto label_1a73dc;
        }
    }
    ctx->pc = 0x1A73C4u;
    // 0x1a73c4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a73c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a73cc: 0xc460cac0  lwc1        $f0, -0x3540($v1)
    ctx->pc = 0x1a73ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a73d0: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1a73d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a73d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a73d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a73d8: 0xe460cac0  swc1        $f0, -0x3540($v1)
    ctx->pc = 0x1a73d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953664), bits); }
label_1a73dc:
    // 0x1a73dc: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1a73dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1a73e0: 0x8e44caa4  lw          $a0, -0x355C($s2)
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953636)));
    // 0x1a73e4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A73E4u;
    {
        const bool branch_taken_0x1a73e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73E4u;
            // 0x1a73e8: 0x3c130030  lui         $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73e4) {
            ctx->pc = 0x1A7420u;
            goto label_1a7420;
        }
    }
    ctx->pc = 0x1A73ECu;
    // 0x1a73ec: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x1a73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x1a73f0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1a73f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1a73f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A73F4u;
    {
        const bool branch_taken_0x1a73f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A73F4u;
            // 0x1a73f8: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73f4) {
            ctx->pc = 0x1A7420u;
            goto label_1a7420;
        }
    }
    ctx->pc = 0x1A73FCu;
    // 0x1a73fc: 0x8c62caf0  lw          $v0, -0x3510($v1)
    ctx->pc = 0x1a73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953712)));
    // 0x1a7400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7400u;
    {
        const bool branch_taken_0x1a7400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7400u;
            // 0x1a7404: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7400) {
            ctx->pc = 0x1A7420u;
            goto label_1a7420;
        }
    }
    ctx->pc = 0x1A7408u;
    // 0x1a7408: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7408u;
    {
        const bool branch_taken_0x1a7408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7408u;
            // 0x1a740c: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7408) {
            ctx->pc = 0x1A7424u;
            goto label_1a7424;
        }
    }
    ctx->pc = 0x1A7410u;
    // 0x1a7410: 0xac60caf0  sw          $zero, -0x3510($v1)
    ctx->pc = 0x1a7410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953712), GPR_U32(ctx, 0));
    // 0x1a7414: 0xc04c674  jal         func_1319D0
    ctx->pc = 0x1A7414u;
    SET_GPR_U32(ctx, 31, 0x1A741Cu);
    ctx->pc = 0x1A7418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7414u;
            // 0x1a7418: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319D0u;
    if (runtime->hasFunction(0x1319D0u)) {
        auto targetFn = runtime->lookupFunction(0x1319D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A741Cu; }
        if (ctx->pc != 0x1A741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001319D0_0x1319d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A741Cu; }
        if (ctx->pc != 0x1A741Cu) { return; }
    }
    ctx->pc = 0x1A741Cu;
    // 0x1a741c: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x1a741cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
label_1a7420:
    // 0x1a7420: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1a7420u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
label_1a7424:
    // 0x1a7424: 0x8e632640  lw          $v1, 0x2640($s3)
    ctx->pc = 0x1a7424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9792)));
    // 0x1a7428: 0x26622640  addiu       $v0, $s3, 0x2640
    ctx->pc = 0x1a7428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 9792));
    // 0x1a742c: 0xae80cacc  sw          $zero, -0x3534($s4)
    ctx->pc = 0x1a742cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953676), GPR_U32(ctx, 0));
    // 0x1a7430: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a7430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a7434: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A7434u;
    {
        const bool branch_taken_0x1a7434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7434u;
            // 0x1a7438: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7434) {
            ctx->pc = 0x1A7470u;
            goto label_1a7470;
        }
    }
    ctx->pc = 0x1A743Cu;
    // 0x1a743c: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a7440:
    // 0x1a7440: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7444: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a7444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7448: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1A7448u;
    SET_GPR_U32(ctx, 31, 0x1A7450u);
    ctx->pc = 0x1A744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7448u;
            // 0x1a744c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7450u; }
        if (ctx->pc != 0x1A7450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7450u; }
        if (ctx->pc != 0x1A7450u) { return; }
    }
    ctx->pc = 0x1A7450u;
    // 0x1a7450: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7458: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7458u;
    SET_GPR_U32(ctx, 31, 0x1A7460u);
    ctx->pc = 0x1A745Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7458u;
            // 0x1a745c: 0x8c44ca1c  lw          $a0, -0x35E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7460u; }
        if (ctx->pc != 0x1A7460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7460u; }
        if (ctx->pc != 0x1A7460u) { return; }
    }
    ctx->pc = 0x1A7460u;
    // 0x1a7460: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a7460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7468: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A7468u;
    {
        const bool branch_taken_0x1a7468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7468u;
            // 0x1a746c: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7468) {
            ctx->pc = 0x1A7440u;
            runtime->cooperativeGuestYield();
            goto label_1a7440;
        }
    }
    ctx->pc = 0x1A7470u;
label_1a7470:
    // 0x1a7470: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x1a7474: 0x26622640  addiu       $v0, $s3, 0x2640
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 9792));
    // 0x1a7478: 0x8e242628  lw          $a0, 0x2628($s1)
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9768)));
    // 0x1a747c: 0x26232628  addiu       $v1, $s1, 0x2628
    ctx->pc = 0x1a747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9768));
    // 0x1a7480: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a7480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x1a7484: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1A7484u;
    {
        const bool branch_taken_0x1a7484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A7488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7484u;
            // 0x1a7488: 0xae622640  sw          $v0, 0x2640($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 9792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7484) {
            ctx->pc = 0x1A7638u;
            goto label_1a7638;
        }
    }
    ctx->pc = 0x1A748Cu;
    // 0x1a748c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a7490: 0x8c432620  lw          $v1, 0x2620($v0)
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9760)));
    // 0x1a7494: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x1a7498: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a7498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a749c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A749Cu;
    {
        const bool branch_taken_0x1a749c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A74A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A749Cu;
            // 0x1a74a0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a749c) {
            ctx->pc = 0x1A7574u;
            goto label_1a7574;
        }
    }
    ctx->pc = 0x1A74A4u;
    // 0x1a74a4: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a74a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a74a8:
    // 0x1a74a8: 0x26252628  addiu       $a1, $s1, 0x2628
    ctx->pc = 0x1a74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9768));
    // 0x1a74ac: 0x8e242628  lw          $a0, 0x2628($s1)
    ctx->pc = 0x1a74acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9768)));
    // 0x1a74b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a74b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a74b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a74bc: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x1a74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1a74c0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a74c4: 0x10850027  beq         $a0, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A74C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74C4u;
            // 0x1a74c8: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A7564u;
            goto label_1a7564;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a74d0:
    // 0x1a74d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a74d4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a74d8: 0x14c2001f  bne         $a2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A74D8u;
    {
        const bool branch_taken_0x1a74d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A74DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74D8u;
            // 0x1a74dc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74d8) {
            ctx->pc = 0x1A7558u;
            goto label_1a7558;
        }
    }
    ctx->pc = 0x1A74E0u;
    // 0x1a74e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a74e4: 0x8c42cae0  lw          $v0, -0x3520($v0)
    ctx->pc = 0x1a74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953696)));
    // 0x1a74e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A74E8u;
    {
        const bool branch_taken_0x1a74e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74E8u;
            // 0x1a74ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74e8) {
            ctx->pc = 0x1A7500u;
            goto label_1a7500;
        }
    }
    ctx->pc = 0x1A74F0u;
    // 0x1a74f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a74f4: 0xc44ccac4  lwc1        $f12, -0x353C($v0)
    ctx->pc = 0x1a74f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a74f8: 0xc06c31c  jal         func_1B0C70
    ctx->pc = 0x1A74F8u;
    SET_GPR_U32(ctx, 31, 0x1A7500u);
    ctx->pc = 0x1A74FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A74F8u;
            // 0x1a74fc: 0xe46ccac0  swc1        $f12, -0x3540($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953664), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C70u;
    if (runtime->hasFunction(0x1B0C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7500u; }
        if (ctx->pc != 0x1A7500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b0c70_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7500u; }
        if (ctx->pc != 0x1A7500u) { return; }
    }
    ctx->pc = 0x1A7500u;
label_1a7500:
    // 0x1a7500: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7508: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a750c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1a750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1a7510: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7514: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a7518: 0x40f809  jalr        $v0
    ctx->pc = 0x1A7518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7520u);
        ctx->pc = 0x1A751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7518u;
            // 0x1a751c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7520u; }
            if (ctx->pc != 0x1A7520u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7520u;
    // 0x1a7520: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1a7520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a7524: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a752c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a752cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7530: 0x8c44ca10  lw          $a0, -0x35F0($v0)
    ctx->pc = 0x1a7530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953488)));
    // 0x1a7534: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a7534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1a7538: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a753c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a7540: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a7540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a7544: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a7544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a7548: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7548u;
    SET_GPR_U32(ctx, 31, 0x1A7550u);
    ctx->pc = 0x1A754Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7548u;
            // 0x1a754c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7550u; }
        if (ctx->pc != 0x1A7550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7550u; }
        if (ctx->pc != 0x1A7550u) { return; }
    }
    ctx->pc = 0x1A7550u;
    // 0x1a7550: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7550u;
    {
        const bool branch_taken_0x1a7550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7550u;
            // 0x1a7554: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7550) {
            ctx->pc = 0x1A7568u;
            goto label_1a7568;
        }
    }
    ctx->pc = 0x1A7558u;
label_1a7558:
    // 0x1a7558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a755c: 0x1462ffdc  bne         $v1, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A755Cu;
    {
        const bool branch_taken_0x1a755c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A755Cu;
            // 0x1a7560: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a755c) {
            ctx->pc = 0x1A74D0u;
            runtime->cooperativeGuestYield();
            goto label_1a74d0;
        }
    }
    ctx->pc = 0x1A7564u;
label_1a7564:
    // 0x1a7564: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a7568:
    // 0x1a7568: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a756c: 0x5462ffce  bnel        $v1, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1A756Cu;
    {
        const bool branch_taken_0x1a756c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a756c) {
            ctx->pc = 0x1A7570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A756Cu;
            // 0x1a7570: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A74A8u;
            runtime->cooperativeGuestYield();
            goto label_1a74a8;
        }
    }
    ctx->pc = 0x1A7574u;
label_1a7574:
    // 0x1a7574: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a7574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a7578: 0x8c62cae0  lw          $v0, -0x3520($v1)
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953696)));
    // 0x1a757c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A757Cu;
    {
        const bool branch_taken_0x1a757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A757Cu;
            // 0x1a7580: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a757c) {
            ctx->pc = 0x1A75D4u;
            goto label_1a75d4;
        }
    }
    ctx->pc = 0x1A7584u;
    // 0x1a7584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7588: 0x24c640f0  addiu       $a2, $a2, 0x40F0
    ctx->pc = 0x1a7588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16624));
    // 0x1a758c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7590: 0xc091258  jal         func_244960
    ctx->pc = 0x1A7590u;
    SET_GPR_U32(ctx, 31, 0x1A7598u);
    ctx->pc = 0x1A7594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7590u;
            // 0x1a7594: 0xac60cae0  sw          $zero, -0x3520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7598u; }
        if (ctx->pc != 0x1A7598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7598u; }
        if (ctx->pc != 0x1A7598u) { return; }
    }
    ctx->pc = 0x1A7598u;
    // 0x1a7598: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a759c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a75a0: 0xc440cac4  lwc1        $f0, -0x353C($v0)
    ctx->pc = 0x1a75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a75a4: 0xe460cac0  swc1        $f0, -0x3540($v1)
    ctx->pc = 0x1a75a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953664), bits); }
    // 0x1a75a8: 0xc06c31c  jal         func_1B0C70
    ctx->pc = 0x1A75A8u;
    SET_GPR_U32(ctx, 31, 0x1A75B0u);
    ctx->pc = 0x1A75ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75A8u;
            // 0x1a75ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C70u;
    if (runtime->hasFunction(0x1B0C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75B0u; }
        if (ctx->pc != 0x1A75B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b0c70_0x1b0c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75B0u; }
        if (ctx->pc != 0x1A75B0u) { return; }
    }
    ctx->pc = 0x1A75B0u;
    // 0x1a75b0: 0xc08b3d0  jal         func_22CF40
    ctx->pc = 0x1A75B0u;
    SET_GPR_U32(ctx, 31, 0x1A75B8u);
    ctx->pc = 0x22CF40u;
    if (runtime->hasFunction(0x22CF40u)) {
        auto targetFn = runtime->lookupFunction(0x22CF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75B8u; }
        if (ctx->pc != 0x1A75B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022CF40_0x22cf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75B8u; }
        if (ctx->pc != 0x1A75B8u) { return; }
    }
    ctx->pc = 0x1A75B8u;
    // 0x1a75b8: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1A75B8u;
    SET_GPR_U32(ctx, 31, 0x1A75C0u);
    ctx->pc = 0x1A75BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75B8u;
            // 0x1a75bc: 0x8e44caa4  lw          $a0, -0x355C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75C0u; }
        if (ctx->pc != 0x1A75C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5FC0_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A75C0u; }
        if (ctx->pc != 0x1A75C0u) { return; }
    }
    ctx->pc = 0x1A75C0u;
    // 0x1a75c0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1a75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a75c4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a75c8: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x1a75cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a75d0: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1a75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
label_1a75d4:
    // 0x1a75d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a75d8: 0x8c421230  lw          $v0, 0x1230($v0)
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4656)));
    // 0x1a75dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A75DCu;
    {
        const bool branch_taken_0x1a75dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75DCu;
            // 0x1a75e0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75dc) {
            ctx->pc = 0x1A75E8u;
            goto label_1a75e8;
        }
    }
    ctx->pc = 0x1A75E4u;
    // 0x1a75e4: 0xac40e574  sw          $zero, -0x1A8C($v0)
    ctx->pc = 0x1a75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960500), GPR_U32(ctx, 0));
label_1a75e8:
    // 0x1a75e8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a75e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a75ec: 0x8e032628  lw          $v1, 0x2628($s0)
    ctx->pc = 0x1a75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9768)));
    // 0x1a75f0: 0x26022628  addiu       $v0, $s0, 0x2628
    ctx->pc = 0x1a75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9768));
    // 0x1a75f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a75f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a75f8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A75F8u;
    {
        const bool branch_taken_0x1a75f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A75FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A75F8u;
            // 0x1a75fc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75f8) {
            ctx->pc = 0x1A7630u;
            goto label_1a7630;
        }
    }
    ctx->pc = 0x1A7600u;
    // 0x1a7600: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7604: 0x0  nop
    ctx->pc = 0x1a7604u;
    // NOP
label_1a7608:
    // 0x1a7608: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a760c: 0x8c44ca1c  lw          $a0, -0x35E4($v0)
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
    // 0x1a7610: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7614: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7614u;
    SET_GPR_U32(ctx, 31, 0x1A761Cu);
    ctx->pc = 0x1A7618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7614u;
            // 0x1a7618: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A761Cu; }
        if (ctx->pc != 0x1A761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A761Cu; }
        if (ctx->pc != 0x1A761Cu) { return; }
    }
    ctx->pc = 0x1A761Cu;
    // 0x1a761c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7620: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7624: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A7624u;
    {
        const bool branch_taken_0x1a7624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7624u;
            // 0x1a7628: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7624) {
            ctx->pc = 0x1A7608u;
            runtime->cooperativeGuestYield();
            goto label_1a7608;
        }
    }
    ctx->pc = 0x1A762Cu;
    // 0x1a762c: 0x26022628  addiu       $v0, $s0, 0x2628
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9768));
label_1a7630:
    // 0x1a7630: 0xae022628  sw          $v0, 0x2628($s0)
    ctx->pc = 0x1a7630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9768), GPR_U32(ctx, 2));
    // 0x1a7634: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1a7634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_1a7638:
    // 0x1a7638: 0x8ea2e560  lw          $v0, -0x1AA0($s5)
    ctx->pc = 0x1a7638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960480)));
    // 0x1a763c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1a763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1a7640: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1A7640u;
    {
        const bool branch_taken_0x1a7640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7640u;
            // 0x1a7644: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7640) {
            ctx->pc = 0x1A79A8u;
            goto label_1a79a8;
        }
    }
    ctx->pc = 0x1A7648u;
    // 0x1a7648: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1A7648u;
    {
        const bool branch_taken_0x1a7648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A764Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7648u;
            // 0x1a764c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7648) {
            ctx->pc = 0x1A78E0u;
            goto label_1a78e0;
        }
    }
    ctx->pc = 0x1A7650u;
label_1a7650:
    // 0x1a7650: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a7650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a7654: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a7654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7658: 0x104300a1  beq         $v0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1A7658u;
    {
        const bool branch_taken_0x1a7658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7658u;
            // 0x1a765c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7658) {
            ctx->pc = 0x1A78E0u;
            goto label_1a78e0;
        }
    }
    ctx->pc = 0x1A7660u;
label_1a7660:
    // 0x1a7660: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a7660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a7664: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a7668: 0x50400099  beql        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x1A7668u;
    {
        const bool branch_taken_0x1a7668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7668) {
            ctx->pc = 0x1A766Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7668u;
            // 0x1a766c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A78D0u;
            goto label_1a78d0;
        }
    }
    ctx->pc = 0x1A7670u;
    // 0x1a7670: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a7670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a7674: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a7674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a7678: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1A7678u;
    {
        const bool branch_taken_0x1a7678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7678u;
            // 0x1a767c: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7678) {
            ctx->pc = 0x1A78CCu;
            goto label_1a78cc;
        }
    }
    ctx->pc = 0x1A7680u;
    // 0x1a7680: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a7680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1a7684: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a7688: 0x10430090  beq         $v0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x1A7688u;
    {
        const bool branch_taken_0x1a7688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7688u;
            // 0x1a768c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7688) {
            ctx->pc = 0x1A78CCu;
            goto label_1a78cc;
        }
    }
    ctx->pc = 0x1A7690u;
    // 0x1a7690: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x1a7690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a7694: 0x0  nop
    ctx->pc = 0x1a7694u;
    // NOP
label_1a7698:
    // 0x1a7698: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1a7698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1a769c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a76a0: 0xae91cacc  sw          $s1, -0x3534($s4)
    ctx->pc = 0x1a76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953676), GPR_U32(ctx, 17));
    // 0x1a76a4: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1a76a8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A76A8u;
    {
        const bool branch_taken_0x1a76a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76A8u;
            // 0x1a76ac: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76a8) {
            ctx->pc = 0x1A7728u;
            goto label_1a7728;
        }
    }
    ctx->pc = 0x1A76B0u;
    // 0x1a76b0: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1a76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1a76b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A76B4u;
    {
        const bool branch_taken_0x1a76b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76B4u;
            // 0x1a76b8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76b4) {
            ctx->pc = 0x1A76F0u;
            goto label_1a76f0;
        }
    }
    ctx->pc = 0x1A76BCu;
    // 0x1a76bc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A76BCu;
    SET_GPR_U32(ctx, 31, 0x1A76C4u);
    ctx->pc = 0x1A76C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76BCu;
            // 0x1a76c0: 0x8c44ca1c  lw          $a0, -0x35E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76C4u; }
        if (ctx->pc != 0x1A76C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76C4u; }
        if (ctx->pc != 0x1A76C4u) { return; }
    }
    ctx->pc = 0x1A76C4u;
    // 0x1a76c4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a76c8: 0x26632640  addiu       $v1, $s3, 0x2640
    ctx->pc = 0x1a76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 9792));
    // 0x1a76cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a76d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a76d4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1a76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1a76d8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a76dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a76e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a76e4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a76e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a76ec: 0x0  nop
    ctx->pc = 0x1a76ecu;
    // NOP
label_1a76f0:
    // 0x1a76f0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a76f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a76f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a76f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a76fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7700: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a7704: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a7704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a7708: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a7708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1a770c: 0x1220006b  beqz        $s1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1A770Cu;
    {
        const bool branch_taken_0x1a770c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A770Cu;
            // 0x1a7710: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a770c) {
            ctx->pc = 0x1A78BCu;
            goto label_1a78bc;
        }
    }
    ctx->pc = 0x1A7714u;
    // 0x1a7714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7718: 0xc06961c  jal         func_1A5870
    ctx->pc = 0x1A7718u;
    SET_GPR_U32(ctx, 31, 0x1A7720u);
    ctx->pc = 0x1A771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7718u;
            // 0x1a771c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5870u;
    if (runtime->hasFunction(0x1A5870u)) {
        auto targetFn = runtime->lookupFunction(0x1A5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7720u; }
        if (ctx->pc != 0x1A7720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5870_0x1a5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7720u; }
        if (ctx->pc != 0x1A7720u) { return; }
    }
    ctx->pc = 0x1A7720u;
    // 0x1a7720: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1A7720u;
    {
        const bool branch_taken_0x1a7720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7720u;
            // 0x1a7724: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7720) {
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A7728u;
label_1a7728:
    // 0x1a7728: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a7728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a772c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A772Cu;
    {
        const bool branch_taken_0x1a772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a772c) {
            ctx->pc = 0x1A7730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A772Cu;
            // 0x1a7730: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A774Cu;
            goto label_1a774c;
        }
    }
    ctx->pc = 0x1A7734u;
    // 0x1a7734: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a7734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a7738: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1a7738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1a773c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a7740: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1a7740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1a7744: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1a7744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1a7748: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1a774c:
    // 0x1a774c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1a774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1a7750: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A7750u;
    {
        const bool branch_taken_0x1a7750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7750) {
            ctx->pc = 0x1A7754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7750u;
            // 0x1a7754: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7758u;
    // 0x1a7758: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1a7758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a775c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A775Cu;
    {
        const bool branch_taken_0x1a775c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a775c) {
            ctx->pc = 0x1A7760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A775Cu;
            // 0x1a7760: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7764u;
    // 0x1a7764: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a7768: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A7768u;
    {
        const bool branch_taken_0x1a7768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7768) {
            ctx->pc = 0x1A776Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7768u;
            // 0x1a776c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7770u;
    // 0x1a7770: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a7770u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a7774: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a7778: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A7778u;
    {
        const bool branch_taken_0x1a7778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7778u;
            // 0x1a777c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7778) {
            ctx->pc = 0x1A786Cu;
            goto label_1a786c;
        }
    }
    ctx->pc = 0x1A7780u;
    // 0x1a7780: 0xc069704  jal         func_1A5C10
    ctx->pc = 0x1A7780u;
    SET_GPR_U32(ctx, 31, 0x1A7788u);
    ctx->pc = 0x1A7784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7780u;
            // 0x1a7784: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C10u;
    if (runtime->hasFunction(0x1A5C10u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7788u; }
        if (ctx->pc != 0x1A7788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C10_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7788u; }
        if (ctx->pc != 0x1A7788u) { return; }
    }
    ctx->pc = 0x1A7788u;
    // 0x1a7788: 0x8e05bcf8  lw          $a1, -0x4308($s0)
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1a778c: 0x3c04ff9c  lui         $a0, 0xFF9C
    ctx->pc = 0x1a778cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65436 << 16));
    // 0x1a7790: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1a7794: 0x3484e00f  ori         $a0, $a0, 0xE00F
    ctx->pc = 0x1a7794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57359);
    // 0x1a7798: 0x8ca81044  lw          $t0, 0x1044($a1)
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4164)));
    // 0x1a779c: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a779cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a77a0: 0xace4f170  sw          $a0, -0xE90($a3)
    ctx->pc = 0x1a77a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294963568), GPR_U32(ctx, 4));
    // 0x1a77a4: 0x24e3f170  addiu       $v1, $a3, -0xE90
    ctx->pc = 0x1a77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963568));
    // 0x1a77a8: 0xaca81054  sw          $t0, 0x1054($a1)
    ctx->pc = 0x1a77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4180), GPR_U32(ctx, 8));
    // 0x1a77ac: 0x24c67d18  addiu       $a2, $a2, 0x7D18
    ctx->pc = 0x1a77acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32024));
    // 0x1a77b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77b4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1a77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1a77b8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1a77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1a77bc: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x1a77bcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a77c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a77c4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a77c8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1a77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1a77cc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1a77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1a77d0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1a77d4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1a77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1a77d8: 0xc04797a  jal         func_11E5E8
    ctx->pc = 0x1A77D8u;
    SET_GPR_U32(ctx, 31, 0x1A77E0u);
    ctx->pc = 0x1A77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77D8u;
            // 0x1a77dc: 0xac710020  sw          $s1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E5E8u;
    if (runtime->hasFunction(0x11E5E8u)) {
        auto targetFn = runtime->lookupFunction(0x11E5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77E0u; }
        if (ctx->pc != 0x1A77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E5E8_0x11e5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77E0u; }
        if (ctx->pc != 0x1A77E0u) { return; }
    }
    ctx->pc = 0x1A77E0u;
    // 0x1a77e0: 0x8e03bcf8  lw          $v1, -0x4308($s0)
    ctx->pc = 0x1a77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1a77e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a77e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a77e8: 0x8c62103c  lw          $v0, 0x103C($v1)
    ctx->pc = 0x1a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4156)));
    // 0x1a77ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A77ECu;
    {
        const bool branch_taken_0x1a77ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77ECu;
            // 0x1a77f0: 0xac621054  sw          $v0, 0x1054($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77ec) {
            ctx->pc = 0x1A7850u;
            goto label_1a7850;
        }
    }
    ctx->pc = 0x1A77F4u;
    // 0x1a77f4: 0x0  nop
    ctx->pc = 0x1a77f4u;
    // NOP
label_1a77f8:
    // 0x1a77f8: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A77F8u;
    SET_GPR_U32(ctx, 31, 0x1A7800u);
    ctx->pc = 0x1A77FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77F8u;
            // 0x1a77fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7800u; }
        if (ctx->pc != 0x1A7800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7800u; }
        if (ctx->pc != 0x1A7800u) { return; }
    }
    ctx->pc = 0x1A7800u;
    // 0x1a7800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7804: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7804u;
    {
        const bool branch_taken_0x1a7804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7804) {
            ctx->pc = 0x1A7808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7804u;
            // 0x1a7808: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A781Cu;
            goto label_1a781c;
        }
    }
    ctx->pc = 0x1A780Cu;
    // 0x1a780c: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1a780cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1a7810: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7810u;
    {
        const bool branch_taken_0x1a7810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7810u;
            // 0x1a7814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7810) {
            ctx->pc = 0x1A7838u;
            goto label_1a7838;
        }
    }
    ctx->pc = 0x1A7818u;
    // 0x1a7818: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1a781c:
    // 0x1a781c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a781cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7820: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a7820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7824: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a7824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7828: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a782c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A782Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7834u);
        ctx->pc = 0x1A7830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A782Cu;
            // 0x1a7830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7834u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7834u; }
            if (ctx->pc != 0x1A7834u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7834u;
    // 0x1a7834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7838:
    // 0x1a7838: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1a783c: 0xc06a07e  jal         func_1A81F8
    ctx->pc = 0x1A783Cu;
    SET_GPR_U32(ctx, 31, 0x1A7844u);
    ctx->pc = 0x1A7840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A783Cu;
            // 0x1a7840: 0x87a50030  lh          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A81F8u;
    if (runtime->hasFunction(0x1A81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A81F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7844u; }
        if (ctx->pc != 0x1A7844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A81F8_0x1a81f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7844u; }
        if (ctx->pc != 0x1A7844u) { return; }
    }
    ctx->pc = 0x1A7844u;
    // 0x1a7844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7848: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1A7848u;
    {
        const bool branch_taken_0x1a7848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7848u;
            // 0x1a784c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7848) {
            ctx->pc = 0x1A77F8u;
            runtime->cooperativeGuestYield();
            goto label_1a77f8;
        }
    }
    ctx->pc = 0x1A7850u;
label_1a7850:
    // 0x1a7850: 0x8ec7cabc  lw          $a3, -0x3544($s6)
    ctx->pc = 0x1a7850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294953660)));
    // 0x1a7854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7858: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1a7858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1a785c: 0xc069674  jal         func_1A59D0
    ctx->pc = 0x1A785Cu;
    SET_GPR_U32(ctx, 31, 0x1A7864u);
    ctx->pc = 0x1A7860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A785Cu;
            // 0x1a7860: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A59D0u;
    if (runtime->hasFunction(0x1A59D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A59D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7864u; }
        if (ctx->pc != 0x1A7864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A59D0_0x1a59d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7864u; }
        if (ctx->pc != 0x1A7864u) { return; }
    }
    ctx->pc = 0x1A7864u;
    // 0x1a7864: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A7864u;
    {
        const bool branch_taken_0x1a7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7864) {
            ctx->pc = 0x1A7868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7864u;
            // 0x1a7868: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7838u;
            runtime->cooperativeGuestYield();
            goto label_1a7838;
        }
    }
    ctx->pc = 0x1A786Cu;
label_1a786c:
    // 0x1a786c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1a786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1a7870:
    // 0x1a7870: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a7870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a7874: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7874u;
    {
        const bool branch_taken_0x1a7874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7874) {
            ctx->pc = 0x1A7878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7874u;
            // 0x1a7878: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7890u;
            goto label_1a7890;
        }
    }
    ctx->pc = 0x1A787Cu;
    // 0x1a787c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a7880: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1a7880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1a7884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a7884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a7888: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1a7888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1a788c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1a7890:
    // 0x1a7890: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a7890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a7894: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7894u;
    {
        const bool branch_taken_0x1a7894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7894u;
            // 0x1a7898: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7894) {
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A789Cu;
    // 0x1a789c: 0xc06b6ae  jal         func_1ADAB8
    ctx->pc = 0x1A789Cu;
    SET_GPR_U32(ctx, 31, 0x1A78A4u);
    ctx->pc = 0x1A78A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A789Cu;
            // 0x1a78a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAB8u;
    if (runtime->hasFunction(0x1ADAB8u)) {
        auto targetFn = runtime->lookupFunction(0x1ADAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78A4u; }
        if (ctx->pc != 0x1A78A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADAB8_0x1adab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78A4u; }
        if (ctx->pc != 0x1A78A4u) { return; }
    }
    ctx->pc = 0x1A78A4u;
    // 0x1a78a4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1a78a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a78ac: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x1a78acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x1a78b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a78b4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1a78b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1a78b8: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1a78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_1a78bc:
    // 0x1a78bc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1a78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a78c0:
    // 0x1a78c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a78c4: 0x1462ff74  bne         $v1, $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1A78C4u;
    {
        const bool branch_taken_0x1a78c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A78C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78C4u;
            // 0x1a78c8: 0x8fb10024  lw          $s1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78c4) {
            ctx->pc = 0x1A7698u;
            runtime->cooperativeGuestYield();
            goto label_1a7698;
        }
    }
    ctx->pc = 0x1A78CCu;
label_1a78cc:
    // 0x1a78cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a78d0:
    // 0x1a78d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a78d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a78d8: 0x1443ff61  bne         $v0, $v1, . + 4 + (-0x9F << 2)
    ctx->pc = 0x1A78D8u;
    {
        const bool branch_taken_0x1a78d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A78DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78D8u;
            // 0x1a78dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78d8) {
            ctx->pc = 0x1A7660u;
            runtime->cooperativeGuestYield();
            goto label_1a7660;
        }
    }
    ctx->pc = 0x1A78E0u;
label_1a78e0:
    // 0x1a78e0: 0xc06cd28  jal         func_1B34A0
    ctx->pc = 0x1A78E0u;
    SET_GPR_U32(ctx, 31, 0x1A78E8u);
    ctx->pc = 0x1A78E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78E0u;
            // 0x1a78e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B34A0u;
    if (runtime->hasFunction(0x1B34A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B34A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78E8u; }
        if (ctx->pc != 0x1A78E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b34a0_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A78E8u; }
        if (ctx->pc != 0x1A78E8u) { return; }
    }
    ctx->pc = 0x1A78E8u;
    // 0x1a78e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a78e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78ec: 0x1460ff58  bnez        $v1, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x1A78ECu;
    {
        const bool branch_taken_0x1a78ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A78F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78ECu;
            // 0x1a78f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78ec) {
            ctx->pc = 0x1A7650u;
            runtime->cooperativeGuestYield();
            goto label_1a7650;
        }
    }
    ctx->pc = 0x1A78F4u;
    // 0x1a78f4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1a78f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1a78f8: 0x8e44caa8  lw          $a0, -0x3558($s2)
    ctx->pc = 0x1a78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953640)));
    // 0x1a78fc: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A78FCu;
    {
        const bool branch_taken_0x1a78fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78FCu;
            // 0x1a7900: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78fc) {
            ctx->pc = 0x1A79A8u;
            goto label_1a79a8;
        }
    }
    ctx->pc = 0x1A7904u;
    // 0x1a7904: 0xc069704  jal         func_1A5C10
    ctx->pc = 0x1A7904u;
    SET_GPR_U32(ctx, 31, 0x1A790Cu);
    ctx->pc = 0x1A5C10u;
    if (runtime->hasFunction(0x1A5C10u)) {
        auto targetFn = runtime->lookupFunction(0x1A5C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A790Cu; }
        if (ctx->pc != 0x1A790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5C10_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A790Cu; }
        if (ctx->pc != 0x1A790Cu) { return; }
    }
    ctx->pc = 0x1A790Cu;
    // 0x1a790c: 0x70028ca9  por         $s1, $zero, $v0
    ctx->pc = 0x1a790cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1a7910: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a7910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a7914: 0x8c62caac  lw          $v0, -0x3554($v1)
    ctx->pc = 0x1a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953644)));
    // 0x1a7918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7918u;
    {
        const bool branch_taken_0x1a7918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7918u;
            // 0x1a791c: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7918) {
            ctx->pc = 0x1A7928u;
            goto label_1a7928;
        }
    }
    ctx->pc = 0x1A7920u;
    // 0x1a7920: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7920u;
    {
        const bool branch_taken_0x1a7920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7920u;
            // 0x1a7924: 0xac60caac  sw          $zero, -0x3554($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7920) {
            ctx->pc = 0x1A7998u;
            goto label_1a7998;
        }
    }
    ctx->pc = 0x1A7928u;
label_1a7928:
    // 0x1a7928: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1a7928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1a792c: 0x8e04bcf8  lw          $a0, -0x4308($s0)
    ctx->pc = 0x1a792cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1a7930: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a7934: 0x8e49caa8  lw          $t1, -0x3558($s2)
    ctx->pc = 0x1a7934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953640)));
    // 0x1a7938: 0x2502f170  addiu       $v0, $t0, -0xE90
    ctx->pc = 0x1a7938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x1a793c: 0x8c871044  lw          $a3, 0x1044($a0)
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x1a7940: 0x24637e10  addiu       $v1, $v1, 0x7E10
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32272));
    // 0x1a7944: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a7944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a7948: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x1a7948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x1a794c: 0xac871054  sw          $a3, 0x1054($a0)
    ctx->pc = 0x1a794cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4180), GPR_U32(ctx, 7));
    // 0x1a7950: 0x24a52650  addiu       $a1, $a1, 0x2650
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9808));
    // 0x1a7954: 0x3c06ff9c  lui         $a2, 0xFF9C
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65436 << 16));
    // 0x1a7958: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1a7958u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a795c: 0x34c6e00f  ori         $a2, $a2, 0xE00F
    ctx->pc = 0x1a795cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57359);
    // 0x1a7960: 0xad06f170  sw          $a2, -0xE90($t0)
    ctx->pc = 0x1a7960u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294963568), GPR_U32(ctx, 6));
    // 0x1a7964: 0x701134a9  por         $a2, $zero, $s1
    ctx->pc = 0x1a7964u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 17)));
    // 0x1a7968: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x1a7968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x1a796c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1a796cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1a7970: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a7970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a7974: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a7974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a7978: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1a7978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1a797c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1a797cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1a7980: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1a7980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1a7984: 0xc047864  jal         func_11E190
    ctx->pc = 0x1A7984u;
    SET_GPR_U32(ctx, 31, 0x1A798Cu);
    ctx->pc = 0x1A7988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7984u;
            // 0x1a7988: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A798Cu; }
        if (ctx->pc != 0x1A798Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A798Cu; }
        if (ctx->pc != 0x1A798Cu) { return; }
    }
    ctx->pc = 0x1A798Cu;
    // 0x1a798c: 0x8e03bcf8  lw          $v1, -0x4308($s0)
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950136)));
    // 0x1a7990: 0x8c62103c  lw          $v0, 0x103C($v1)
    ctx->pc = 0x1a7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4156)));
    // 0x1a7994: 0xac621054  sw          $v0, 0x1054($v1)
    ctx->pc = 0x1a7994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4180), GPR_U32(ctx, 2));
label_1a7998:
    // 0x1a7998: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a799c: 0x24422650  addiu       $v0, $v0, 0x2650
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
    // 0x1a79a0: 0x7c510000  sq          $s1, 0x0($v0)
    ctx->pc = 0x1a79a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 17));
    // 0x1a79a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1a79a8:
    // 0x1a79a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a79a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79ac: 0xac40cacc  sw          $zero, -0x3534($v0)
    ctx->pc = 0x1a79acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953676), GPR_U32(ctx, 0));
    // 0x1a79b0: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x1a79b4: 0x0  nop
    ctx->pc = 0x1a79b4u;
    // NOP
label_1a79b8:
    // 0x1a79b8: 0x8e432638  lw          $v1, 0x2638($s2)
    ctx->pc = 0x1a79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9784)));
    // 0x1a79bc: 0x26422638  addiu       $v0, $s2, 0x2638
    ctx->pc = 0x1a79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9784));
    // 0x1a79c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a79c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A79C4u;
    {
        const bool branch_taken_0x1a79c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A79C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79C4u;
            // 0x1a79c8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79c4) {
            ctx->pc = 0x1A7A00u;
            goto label_1a7a00;
        }
    }
    ctx->pc = 0x1A79CCu;
    // 0x1a79cc: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a79d0:
    // 0x1a79d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a79d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a79d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79d8: 0xc06a902  jal         func_1AA408
    ctx->pc = 0x1A79D8u;
    SET_GPR_U32(ctx, 31, 0x1A79E0u);
    ctx->pc = 0x1A79DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79D8u;
            // 0x1a79dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA408u;
    if (runtime->hasFunction(0x1AA408u)) {
        auto targetFn = runtime->lookupFunction(0x1AA408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79E0u; }
        if (ctx->pc != 0x1A79E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA408_0x1aa408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79E0u; }
        if (ctx->pc != 0x1A79E0u) { return; }
    }
    ctx->pc = 0x1A79E0u;
    // 0x1a79e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a79e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a79e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79e8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A79E8u;
    SET_GPR_U32(ctx, 31, 0x1A79F0u);
    ctx->pc = 0x1A79ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79E8u;
            // 0x1a79ec: 0x8c44ca14  lw          $a0, -0x35EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79F0u; }
        if (ctx->pc != 0x1A79F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A79F0u; }
        if (ctx->pc != 0x1A79F0u) { return; }
    }
    ctx->pc = 0x1A79F0u;
    // 0x1a79f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a79f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a79f8: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A79F8u;
    {
        const bool branch_taken_0x1a79f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A79FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79F8u;
            // 0x1a79fc: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f8) {
            ctx->pc = 0x1A79D0u;
            runtime->cooperativeGuestYield();
            goto label_1a79d0;
        }
    }
    ctx->pc = 0x1A7A00u;
label_1a7a00:
    // 0x1a7a00: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1a7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1a7a04: 0x26432638  addiu       $v1, $s2, 0x2638
    ctx->pc = 0x1a7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9784));
    // 0x1a7a08: 0x8c442630  lw          $a0, 0x2630($v0)
    ctx->pc = 0x1a7a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9776)));
    // 0x1a7a0c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x1a7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x1a7a10: 0x24422630  addiu       $v0, $v0, 0x2630
    ctx->pc = 0x1a7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x1a7a14: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A7A14u;
    {
        const bool branch_taken_0x1a7a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A14u;
            // 0x1a7a18: 0xae432638  sw          $v1, 0x2638($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 9784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a14) {
            ctx->pc = 0x1A7AB8u;
            goto label_1a7ab8;
        }
    }
    ctx->pc = 0x1A7A1Cu;
    // 0x1a7a1c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
label_1a7a20:
    // 0x1a7a20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7a24: 0x8e302630  lw          $s0, 0x2630($s1)
    ctx->pc = 0x1a7a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9776)));
    // 0x1a7a28: 0x26342630  addiu       $s4, $s1, 0x2630
    ctx->pc = 0x1a7a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 9776));
    // 0x1a7a2c: 0xc441cac0  lwc1        $f1, -0x3540($v0)
    ctx->pc = 0x1a7a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7a30: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1a7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7a34: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1a7a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x1a7a38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a7a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7a3c: 0x0  nop
    ctx->pc = 0x1a7a3cu;
    // NOP
    // 0x1a7a40: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7A40u;
    {
        const bool branch_taken_0x1a7a40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A40u;
            // 0x1a7a44: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a40) {
            ctx->pc = 0x1A7AB8u;
            goto label_1a7ab8;
        }
    }
    ctx->pc = 0x1A7A48u;
    // 0x1a7a48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a7a4c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1a7a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1a7a50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7a54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a7a58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a7a5c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7a60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a7a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7a68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a7a6c: 0xace6cacc  sw          $a2, -0x3534($a3)
    ctx->pc = 0x1a7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294953676), GPR_U32(ctx, 6));
    // 0x1a7a70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a7a74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a7a78: 0xc06a472  jal         func_1A91C8
    ctx->pc = 0x1A7A78u;
    SET_GPR_U32(ctx, 31, 0x1A7A80u);
    ctx->pc = 0x1A7A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A78u;
            // 0x1a7a7c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A91C8u;
    if (runtime->hasFunction(0x1A91C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A91C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A80u; }
        if (ctx->pc != 0x1A7A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A91C8_0x1a91c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7A80u; }
        if (ctx->pc != 0x1A7A80u) { return; }
    }
    ctx->pc = 0x1A7A80u;
    // 0x1a7a80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a7a84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7A84u;
    {
        const bool branch_taken_0x1a7a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7A84u;
            // 0x1a7a88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a84) {
            ctx->pc = 0x1A7AA0u;
            goto label_1a7aa0;
        }
    }
    ctx->pc = 0x1A7A8Cu;
    // 0x1a7a8c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1a7a90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7a94: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1a7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x1a7a98: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7a9c: 0x0  nop
    ctx->pc = 0x1a7a9cu;
    // NOP
label_1a7aa0:
    // 0x1a7aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7aa4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1A7AA4u;
    SET_GPR_U32(ctx, 31, 0x1A7AACu);
    ctx->pc = 0x1A7AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AA4u;
            // 0x1a7aa8: 0x8c44ca18  lw          $a0, -0x35E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AACu; }
        if (ctx->pc != 0x1A7AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7AACu; }
        if (ctx->pc != 0x1A7AACu) { return; }
    }
    ctx->pc = 0x1A7AACu;
    // 0x1a7aac: 0x8e222630  lw          $v0, 0x2630($s1)
    ctx->pc = 0x1a7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9776)));
    // 0x1a7ab0: 0x1454ffdb  bne         $v0, $s4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A7AB0u;
    {
        const bool branch_taken_0x1a7ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1A7AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AB0u;
            // 0x1a7ab4: 0x3c110030  lui         $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ab0) {
            ctx->pc = 0x1A7A20u;
            runtime->cooperativeGuestYield();
            goto label_1a7a20;
        }
    }
    ctx->pc = 0x1A7AB8u;
label_1a7ab8:
    // 0x1a7ab8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a7ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a7abc: 0x8e422638  lw          $v0, 0x2638($s2)
    ctx->pc = 0x1a7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9784)));
    // 0x1a7ac0: 0xac60cacc  sw          $zero, -0x3534($v1)
    ctx->pc = 0x1a7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953676), GPR_U32(ctx, 0));
    // 0x1a7ac4: 0x26432638  addiu       $v1, $s2, 0x2638
    ctx->pc = 0x1a7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 9784));
    // 0x1a7ac8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7AC8u;
    {
        const bool branch_taken_0x1a7ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A7ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AC8u;
            // 0x1a7acc: 0x8ea2e560  lw          $v0, -0x1AA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ac8) {
            ctx->pc = 0x1A7AE8u;
            goto label_1a7ae8;
        }
    }
    ctx->pc = 0x1A7AD0u;
    // 0x1a7ad0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a7ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a7ad4: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1a7ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a7ad8: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1A7AD8u;
    {
        const bool branch_taken_0x1a7ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AD8u;
            // 0x1a7adc: 0x3c120030  lui         $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ad8) {
            ctx->pc = 0x1A79B8u;
            runtime->cooperativeGuestYield();
            goto label_1a79b8;
        }
    }
    ctx->pc = 0x1A7AE0u;
    // 0x1a7ae0: 0x8ea2e560  lw          $v0, -0x1AA0($s5)
    ctx->pc = 0x1a7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960480)));
    // 0x1a7ae4: 0x0  nop
    ctx->pc = 0x1a7ae4u;
    // NOP
label_1a7ae8:
    // 0x1a7ae8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1a7ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1a7aec: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1A7AECu;
    {
        const bool branch_taken_0x1a7aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7AECu;
            // 0x1a7af0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7aec) {
            ctx->pc = 0x1A7CE0u;
            goto label_1a7ce0;
        }
    }
    ctx->pc = 0x1A7AF4u;
    // 0x1a7af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a7af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7afc: 0x0  nop
    ctx->pc = 0x1a7afcu;
    // NOP
label_1a7b00:
    // 0x1a7b00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a7b04: 0x24445078  addiu       $a0, $v0, 0x5078
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1a7b08: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1a7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1a7b0c: 0x2423821  addu        $a3, $s2, $v0
    ctx->pc = 0x1a7b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7b10: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1a7b10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a7b14: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A7B14u;
    {
        const bool branch_taken_0x1a7b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B14u;
            // 0x1a7b18: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b14) {
            ctx->pc = 0x1A7C50u;
            goto label_1a7c50;
        }
    }
    ctx->pc = 0x1A7B1Cu;
    // 0x1a7b1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7B1Cu;
    {
        const bool branch_taken_0x1a7b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B1Cu;
            // 0x1a7b20: 0x2042821  addu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b1c) {
            ctx->pc = 0x1A7B3Cu;
            goto label_1a7b3c;
        }
    }
    ctx->pc = 0x1A7B24u;
    // 0x1a7b24: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1a7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a7b28: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7b2c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1a7b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7b30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1a7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7b34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a7b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a7b38: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a7b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a7b3c:
    // 0x1a7b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a7b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7b40: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1a7b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a7b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7b48: 0x0  nop
    ctx->pc = 0x1a7b48u;
    // NOP
    // 0x1a7b4c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1A7B4Cu;
    {
        const bool branch_taken_0x1a7b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B4Cu;
            // 0x1a7b50: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b4c) {
            ctx->pc = 0x1A7B84u;
            goto label_1a7b84;
        }
    }
    ctx->pc = 0x1A7B54u;
    // 0x1a7b54: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a7b58: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1a7b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1a7b5c: 0x2404041a  addiu       $a0, $zero, 0x41A
    ctx->pc = 0x1a7b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
    // 0x1a7b60: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1a7b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1a7b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7b68: 0x8c68caa4  lw          $t0, -0x355C($v1)
    ctx->pc = 0x1a7b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953636)));
    // 0x1a7b6c: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1a7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a7b70: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a7b70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7b74: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1A7B74u;
    SET_GPR_U32(ctx, 31, 0x1A7B7Cu);
    ctx->pc = 0x1A7B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B74u;
            // 0x1a7b78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B7Cu; }
        if (ctx->pc != 0x1A7B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B7Cu; }
        if (ctx->pc != 0x1A7B7Cu) { return; }
    }
    ctx->pc = 0x1A7B7Cu;
    // 0x1a7b7c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A7B7Cu;
    {
        const bool branch_taken_0x1a7b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B7Cu;
            // 0x1a7b80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b7c) {
            ctx->pc = 0x1A7C54u;
            goto label_1a7c54;
        }
    }
    ctx->pc = 0x1A7B84u;
label_1a7b84:
    // 0x1a7b84: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1a7b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a7b88: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a7b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a7b8c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7B8Cu;
    {
        const bool branch_taken_0x1a7b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7B8Cu;
            // 0x1a7b90: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b8c) {
            ctx->pc = 0x1A7C50u;
            goto label_1a7c50;
        }
    }
    ctx->pc = 0x1A7B94u;
    // 0x1a7b94: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a7b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1a7b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a7b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7b9c: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1a7b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a7ba0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1a7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a7ba4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a7ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7ba8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a7ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a7bac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a7bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a7bb0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7bb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7bb8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a7bb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1a7bbc: 0x8c45cb94  lw          $a1, -0x346C($v0)
    ctx->pc = 0x1a7bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1a7bc0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1a7bc0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1a7bc4: 0x8ca31528  lw          $v1, 0x1528($a1)
    ctx->pc = 0x1a7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5416)));
    // 0x1a7bc8: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7bc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1a7bcc: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x1a7bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1a7bd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a7bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a7bd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a7bd8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1a7bd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a7bdc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7BDCu;
    {
        const bool branch_taken_0x1a7bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BDCu;
            // 0x1a7be0: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bdc) {
            ctx->pc = 0x1A7C0Cu;
            goto label_1a7c0c;
        }
    }
    ctx->pc = 0x1A7BE4u;
    // 0x1a7be4: 0x8ca2152c  lw          $v0, 0x152C($a1)
    ctx->pc = 0x1a7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5420)));
    // 0x1a7be8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7BE8u;
    {
        const bool branch_taken_0x1a7be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7be8) {
            ctx->pc = 0x1A7BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BE8u;
            // 0x1a7bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C10u;
            goto label_1a7c10;
        }
    }
    ctx->pc = 0x1A7BF0u;
    // 0x1a7bf0: 0x8ca21530  lw          $v0, 0x1530($a1)
    ctx->pc = 0x1a7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5424)));
    // 0x1a7bf4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7BF4u;
    {
        const bool branch_taken_0x1a7bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7bf4) {
            ctx->pc = 0x1A7BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7BF4u;
            // 0x1a7bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C10u;
            goto label_1a7c10;
        }
    }
    ctx->pc = 0x1A7BFCu;
    // 0x1a7bfc: 0x8ea2e560  lw          $v0, -0x1AA0($s5)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960480)));
    // 0x1a7c00: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1a7c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1a7c04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7C04u;
    {
        const bool branch_taken_0x1a7c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c04) {
            ctx->pc = 0x1A7C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C04u;
            // 0x1a7c08: 0x8ca215a0  lw          $v0, 0x15A0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C14u;
            goto label_1a7c14;
        }
    }
    ctx->pc = 0x1A7C0Cu;
label_1a7c0c:
    // 0x1a7c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c10:
    // 0x1a7c10: 0x8ca215a0  lw          $v0, 0x15A0($a1)
    ctx->pc = 0x1a7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5536)));
label_1a7c14:
    // 0x1a7c14: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7C14u;
    {
        const bool branch_taken_0x1a7c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a7c14) {
            ctx->pc = 0x1A7C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C14u;
            // 0x1a7c18: 0xaca40038  sw          $a0, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C38u;
            goto label_1a7c38;
        }
    }
    ctx->pc = 0x1A7C1Cu;
    // 0x1a7c1c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1a7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1a7c20: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7C20u;
    {
        const bool branch_taken_0x1a7c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a7c20) {
            ctx->pc = 0x1A7C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C20u;
            // 0x1a7c24: 0xaca40038  sw          $a0, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C38u;
            goto label_1a7c38;
        }
    }
    ctx->pc = 0x1A7C28u;
    // 0x1a7c28: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1a7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1a7c2c: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7C2Cu;
    {
        const bool branch_taken_0x1a7c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1A7C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C2Cu;
            // 0x1a7c30: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c2c) {
            ctx->pc = 0x1A7C50u;
            goto label_1a7c50;
        }
    }
    ctx->pc = 0x1A7C34u;
    // 0x1a7c34: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x1a7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
label_1a7c38:
    // 0x1a7c38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a7c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7c3c: 0xaca7003c  sw          $a3, 0x3C($a1)
    ctx->pc = 0x1a7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 7));
    // 0x1a7c40: 0xaca615a0  sw          $a2, 0x15A0($a1)
    ctx->pc = 0x1a7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5536), GPR_U32(ctx, 6));
    // 0x1a7c44: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1A7C44u;
    SET_GPR_U32(ctx, 31, 0x1A7C4Cu);
    ctx->pc = 0x1A7C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C44u;
            // 0x1a7c48: 0xaca60248  sw          $a2, 0x248($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 584), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C4Cu; }
        if (ctx->pc != 0x1A7C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7C4Cu; }
        if (ctx->pc != 0x1A7C4Cu) { return; }
    }
    ctx->pc = 0x1A7C4Cu;
    // 0x1a7c4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a7c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7c50:
    // 0x1a7c50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a7c54:
    // 0x1a7c54: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1a7c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a7c58: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1A7C58u;
    {
        const bool branch_taken_0x1a7c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C58u;
            // 0x1a7c5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c58) {
            ctx->pc = 0x1A7B00u;
            runtime->cooperativeGuestYield();
            goto label_1a7b00;
        }
    }
    ctx->pc = 0x1A7C60u;
    // 0x1a7c60: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A7C60u;
    {
        const bool branch_taken_0x1a7c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C60u;
            // 0x1a7c64: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c60) {
            ctx->pc = 0x1A7CE0u;
            goto label_1a7ce0;
        }
    }
    ctx->pc = 0x1A7C68u;
    // 0x1a7c68: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x1a7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1a7c6c: 0x8c621528  lw          $v0, 0x1528($v1)
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5416)));
    // 0x1a7c70: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7C70u;
    {
        const bool branch_taken_0x1a7c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C70u;
            // 0x1a7c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c70) {
            ctx->pc = 0x1A7CA4u;
            goto label_1a7ca4;
        }
    }
    ctx->pc = 0x1A7C78u;
    // 0x1a7c78: 0x8c62152c  lw          $v0, 0x152C($v1)
    ctx->pc = 0x1a7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5420)));
    // 0x1a7c7c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7C7Cu;
    {
        const bool branch_taken_0x1a7c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c7c) {
            ctx->pc = 0x1A7C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C7Cu;
            // 0x1a7c80: 0x8c6215a0  lw          $v0, 0x15A0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7CACu;
            goto label_1a7cac;
        }
    }
    ctx->pc = 0x1A7C84u;
    // 0x1a7c84: 0x8c621530  lw          $v0, 0x1530($v1)
    ctx->pc = 0x1a7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5424)));
    // 0x1a7c88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7C88u;
    {
        const bool branch_taken_0x1a7c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c88) {
            ctx->pc = 0x1A7C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C88u;
            // 0x1a7c8c: 0x8c6215a0  lw          $v0, 0x15A0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7CACu;
            goto label_1a7cac;
        }
    }
    ctx->pc = 0x1A7C90u;
    // 0x1a7c90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7c94: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x1a7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x1a7c98: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x1a7c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x1a7c9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7C9Cu;
    {
        const bool branch_taken_0x1a7c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c9c) {
            ctx->pc = 0x1A7CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7C9Cu;
            // 0x1a7ca0: 0x8c6215a0  lw          $v0, 0x15A0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7CACu;
            goto label_1a7cac;
        }
    }
    ctx->pc = 0x1A7CA4u;
label_1a7ca4:
    // 0x1a7ca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a7ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ca8: 0x8c6215a0  lw          $v0, 0x15A0($v1)
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5536)));
label_1a7cac:
    // 0x1a7cac: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7CACu;
    {
        const bool branch_taken_0x1a7cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CACu;
            // 0x1a7cb0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7cac) {
            ctx->pc = 0x1A7CCCu;
            goto label_1a7ccc;
        }
    }
    ctx->pc = 0x1A7CB4u;
    // 0x1a7cb4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1a7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a7cb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7CB8u;
    {
        const bool branch_taken_0x1a7cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cb8) {
            ctx->pc = 0x1A7CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CB8u;
            // 0x1a7cbc: 0xac600248  sw          $zero, 0x248($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7CD0u;
            goto label_1a7cd0;
        }
    }
    ctx->pc = 0x1A7CC0u;
    // 0x1a7cc0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1a7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1a7cc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7CC4u;
    {
        const bool branch_taken_0x1a7cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7cc4) {
            ctx->pc = 0x1A7CE0u;
            goto label_1a7ce0;
        }
    }
    ctx->pc = 0x1A7CCCu;
label_1a7ccc:
    // 0x1a7ccc: 0xac600248  sw          $zero, 0x248($v1)
    ctx->pc = 0x1a7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 0));
label_1a7cd0:
    // 0x1a7cd0: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a7cd4: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1a7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1a7cd8: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x1A7CD8u;
    SET_GPR_U32(ctx, 31, 0x1A7CE0u);
    ctx->pc = 0x1A7CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7CD8u;
            // 0x1a7cdc: 0xac6015a0  sw          $zero, 0x15A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CE0u; }
        if (ctx->pc != 0x1A7CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CE0u; }
        if (ctx->pc != 0x1A7CE0u) { return; }
    }
    ctx->pc = 0x1A7CE0u;
label_1a7ce0:
    // 0x1a7ce0: 0xc06bbcc  jal         func_1AEF30
    ctx->pc = 0x1A7CE0u;
    SET_GPR_U32(ctx, 31, 0x1A7CE8u);
    ctx->pc = 0x1AEF30u;
    if (runtime->hasFunction(0x1AEF30u)) {
        auto targetFn = runtime->lookupFunction(0x1AEF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CE8u; }
        if (ctx->pc != 0x1A7CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001aef30_0x1aef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CE8u; }
        if (ctx->pc != 0x1A7CE8u) { return; }
    }
    ctx->pc = 0x1A7CE8u;
    // 0x1a7ce8: 0xc06bdbe  jal         func_1AF6F8
    ctx->pc = 0x1A7CE8u;
    SET_GPR_U32(ctx, 31, 0x1A7CF0u);
    ctx->pc = 0x1AF6F8u;
    if (runtime->hasFunction(0x1AF6F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CF0u; }
        if (ctx->pc != 0x1A7CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1af6f8_0x1af700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7CF0u; }
        if (ctx->pc != 0x1A7CF0u) { return; }
    }
    ctx->pc = 0x1A7CF0u;
    // 0x1a7cf0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1a7cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a7cf4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1a7cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a7cf8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1a7cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a7cfc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1a7cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a7d00: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a7d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a7d04: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a7d04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7d08: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1a7d08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7d0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a7d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D10u;
            // 0x1a7d14: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7D18u;
    // 0x1a7d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a7d1c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a7d20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a7d24: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1a7d28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a7d2c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a7d30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a7d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a7d34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7d38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a7d3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a7d3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d40: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a7d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a7d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7d48: 0x8c71f190  lw          $s1, -0xE70($v1)
    ctx->pc = 0x1a7d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963600)));
    // 0x1a7d4c: 0x84530038  lh          $s3, 0x38($v0)
    ctx->pc = 0x1a7d4cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a7d50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A7D50u;
    {
        const bool branch_taken_0x1a7d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D50u;
            // 0x1a7d54: 0x8c520024  lw          $s2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d50) {
            ctx->pc = 0x1A7D88u;
            goto label_1a7d88;
        }
    }
    ctx->pc = 0x1A7D58u;
label_1a7d58:
    // 0x1a7d58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1a7d5c:
    // 0x1a7d5c: 0x8c42cad4  lw          $v0, -0x352C($v0)
    ctx->pc = 0x1a7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953684)));
    // 0x1a7d60: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7D60u;
    {
        const bool branch_taken_0x1a7d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D60u;
            // 0x1a7d64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d60) {
            ctx->pc = 0x1A7D88u;
            goto label_1a7d88;
        }
    }
    ctx->pc = 0x1A7D68u;
    // 0x1a7d68: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a7d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7d74: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a7d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7d78: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a7d7c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A7D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7D84u);
        ctx->pc = 0x1A7D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D7Cu;
            // 0x1a7d80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7D84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D84u; }
            if (ctx->pc != 0x1A7D84u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7D84u;
    // 0x1a7d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d88:
    // 0x1a7d88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d8c: 0xc06a07e  jal         func_1A81F8
    ctx->pc = 0x1A7D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D94u);
    ctx->pc = 0x1A7D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D8Cu;
            // 0x1a7d90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A81F8u;
    if (runtime->hasFunction(0x1A81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A81F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D94u; }
        if (ctx->pc != 0x1A7D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A81F8_0x1a81f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7D94u; }
        if (ctx->pc != 0x1A7D94u) { return; }
    }
    ctx->pc = 0x1A7D94u;
    // 0x1a7d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7d98: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7D98u;
    {
        const bool branch_taken_0x1a7d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d98) {
            ctx->pc = 0x1A7D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7D98u;
            // 0x1a7d9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7DECu;
            goto label_1a7dec;
        }
    }
    ctx->pc = 0x1A7DA0u;
    // 0x1a7da0: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A7DA0u;
    SET_GPR_U32(ctx, 31, 0x1A7DA8u);
    ctx->pc = 0x1A7DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DA0u;
            // 0x1a7da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DA8u; }
        if (ctx->pc != 0x1A7DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DA8u; }
        if (ctx->pc != 0x1A7DA8u) { return; }
    }
    ctx->pc = 0x1A7DA8u;
    // 0x1a7da8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7DACu;
    {
        const bool branch_taken_0x1a7dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7dac) {
            ctx->pc = 0x1A7DC0u;
            goto label_1a7dc0;
        }
    }
    ctx->pc = 0x1A7DB4u;
    // 0x1a7db4: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1a7db4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1a7db8: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A7DB8u;
    {
        const bool branch_taken_0x1a7db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DB8u;
            // 0x1a7dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7db8) {
            ctx->pc = 0x1A7D88u;
            runtime->cooperativeGuestYield();
            goto label_1a7d88;
        }
    }
    ctx->pc = 0x1A7DC0u;
label_1a7dc0:
    // 0x1a7dc0: 0x1680ffe6  bnez        $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1A7DC0u;
    {
        const bool branch_taken_0x1a7dc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DC0u;
            // 0x1a7dc4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7dc0) {
            ctx->pc = 0x1A7D5Cu;
            runtime->cooperativeGuestYield();
            goto label_1a7d5c;
        }
    }
    ctx->pc = 0x1A7DC8u;
    // 0x1a7dc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a7dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dd0: 0x8c47cabc  lw          $a3, -0x3544($v0)
    ctx->pc = 0x1a7dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953660)));
    // 0x1a7dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a7dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7dd8: 0xc06964e  jal         func_1A5938
    ctx->pc = 0x1A7DD8u;
    SET_GPR_U32(ctx, 31, 0x1A7DE0u);
    ctx->pc = 0x1A7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DD8u;
            // 0x1a7ddc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5938u;
    if (runtime->hasFunction(0x1A5938u)) {
        auto targetFn = runtime->lookupFunction(0x1A5938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DE0u; }
        if (ctx->pc != 0x1A7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5938_0x1a59d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7DE0u; }
        if (ctx->pc != 0x1A7DE0u) { return; }
    }
    ctx->pc = 0x1A7DE0u;
    // 0x1a7de0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A7DE0u;
    {
        const bool branch_taken_0x1a7de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7DE0u;
            // 0x1a7de4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7de0) {
            ctx->pc = 0x1A7D58u;
            runtime->cooperativeGuestYield();
            goto label_1a7d58;
        }
    }
    ctx->pc = 0x1A7DE8u;
    // 0x1a7de8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a7de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a7dec:
    // 0x1a7dec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1a7decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a7df0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a7df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7df4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a7df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7df8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a7df8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7dfc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a7dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E04u;
            // 0x1a7e08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7E0Cu;
    // 0x1a7e0c: 0x0  nop
    ctx->pc = 0x1a7e0cu;
    // NOP
    // 0x1a7e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7e14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a7e18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a7e1c: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1a7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1a7e20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a7e24: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1a7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1a7e28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7e2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a7e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7e30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a7e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7e38: 0x8c71f190  lw          $s1, -0xE70($v1)
    ctx->pc = 0x1a7e38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963600)));
    // 0x1a7e3c: 0x84530038  lh          $s3, 0x38($v0)
    ctx->pc = 0x1a7e3cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a7e40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7E40u;
    {
        const bool branch_taken_0x1a7e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E40u;
            // 0x1a7e44: 0x8c520024  lw          $s2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e40) {
            ctx->pc = 0x1A7EB8u;
            goto label_1a7eb8;
        }
    }
    ctx->pc = 0x1A7E48u;
label_1a7e48:
    // 0x1a7e48: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A7E48u;
    SET_GPR_U32(ctx, 31, 0x1A7E50u);
    ctx->pc = 0x1A7E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E48u;
            // 0x1a7e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E50u; }
        if (ctx->pc != 0x1A7E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E50u; }
        if (ctx->pc != 0x1A7E50u) { return; }
    }
    ctx->pc = 0x1A7E50u;
    // 0x1a7e50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7E54u;
    {
        const bool branch_taken_0x1a7e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E54u;
            // 0x1a7e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e54) {
            ctx->pc = 0x1A7E6Cu;
            goto label_1a7e6c;
        }
    }
    ctx->pc = 0x1A7E5Cu;
    // 0x1a7e5c: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1a7e5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1a7e60: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A7E60u;
    {
        const bool branch_taken_0x1a7e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E60u;
            // 0x1a7e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e60) {
            ctx->pc = 0x1A7EB8u;
            goto label_1a7eb8;
        }
    }
    ctx->pc = 0x1A7E68u;
    // 0x1a7e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7e6c:
    // 0x1a7e6c: 0xc0696f0  jal         func_1A5BC0
    ctx->pc = 0x1A7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E74u);
    ctx->pc = 0x1A7E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E6Cu;
            // 0x1a7e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BC0u;
    if (runtime->hasFunction(0x1A5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E74u; }
        if (ctx->pc != 0x1A7E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5bc0_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E74u; }
        if (ctx->pc != 0x1A7E74u) { return; }
    }
    ctx->pc = 0x1A7E74u;
    // 0x1a7e74: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7E74u;
    {
        const bool branch_taken_0x1a7e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E74u;
            // 0x1a7e78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e74) {
            ctx->pc = 0x1A7EB8u;
            goto label_1a7eb8;
        }
    }
    ctx->pc = 0x1A7E7Cu;
    // 0x1a7e7c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a7e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a7e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7e84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7e88: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a7e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7e8c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a7e90: 0x40f809  jalr        $v0
    ctx->pc = 0x1A7E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7E98u);
        ctx->pc = 0x1A7E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7E90u;
            // 0x1a7e94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7E98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7E98u; }
            if (ctx->pc != 0x1A7E98u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7E98u;
    // 0x1a7e98: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1a7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1a7e9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ea0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7ea4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a7ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a7ea8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a7eac: 0x40f809  jalr        $v0
    ctx->pc = 0x1A7EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7EB4u);
        ctx->pc = 0x1A7EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EACu;
            // 0x1a7eb0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A7EB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EB4u; }
            if (ctx->pc != 0x1A7EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A7EB4u;
    // 0x1a7eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a7eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7eb8:
    // 0x1a7eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ebc: 0xc06a07e  jal         func_1A81F8
    ctx->pc = 0x1A7EBCu;
    SET_GPR_U32(ctx, 31, 0x1A7EC4u);
    ctx->pc = 0x1A7EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EBCu;
            // 0x1a7ec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A81F8u;
    if (runtime->hasFunction(0x1A81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A81F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EC4u; }
        if (ctx->pc != 0x1A7EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A81F8_0x1a81f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7EC4u; }
        if (ctx->pc != 0x1A7EC4u) { return; }
    }
    ctx->pc = 0x1A7EC4u;
    // 0x1a7ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ec8: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1A7EC8u;
    {
        const bool branch_taken_0x1a7ec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EC8u;
            // 0x1a7ecc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ec8) {
            ctx->pc = 0x1A7E48u;
            runtime->cooperativeGuestYield();
            goto label_1a7e48;
        }
    }
    ctx->pc = 0x1A7ED0u;
    // 0x1a7ed0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a7ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7ed4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a7ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7edc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a7edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7EE4u;
            // 0x1a7ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7320u: goto label_1a7320;
            case 0x1A7350u: goto label_1a7350;
            case 0x1A735Cu: goto label_1a735c;
            case 0x1A7360u: goto label_1a7360;
            case 0x1A73DCu: goto label_1a73dc;
            case 0x1A7420u: goto label_1a7420;
            case 0x1A7424u: goto label_1a7424;
            case 0x1A7440u: goto label_1a7440;
            case 0x1A7470u: goto label_1a7470;
            case 0x1A74A8u: goto label_1a74a8;
            case 0x1A74D0u: goto label_1a74d0;
            case 0x1A7500u: goto label_1a7500;
            case 0x1A7558u: goto label_1a7558;
            case 0x1A7564u: goto label_1a7564;
            case 0x1A7568u: goto label_1a7568;
            case 0x1A7574u: goto label_1a7574;
            case 0x1A75D4u: goto label_1a75d4;
            case 0x1A75E8u: goto label_1a75e8;
            case 0x1A7608u: goto label_1a7608;
            case 0x1A7630u: goto label_1a7630;
            case 0x1A7638u: goto label_1a7638;
            case 0x1A7650u: goto label_1a7650;
            case 0x1A7660u: goto label_1a7660;
            case 0x1A7698u: goto label_1a7698;
            case 0x1A76F0u: goto label_1a76f0;
            case 0x1A7728u: goto label_1a7728;
            case 0x1A774Cu: goto label_1a774c;
            case 0x1A77F8u: goto label_1a77f8;
            case 0x1A781Cu: goto label_1a781c;
            case 0x1A7838u: goto label_1a7838;
            case 0x1A7850u: goto label_1a7850;
            case 0x1A786Cu: goto label_1a786c;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7890u: goto label_1a7890;
            case 0x1A78BCu: goto label_1a78bc;
            case 0x1A78C0u: goto label_1a78c0;
            case 0x1A78CCu: goto label_1a78cc;
            case 0x1A78D0u: goto label_1a78d0;
            case 0x1A78E0u: goto label_1a78e0;
            case 0x1A7928u: goto label_1a7928;
            case 0x1A7998u: goto label_1a7998;
            case 0x1A79A8u: goto label_1a79a8;
            case 0x1A79B8u: goto label_1a79b8;
            case 0x1A79D0u: goto label_1a79d0;
            case 0x1A7A00u: goto label_1a7a00;
            case 0x1A7A20u: goto label_1a7a20;
            case 0x1A7AA0u: goto label_1a7aa0;
            case 0x1A7AB8u: goto label_1a7ab8;
            case 0x1A7AE8u: goto label_1a7ae8;
            case 0x1A7B00u: goto label_1a7b00;
            case 0x1A7B3Cu: goto label_1a7b3c;
            case 0x1A7B84u: goto label_1a7b84;
            case 0x1A7C0Cu: goto label_1a7c0c;
            case 0x1A7C10u: goto label_1a7c10;
            case 0x1A7C14u: goto label_1a7c14;
            case 0x1A7C38u: goto label_1a7c38;
            case 0x1A7C50u: goto label_1a7c50;
            case 0x1A7C54u: goto label_1a7c54;
            case 0x1A7CA4u: goto label_1a7ca4;
            case 0x1A7CACu: goto label_1a7cac;
            case 0x1A7CCCu: goto label_1a7ccc;
            case 0x1A7CD0u: goto label_1a7cd0;
            case 0x1A7CE0u: goto label_1a7ce0;
            case 0x1A7D58u: goto label_1a7d58;
            case 0x1A7D5Cu: goto label_1a7d5c;
            case 0x1A7D88u: goto label_1a7d88;
            case 0x1A7DC0u: goto label_1a7dc0;
            case 0x1A7DECu: goto label_1a7dec;
            case 0x1A7E48u: goto label_1a7e48;
            case 0x1A7E6Cu: goto label_1a7e6c;
            case 0x1A7EB8u: goto label_1a7eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7EECu;
    // 0x1a7eec: 0x0  nop
    ctx->pc = 0x1a7eecu;
    // NOP
}
