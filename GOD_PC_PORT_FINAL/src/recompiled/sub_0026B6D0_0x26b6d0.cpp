#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B6D0
// Address: 0x26b6d0 - 0x26b918
void sub_0026B6D0_0x26b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B6D0_0x26b6d0");
#endif

    ctx->pc = 0x26b6d0u;

    // 0x26b6d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26b6d4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x26b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x26b6d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26b6dc: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x26b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x26b6e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26b6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26b6e4: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x26b6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x26b6e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26b6ec: 0x3c0b002a  lui         $t3, 0x2A
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)42 << 16));
    // 0x26b6f0: 0x3c0c002a  lui         $t4, 0x2A
    ctx->pc = 0x26b6f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)42 << 16));
    // 0x26b6f4: 0x3c0d002a  lui         $t5, 0x2A
    ctx->pc = 0x26b6f4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)42 << 16));
    // 0x26b6f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6fc: 0x26425940  addiu       $v0, $s2, 0x5940
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22848));
    // 0x26b700: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x26b700u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x26b704: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x26b704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x26b708: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x26b708u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x26b70c: 0x24a59940  addiu       $a1, $a1, -0x66C0
    ctx->pc = 0x26b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940992));
    // 0x26b710: 0x24e77940  addiu       $a3, $a3, 0x7940
    ctx->pc = 0x26b710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31040));
    // 0x26b714: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26b718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b71c: 0x24c69d80  addiu       $a2, $a2, -0x6280
    ctx->pc = 0x26b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942080));
    // 0x26b720: 0xad621358  sw          $v0, 0x1358($t3)
    ctx->pc = 0x26b720u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4952), GPR_U32(ctx, 2));
    // 0x26b724: 0x25088940  addiu       $t0, $t0, -0x76C0
    ctx->pc = 0x26b724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936896));
    // 0x26b728: 0x25641358  addiu       $a0, $t3, 0x1358
    ctx->pc = 0x26b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4952));
    // 0x26b72c: 0x26636940  addiu       $v1, $s3, 0x6940
    ctx->pc = 0x26b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 26944));
    // 0x26b730: 0x25891370  addiu       $t1, $t4, 0x1370
    ctx->pc = 0x26b730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4976));
    // 0x26b734: 0x25aa1368  addiu       $t2, $t5, 0x1368
    ctx->pc = 0x26b734u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 4968));
    // 0x26b738: 0xad851370  sw          $a1, 0x1370($t4)
    ctx->pc = 0x26b738u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4976), GPR_U32(ctx, 5));
    // 0x26b73c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x26b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x26b740: 0xada71368  sw          $a3, 0x1368($t5)
    ctx->pc = 0x26b740u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4968), GPR_U32(ctx, 7));
    // 0x26b744: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x26b744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x26b748: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x26b748u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x26b74c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B74Cu;
    {
        const bool branch_taken_0x26b74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B74Cu;
            // 0x26b750: 0xad480004  sw          $t0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b74c) {
            ctx->pc = 0x26B764u;
            goto label_26b764;
        }
    }
    ctx->pc = 0x26B754u;
    // 0x26b754: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26b754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26b758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b75c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B75Cu;
    {
        const bool branch_taken_0x26b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B75Cu;
            // 0x26b760: 0xac6213b0  sw          $v0, 0x13B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b75c) {
            ctx->pc = 0x26B76Cu;
            goto label_26b76c;
        }
    }
    ctx->pc = 0x26B764u;
label_26b764:
    // 0x26b764: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26b764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26b768: 0xac4013b0  sw          $zero, 0x13B0($v0)
    ctx->pc = 0x26b768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5040), GPR_U32(ctx, 0));
label_26b76c:
    // 0x26b76c: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x26B76Cu;
    SET_GPR_U32(ctx, 31, 0x26B774u);
    ctx->pc = 0x26B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B76Cu;
            // 0x26b770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B774u; }
        if (ctx->pc != 0x26B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B774u; }
        if (ctx->pc != 0x26B774u) { return; }
    }
    ctx->pc = 0x26B774u;
    // 0x26b774: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x26b774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_26b778:
    // 0x26b778: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x26b778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x26b77c: 0x260455c8  addiu       $a0, $s0, 0x55C8
    ctx->pc = 0x26b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
    // 0x26b780: 0x34a53456  ori         $a1, $a1, 0x3456
    ctx->pc = 0x26b780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13398);
    // 0x26b784: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x26B784u;
    SET_GPR_U32(ctx, 31, 0x26B78Cu);
    ctx->pc = 0x26B788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B784u;
            // 0x26b788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B78Cu; }
        if (ctx->pc != 0x26B78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B78Cu; }
        if (ctx->pc != 0x26B78Cu) { return; }
    }
    ctx->pc = 0x26B78Cu;
    // PASSO 11A: sub_00297290(sid=0x123456) — sem IOP real retorna v0<0, forcamos 0
    {
        int32_t _v0_11a = GPR_S32(ctx, 2);
        if (_v0_11a < 0) {
            std::cerr << "[PASSO 11A] sub_00297290 sid=0x123456 retornou v0=" << _v0_11a << " < 0, forcando 0\n";
            SET_GPR_S32(ctx, 2, 0);
        } else {
            std::cerr << "[PASSO 11A] sub_00297290 sid=0x123456 retornou v0=" << _v0_11a << " OK\n";
        }
    }
    // 0x26b78c: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B78Cu;
            // 0x26b790: 0x2403270f  addiu       $v1, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26B7CCu;
            goto label_26b7cc;
        }
    }
    ctx->pc = 0x26B794u;
    // 0x26b794: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x26b798: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x26b798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x26b79c: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x26b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x26b7a0: 0x24a53da8  addiu       $a1, $a1, 0x3DA8
    ctx->pc = 0x26b7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    // 0x26b7a4: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26B7A4u;
    SET_GPR_U32(ctx, 31, 0x26B7ACu);
    ctx->pc = 0x26B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7A4u;
            // 0x26b7a8: 0x240600b5  addiu       $a2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7ACu; }
        if (ctx->pc != 0x26B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7ACu; }
        if (ctx->pc != 0x26B7ACu) { return; }
    }
    ctx->pc = 0x26B7ACu;
    // 0x26b7ac: 0x0  nop
    ctx->pc = 0x26b7acu;
    // NOP
label_26b7b0:
    // 0x26b7b0: 0x0  nop
    ctx->pc = 0x26b7b0u;
    // NOP
    // 0x26b7b4: 0x0  nop
    ctx->pc = 0x26b7b4u;
    // NOP
    // 0x26b7b8: 0x0  nop
    ctx->pc = 0x26b7b8u;
    // NOP
    // 0x26b7bc: 0x0  nop
    ctx->pc = 0x26b7bcu;
    // NOP
    // 0x26b7c0: 0x0  nop
    ctx->pc = 0x26b7c0u;
    // NOP
    // 0x26b7c4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B7C4u;
    {
        const bool branch_taken_0x26b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7c4) {
            ctx->pc = 0x26B7B0u;
            runtime->cooperativeGuestYield();
            goto label_26b7b0;
        }
    }
    ctx->pc = 0x26B7CCu;
label_26b7cc:
    // 0x26b7cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26b7d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b7d4: 0x0  nop
    ctx->pc = 0x26b7d4u;
    // NOP
label_26b7d8:
    // 0x26b7d8: 0x0  nop
    ctx->pc = 0x26b7d8u;
    // NOP
    // 0x26b7dc: 0x0  nop
    ctx->pc = 0x26b7dcu;
    // NOP
    // 0x26b7e0: 0x0  nop
    ctx->pc = 0x26b7e0u;
    // NOP
    // 0x26b7e4: 0x0  nop
    ctx->pc = 0x26b7e4u;
    // NOP
    // 0x26b7e8: 0x0  nop
    ctx->pc = 0x26b7e8u;
    // NOP
    // 0x26b7ec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B7ECu;
    {
        const bool branch_taken_0x26b7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7ECu;
            // 0x26b7f0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7ec) {
            ctx->pc = 0x26B7D8u;
            runtime->cooperativeGuestYield();
            goto label_26b7d8;
        }
    }
    ctx->pc = 0x26B7F4u;
    // 0x26b7f4: 0x260255c8  addiu       $v0, $s0, 0x55C8
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
    // 0x26b7f8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // PASSO 11B: connected flag 1 (0x3055C8+0x24) — sem IOP fica 0, forcamos 1
    {
        std::cerr << "[PASSO 11B] connected flag 1 (0x3055C8+0x24) = " << GPR_S32(ctx, 2) << "\n";
        if (GPR_S32(ctx, 2) == 0) {
            std::cerr << "[PASSO 11B] forcando v0=1 (connected)\n";
            SET_GPR_S32(ctx, 2, 1);
        }
    }
    // 0x26b7fc: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x26B7FCu;
    {
        const bool branch_taken_0x26b7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7FCu;
            // 0x26b800: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7fc) {
            ctx->pc = 0x26B778u;
            runtime->cooperativeGuestYield();
            goto label_26b778;
        }
    }
    ctx->pc = 0x26B804u;
    // 0x26b804: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26b808: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26b80c: 0x24641388  addiu       $a0, $v1, 0x1388
    ctx->pc = 0x26b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x26b810: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x26b810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x26b814: 0xac401380  sw          $zero, 0x1380($v0)
    ctx->pc = 0x26b814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4992), GPR_U32(ctx, 0));
    // 0x26b818: 0xac601388  sw          $zero, 0x1388($v1)
    ctx->pc = 0x26b818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5000), GPR_U32(ctx, 0));
    // 0x26b81c: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x26b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x26b820: 0xaca0a240  sw          $zero, -0x5DC0($a1)
    ctx->pc = 0x26b820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943296), GPR_U32(ctx, 0));
    // 0x26b824: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x26b824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
label_26b828:
    // 0x26b828: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x26b828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x26b82c: 0x2604a200  addiu       $a0, $s0, -0x5E00
    ctx->pc = 0x26b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943232));
    // 0x26b830: 0x34a53457  ori         $a1, $a1, 0x3457
    ctx->pc = 0x26b830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13399);
    // 0x26b834: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x26B834u;
    SET_GPR_U32(ctx, 31, 0x26B83Cu);
    ctx->pc = 0x26B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B834u;
            // 0x26b838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B83Cu; }
        if (ctx->pc != 0x26B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B83Cu; }
        if (ctx->pc != 0x26B83Cu) { return; }
    }
    ctx->pc = 0x26B83Cu;
    // PASSO 11C: sub_00297290(sid=0x123457) — sem IOP real retorna v0<0, forcamos 0
    {
        int32_t _v0_11c = GPR_S32(ctx, 2);
        if (_v0_11c < 0) {
            std::cerr << "[PASSO 11C] sub_00297290 sid=0x123457 retornou v0=" << _v0_11c << " < 0, forcando 0\n";
            SET_GPR_S32(ctx, 2, 0);
        } else {
            std::cerr << "[PASSO 11C] sub_00297290 sid=0x123457 retornou v0=" << _v0_11c << " OK\n";
        }
    }
    // 0x26b83c: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26B83Cu;
    {
        const bool branch_taken_0x26b83c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B83Cu;
            // 0x26b840: 0x2403270f  addiu       $v1, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b83c) {
            ctx->pc = 0x26B87Cu;
            goto label_26b87c;
        }
    }
    ctx->pc = 0x26B844u;
    // 0x26b844: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x26b844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x26b848: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x26b848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x26b84c: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x26b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x26b850: 0x24a53da8  addiu       $a1, $a1, 0x3DA8
    ctx->pc = 0x26b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    // 0x26b854: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26B854u;
    SET_GPR_U32(ctx, 31, 0x26B85Cu);
    ctx->pc = 0x26B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B854u;
            // 0x26b858: 0x240600ca  addiu       $a2, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B85Cu; }
        if (ctx->pc != 0x26B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B85Cu; }
        if (ctx->pc != 0x26B85Cu) { return; }
    }
    ctx->pc = 0x26B85Cu;
    // 0x26b85c: 0x0  nop
    ctx->pc = 0x26b85cu;
    // NOP
label_26b860:
    // 0x26b860: 0x0  nop
    ctx->pc = 0x26b860u;
    // NOP
    // 0x26b864: 0x0  nop
    ctx->pc = 0x26b864u;
    // NOP
    // 0x26b868: 0x0  nop
    ctx->pc = 0x26b868u;
    // NOP
    // 0x26b86c: 0x0  nop
    ctx->pc = 0x26b86cu;
    // NOP
    // 0x26b870: 0x0  nop
    ctx->pc = 0x26b870u;
    // NOP
    // 0x26b874: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B874u;
    {
        const bool branch_taken_0x26b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b874) {
            ctx->pc = 0x26B860u;
            runtime->cooperativeGuestYield();
            goto label_26b860;
        }
    }
    ctx->pc = 0x26B87Cu;
label_26b87c:
    // 0x26b87c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26b880: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b884: 0x0  nop
    ctx->pc = 0x26b884u;
    // NOP
label_26b888:
    // 0x26b888: 0x0  nop
    ctx->pc = 0x26b888u;
    // NOP
    // 0x26b88c: 0x0  nop
    ctx->pc = 0x26b88cu;
    // NOP
    // 0x26b890: 0x0  nop
    ctx->pc = 0x26b890u;
    // NOP
    // 0x26b894: 0x0  nop
    ctx->pc = 0x26b894u;
    // NOP
    // 0x26b898: 0x0  nop
    ctx->pc = 0x26b898u;
    // NOP
    // 0x26b89c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B89Cu;
    {
        const bool branch_taken_0x26b89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B89Cu;
            // 0x26b8a0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b89c) {
            ctx->pc = 0x26B888u;
            runtime->cooperativeGuestYield();
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B8A4u;
    // 0x26b8a4: 0x2602a200  addiu       $v0, $s0, -0x5E00
    ctx->pc = 0x26b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943232));
    // 0x26b8a8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x26b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // PASSO 11D: connected flag 2 (0x30A200+0x24) — sem IOP fica 0, forcamos 1
    {
        std::cerr << "[PASSO 11D] connected flag 2 (0x30A200+0x24) = " << GPR_S32(ctx, 2) << "\n";
        if (GPR_S32(ctx, 2) == 0) {
            std::cerr << "[PASSO 11D] forcando v0=1 (connected)\n";
            SET_GPR_S32(ctx, 2, 1);
        }
    }
    // 0x26b8ac: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x26B8ACu;
    {
        const bool branch_taken_0x26b8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8ACu;
            // 0x26b8b0: 0x3c100031  lui         $s0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8ac) {
            ctx->pc = 0x26B828u;
            runtime->cooperativeGuestYield();
            goto label_26b828;
        }
    }
    ctx->pc = 0x26B8B4u;
    // 0x26b8b4: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x26b8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x26b8b8: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26b8bc: 0xac60a1c0  sw          $zero, -0x5E40($v1)
    ctx->pc = 0x26b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943168), GPR_U32(ctx, 0));
    // 0x26b8c0: 0x24070ffc  addiu       $a3, $zero, 0xFFC
    ctx->pc = 0x26b8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4092));
    // 0x26b8c4: 0x25021360  addiu       $v0, $t0, 0x1360
    ctx->pc = 0x26b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4960));
    // 0x26b8c8: 0x2463a1c0  addiu       $v1, $v1, -0x5E40
    ctx->pc = 0x26b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943168));
    // 0x26b8cc: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x26b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x26b8d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8d4: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x26b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x26b8d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26b8dc: 0xae405940  sw          $zero, 0x5940($s2)
    ctx->pc = 0x26b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22848), GPR_U32(ctx, 0));
    // 0x26b8e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26b8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b8e4: 0xae606940  sw          $zero, 0x6940($s3)
    ctx->pc = 0x26b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 26944), GPR_U32(ctx, 0));
    // 0x26b8e8: 0xad071360  sw          $a3, 0x1360($t0)
    ctx->pc = 0x26b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4960), GPR_U32(ctx, 7));
    // 0x26b8ec: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26b8f0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x26b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x26b8f4: 0xc09afca  jal         func_26BF28
    ctx->pc = 0x26B8F4u;
    SET_GPR_U32(ctx, 31, 0x26B8FCu);
    ctx->pc = 0x26BF28u;
    if (runtime->hasFunction(0x26BF28u)) {
        auto targetFn = runtime->lookupFunction(0x26BF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8FCu; }
        if (ctx->pc != 0x26B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BF28_0x26bf28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8FCu; }
        if (ctx->pc != 0x26B8FCu) { return; }
    }
    ctx->pc = 0x26B8FCu;
    // 0x26b8fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26b8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b900: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26b900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b904: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26b904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b908: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26b908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b910: 0x3e00008  jr          $ra
    ctx->pc = 0x26B910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B910u;
            // 0x26b914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B764u: goto label_26b764;
            case 0x26B76Cu: goto label_26b76c;
            case 0x26B778u: goto label_26b778;
            case 0x26B7B0u: goto label_26b7b0;
            case 0x26B7CCu: goto label_26b7cc;
            case 0x26B7D8u: goto label_26b7d8;
            case 0x26B828u: goto label_26b828;
            case 0x26B860u: goto label_26b860;
            case 0x26B87Cu: goto label_26b87c;
            case 0x26B888u: goto label_26b888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B918u;
}
