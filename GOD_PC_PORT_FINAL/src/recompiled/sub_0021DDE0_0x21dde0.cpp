#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021DDE0
// Address: 0x21dde0 - 0x21e300
void sub_0021DDE0_0x21dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DDE0_0x21dde0");
#endif

    ctx->pc = 0x21dde0u;

    // 0x21dde0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21dde4: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21dde4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21dde8: 0x8c4411d0  lw          $a0, 0x11D0($v0)
    ctx->pc = 0x21dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4560)));
    // 0x21ddec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21ddecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21ddf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21ddf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ddf4: 0x24a558f8  addiu       $a1, $a1, 0x58F8
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
    // 0x21ddf8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x21ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x21ddfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21de00: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x21de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x21de04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21de04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de08: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x21de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x21de0c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x21de0cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x21de10: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x21de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x21de14: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x21de14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x21de18: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x21de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x21de1c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x21de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x21de20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21de24: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x21de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x21de28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21de2c: 0xc08a978  jal         func_22A5E0
    ctx->pc = 0x21DE2Cu;
    SET_GPR_U32(ctx, 31, 0x21DE34u);
    ctx->pc = 0x21DE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE2Cu;
            // 0x21de30: 0x3c17002a  lui         $s7, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A5E0u;
    if (runtime->hasFunction(0x22A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DE34u; }
        if (ctx->pc != 0x21DE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A5E0_0x22a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DE34u; }
        if (ctx->pc != 0x21DE34u) { return; }
    }
    ctx->pc = 0x21DE34u;
    // 0x21de34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21de38: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21de38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21de3c: 0xac40e5e0  sw          $zero, -0x1A20($v0)
    ctx->pc = 0x21de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960608), GPR_U32(ctx, 0));
    // 0x21de40: 0xac60e5d8  sw          $zero, -0x1A28($v1)
    ctx->pc = 0x21de40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960600), GPR_U32(ctx, 0));
    // 0x21de44: 0xaee0e5cc  sw          $zero, -0x1A34($s7)
    ctx->pc = 0x21de44u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294960588), GPR_U32(ctx, 0));
    // 0x21de48: 0xaec0e5d0  sw          $zero, -0x1A30($s6)
    ctx->pc = 0x21de48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294960592), GPR_U32(ctx, 0));
    // 0x21de4c: 0xae60e5d4  sw          $zero, -0x1A2C($s3)
    ctx->pc = 0x21de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960596), GPR_U32(ctx, 0));
    // 0x21de50: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x21de50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x21de54: 0x0  nop
    ctx->pc = 0x21de54u;
    // NOP
label_21de58:
    // 0x21de58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21de58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21de5c: 0x26a34f80  addiu       $v1, $s5, 0x4F80
    ctx->pc = 0x21de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 20352));
    // 0x21de60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21de64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21de68: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x21de68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21de6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21DE6Cu;
    {
        const bool branch_taken_0x21de6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE6Cu;
            // 0x21de70: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de6c) {
            ctx->pc = 0x21DE58u;
            runtime->cooperativeGuestYield();
            goto label_21de58;
        }
    }
    ctx->pc = 0x21DE74u;
    // 0x21de74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21de78: 0x8c42e84c  lw          $v0, -0x17B4($v0)
    ctx->pc = 0x21de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x21de7c: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x21de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x21de80: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21de84: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x21de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21de88: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x21de88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21de8c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x21de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21de90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21de90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21de94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21de98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21de9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21dea0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21dea4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x21dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21dea8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DEA8u;
    {
        const bool branch_taken_0x21dea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DEA8u;
            // 0x21deac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dea8) {
            ctx->pc = 0x21DECCu;
            goto label_21decc;
        }
    }
    ctx->pc = 0x21DEB0u;
label_21deb0:
    // 0x21deb0: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x21deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21deb4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x21deb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x21deb8: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x21deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x21debc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21dec0: 0x0  nop
    ctx->pc = 0x21dec0u;
    // NOP
    // 0x21dec4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21DEC4u;
    {
        const bool branch_taken_0x21dec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DEC4u;
            // 0x21dec8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dec4) {
            ctx->pc = 0x21DEB0u;
            runtime->cooperativeGuestYield();
            goto label_21deb0;
        }
    }
    ctx->pc = 0x21DECCu;
label_21decc:
    // 0x21decc: 0x1a400079  blez        $s2, . + 4 + (0x79 << 2)
    ctx->pc = 0x21DECCu;
    {
        const bool branch_taken_0x21decc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x21DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DECCu;
            // 0x21ded0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21decc) {
            ctx->pc = 0x21E0B4u;
            goto label_21e0b4;
        }
    }
    ctx->pc = 0x21DED4u;
    // 0x21ded4: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x21ded4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
label_21ded8:
    // 0x21ded8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dedc: 0x2682e848  addiu       $v0, $s4, -0x17B8
    ctx->pc = 0x21dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x21dee0: 0xc04d814  jal         func_136050
    ctx->pc = 0x21DEE0u;
    SET_GPR_U32(ctx, 31, 0x21DEE8u);
    ctx->pc = 0x21DEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DEE0u;
            // 0x21dee4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136050u;
    if (runtime->hasFunction(0x136050u)) {
        auto targetFn = runtime->lookupFunction(0x136050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DEE8u; }
        if (ctx->pc != 0x21DEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_136050_0x136260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DEE8u; }
        if (ctx->pc != 0x21DEE8u) { return; }
    }
    ctx->pc = 0x21DEE8u;
    // 0x21dee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21dee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21deec: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21deecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21def0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21def4: 0x24a57fd0  addiu       $a1, $a1, 0x7FD0
    ctx->pc = 0x21def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32720));
    // 0x21def8: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x21DEF8u;
    SET_GPR_U32(ctx, 31, 0x21DF00u);
    ctx->pc = 0x21DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DEF8u;
            // 0x21defc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF00u; }
        if (ctx->pc != 0x21DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF00u; }
        if (ctx->pc != 0x21DF00u) { return; }
    }
    ctx->pc = 0x21DF00u;
    // 0x21df00: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x21DF00u;
    {
        const bool branch_taken_0x21df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21df00) {
            ctx->pc = 0x21DF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF00u;
            // 0x21df04: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21DF54u;
            goto label_21df54;
        }
    }
    ctx->pc = 0x21DF08u;
    // 0x21df08: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21df08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21df0c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21df10: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x21df14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21df14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21df18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21df1c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x21df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21df20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DF20u;
    {
        const bool branch_taken_0x21df20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF20u;
            // 0x21df24: 0x2465e5d8  addiu       $a1, $v1, -0x1A28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df20) {
            ctx->pc = 0x21DF38u;
            goto label_21df38;
        }
    }
    ctx->pc = 0x21DF28u;
    // 0x21df28: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x21df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x21df2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF2Cu;
    {
        const bool branch_taken_0x21df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF2Cu;
            // 0x21df30: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df2c) {
            ctx->pc = 0x21DF3Cu;
            goto label_21df3c;
        }
    }
    ctx->pc = 0x21DF34u;
    // 0x21df34: 0x0  nop
    ctx->pc = 0x21df34u;
    // NOP
label_21df38:
    // 0x21df38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21df38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21df3c:
    // 0x21df3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21df40: 0xc054136  jal         func_1504D8
    ctx->pc = 0x21DF40u;
    SET_GPR_U32(ctx, 31, 0x21DF48u);
    ctx->pc = 0x21DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF40u;
            // 0x21df44: 0x8c64e5d8  lw          $a0, -0x1A28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1504D8u;
    if (runtime->hasFunction(0x1504D8u)) {
        auto targetFn = runtime->lookupFunction(0x1504D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF48u; }
        if (ctx->pc != 0x21DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1504d8_0x1505a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF48u; }
        if (ctx->pc != 0x21DF48u) { return; }
    }
    ctx->pc = 0x21DF48u;
    // 0x21df48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21df4c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x21DF4Cu;
    {
        const bool branch_taken_0x21df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF4Cu;
            // 0x21df50: 0xac40e5dc  sw          $zero, -0x1A24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df4c) {
            ctx->pc = 0x21E0A4u;
            goto label_21e0a4;
        }
    }
    ctx->pc = 0x21DF54u;
label_21df54:
    // 0x21df54: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21df54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21df58: 0x24a57fe0  addiu       $a1, $a1, 0x7FE0
    ctx->pc = 0x21df58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32736));
    // 0x21df5c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x21DF5Cu;
    SET_GPR_U32(ctx, 31, 0x21DF64u);
    ctx->pc = 0x21DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF5Cu;
            // 0x21df60: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF64u; }
        if (ctx->pc != 0x21DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DF64u; }
        if (ctx->pc != 0x21DF64u) { return; }
    }
    ctx->pc = 0x21DF64u;
    // 0x21df64: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21DF64u;
    {
        const bool branch_taken_0x21df64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21df64) {
            ctx->pc = 0x21DF68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF64u;
            // 0x21df68: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21DFD4u;
            goto label_21dfd4;
        }
    }
    ctx->pc = 0x21DF6Cu;
    // 0x21df6c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x21df6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21df70: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x21df70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x21df74: 0x246334c0  addiu       $v1, $v1, 0x34C0
    ctx->pc = 0x21df74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13504));
    // 0x21df78: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21df7c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x21df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21df80: 0xaef0e5cc  sw          $s0, -0x1A34($s7)
    ctx->pc = 0x21df80u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294960588), GPR_U32(ctx, 16));
    // 0x21df84: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x21df84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21df88: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x21df88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x21df8c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x21df8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21df90: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x21df90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x21df94: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x21df94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x21df98: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x21df98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x21df9c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21dfa0: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x21dfa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21dfa8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21dfac: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x21dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21dfb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DFB0u;
    {
        const bool branch_taken_0x21dfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFB0u;
            // 0x21dfb4: 0x26c5e5d0  addiu       $a1, $s6, -0x1A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfb0) {
            ctx->pc = 0x21DFC8u;
            goto label_21dfc8;
        }
    }
    ctx->pc = 0x21DFB8u;
    // 0x21dfb8: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x21dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x21dfbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21DFBCu;
    {
        const bool branch_taken_0x21dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFBCu;
            // 0x21dfc0: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfbc) {
            ctx->pc = 0x21DFCCu;
            goto label_21dfcc;
        }
    }
    ctx->pc = 0x21DFC4u;
    // 0x21dfc4: 0x0  nop
    ctx->pc = 0x21dfc4u;
    // NOP
label_21dfc8:
    // 0x21dfc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21dfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dfcc:
    // 0x21dfcc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x21DFCCu;
    {
        const bool branch_taken_0x21dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFCCu;
            // 0x21dfd0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfcc) {
            ctx->pc = 0x21E0A4u;
            goto label_21e0a4;
        }
    }
    ctx->pc = 0x21DFD4u;
label_21dfd4:
    // 0x21dfd4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x21dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x21dfd8: 0x24a57fe8  addiu       $a1, $a1, 0x7FE8
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32744));
    // 0x21dfdc: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x21DFDCu;
    SET_GPR_U32(ctx, 31, 0x21DFE4u);
    ctx->pc = 0x21DFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFDCu;
            // 0x21dfe0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFE4u; }
        if (ctx->pc != 0x21DFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFE4u; }
        if (ctx->pc != 0x21DFE4u) { return; }
    }
    ctx->pc = 0x21DFE4u;
    // 0x21dfe4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21DFE4u;
    {
        const bool branch_taken_0x21dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFE4u;
            // 0x21dfe8: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfe4) {
            ctx->pc = 0x21E01Cu;
            goto label_21e01c;
        }
    }
    ctx->pc = 0x21DFECu;
    // 0x21dfec: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x21dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21dff0: 0x24a57ff0  addiu       $a1, $a1, 0x7FF0
    ctx->pc = 0x21dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32752));
    // 0x21dff4: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x21DFF4u;
    SET_GPR_U32(ctx, 31, 0x21DFFCu);
    ctx->pc = 0x21DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFF4u;
            // 0x21dff8: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFFCu; }
        if (ctx->pc != 0x21DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFFCu; }
        if (ctx->pc != 0x21DFFCu) { return; }
    }
    ctx->pc = 0x21DFFCu;
    // 0x21dffc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DFFCu;
    {
        const bool branch_taken_0x21dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFFCu;
            // 0x21e000: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dffc) {
            ctx->pc = 0x21E01Cu;
            goto label_21e01c;
        }
    }
    ctx->pc = 0x21E004u;
    // 0x21e004: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x21e004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21e008: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x21e008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x21e00c: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x21E00Cu;
    SET_GPR_U32(ctx, 31, 0x21E014u);
    ctx->pc = 0x21E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E00Cu;
            // 0x21e010: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E014u; }
        if (ctx->pc != 0x21E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E014u; }
        if (ctx->pc != 0x21E014u) { return; }
    }
    ctx->pc = 0x21E014u;
    // 0x21e014: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x21E014u;
    {
        const bool branch_taken_0x21e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e014) {
            ctx->pc = 0x21E018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E014u;
            // 0x21e018: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E0A8u;
            goto label_21e0a8;
        }
    }
    ctx->pc = 0x21E01Cu;
label_21e01c:
    // 0x21e01c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21e020: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x21e024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e028: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21e02c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x21e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21e030: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E030u;
    {
        const bool branch_taken_0x21e030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E030u;
            // 0x21e034: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e030) {
            ctx->pc = 0x21E048u;
            goto label_21e048;
        }
    }
    ctx->pc = 0x21E038u;
    // 0x21e038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e03c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21E03Cu;
    {
        const bool branch_taken_0x21e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E03Cu;
            // 0x21e040: 0x44280b  movn        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e03c) {
            ctx->pc = 0x21E04Cu;
            goto label_21e04c;
        }
    }
    ctx->pc = 0x21E044u;
    // 0x21e044: 0x0  nop
    ctx->pc = 0x21e044u;
    // NOP
label_21e048:
    // 0x21e048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e04c:
    // 0x21e04c: 0x8e62e5d4  lw          $v0, -0x1A2C($s3)
    ctx->pc = 0x21e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960596)));
    // 0x21e050: 0x26a44f80  addiu       $a0, $s5, 0x4F80
    ctx->pc = 0x21e050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20352));
    // 0x21e054: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x21e054u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21e058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e05c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21e060: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x21e060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x21e064: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21E064u;
    {
        const bool branch_taken_0x21e064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E064u;
            // 0x21e068: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e064) {
            ctx->pc = 0x21E098u;
            goto label_21e098;
        }
    }
    ctx->pc = 0x21E06Cu;
    // 0x21e06c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x21e06cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e070: 0x2683e848  addiu       $v1, $s4, -0x17B8
    ctx->pc = 0x21e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x21e074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e07c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e080: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21e084: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21e084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21e088: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x21e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21e08c: 0x40f809  jalr        $v0
    ctx->pc = 0x21E08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E094u);
        ctx->pc = 0x21E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E08Cu;
            // 0x21e090: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21E094u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DE58u: goto label_21de58;
            case 0x21DEB0u: goto label_21deb0;
            case 0x21DECCu: goto label_21decc;
            case 0x21DED8u: goto label_21ded8;
            case 0x21DF38u: goto label_21df38;
            case 0x21DF3Cu: goto label_21df3c;
            case 0x21DF54u: goto label_21df54;
            case 0x21DFC8u: goto label_21dfc8;
            case 0x21DFCCu: goto label_21dfcc;
            case 0x21DFD4u: goto label_21dfd4;
            case 0x21E01Cu: goto label_21e01c;
            case 0x21E048u: goto label_21e048;
            case 0x21E04Cu: goto label_21e04c;
            case 0x21E098u: goto label_21e098;
            case 0x21E0A4u: goto label_21e0a4;
            case 0x21E0A8u: goto label_21e0a8;
            case 0x21E0B4u: goto label_21e0b4;
            case 0x21E0D8u: goto label_21e0d8;
            case 0x21E118u: goto label_21e118;
            case 0x21E134u: goto label_21e134;
            case 0x21E140u: goto label_21e140;
            case 0x21E180u: goto label_21e180;
            case 0x21E1B8u: goto label_21e1b8;
            case 0x21E1CCu: goto label_21e1cc;
            case 0x21E1DCu: goto label_21e1dc;
            case 0x21E1E4u: goto label_21e1e4;
            case 0x21E1ECu: goto label_21e1ec;
            case 0x21E1F0u: goto label_21e1f0;
            case 0x21E208u: goto label_21e208;
            case 0x21E214u: goto label_21e214;
            case 0x21E24Cu: goto label_21e24c;
            case 0x21E288u: goto label_21e288;
            case 0x21E28Cu: goto label_21e28c;
            case 0x21E2D0u: goto label_21e2d0;
            case 0x21E2D4u: goto label_21e2d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21E094u; }
            if (ctx->pc != 0x21E094u) { return; }
        }
        }
    }
    ctx->pc = 0x21E094u;
    // 0x21e094: 0x0  nop
    ctx->pc = 0x21e094u;
    // NOP
label_21e098:
    // 0x21e098: 0x8e62e5d4  lw          $v0, -0x1A2C($s3)
    ctx->pc = 0x21e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960596)));
    // 0x21e09c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e0a0: 0xae62e5d4  sw          $v0, -0x1A2C($s3)
    ctx->pc = 0x21e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960596), GPR_U32(ctx, 2));
label_21e0a4:
    // 0x21e0a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e0a8:
    // 0x21e0a8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x21e0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x21e0ac: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x21E0ACu;
    {
        const bool branch_taken_0x21e0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0ACu;
            // 0x21e0b0: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0ac) {
            ctx->pc = 0x21DED8u;
            runtime->cooperativeGuestYield();
            goto label_21ded8;
        }
    }
    ctx->pc = 0x21E0B4u;
label_21e0b4:
    // 0x21e0b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21e0b8: 0x8c44e5d0  lw          $a0, -0x1A30($v0)
    ctx->pc = 0x21e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960592)));
    // 0x21e0bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E0BCu;
    {
        const bool branch_taken_0x21e0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0BCu;
            // 0x21e0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0bc) {
            ctx->pc = 0x21E0D8u;
            goto label_21e0d8;
        }
    }
    ctx->pc = 0x21E0C4u;
    // 0x21e0c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21e0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21e0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e0d0: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x21E0D0u;
    SET_GPR_U32(ctx, 31, 0x21E0D8u);
    ctx->pc = 0x21E0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0D0u;
            // 0x21e0d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0D8u; }
        if (ctx->pc != 0x21E0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0D8u; }
        if (ctx->pc != 0x21E0D8u) { return; }
    }
    ctx->pc = 0x21E0D8u;
label_21e0d8:
    // 0x21e0d8: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x21e0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x21e0dc: 0x2502e848  addiu       $v0, $t0, -0x17B8
    ctx->pc = 0x21e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961224));
    // 0x21e0e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x21e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21e0e4: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x21e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x21e0e8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x21e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21e0ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x21e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21e0f0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x21e0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21e0f4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x21e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21e0f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21e0fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e104: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21e108: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e10c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x21e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21e110: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E110u;
    {
        const bool branch_taken_0x21e110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E110u;
            // 0x21e114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e110) {
            ctx->pc = 0x21E134u;
            goto label_21e134;
        }
    }
    ctx->pc = 0x21E118u;
label_21e118:
    // 0x21e118: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x21e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21e11c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x21e11cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x21e120: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x21e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21e124: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e128: 0x0  nop
    ctx->pc = 0x21e128u;
    // NOP
    // 0x21e12c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21E12Cu;
    {
        const bool branch_taken_0x21e12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E12Cu;
            // 0x21e130: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e12c) {
            ctx->pc = 0x21E118u;
            runtime->cooperativeGuestYield();
            goto label_21e118;
        }
    }
    ctx->pc = 0x21E134u;
label_21e134:
    // 0x21e134: 0x18e00037  blez        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x21E134u;
    {
        const bool branch_taken_0x21e134 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x21E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E134u;
            // 0x21e138: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e134) {
            ctx->pc = 0x21E214u;
            goto label_21e214;
        }
    }
    ctx->pc = 0x21E13Cu;
    // 0x21e13c: 0x0  nop
    ctx->pc = 0x21e13cu;
    // NOP
label_21e140:
    // 0x21e140: 0x2502e848  addiu       $v0, $t0, -0x17B8
    ctx->pc = 0x21e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961224));
    // 0x21e144: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21e148: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x21e148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x21e14c: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x21e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x21e150: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21e154: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x21e154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21e158: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21e158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21e15c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x21e160: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21e164: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e168: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21e168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21e16c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e170: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x21e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x21e174: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E174u;
    {
        const bool branch_taken_0x21e174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E174u;
            // 0x21e178: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e174) {
            ctx->pc = 0x21E1ECu;
            goto label_21e1ec;
        }
    }
    ctx->pc = 0x21E17Cu;
    // 0x21e17c: 0x0  nop
    ctx->pc = 0x21e17cu;
    // NOP
label_21e180:
    // 0x21e180: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x21e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21e184: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e188: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x21e188u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x21e18c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x21e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x21e190: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x21e190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x21e194: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E194u;
    {
        const bool branch_taken_0x21e194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e194) {
            ctx->pc = 0x21E198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E194u;
            // 0x21e198: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E1E4u;
            goto label_21e1e4;
        }
    }
    ctx->pc = 0x21E19Cu;
    // 0x21e19c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x21e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21e1a0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21E1A0u;
    {
        const bool branch_taken_0x21e1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1A0u;
            // 0x21e1a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1a0) {
            ctx->pc = 0x21E1CCu;
            goto label_21e1cc;
        }
    }
    ctx->pc = 0x21E1A8u;
    // 0x21e1a8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E1A8u;
    {
        const bool branch_taken_0x21e1a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e1a8) {
            ctx->pc = 0x21E1CCu;
            goto label_21e1cc;
        }
    }
    ctx->pc = 0x21E1B0u;
    // 0x21e1b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e1b4: 0x0  nop
    ctx->pc = 0x21e1b4u;
    // NOP
label_21e1b8:
    // 0x21e1b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E1B8u;
    {
        const bool branch_taken_0x21e1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1B8u;
            // 0x21e1bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1b8) {
            ctx->pc = 0x21E1CCu;
            goto label_21e1cc;
        }
    }
    ctx->pc = 0x21E1C0u;
    // 0x21e1c0: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x21e1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21e1c4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x21E1C4u;
    {
        const bool branch_taken_0x21e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e1c4) {
            ctx->pc = 0x21E1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1C4u;
            // 0x21e1c8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E1B8u;
            runtime->cooperativeGuestYield();
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E1CCu;
label_21e1cc:
    // 0x21e1cc: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E1CCu;
    {
        const bool branch_taken_0x21e1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x21E1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1CCu;
            // 0x21e1d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1cc) {
            ctx->pc = 0x21E1DCu;
            goto label_21e1dc;
        }
    }
    ctx->pc = 0x21E1D4u;
    // 0x21e1d4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21E1D4u;
    {
        const bool branch_taken_0x21e1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e1d4) {
            ctx->pc = 0x21E1D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1D4u;
            // 0x21e1d8: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E1DCu;
            goto label_21e1dc;
        }
    }
    ctx->pc = 0x21E1DCu;
label_21e1dc:
    // 0x21e1dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E1DCu;
    {
        const bool branch_taken_0x21e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1DCu;
            // 0x21e1e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1dc) {
            ctx->pc = 0x21E1F0u;
            goto label_21e1f0;
        }
    }
    ctx->pc = 0x21E1E4u;
label_21e1e4:
    // 0x21e1e4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x21E1E4u;
    {
        const bool branch_taken_0x21e1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1E4u;
            // 0x21e1e8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1e4) {
            ctx->pc = 0x21E180u;
            runtime->cooperativeGuestYield();
            goto label_21e180;
        }
    }
    ctx->pc = 0x21E1ECu;
label_21e1ec:
    // 0x21e1ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21e1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e1f0:
    // 0x21e1f0: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x21e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x21e1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e1f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E1F8u;
    {
        const bool branch_taken_0x21e1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1F8u;
            // 0x21e1fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1f8) {
            ctx->pc = 0x21E208u;
            goto label_21e208;
        }
    }
    ctx->pc = 0x21E200u;
    // 0x21e200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21e204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e208:
    // 0x21e208: 0x227102a  slt         $v0, $s1, $a3
    ctx->pc = 0x21e208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x21e20c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x21E20Cu;
    {
        const bool branch_taken_0x21e20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E20Cu;
            // 0x21e210: 0xe46000e0  swc1        $f0, 0xE0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e20c) {
            ctx->pc = 0x21E140u;
            runtime->cooperativeGuestYield();
            goto label_21e140;
        }
    }
    ctx->pc = 0x21E214u;
label_21e214:
    // 0x21e214: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x21e214u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x21e218: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21e218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21e21c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x21e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x21e220: 0xae20e5c0  sw          $zero, -0x1A40($s1)
    ctx->pc = 0x21e220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960576), GPR_U32(ctx, 0));
    // 0x21e224: 0x248414d0  addiu       $a0, $a0, 0x14D0
    ctx->pc = 0x21e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
    // 0x21e228: 0xc05e996  jal         func_17A658
    ctx->pc = 0x21E228u;
    SET_GPR_U32(ctx, 31, 0x21E230u);
    ctx->pc = 0x21E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E228u;
            // 0x21e22c: 0xae00e5c4  sw          $zero, -0x1A3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E230u; }
        if (ctx->pc != 0x21E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E230u; }
        if (ctx->pc != 0x21E230u) { return; }
    }
    ctx->pc = 0x21E230u;
    // 0x21e230: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x21E230u;
    {
        const bool branch_taken_0x21e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e230) {
            ctx->pc = 0x21E234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E230u;
            // 0x21e234: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E2D4u;
            goto label_21e2d4;
        }
    }
    ctx->pc = 0x21E238u;
    // 0x21e238: 0x8c430360  lw          $v1, 0x360($v0)
    ctx->pc = 0x21e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x21e23c: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x21e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x21e240: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E240u;
    {
        const bool branch_taken_0x21e240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e240) {
            ctx->pc = 0x21E244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E240u;
            // 0x21e244: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E24Cu;
            goto label_21e24c;
        }
    }
    ctx->pc = 0x21E248u;
    // 0x21e248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e24c:
    // 0x21e24c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21E24Cu;
    {
        const bool branch_taken_0x21e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E24Cu;
            // 0x21e250: 0xae22e5c0  sw          $v0, -0x1A40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294960576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e24c) {
            ctx->pc = 0x21E2D0u;
            goto label_21e2d0;
        }
    }
    ctx->pc = 0x21E254u;
    // 0x21e254: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x21e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21e258: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E258u;
    {
        const bool branch_taken_0x21e258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E258u;
            // 0x21e25c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e258) {
            ctx->pc = 0x21E2D0u;
            goto label_21e2d0;
        }
    }
    ctx->pc = 0x21E260u;
    // 0x21e260: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x21e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x21e264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e26c: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x21e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21e270: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E270u;
    {
        const bool branch_taken_0x21e270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E270u;
            // 0x21e274: 0x2604e5c4  addiu       $a0, $s0, -0x1A3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e270) {
            ctx->pc = 0x21E288u;
            goto label_21e288;
        }
    }
    ctx->pc = 0x21E278u;
    // 0x21e278: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x21e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x21e27c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21E27Cu;
    {
        const bool branch_taken_0x21e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E27Cu;
            // 0x21e280: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e27c) {
            ctx->pc = 0x21E28Cu;
            goto label_21e28c;
        }
    }
    ctx->pc = 0x21E284u;
    // 0x21e284: 0x0  nop
    ctx->pc = 0x21e284u;
    // NOP
label_21e288:
    // 0x21e288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e28c:
    // 0x21e28c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21e290: 0x8e05e5c4  lw          $a1, -0x1A3C($s0)
    ctx->pc = 0x21e290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960580)));
    // 0x21e294: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x21e294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21e298: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21e29c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E29Cu;
    {
        const bool branch_taken_0x21e29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E29Cu;
            // 0x21e2a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e29c) {
            ctx->pc = 0x21E2D0u;
            goto label_21e2d0;
        }
    }
    ctx->pc = 0x21E2A4u;
    // 0x21e2a4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21e2a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e2a8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21e2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e2b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e2b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e2b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21e2bc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21e2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21e2c0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x21e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21e2c4: 0x40f809  jalr        $v0
    ctx->pc = 0x21E2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E2CCu);
        ctx->pc = 0x21E2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2C4u;
            // 0x21e2c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21E2CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DE58u: goto label_21de58;
            case 0x21DEB0u: goto label_21deb0;
            case 0x21DECCu: goto label_21decc;
            case 0x21DED8u: goto label_21ded8;
            case 0x21DF38u: goto label_21df38;
            case 0x21DF3Cu: goto label_21df3c;
            case 0x21DF54u: goto label_21df54;
            case 0x21DFC8u: goto label_21dfc8;
            case 0x21DFCCu: goto label_21dfcc;
            case 0x21DFD4u: goto label_21dfd4;
            case 0x21E01Cu: goto label_21e01c;
            case 0x21E048u: goto label_21e048;
            case 0x21E04Cu: goto label_21e04c;
            case 0x21E098u: goto label_21e098;
            case 0x21E0A4u: goto label_21e0a4;
            case 0x21E0A8u: goto label_21e0a8;
            case 0x21E0B4u: goto label_21e0b4;
            case 0x21E0D8u: goto label_21e0d8;
            case 0x21E118u: goto label_21e118;
            case 0x21E134u: goto label_21e134;
            case 0x21E140u: goto label_21e140;
            case 0x21E180u: goto label_21e180;
            case 0x21E1B8u: goto label_21e1b8;
            case 0x21E1CCu: goto label_21e1cc;
            case 0x21E1DCu: goto label_21e1dc;
            case 0x21E1E4u: goto label_21e1e4;
            case 0x21E1ECu: goto label_21e1ec;
            case 0x21E1F0u: goto label_21e1f0;
            case 0x21E208u: goto label_21e208;
            case 0x21E214u: goto label_21e214;
            case 0x21E24Cu: goto label_21e24c;
            case 0x21E288u: goto label_21e288;
            case 0x21E28Cu: goto label_21e28c;
            case 0x21E2D0u: goto label_21e2d0;
            case 0x21E2D4u: goto label_21e2d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21E2CCu; }
            if (ctx->pc != 0x21E2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x21E2CCu;
    // 0x21e2cc: 0x0  nop
    ctx->pc = 0x21e2ccu;
    // NOP
label_21e2d0:
    // 0x21e2d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x21e2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21e2d4:
    // 0x21e2d4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x21e2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e2d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x21e2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e2dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x21e2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e2e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21e2e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e2e4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x21e2e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e2e8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x21e2e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e2ec: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x21e2ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E2F4u;
            // 0x21e2f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DE58u: goto label_21de58;
            case 0x21DEB0u: goto label_21deb0;
            case 0x21DECCu: goto label_21decc;
            case 0x21DED8u: goto label_21ded8;
            case 0x21DF38u: goto label_21df38;
            case 0x21DF3Cu: goto label_21df3c;
            case 0x21DF54u: goto label_21df54;
            case 0x21DFC8u: goto label_21dfc8;
            case 0x21DFCCu: goto label_21dfcc;
            case 0x21DFD4u: goto label_21dfd4;
            case 0x21E01Cu: goto label_21e01c;
            case 0x21E048u: goto label_21e048;
            case 0x21E04Cu: goto label_21e04c;
            case 0x21E098u: goto label_21e098;
            case 0x21E0A4u: goto label_21e0a4;
            case 0x21E0A8u: goto label_21e0a8;
            case 0x21E0B4u: goto label_21e0b4;
            case 0x21E0D8u: goto label_21e0d8;
            case 0x21E118u: goto label_21e118;
            case 0x21E134u: goto label_21e134;
            case 0x21E140u: goto label_21e140;
            case 0x21E180u: goto label_21e180;
            case 0x21E1B8u: goto label_21e1b8;
            case 0x21E1CCu: goto label_21e1cc;
            case 0x21E1DCu: goto label_21e1dc;
            case 0x21E1E4u: goto label_21e1e4;
            case 0x21E1ECu: goto label_21e1ec;
            case 0x21E1F0u: goto label_21e1f0;
            case 0x21E208u: goto label_21e208;
            case 0x21E214u: goto label_21e214;
            case 0x21E24Cu: goto label_21e24c;
            case 0x21E288u: goto label_21e288;
            case 0x21E28Cu: goto label_21e28c;
            case 0x21E2D0u: goto label_21e2d0;
            case 0x21E2D4u: goto label_21e2d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E2FCu;
    // 0x21e2fc: 0x0  nop
    ctx->pc = 0x21e2fcu;
    // NOP
}
