#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133C58
// Address: 0x133c58 - 0x134980
void sub_00133C58_0x133c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133C58_0x133c58");
#endif

    ctx->pc = 0x133c58u;

    // 0x133c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133c5c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x133c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x133c60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x133c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x133c64: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x133c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x133c68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x133c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x133c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x133c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x133c74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x133c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133c7c: 0x24c60978  addiu       $a2, $a2, 0x978
    ctx->pc = 0x133c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2424));
    // 0x133c80: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x133c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x133c84: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x133c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x133c88: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x133c88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133c8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x133c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x133c90: 0x81402  srl         $v0, $t0, 16
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x133c94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x133c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x133c98: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x133c9c: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x133c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x133ca0: 0xa6080000  sh          $t0, 0x0($s0)
    ctx->pc = 0x133ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x133ca4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x133ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x133ca8: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x133ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x133cac: 0xc08e222  jal         func_238888
    ctx->pc = 0x133CACu;
    SET_GPR_U32(ctx, 31, 0x133CB4u);
    ctx->pc = 0x133CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133CACu;
            // 0x133cb0: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CB4u; }
        if (ctx->pc != 0x133CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CB4u; }
        if (ctx->pc != 0x133CB4u) { return; }
    }
    ctx->pc = 0x133CB4u;
    // 0x133cb4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x133cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x133cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133cbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133cc0: 0xc08e222  jal         func_238888
    ctx->pc = 0x133CC0u;
    SET_GPR_U32(ctx, 31, 0x133CC8u);
    ctx->pc = 0x133CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133CC0u;
            // 0x133cc4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CC8u; }
        if (ctx->pc != 0x133CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133CC8u; }
        if (ctx->pc != 0x133CC8u) { return; }
    }
    ctx->pc = 0x133CC8u;
    // 0x133cc8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x133cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133ccc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x133cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133cd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x133cd4: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x133cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x133cd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x133cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x133cdc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x133cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x133ce0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x133ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x133ce4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x133ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x133ce8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x133ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x133cec: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x133cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x133cf0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x133cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x133cf4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x133cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x133cf8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x133cfc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x133cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x133d00: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x133D00u;
    SET_GPR_U32(ctx, 31, 0x133D08u);
    ctx->pc = 0x133D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133D00u;
            // 0x133d04: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D08u; }
        if (ctx->pc != 0x133D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D08u; }
        if (ctx->pc != 0x133D08u) { return; }
    }
    ctx->pc = 0x133D08u;
    // 0x133d08: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x133d08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133d0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x133d10: 0x24420620  addiu       $v0, $v0, 0x620
    ctx->pc = 0x133d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1568));
    // 0x133d14: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x133d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x133d18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x133d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133d1c: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x133d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x133d20: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x133d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x133d24: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x133d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
    // 0x133d28: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x133d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x133d2c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x133d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x133d30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x133d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x133d34: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x133d38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133d3c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x133d40: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x133d44: 0x40f809  jalr        $v0
    ctx->pc = 0x133D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133D4Cu);
        ctx->pc = 0x133D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133D44u;
            // 0x133d48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133D4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133D4Cu; }
            if (ctx->pc != 0x133D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x133D4Cu;
    // 0x133d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133d50:
    // 0x133d50: 0x8c430184  lw          $v1, 0x184($v0)
    ctx->pc = 0x133d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x133d54: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133D54u;
    {
        const bool branch_taken_0x133d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d54) {
            ctx->pc = 0x133D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133D54u;
            // 0x133d58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133D64u;
            goto label_133d64;
        }
    }
    ctx->pc = 0x133D5Cu;
    // 0x133d5c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x133D5Cu;
    {
        const bool branch_taken_0x133d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133D5Cu;
            // 0x133d60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d5c) {
            ctx->pc = 0x133D50u;
            runtime->cooperativeGuestYield();
            goto label_133d50;
        }
    }
    ctx->pc = 0x133D64u;
label_133d64:
    // 0x133d64: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x133d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x133d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133d74: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x133D74u;
    {
        const bool branch_taken_0x133d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d74) {
            ctx->pc = 0x133D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133D74u;
            // 0x133d78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133DE0u;
            goto label_133de0;
        }
    }
    ctx->pc = 0x133D7Cu;
    // 0x133d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133d84: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x133d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x133d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d8c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x133d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x133d90: 0xc061e1a  jal         func_187868
    ctx->pc = 0x133D90u;
    SET_GPR_U32(ctx, 31, 0x133D98u);
    ctx->pc = 0x133D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133D90u;
            // 0x133d94: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D98u; }
        if (ctx->pc != 0x133D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133D98u; }
        if (ctx->pc != 0x133D98u) { return; }
    }
    ctx->pc = 0x133D98u;
    // 0x133d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133da0: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x133da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x133da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133da8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x133dac: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x133dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133db0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x133DB0u;
    SET_GPR_U32(ctx, 31, 0x133DB8u);
    ctx->pc = 0x133DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133DB0u;
            // 0x133db4: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DB8u; }
        if (ctx->pc != 0x133DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DB8u; }
        if (ctx->pc != 0x133DB8u) { return; }
    }
    ctx->pc = 0x133DB8u;
    // 0x133db8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x133db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x133dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133dc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133dc4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x133dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x133dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133dcc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x133dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x133dd0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x133DD0u;
    SET_GPR_U32(ctx, 31, 0x133DD8u);
    ctx->pc = 0x133DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133DD0u;
            // 0x133dd4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DD8u; }
        if (ctx->pc != 0x133DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133DD8u; }
        if (ctx->pc != 0x133DD8u) { return; }
    }
    ctx->pc = 0x133DD8u;
    // 0x133dd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x133DD8u;
    {
        const bool branch_taken_0x133dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133DD8u;
            // 0x133ddc: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133dd8) {
            ctx->pc = 0x133E00u;
            goto label_133e00;
        }
    }
    ctx->pc = 0x133DE0u;
label_133de0:
    // 0x133de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133de4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x133de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133dec: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x133decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x133df0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x133df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133df4: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x133df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
    // 0x133df8: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x133df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x133dfc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x133dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_133e00:
    // 0x133e00: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x133e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x133e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e08: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x133e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x133e0c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x133e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x133e10: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x133e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x133e14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x133e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x133e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133e1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x133e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133e24: 0x3e00008  jr          $ra
    ctx->pc = 0x133E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133E24u;
            // 0x133e28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133E2Cu;
    // 0x133e2c: 0x0  nop
    ctx->pc = 0x133e2cu;
    // NOP
    // 0x133e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133e34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x133e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x133e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133e44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x133e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e48: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x133E48u;
    SET_GPR_U32(ctx, 31, 0x133E50u);
    ctx->pc = 0x133E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E48u;
            // 0x133e4c: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E50u; }
        if (ctx->pc != 0x133E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E50u; }
        if (ctx->pc != 0x133E50u) { return; }
    }
    ctx->pc = 0x133E50u;
    // 0x133e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x133e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e58: 0xc04c1f2  jal         func_1307C8
    ctx->pc = 0x133E58u;
    SET_GPR_U32(ctx, 31, 0x133E60u);
    ctx->pc = 0x133E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E58u;
            // 0x133e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1307C8u;
    if (runtime->hasFunction(0x1307C8u)) {
        auto targetFn = runtime->lookupFunction(0x1307C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E60u; }
        if (ctx->pc != 0x133E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001307C8_0x1307c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E60u; }
        if (ctx->pc != 0x133E60u) { return; }
    }
    ctx->pc = 0x133E60u;
    // 0x133e60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x133e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x133E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133E6Cu;
            // 0x133e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133E74u;
    // 0x133e74: 0x0  nop
    ctx->pc = 0x133e74u;
    // NOP
    // 0x133e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133e7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x133e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x133e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133e84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x133e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x133e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133e94: 0xc04c238  jal         func_1308E0
    ctx->pc = 0x133E94u;
    SET_GPR_U32(ctx, 31, 0x133E9Cu);
    ctx->pc = 0x133E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133E94u;
            // 0x133e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308E0u;
    if (runtime->hasFunction(0x1308E0u)) {
        auto targetFn = runtime->lookupFunction(0x1308E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E9Cu; }
        if (ctx->pc != 0x133E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001308E0_0x1308e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133E9Cu; }
        if (ctx->pc != 0x133E9Cu) { return; }
    }
    ctx->pc = 0x133E9Cu;
    // 0x133e9c: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x133e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x133ea0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x133EA0u;
    {
        const bool branch_taken_0x133ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ea0) {
            ctx->pc = 0x133EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133EA0u;
            // 0x133ea4: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133EB4u;
            goto label_133eb4;
        }
    }
    ctx->pc = 0x133EA8u;
    // 0x133ea8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x133EA8u;
    SET_GPR_U32(ctx, 31, 0x133EB0u);
    ctx->pc = 0x133EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133EA8u;
            // 0x133eac: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EB0u; }
        if (ctx->pc != 0x133EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EB0u; }
        if (ctx->pc != 0x133EB0u) { return; }
    }
    ctx->pc = 0x133EB0u;
    // 0x133eb0: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_133eb4:
    // 0x133eb4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x133EB4u;
    SET_GPR_U32(ctx, 31, 0x133EBCu);
    ctx->pc = 0x133EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133EB4u;
            // 0x133eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EBCu; }
        if (ctx->pc != 0x133EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133EBCu; }
        if (ctx->pc != 0x133EBCu) { return; }
    }
    ctx->pc = 0x133EBCu;
    // 0x133ebc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x133ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x133EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133EC8u;
            // 0x133ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133ED0u;
    // 0x133ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x133ed4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x133ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x133ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133edc: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x133edcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0x133ee0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x133ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x133ee4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x133ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ee8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x133ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x133eec: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x133eecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x133ef0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x133ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x133ef4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x133ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x133ef8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x133ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x133efc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x133efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x133f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133f04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x133f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x133f08: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x133f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x133f0c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x133f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x133f10: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x133f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x133f14: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x133F14u;
    {
        const bool branch_taken_0x133f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133F14u;
            // 0x133f18: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f14) {
            ctx->pc = 0x133FF8u;
            goto label_133ff8;
        }
    }
    ctx->pc = 0x133F1Cu;
    // 0x133f1c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x133F1Cu;
    SET_GPR_U32(ctx, 31, 0x133F24u);
    ctx->pc = 0x133F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133F1Cu;
            // 0x133f20: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F24u; }
        if (ctx->pc != 0x133F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F24u; }
        if (ctx->pc != 0x133F24u) { return; }
    }
    ctx->pc = 0x133F24u;
    // 0x133f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f28: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x133f28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x133f2c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x133f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x133f30: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x133f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x133f34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x133f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x133f38: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x133f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x133f3c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x133f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x133f40: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x133f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x133f44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x133f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x133f48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x133f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x133f4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133F4Cu;
    {
        const bool branch_taken_0x133f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133F4Cu;
            // 0x133f50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f4c) {
            ctx->pc = 0x133F60u;
            goto label_133f60;
        }
    }
    ctx->pc = 0x133F54u;
    // 0x133f54: 0xc05e996  jal         func_17A658
    ctx->pc = 0x133F54u;
    SET_GPR_U32(ctx, 31, 0x133F5Cu);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F5Cu; }
        if (ctx->pc != 0x133F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133F5Cu; }
        if (ctx->pc != 0x133F5Cu) { return; }
    }
    ctx->pc = 0x133F5Cu;
    // 0x133f5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x133f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_133f60:
    // 0x133f60: 0x6a820023  ldl         $v0, 0x23($s4)
    ctx->pc = 0x133f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x133f64: 0x6e82001c  ldr         $v0, 0x1C($s4)
    ctx->pc = 0x133f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x133f68: 0x6a83002b  ldl         $v1, 0x2B($s4)
    ctx->pc = 0x133f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x133f6c: 0x6e830024  ldr         $v1, 0x24($s4)
    ctx->pc = 0x133f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x133f70: 0x6a840033  ldl         $a0, 0x33($s4)
    ctx->pc = 0x133f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x133f74: 0x6e84002c  ldr         $a0, 0x2C($s4)
    ctx->pc = 0x133f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x133f78: 0x6a85003b  ldl         $a1, 0x3B($s4)
    ctx->pc = 0x133f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x133f7c: 0x6e850034  ldr         $a1, 0x34($s4)
    ctx->pc = 0x133f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x133f80: 0xb202002b  sdl         $v0, 0x2B($s0)
    ctx->pc = 0x133f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f84: 0xb6020024  sdr         $v0, 0x24($s0)
    ctx->pc = 0x133f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f88: 0xb2030033  sdl         $v1, 0x33($s0)
    ctx->pc = 0x133f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f8c: 0xb603002c  sdr         $v1, 0x2C($s0)
    ctx->pc = 0x133f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f90: 0xb204003b  sdl         $a0, 0x3B($s0)
    ctx->pc = 0x133f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f94: 0xb6040034  sdr         $a0, 0x34($s0)
    ctx->pc = 0x133f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f98: 0xb2050043  sdl         $a1, 0x43($s0)
    ctx->pc = 0x133f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133f9c: 0xb605003c  sdr         $a1, 0x3C($s0)
    ctx->pc = 0x133f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fa0: 0x6a820043  ldl         $v0, 0x43($s4)
    ctx->pc = 0x133fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x133fa4: 0x6e82003c  ldr         $v0, 0x3C($s4)
    ctx->pc = 0x133fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x133fa8: 0x6a83004b  ldl         $v1, 0x4B($s4)
    ctx->pc = 0x133fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x133fac: 0x6e830044  ldr         $v1, 0x44($s4)
    ctx->pc = 0x133facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x133fb0: 0x6a840053  ldl         $a0, 0x53($s4)
    ctx->pc = 0x133fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x133fb4: 0x6e84004c  ldr         $a0, 0x4C($s4)
    ctx->pc = 0x133fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x133fb8: 0x6a85005b  ldl         $a1, 0x5B($s4)
    ctx->pc = 0x133fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x133fbc: 0x6e850054  ldr         $a1, 0x54($s4)
    ctx->pc = 0x133fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x133fc0: 0xb202004b  sdl         $v0, 0x4B($s0)
    ctx->pc = 0x133fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fc4: 0xb6020044  sdr         $v0, 0x44($s0)
    ctx->pc = 0x133fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fc8: 0xb2030053  sdl         $v1, 0x53($s0)
    ctx->pc = 0x133fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fcc: 0xb603004c  sdr         $v1, 0x4C($s0)
    ctx->pc = 0x133fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fd0: 0xb204005b  sdl         $a0, 0x5B($s0)
    ctx->pc = 0x133fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fd4: 0xb6040054  sdr         $a0, 0x54($s0)
    ctx->pc = 0x133fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fd8: 0xb2050063  sdl         $a1, 0x63($s0)
    ctx->pc = 0x133fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fdc: 0xb605005c  sdr         $a1, 0x5C($s0)
    ctx->pc = 0x133fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133fe0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x133fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x133fe4: 0xc0a2644  jal         func_289910
    ctx->pc = 0x133FE4u;
    SET_GPR_U32(ctx, 31, 0x133FECu);
    ctx->pc = 0x133FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133FE4u;
            // 0x133fe8: 0x26e50008  addiu       $a1, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133FECu; }
        if (ctx->pc != 0x133FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133FECu; }
        if (ctx->pc != 0x133FECu) { return; }
    }
    ctx->pc = 0x133FECu;
    // 0x133fec: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x133FECu;
    {
        const bool branch_taken_0x133fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133FECu;
            // 0x133ff0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fec) {
            ctx->pc = 0x134300u;
            goto label_134300;
        }
    }
    ctx->pc = 0x133FF4u;
    // 0x133ff4: 0x0  nop
    ctx->pc = 0x133ff4u;
    // NOP
label_133ff8:
    // 0x133ff8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x133FF8u;
    SET_GPR_U32(ctx, 31, 0x134000u);
    ctx->pc = 0x133FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133FF8u;
            // 0x133ffc: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134000u; }
        if (ctx->pc != 0x134000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134000u; }
        if (ctx->pc != 0x134000u) { return; }
    }
    ctx->pc = 0x134000u;
    // 0x134000: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134004: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x134004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x134008: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x134008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13400c: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x134010: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x134010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x134014: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x134014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x134018: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x134018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x13401c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x134020: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x134020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x134024: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x134024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x134028: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134028u;
    {
        const bool branch_taken_0x134028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13402Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134028u;
            // 0x13402c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134028) {
            ctx->pc = 0x134040u;
            goto label_134040;
        }
    }
    ctx->pc = 0x134030u;
    // 0x134030: 0xc05e996  jal         func_17A658
    ctx->pc = 0x134030u;
    SET_GPR_U32(ctx, 31, 0x134038u);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134038u; }
        if (ctx->pc != 0x134038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134038u; }
        if (ctx->pc != 0x134038u) { return; }
    }
    ctx->pc = 0x134038u;
    // 0x134038: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x134038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x13403c: 0x0  nop
    ctx->pc = 0x13403cu;
    // NOP
label_134040:
    // 0x134040: 0x8e91001c  lw          $s1, 0x1C($s4)
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x134044: 0xc04f824  jal         func_13E090
    ctx->pc = 0x134044u;
    SET_GPR_U32(ctx, 31, 0x13404Cu);
    ctx->pc = 0x134048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134044u;
            // 0x134048: 0x26530024  addiu       $s3, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13404Cu; }
        if (ctx->pc != 0x13404Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13404Cu; }
        if (ctx->pc != 0x13404Cu) { return; }
    }
    ctx->pc = 0x13404Cu;
    // 0x13404c: 0x2696002c  addiu       $s6, $s4, 0x2C
    ctx->pc = 0x13404cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x134050: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x134054: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x134054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x134058: 0x2463f448  addiu       $v1, $v1, -0xBB8
    ctx->pc = 0x134058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964296));
    // 0x13405c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x13405cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x134060: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x134060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x134064: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x134064u;
    {
        const bool branch_taken_0x134064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x134068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134064u;
            // 0x134068: 0xae510024  sw          $s1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134064) {
            ctx->pc = 0x134118u;
            goto label_134118;
        }
    }
    ctx->pc = 0x13406Cu;
    // 0x13406c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x13406Cu;
    SET_GPR_U32(ctx, 31, 0x134074u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134074u; }
        if (ctx->pc != 0x134074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134074u; }
        if (ctx->pc != 0x134074u) { return; }
    }
    ctx->pc = 0x134074u;
    // 0x134074: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134078: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x134078u;
    {
        const bool branch_taken_0x134078 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x134078) {
            ctx->pc = 0x134098u;
            goto label_134098;
        }
    }
    ctx->pc = 0x134080u;
    // 0x134080: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x134080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x134084: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x134084u;
    {
        const bool branch_taken_0x134084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x134088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134084u;
            // 0x134088: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134084) {
            ctx->pc = 0x134090u;
            goto label_134090;
        }
    }
    ctx->pc = 0x13408Cu;
    // 0x13408c: 0x8c44f198  lw          $a0, -0xE68($v0)
    ctx->pc = 0x13408cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
label_134090:
    // 0x134090: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x134090u;
    SET_GPR_U32(ctx, 31, 0x134098u);
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134098u; }
        if (ctx->pc != 0x134098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134098u; }
        if (ctx->pc != 0x134098u) { return; }
    }
    ctx->pc = 0x134098u;
label_134098:
    // 0x134098: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x134098u;
    {
        const bool branch_taken_0x134098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134098u;
            // 0x13409c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134098) {
            ctx->pc = 0x1340F4u;
            goto label_1340f4;
        }
    }
    ctx->pc = 0x1340A0u;
    // 0x1340a0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1340A0u;
    SET_GPR_U32(ctx, 31, 0x1340A8u);
    ctx->pc = 0x1340A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1340A0u;
            // 0x1340a4: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340A8u; }
        if (ctx->pc != 0x1340A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1340A8u; }
        if (ctx->pc != 0x1340A8u) { return; }
    }
    ctx->pc = 0x1340A8u;
    // 0x1340a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1340a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340ac: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x1340acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1340b0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1340B0u;
    {
        const bool branch_taken_0x1340b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1340B0u;
            // 0x1340b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340b0) {
            ctx->pc = 0x1340F0u;
            goto label_1340f0;
        }
    }
    ctx->pc = 0x1340B8u;
    // 0x1340b8: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x1340bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1340bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1340c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1340c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1340c4: 0x0  nop
    ctx->pc = 0x1340c4u;
    // NOP
label_1340c8:
    // 0x1340c8: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x1340c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1340cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1340ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1340d0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1340d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1340d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1340d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1340d8: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x1340d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1340dc: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x1340dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1340e0: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x1340e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1340e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1340e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1340e8: 0x14c3fff7  bne         $a2, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1340E8u;
    {
        const bool branch_taken_0x1340e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1340ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1340E8u;
            // 0x1340ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340e8) {
            ctx->pc = 0x1340C8u;
            runtime->cooperativeGuestYield();
            goto label_1340c8;
        }
    }
    ctx->pc = 0x1340F0u;
label_1340f0:
    // 0x1340f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1340f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1340f4:
    // 0x1340f4: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1340F4u;
    {
        const bool branch_taken_0x1340f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1340f4) {
            ctx->pc = 0x1340F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1340F4u;
            // 0x1340f8: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134108u;
            goto label_134108;
        }
    }
    ctx->pc = 0x1340FCu;
    // 0x1340fc: 0xc04f830  jal         func_13E0C0
    ctx->pc = 0x1340FCu;
    SET_GPR_U32(ctx, 31, 0x134104u);
    ctx->pc = 0x134100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1340FCu;
            // 0x134100: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E0C0u;
    if (runtime->hasFunction(0x13E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134104u; }
        if (ctx->pc != 0x134104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e0c0_0x13e158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134104u; }
        if (ctx->pc != 0x134104u) { return; }
    }
    ctx->pc = 0x134104u;
    // 0x134104: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x134104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_134108:
    // 0x134108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13410c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134110: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x134110u;
    SET_GPR_U32(ctx, 31, 0x134118u);
    ctx->pc = 0x134114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134110u;
            // 0x134114: 0x113100  sll         $a2, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134118u; }
        if (ctx->pc != 0x134118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134118u; }
        if (ctx->pc != 0x134118u) { return; }
    }
    ctx->pc = 0x134118u;
label_134118:
    // 0x134118: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x134118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13411c: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x13411Cu;
    {
        const bool branch_taken_0x13411c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13411Cu;
            // 0x134120: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13411c) {
            ctx->pc = 0x1342D4u;
            goto label_1342d4;
        }
    }
    ctx->pc = 0x134124u;
    // 0x134124: 0xc04f824  jal         func_13E090
    ctx->pc = 0x134124u;
    SET_GPR_U32(ctx, 31, 0x13412Cu);
    ctx->pc = 0x134128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134124u;
            // 0x134128: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13412Cu; }
        if (ctx->pc != 0x13412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13412Cu; }
        if (ctx->pc != 0x13412Cu) { return; }
    }
    ctx->pc = 0x13412Cu;
    // 0x13412c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13412cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134134: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x134134u;
    SET_GPR_U32(ctx, 31, 0x13413Cu);
    ctx->pc = 0x134138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134134u;
            // 0x134138: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13413Cu; }
        if (ctx->pc != 0x13413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13413Cu; }
        if (ctx->pc != 0x13413Cu) { return; }
    }
    ctx->pc = 0x13413Cu;
    // 0x13413c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x13413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x134140: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x134144: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x134144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x134148: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x134148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x13414c: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x13414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x134150: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x134150u;
    {
        const bool branch_taken_0x134150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134150u;
            // 0x134154: 0x2839821  addu        $s3, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134150) {
            ctx->pc = 0x134188u;
            goto label_134188;
        }
    }
    ctx->pc = 0x134158u;
label_134158:
    // 0x134158: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13415c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134160: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x134160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x134164: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x134164u;
    SET_GPR_U32(ctx, 31, 0x13416Cu);
    ctx->pc = 0x134168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134164u;
            // 0x134168: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13416Cu; }
        if (ctx->pc != 0x13416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13416Cu; }
        if (ctx->pc != 0x13416Cu) { return; }
    }
    ctx->pc = 0x13416Cu;
    // 0x13416c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x13416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x134170: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x134170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x134174: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x134174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x134178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x134178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13417c: 0x230202b  sltu        $a0, $s1, $s0
    ctx->pc = 0x13417cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x134180: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x134180u;
    {
        const bool branch_taken_0x134180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x134184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134180u;
            // 0x134184: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134180) {
            ctx->pc = 0x134158u;
            runtime->cooperativeGuestYield();
            goto label_134158;
        }
    }
    ctx->pc = 0x134188u;
label_134188:
    // 0x134188: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x134188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x13418c: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x134190: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134194: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x134194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x134198: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x134198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13419c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x13419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1341a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1341a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1341a4: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1341a8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1341a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1341ac: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1341acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1341b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1341b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1341b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1341b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1341b8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1341b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1341bc: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1341bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1341c0: 0xc04f824  jal         func_13E090
    ctx->pc = 0x1341C0u;
    SET_GPR_U32(ctx, 31, 0x1341C8u);
    ctx->pc = 0x1341C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1341C0u;
            // 0x1341c4: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341C8u; }
        if (ctx->pc != 0x1341C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341C8u; }
        if (ctx->pc != 0x1341C8u) { return; }
    }
    ctx->pc = 0x1341C8u;
    // 0x1341c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1341c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1341ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341d0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x1341D0u;
    SET_GPR_U32(ctx, 31, 0x1341D8u);
    ctx->pc = 0x1341D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1341D0u;
            // 0x1341d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341D8u; }
        if (ctx->pc != 0x1341D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1341D8u; }
        if (ctx->pc != 0x1341D8u) { return; }
    }
    ctx->pc = 0x1341D8u;
    // 0x1341d8: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1341d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1341dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1341dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e0: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x1341e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1341e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1341e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e8: 0x8e360010  lw          $s6, 0x10($s1)
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1341ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1341f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1341f4: 0x0  nop
    ctx->pc = 0x1341f4u;
    // NOP
label_1341f8:
    // 0x1341f8: 0x0  nop
    ctx->pc = 0x1341f8u;
    // NOP
    // 0x1341fc: 0x0  nop
    ctx->pc = 0x1341fcu;
    // NOP
    // 0x134200: 0x0  nop
    ctx->pc = 0x134200u;
    // NOP
    // 0x134204: 0x0  nop
    ctx->pc = 0x134204u;
    // NOP
    // 0x134208: 0x0  nop
    ctx->pc = 0x134208u;
    // NOP
    // 0x13420c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13420Cu;
    {
        const bool branch_taken_0x13420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x134210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13420Cu;
            // 0x134210: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13420c) {
            ctx->pc = 0x1341F8u;
            runtime->cooperativeGuestYield();
            goto label_1341f8;
        }
    }
    ctx->pc = 0x134214u;
    // 0x134214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134218: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x134218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13421c: 0xc08ec36  jal         func_23B0D8
    ctx->pc = 0x13421Cu;
    SET_GPR_U32(ctx, 31, 0x134224u);
    ctx->pc = 0x134220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13421Cu;
            // 0x134220: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B0D8u;
    if (runtime->hasFunction(0x23B0D8u)) {
        auto targetFn = runtime->lookupFunction(0x23B0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134224u; }
        if (ctx->pc != 0x134224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b0d8_0x23b108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134224u; }
        if (ctx->pc != 0x134224u) { return; }
    }
    ctx->pc = 0x134224u;
    // 0x134224: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x134224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x134228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13422c: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x13422Cu;
    SET_GPR_U32(ctx, 31, 0x134234u);
    ctx->pc = 0x134230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13422Cu;
            // 0x134230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134234u; }
        if (ctx->pc != 0x134234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134234u; }
        if (ctx->pc != 0x134234u) { return; }
    }
    ctx->pc = 0x134234u;
    // 0x134234: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x134234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x134238: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x134238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x13423c: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x13423cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
    // 0x134240: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x134240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x134244: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x134244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x134248: 0x163180  sll         $a2, $s6, 6
    ctx->pc = 0x134248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x13424c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x13424cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x134250: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x134250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x134254: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x134254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x134258: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x134258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x13425c: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x13425cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x134260: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x134260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x134264: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x134264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134268: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x134268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x13426c: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x13426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x134270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134274: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x134274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
    // 0x134278: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13427c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x13427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x134280: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x134280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x134284: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x134284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x134288: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x134288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x13428c: 0xae500038  sw          $s0, 0x38($s2)
    ctx->pc = 0x13428cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
    // 0x134290: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134294: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x134294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x134298: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x134298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13429c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x13429cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1342a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1342a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1342a4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1342a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1342a8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1342a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1342ac: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1342acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1342b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1342b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1342b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1342b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1342b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1342b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1342bc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1342bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1342c0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1342C0u;
    SET_GPR_U32(ctx, 31, 0x1342C8u);
    ctx->pc = 0x1342C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1342C0u;
            // 0x1342c4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342C8u; }
        if (ctx->pc != 0x1342C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342C8u; }
        if (ctx->pc != 0x1342C8u) { return; }
    }
    ctx->pc = 0x1342C8u;
    // 0x1342c8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1342c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1342cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1342CCu;
    {
        const bool branch_taken_0x1342cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1342CCu;
            // 0x1342d0: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342cc) {
            ctx->pc = 0x1342E4u;
            goto label_1342e4;
        }
    }
    ctx->pc = 0x1342D4u;
label_1342d4:
    // 0x1342d4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1342d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x1342d8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x1342d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x1342dc: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x1342dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x1342e0: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1342e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_1342e4:
    // 0x1342e4: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1342e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1342e8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1342e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1342ec: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1342ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1342f0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1342F0u;
    SET_GPR_U32(ctx, 31, 0x1342F8u);
    ctx->pc = 0x1342F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1342F0u;
            // 0x1342f4: 0x26e50008  addiu       $a1, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342F8u; }
        if (ctx->pc != 0x1342F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1342F8u; }
        if (ctx->pc != 0x1342F8u) { return; }
    }
    ctx->pc = 0x1342F8u;
    // 0x1342f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1342f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342fc: 0x0  nop
    ctx->pc = 0x1342fcu;
    // NOP
label_134300:
    // 0x134300: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x134300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134304: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x134304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134308: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x134308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13430c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x13430cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134314: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x134314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134318: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x134318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13431c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x13431cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134324: 0x3e00008  jr          $ra
    ctx->pc = 0x134324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134324u;
            // 0x134328: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13432Cu;
    // 0x13432c: 0x0  nop
    ctx->pc = 0x13432cu;
    // NOP
    // 0x134330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x134338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13433c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x134340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13433Cu;
            // 0x134340: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134344u; }
        if (ctx->pc != 0x134344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134344u; }
        if (ctx->pc != 0x134344u) { return; }
    }
    ctx->pc = 0x134344u;
    // 0x134344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13434c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13434cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x134350: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x134354: 0xc04f824  jal         func_13E090
    ctx->pc = 0x134354u;
    SET_GPR_U32(ctx, 31, 0x13435Cu);
    ctx->pc = 0x134358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134354u;
            // 0x134358: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13435Cu; }
        if (ctx->pc != 0x13435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13435Cu; }
        if (ctx->pc != 0x13435Cu) { return; }
    }
    ctx->pc = 0x13435Cu;
    // 0x13435c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13435cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x134360: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x134360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x134364: 0x2463f448  addiu       $v1, $v1, -0xBB8
    ctx->pc = 0x134364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964296));
    // 0x134368: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x134368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x13436c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x13436cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x134370: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x134370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x134374: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x134374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x134378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x134378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13437c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13437cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134384: 0x3e00008  jr          $ra
    ctx->pc = 0x134384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134384u;
            // 0x134388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13438Cu;
    // 0x13438c: 0x0  nop
    ctx->pc = 0x13438cu;
    // NOP
    // 0x134390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x134390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x134394: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x134394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x134398: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13439c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1343a0: 0xc04c3d2  jal         func_130F48
    ctx->pc = 0x1343A0u;
    SET_GPR_U32(ctx, 31, 0x1343A8u);
    ctx->pc = 0x1343A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343A0u;
            // 0x1343a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130F48u;
    if (runtime->hasFunction(0x130F48u)) {
        auto targetFn = runtime->lookupFunction(0x130F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343A8u; }
        if (ctx->pc != 0x1343A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130F48_0x130f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343A8u; }
        if (ctx->pc != 0x1343A8u) { return; }
    }
    ctx->pc = 0x1343A8u;
    // 0x1343a8: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1343a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1343ac: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1343ACu;
    {
        const bool branch_taken_0x1343ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1343ACu;
            // 0x1343b0: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343ac) {
            ctx->pc = 0x134414u;
            goto label_134414;
        }
    }
    ctx->pc = 0x1343B4u;
    // 0x1343b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1343b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1343b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1343bc: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1343BCu;
    {
        const bool branch_taken_0x1343bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1343C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1343BCu;
            // 0x1343c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343bc) {
            ctx->pc = 0x134410u;
            goto label_134410;
        }
    }
    ctx->pc = 0x1343C4u;
    // 0x1343c4: 0x0  nop
    ctx->pc = 0x1343c4u;
    // NOP
label_1343c8:
    // 0x1343c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1343c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1343cc: 0xc04c3d2  jal         func_130F48
    ctx->pc = 0x1343CCu;
    SET_GPR_U32(ctx, 31, 0x1343D4u);
    ctx->pc = 0x1343D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343CCu;
            // 0x1343d0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130F48u;
    if (runtime->hasFunction(0x130F48u)) {
        auto targetFn = runtime->lookupFunction(0x130F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343D4u; }
        if (ctx->pc != 0x1343D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130F48_0x130f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343D4u; }
        if (ctx->pc != 0x1343D4u) { return; }
    }
    ctx->pc = 0x1343D4u;
    // 0x1343d4: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x1343d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x1343d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1343d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1343dc: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x1343dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1343e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1343e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1343e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1343e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1343e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1343e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1343ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1343ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1343f0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1343f4: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x1343F4u;
    SET_GPR_U32(ctx, 31, 0x1343FCu);
    ctx->pc = 0x1343F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343F4u;
            // 0x1343f8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343FCu; }
        if (ctx->pc != 0x1343FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343FCu; }
        if (ctx->pc != 0x1343FCu) { return; }
    }
    ctx->pc = 0x1343FCu;
    // 0x1343fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1343fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x134400: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x134400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134404: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134408: 0x1443ffef  bne         $v0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x134408u;
    {
        const bool branch_taken_0x134408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134408u;
            // 0x13440c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134408) {
            ctx->pc = 0x1343C8u;
            runtime->cooperativeGuestYield();
            goto label_1343c8;
        }
    }
    ctx->pc = 0x134410u;
label_134410:
    // 0x134410: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x134410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_134414:
    // 0x134414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134418: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x134418u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x13441c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134420: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x134420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x134424: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x134424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x134428: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x134428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x13442c: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x13442Cu;
    SET_GPR_U32(ctx, 31, 0x134434u);
    ctx->pc = 0x134430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13442Cu;
            // 0x134430: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134434u; }
        if (ctx->pc != 0x134434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134434u; }
        if (ctx->pc != 0x134434u) { return; }
    }
    ctx->pc = 0x134434u;
    // 0x134434: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x134434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13443c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134440: 0x3e00008  jr          $ra
    ctx->pc = 0x134440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134440u;
            // 0x134444: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134448u;
    // 0x134448: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x134448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13444c: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x13444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x134450: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x134450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x134454: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x134454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x134458: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13445c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13445cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134460: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x134460u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x134464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13446c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x134470: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134474: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x134474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x134478: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x134478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x13447c: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x13447Cu;
    SET_GPR_U32(ctx, 31, 0x134484u);
    ctx->pc = 0x134480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13447Cu;
            // 0x134480: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134484u; }
        if (ctx->pc != 0x134484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134484u; }
        if (ctx->pc != 0x134484u) { return; }
    }
    ctx->pc = 0x134484u;
    // 0x134484: 0xc04c398  jal         func_130E60
    ctx->pc = 0x134484u;
    SET_GPR_U32(ctx, 31, 0x13448Cu);
    ctx->pc = 0x134488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134484u;
            // 0x134488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130E60u;
    if (runtime->hasFunction(0x130E60u)) {
        auto targetFn = runtime->lookupFunction(0x130E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13448Cu; }
        if (ctx->pc != 0x13448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130E60_0x130e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13448Cu; }
        if (ctx->pc != 0x13448Cu) { return; }
    }
    ctx->pc = 0x13448Cu;
    // 0x13448c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x13448cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134490: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x134494: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x134494u;
    {
        const bool branch_taken_0x134494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134494) {
            ctx->pc = 0x134498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134494u;
            // 0x134498: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134554u;
            goto label_134554;
        }
    }
    ctx->pc = 0x13449Cu;
    // 0x13449c: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x13449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1344a0: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1344A0u;
    {
        const bool branch_taken_0x1344a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1344A0u;
            // 0x1344a4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344a0) {
            ctx->pc = 0x134550u;
            goto label_134550;
        }
    }
    ctx->pc = 0x1344A8u;
    // 0x1344a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1344a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1344ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1344acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1344b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1344b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1344b4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1344b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1344b8: 0x50440026  beql        $v0, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1344B8u;
    {
        const bool branch_taken_0x1344b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1344b8) {
            ctx->pc = 0x1344BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1344B8u;
            // 0x1344bc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134554u;
            goto label_134554;
        }
    }
    ctx->pc = 0x1344C0u;
    // 0x1344c0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1344c4: 0x0  nop
    ctx->pc = 0x1344c4u;
    // NOP
label_1344c8:
    // 0x1344c8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1344c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1344cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1344ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1344d0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1344d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1344d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1344d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1344d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1344dc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1344dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1344e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1344e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1344e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1344e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1344e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1344e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1344ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1344ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1344f0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1344f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1344f4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1344f8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1344f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1344fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1344fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134500: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x134500u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x134504: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x134504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x134508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13450c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134514: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x134514u;
    {
        const bool branch_taken_0x134514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134514u;
            // 0x134518: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134514) {
            ctx->pc = 0x134540u;
            goto label_134540;
        }
    }
    ctx->pc = 0x13451Cu;
    // 0x13451c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x13451cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x134520: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x134520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x134524: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x134524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x134528: 0xa4c20004  sh          $v0, 0x4($a2)
    ctx->pc = 0x134528u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x13452c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x13452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x134530: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x134534: 0x40f809  jalr        $v0
    ctx->pc = 0x134534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13453Cu);
        ctx->pc = 0x134538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134534u;
            // 0x134538: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13453Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13453Cu; }
            if (ctx->pc != 0x13453Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13453Cu;
    // 0x13453c: 0x0  nop
    ctx->pc = 0x13453cu;
    // NOP
label_134540:
    // 0x134540: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x134540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x134544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134548: 0x1462ffdf  bne         $v1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x134548u;
    {
        const bool branch_taken_0x134548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13454Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134548u;
            // 0x13454c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134548) {
            ctx->pc = 0x1344C8u;
            runtime->cooperativeGuestYield();
            goto label_1344c8;
        }
    }
    ctx->pc = 0x134550u;
label_134550:
    // 0x134550: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x134550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_134554:
    // 0x134554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134558: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x134558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13455c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13455cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134560: 0x3e00008  jr          $ra
    ctx->pc = 0x134560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134560u;
            // 0x134564: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134568u;
    // 0x134568: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x134568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13456c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x134570: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x134570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x134574: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x134574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134578: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x134578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x13457c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13457cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134580: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x134580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x134584: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x134584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x134588: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x134588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x13458c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134590: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x134590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x134594: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x134594u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x134598: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x13459c: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x13459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x1345a0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1345a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1345a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1345a8: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1345A8u;
    {
        const bool branch_taken_0x1345a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345A8u;
            // 0x1345ac: 0xac5300d8  sw          $s3, 0xD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345a8) {
            ctx->pc = 0x134630u;
            goto label_134630;
        }
    }
    ctx->pc = 0x1345B0u;
    // 0x1345b0: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x1345b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1345b4: 0x0  nop
    ctx->pc = 0x1345b4u;
    // NOP
label_1345b8:
    // 0x1345b8: 0x5240001b  beql        $s2, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1345B8u;
    {
        const bool branch_taken_0x1345b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345b8) {
            ctx->pc = 0x1345BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1345B8u;
            // 0x1345bc: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134628u;
            goto label_134628;
        }
    }
    ctx->pc = 0x1345C0u;
    // 0x1345c0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1345c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1345c4: 0x52120018  beql        $s0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1345C4u;
    {
        const bool branch_taken_0x1345c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x1345c4) {
            ctx->pc = 0x1345C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1345C4u;
            // 0x1345c8: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134628u;
            goto label_134628;
        }
    }
    ctx->pc = 0x1345CCu;
    // 0x1345cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1345ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1345d0:
    // 0x1345d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1345d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1345d4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1345d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1345d8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1345D8u;
    {
        const bool branch_taken_0x1345d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1345DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345D8u;
            // 0x1345dc: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345d8) {
            ctx->pc = 0x134618u;
            goto label_134618;
        }
    }
    ctx->pc = 0x1345E0u;
    // 0x1345e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1345E0u;
    {
        const bool branch_taken_0x1345e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1345E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345E0u;
            // 0x1345e4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345e0) {
            ctx->pc = 0x134618u;
            goto label_134618;
        }
    }
    ctx->pc = 0x1345E8u;
    // 0x1345e8: 0x26a3e848  addiu       $v1, $s5, -0x17B8
    ctx->pc = 0x1345e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x1345ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1345ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1345f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1345f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1345f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1345f8: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1345f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1345fc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x134600: 0x40f809  jalr        $v0
    ctx->pc = 0x134600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134608u);
        ctx->pc = 0x134604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134600u;
            // 0x134604: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x134608u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x134608u; }
            if (ctx->pc != 0x134608u) { return; }
        }
        }
    }
    ctx->pc = 0x134608u;
    // 0x134608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13460c: 0xc04c492  jal         func_131248
    ctx->pc = 0x13460Cu;
    SET_GPR_U32(ctx, 31, 0x134614u);
    ctx->pc = 0x134610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13460Cu;
            // 0x134610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134614u; }
        if (ctx->pc != 0x134614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134614u; }
        if (ctx->pc != 0x134614u) { return; }
    }
    ctx->pc = 0x134614u;
    // 0x134614: 0x0  nop
    ctx->pc = 0x134614u;
    // NOP
label_134618:
    // 0x134618: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x134618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13461c: 0x5612ffec  bnel        $s0, $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13461Cu;
    {
        const bool branch_taken_0x13461c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x13461c) {
            ctx->pc = 0x134620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13461Cu;
            // 0x134620: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1345D0u;
            runtime->cooperativeGuestYield();
            goto label_1345d0;
        }
    }
    ctx->pc = 0x134624u;
    // 0x134624: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x134624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_134628:
    // 0x134628: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x134628u;
    {
        const bool branch_taken_0x134628 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x134628) {
            ctx->pc = 0x13462Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134628u;
            // 0x13462c: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1345B8u;
            runtime->cooperativeGuestYield();
            goto label_1345b8;
        }
    }
    ctx->pc = 0x134630u;
label_134630:
    // 0x134630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134634: 0xc04c270  jal         func_1309C0
    ctx->pc = 0x134634u;
    SET_GPR_U32(ctx, 31, 0x13463Cu);
    ctx->pc = 0x134638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134634u;
            // 0x134638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309C0u;
    if (runtime->hasFunction(0x1309C0u)) {
        auto targetFn = runtime->lookupFunction(0x1309C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13463Cu; }
        if (ctx->pc != 0x13463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001309C0_0x1309c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13463Cu; }
        if (ctx->pc != 0x13463Cu) { return; }
    }
    ctx->pc = 0x13463Cu;
    // 0x13463c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x13463cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134640: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x134640u;
    {
        const bool branch_taken_0x134640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x134644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134640u;
            // 0x134644: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134640) {
            ctx->pc = 0x1346D8u;
            goto label_1346d8;
        }
    }
    ctx->pc = 0x134648u;
    // 0x134648: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13464c: 0x0  nop
    ctx->pc = 0x13464cu;
    // NOP
label_134650:
    // 0x134650: 0x5240001e  beql        $s2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x134650u;
    {
        const bool branch_taken_0x134650 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x134650) {
            ctx->pc = 0x134654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134650u;
            // 0x134654: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1346CCu;
            goto label_1346cc;
        }
    }
    ctx->pc = 0x134658u;
    // 0x134658: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x134658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13465c: 0x5212001b  beql        $s0, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x13465Cu;
    {
        const bool branch_taken_0x13465c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x13465c) {
            ctx->pc = 0x134660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13465Cu;
            // 0x134660: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1346CCu;
            goto label_1346cc;
        }
    }
    ctx->pc = 0x134664u;
    // 0x134664: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x134664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_134668:
    // 0x134668: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x134668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13466c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x13466cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134670: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134670u;
    {
        const bool branch_taken_0x134670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x134674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134670u;
            // 0x134674: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134670) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134678u;
    // 0x134678: 0x54820011  bnel        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x134678u;
    {
        const bool branch_taken_0x134678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134678) {
            ctx->pc = 0x13467Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134678u;
            // 0x13467c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1346C0u;
            goto label_1346c0;
        }
    }
    ctx->pc = 0x134680u;
label_134680:
    // 0x134680: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x134680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x134684: 0x2463e848  addiu       $v1, $v1, -0x17B8
    ctx->pc = 0x134684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x134688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x134688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13468c: 0xac5300d8  sw          $s3, 0xD8($v0)
    ctx->pc = 0x13468cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 19));
    // 0x134690: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x134690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x134694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134698: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13469c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1346a0: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1346a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1346a4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1346a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1346a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1346A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1346B0u);
        ctx->pc = 0x1346ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346A8u;
            // 0x1346ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1346B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1346B0u; }
            if (ctx->pc != 0x1346B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1346B0u;
    // 0x1346b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1346b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346b4: 0xc04c492  jal         func_131248
    ctx->pc = 0x1346B4u;
    SET_GPR_U32(ctx, 31, 0x1346BCu);
    ctx->pc = 0x1346B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1346B4u;
            // 0x1346b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346BCu; }
        if (ctx->pc != 0x1346BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1346BCu; }
        if (ctx->pc != 0x1346BCu) { return; }
    }
    ctx->pc = 0x1346BCu;
    // 0x1346bc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1346bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1346c0:
    // 0x1346c0: 0x5612ffe9  bnel        $s0, $s2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1346C0u;
    {
        const bool branch_taken_0x1346c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1346c0) {
            ctx->pc = 0x1346C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1346C0u;
            // 0x1346c4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134668u;
            runtime->cooperativeGuestYield();
            goto label_134668;
        }
    }
    ctx->pc = 0x1346C8u;
    // 0x1346c8: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x1346c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1346cc:
    // 0x1346cc: 0x5620ffe0  bnel        $s1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1346CCu;
    {
        const bool branch_taken_0x1346cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1346cc) {
            ctx->pc = 0x1346D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1346CCu;
            // 0x1346d0: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134650u;
            runtime->cooperativeGuestYield();
            goto label_134650;
        }
    }
    ctx->pc = 0x1346D4u;
    // 0x1346d4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1346d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1346d8:
    // 0x1346d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1346d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1346dc: 0x8c63e84c  lw          $v1, -0x17B4($v1)
    ctx->pc = 0x1346dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961228)));
    // 0x1346e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1346e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1346e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1346e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1346e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1346ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1346ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1346f0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1346f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1346f4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1346f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1346f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1346f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1346fc: 0xac6000d8  sw          $zero, 0xD8($v1)
    ctx->pc = 0x1346fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
    // 0x134700: 0x3e00008  jr          $ra
    ctx->pc = 0x134700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134700u;
            // 0x134704: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134708u;
    // 0x134708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x134708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13470c: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x13470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x134710: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x134710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x134714: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134718: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x134718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13471c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x13471cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x134720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134724: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x134724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x134728: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13472c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13472cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x134730: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x134730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x134734: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x134734u;
    SET_GPR_U32(ctx, 31, 0x13473Cu);
    ctx->pc = 0x134738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134734u;
            // 0x134738: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13473Cu; }
        if (ctx->pc != 0x13473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13473Cu; }
        if (ctx->pc != 0x13473Cu) { return; }
    }
    ctx->pc = 0x13473Cu;
    // 0x13473c: 0xc04c478  jal         func_1311E0
    ctx->pc = 0x13473Cu;
    SET_GPR_U32(ctx, 31, 0x134744u);
    ctx->pc = 0x134740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13473Cu;
            // 0x134740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1311E0u;
    if (runtime->hasFunction(0x1311E0u)) {
        auto targetFn = runtime->lookupFunction(0x1311E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134744u; }
        if (ctx->pc != 0x134744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001311E0_0x1311e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134744u; }
        if (ctx->pc != 0x134744u) { return; }
    }
    ctx->pc = 0x134744u;
    // 0x134744: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x134744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x134748: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x134748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x13474c: 0xc047e1c  jal         func_11F870
    ctx->pc = 0x13474Cu;
    SET_GPR_U32(ctx, 31, 0x134754u);
    ctx->pc = 0x134750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13474Cu;
            // 0x134750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F870u;
    if (runtime->hasFunction(0x11F870u)) {
        auto targetFn = runtime->lookupFunction(0x11F870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134754u; }
        if (ctx->pc != 0x134754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F870_0x11f870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134754u; }
        if (ctx->pc != 0x134754u) { return; }
    }
    ctx->pc = 0x134754u;
    // 0x134754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x134754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13475c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134760: 0x3e00008  jr          $ra
    ctx->pc = 0x134760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134760u;
            // 0x134764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134768u;
    // 0x134768: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x13476c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13476cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134770: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x134770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x134774: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x134774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x134778: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13477c: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x13477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x134780: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x134780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x134784: 0x26430024  addiu       $v1, $s2, 0x24
    ctx->pc = 0x134784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x134788: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x134788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x13478c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x134790: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x134794: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_134798:
    // 0x134798: 0x0  nop
    ctx->pc = 0x134798u;
    // NOP
    // 0x13479c: 0x0  nop
    ctx->pc = 0x13479cu;
    // NOP
    // 0x1347a0: 0x0  nop
    ctx->pc = 0x1347a0u;
    // NOP
    // 0x1347a4: 0x0  nop
    ctx->pc = 0x1347a4u;
    // NOP
    // 0x1347a8: 0x0  nop
    ctx->pc = 0x1347a8u;
    // NOP
    // 0x1347ac: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1347ACu;
    {
        const bool branch_taken_0x1347ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1347ac) {
            ctx->pc = 0x1347B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1347ACu;
            // 0x1347b0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134798u;
            runtime->cooperativeGuestYield();
            goto label_134798;
        }
    }
    ctx->pc = 0x1347B4u;
    // 0x1347b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1347b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1347b8: 0xace40080  sw          $a0, 0x80($a3)
    ctx->pc = 0x1347b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 4));
    // 0x1347bc: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x1347bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1347c0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1347C0u;
    {
        const bool branch_taken_0x1347c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1347C0u;
            // 0x1347c4: 0xafa00184  sw          $zero, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347c0) {
            ctx->pc = 0x134810u;
            goto label_134810;
        }
    }
    ctx->pc = 0x1347C8u;
    // 0x1347c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1347cc: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1347CCu;
    {
        const bool branch_taken_0x1347cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1347D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1347CCu;
            // 0x1347d0: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347cc) {
            ctx->pc = 0x134810u;
            goto label_134810;
        }
    }
    ctx->pc = 0x1347D4u;
    // 0x1347d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1347d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1347d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1347d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1347dc: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1347dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1347e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1347e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1347e4: 0x6ba20197  ldl         $v0, 0x197($sp)
    ctx->pc = 0x1347e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1347e8: 0x6fa20190  ldr         $v0, 0x190($sp)
    ctx->pc = 0x1347e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1347ec: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1347ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347f0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1347f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1347f4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1347f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1347f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1347fc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1347fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134800: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x134800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x134804: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134808: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x134808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13480c: 0x0  nop
    ctx->pc = 0x13480cu;
    // NOP
label_134810:
    // 0x134810: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x134814: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x134814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x134818: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13481c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x13481Cu;
    {
        const bool branch_taken_0x13481c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13481Cu;
            // 0x134820: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13481c) {
            ctx->pc = 0x134930u;
            goto label_134930;
        }
    }
    ctx->pc = 0x134824u;
    // 0x134824: 0x5d4821  addu        $t1, $v0, $sp
    ctx->pc = 0x134824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x134828: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x134828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13482c: 0x0  nop
    ctx->pc = 0x13482cu;
    // NOP
label_134830:
    // 0x134830: 0x8fa80180  lw          $t0, 0x180($sp)
    ctx->pc = 0x134830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x134834: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x134838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13483c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x134840: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x134840u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134844: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x134844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x134848: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13484c: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x134850: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x134850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x134854: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x134854u;
    {
        const bool branch_taken_0x134854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134854u;
            // 0x134858: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134854) {
            ctx->pc = 0x1348A8u;
            goto label_1348a8;
        }
    }
    ctx->pc = 0x13485Cu;
    // 0x13485c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13485Cu;
    {
        const bool branch_taken_0x13485c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13485c) {
            ctx->pc = 0x134860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13485Cu;
            // 0x134860: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1348ACu;
            goto label_1348ac;
        }
    }
    ctx->pc = 0x134864u;
    // 0x134864: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134868: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x134868u;
    {
        const bool branch_taken_0x134868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x13486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134868u;
            // 0x13486c: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134868) {
            ctx->pc = 0x1348A8u;
            goto label_1348a8;
        }
    }
    ctx->pc = 0x134870u;
    // 0x134870: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134874: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x134874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x134878: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13487c: 0x6ba301a7  ldl         $v1, 0x1A7($sp)
    ctx->pc = 0x13487cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x134880: 0x6fa301a0  ldr         $v1, 0x1A0($sp)
    ctx->pc = 0x134880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x134884: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x134884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134888: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x134888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13488c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x13488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x134890: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134894: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x134894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134898: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x134898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x13489c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1348a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1348A0u;
    {
        const bool branch_taken_0x1348a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1348A0u;
            // 0x1348a4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348a0) {
            ctx->pc = 0x1348F4u;
            goto label_1348f4;
        }
    }
    ctx->pc = 0x1348A8u;
label_1348a8:
    // 0x1348a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1348a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1348ac:
    // 0x1348ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1348acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1348b0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1348B0u;
    {
        const bool branch_taken_0x1348b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1348B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1348B0u;
            // 0x1348b4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348b0) {
            ctx->pc = 0x1348F4u;
            goto label_1348f4;
        }
    }
    ctx->pc = 0x1348B8u;
    // 0x1348b8: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1348b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1348bc: 0x0  nop
    ctx->pc = 0x1348bcu;
    // NOP
label_1348c0:
    // 0x1348c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1348c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1348c4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1348c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1348c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1348cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1348CCu;
    {
        const bool branch_taken_0x1348cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1348CCu;
            // 0x1348d0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348cc) {
            ctx->pc = 0x1348F0u;
            goto label_1348f0;
        }
    }
    ctx->pc = 0x1348D4u;
    // 0x1348d4: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1348d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1348d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1348d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1348dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1348dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1348e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1348e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1348e4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1348E4u;
    {
        const bool branch_taken_0x1348e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1348E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1348E4u;
            // 0x1348e8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348e4) {
            ctx->pc = 0x1348C0u;
            runtime->cooperativeGuestYield();
            goto label_1348c0;
        }
    }
    ctx->pc = 0x1348ECu;
    // 0x1348ec: 0x0  nop
    ctx->pc = 0x1348ecu;
    // NOP
label_1348f0:
    // 0x1348f0: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x1348f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_1348f4:
    // 0x1348f4: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x1348f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x1348f8: 0x95630004  lhu         $v1, 0x4($t3)
    ctx->pc = 0x1348f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1348fc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1348fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x134900: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134900u;
    {
        const bool branch_taken_0x134900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134900u;
            // 0x134904: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134900) {
            ctx->pc = 0x134928u;
            goto label_134928;
        }
    }
    ctx->pc = 0x134908u;
    // 0x134908: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x134908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13490c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13490Cu;
    {
        const bool branch_taken_0x13490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13490Cu;
            // 0x134910: 0x8fa20180  lw          $v0, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13490c) {
            ctx->pc = 0x134928u;
            goto label_134928;
        }
    }
    ctx->pc = 0x134914u;
    // 0x134914: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x134914u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x134918: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x134918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13491c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x134920: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x134920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x134924: 0x0  nop
    ctx->pc = 0x134924u;
    // NOP
label_134928:
    // 0x134928: 0x441ffc1  bgez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x134928u;
    {
        const bool branch_taken_0x134928 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134928u;
            // 0x13492c: 0x27a20100  addiu       $v0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134928) {
            ctx->pc = 0x134830u;
            runtime->cooperativeGuestYield();
            goto label_134830;
        }
    }
    ctx->pc = 0x134930u;
label_134930:
    // 0x134930: 0x1940000c  blez        $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x134930u;
    {
        const bool branch_taken_0x134930 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x134934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134930u;
            // 0x134934: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134930) {
            ctx->pc = 0x134964u;
            goto label_134964;
        }
    }
    ctx->pc = 0x134938u;
    // 0x134938: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x134938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13493c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_134940:
    // 0x134940: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x134940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x134944: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x134944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134948: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x13494c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13494cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x134950: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x134950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x134954: 0x40f809  jalr        $v0
    ctx->pc = 0x134954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13495Cu);
        ctx->pc = 0x134958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134954u;
            // 0x134958: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13495Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13495Cu; }
            if (ctx->pc != 0x13495Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13495Cu;
    // 0x13495c: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13495Cu;
    {
        const bool branch_taken_0x13495c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13495c) {
            ctx->pc = 0x134960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13495Cu;
            // 0x134960: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134940u;
            runtime->cooperativeGuestYield();
            goto label_134940;
        }
    }
    ctx->pc = 0x134964u;
label_134964:
    // 0x134964: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x134964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x134968: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x134968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x13496c: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x13496cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x134970: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x134970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134974: 0x3e00008  jr          $ra
    ctx->pc = 0x134974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134974u;
            // 0x134978: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133D50u: goto label_133d50;
            case 0x133D64u: goto label_133d64;
            case 0x133DE0u: goto label_133de0;
            case 0x133E00u: goto label_133e00;
            case 0x133EB4u: goto label_133eb4;
            case 0x133F60u: goto label_133f60;
            case 0x133FF8u: goto label_133ff8;
            case 0x134040u: goto label_134040;
            case 0x134090u: goto label_134090;
            case 0x134098u: goto label_134098;
            case 0x1340C8u: goto label_1340c8;
            case 0x1340F0u: goto label_1340f0;
            case 0x1340F4u: goto label_1340f4;
            case 0x134108u: goto label_134108;
            case 0x134118u: goto label_134118;
            case 0x134158u: goto label_134158;
            case 0x134188u: goto label_134188;
            case 0x1341F8u: goto label_1341f8;
            case 0x1342D4u: goto label_1342d4;
            case 0x1342E4u: goto label_1342e4;
            case 0x134300u: goto label_134300;
            case 0x1343C8u: goto label_1343c8;
            case 0x134410u: goto label_134410;
            case 0x134414u: goto label_134414;
            case 0x1344C8u: goto label_1344c8;
            case 0x134540u: goto label_134540;
            case 0x134550u: goto label_134550;
            case 0x134554u: goto label_134554;
            case 0x1345B8u: goto label_1345b8;
            case 0x1345D0u: goto label_1345d0;
            case 0x134618u: goto label_134618;
            case 0x134628u: goto label_134628;
            case 0x134630u: goto label_134630;
            case 0x134650u: goto label_134650;
            case 0x134668u: goto label_134668;
            case 0x134680u: goto label_134680;
            case 0x1346C0u: goto label_1346c0;
            case 0x1346CCu: goto label_1346cc;
            case 0x1346D8u: goto label_1346d8;
            case 0x134798u: goto label_134798;
            case 0x134810u: goto label_134810;
            case 0x134830u: goto label_134830;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x134928u: goto label_134928;
            case 0x134930u: goto label_134930;
            case 0x134940u: goto label_134940;
            case 0x134964u: goto label_134964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13497Cu;
    // 0x13497c: 0x0  nop
    ctx->pc = 0x13497cu;
    // NOP
}
