#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0950
// Address: 0x1c0950 - 0x1c0ab0
void sub_001C0950_0x1c0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0950_0x1c0950");
#endif

    ctx->pc = 0x1c0950u;

    // 0x1c0950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c0954: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0958: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c095c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c0960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c0968: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1c0968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c096c: 0xc441ccbc  lwc1        $f1, -0x3344($v0)
    ctx->pc = 0x1c096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0970: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x1c0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0974: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c0974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c0978: 0x0  nop
    ctx->pc = 0x1c0978u;
    // NOP
    // 0x1c097c: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x1C097Cu;
    {
        const bool branch_taken_0x1c097c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C097Cu;
            // 0x1c0980: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c097c) {
            ctx->pc = 0x1C0A88u;
            goto label_1c0a88;
        }
    }
    ctx->pc = 0x1C0984u;
    // 0x1c0984: 0x8e020378  lw          $v0, 0x378($s0)
    ctx->pc = 0x1c0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1c0988: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1c0988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c098c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C098Cu;
    {
        const bool branch_taken_0x1c098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c098c) {
            ctx->pc = 0x1C0990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C098Cu;
            // 0x1c0990: 0x8e020378  lw          $v0, 0x378($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C09C8u;
            goto label_1c09c8;
        }
    }
    ctx->pc = 0x1C0994u;
    // 0x1c0994: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c0994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c0998: 0xc070228  jal         func_1C08A0
    ctx->pc = 0x1C0998u;
    SET_GPR_U32(ctx, 31, 0x1C09A0u);
    ctx->pc = 0x1C099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0998u;
            // 0x1c099c: 0x24a55dc0  addiu       $a1, $a1, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C08A0u;
    if (runtime->hasFunction(0x1C08A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09A0u; }
        if (ctx->pc != 0x1C09A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C08A0_0x1c08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09A0u; }
        if (ctx->pc != 0x1C09A0u) { return; }
    }
    ctx->pc = 0x1C09A0u;
    // 0x1c09a0: 0x8e060378  lw          $a2, 0x378($s0)
    ctx->pc = 0x1c09a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x1c09a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1c09a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1c09a8: 0x24a55dd0  addiu       $a1, $a1, 0x5DD0
    ctx->pc = 0x1c09a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24016));
    // 0x1c09ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c09acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09b0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1C09B0u;
    SET_GPR_U32(ctx, 31, 0x1C09B8u);
    ctx->pc = 0x1C09B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09B0u;
            // 0x1c09b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B8u; }
        if (ctx->pc != 0x1C09B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09B8u; }
        if (ctx->pc != 0x1C09B8u) { return; }
    }
    ctx->pc = 0x1C09B8u;
    // 0x1c09b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c09b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09bc: 0xc070228  jal         func_1C08A0
    ctx->pc = 0x1C09BCu;
    SET_GPR_U32(ctx, 31, 0x1C09C4u);
    ctx->pc = 0x1C09C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09BCu;
            // 0x1c09c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C08A0u;
    if (runtime->hasFunction(0x1C08A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09C4u; }
        if (ctx->pc != 0x1C09C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C08A0_0x1c08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C09C4u; }
        if (ctx->pc != 0x1C09C4u) { return; }
    }
    ctx->pc = 0x1C09C4u;
    // 0x1c09c4: 0x8e020378  lw          $v0, 0x378($s0)
    ctx->pc = 0x1c09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
label_1c09c8:
    // 0x1c09c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c09cc: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x1c09ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c09d0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C09D0u;
    {
        const bool branch_taken_0x1c09d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C09D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09D0u;
            // 0x1c09d4: 0xae020378  sw          $v0, 0x378($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09d0) {
            ctx->pc = 0x1C09FCu;
            goto label_1c09fc;
        }
    }
    ctx->pc = 0x1C09D8u;
    // 0x1c09d8: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c09dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c09dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c09e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C09E0u;
    {
        const bool branch_taken_0x1c09e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09E0u;
            // 0x1c09e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09e0) {
            ctx->pc = 0x1C09F0u;
            goto label_1c09f0;
        }
    }
    ctx->pc = 0x1C09E8u;
    // 0x1c09e8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C09E8u;
    {
        const bool branch_taken_0x1c09e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09E8u;
            // 0x1c09ec: 0x8445ccde  lh          $a1, -0x3322($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954206)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09e8) {
            ctx->pc = 0x1C0A54u;
            goto label_1c0a54;
        }
    }
    ctx->pc = 0x1C09F0u;
label_1c09f0:
    // 0x1c09f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c09f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C09F4u;
    {
        const bool branch_taken_0x1c09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C09F4u;
            // 0x1c09f8: 0x8445ccd2  lh          $a1, -0x332E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09f4) {
            ctx->pc = 0x1C0A54u;
            goto label_1c0a54;
        }
    }
    ctx->pc = 0x1C09FCu;
label_1c09fc:
    // 0x1c09fc: 0x8e0303e4  lw          $v1, 0x3E4($s0)
    ctx->pc = 0x1c09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0a00: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c0a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c0a04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0A04u;
    {
        const bool branch_taken_0x1c0a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A04u;
            // 0x1c0a08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a04) {
            ctx->pc = 0x1C0A38u;
            goto label_1c0a38;
        }
    }
    ctx->pc = 0x1C0A0Cu;
    // 0x1c0a0c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c0a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c0a10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A10u;
    {
        const bool branch_taken_0x1c0a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A10u;
            // 0x1c0a14: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a10) {
            ctx->pc = 0x1C0A20u;
            goto label_1c0a20;
        }
    }
    ctx->pc = 0x1C0A18u;
    // 0x1c0a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A18u;
    {
        const bool branch_taken_0x1c0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A18u;
            // 0x1c0a1c: 0x8445ccda  lh          $a1, -0x3326($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a18) {
            ctx->pc = 0x1C0A28u;
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A20u;
label_1c0a20:
    // 0x1c0a20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0a24: 0x8445ccce  lh          $a1, -0x3332($v0)
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954190)));
label_1c0a28:
    // 0x1c0a28: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c0a2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c0a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c0a30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0A30u;
    {
        const bool branch_taken_0x1c0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A30u;
            // 0x1c0a34: 0xae0203e4  sw          $v0, 0x3E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a30) {
            ctx->pc = 0x1C0A54u;
            goto label_1c0a54;
        }
    }
    ctx->pc = 0x1C0A38u;
label_1c0a38:
    // 0x1c0a38: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c0a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c0a3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A3Cu;
    {
        const bool branch_taken_0x1c0a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A3Cu;
            // 0x1c0a40: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a3c) {
            ctx->pc = 0x1C0A4Cu;
            goto label_1c0a4c;
        }
    }
    ctx->pc = 0x1C0A44u;
    // 0x1c0a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A44u;
    {
        const bool branch_taken_0x1c0a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A44u;
            // 0x1c0a48: 0x8445ccdc  lh          $a1, -0x3324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a44) {
            ctx->pc = 0x1C0A54u;
            goto label_1c0a54;
        }
    }
    ctx->pc = 0x1C0A4Cu;
label_1c0a4c:
    // 0x1c0a4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1c0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1c0a50: 0x8445ccd0  lh          $a1, -0x3330($v0)
    ctx->pc = 0x1c0a50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954192)));
label_1c0a54:
    // 0x1c0a54: 0xae0003e8  sw          $zero, 0x3E8($s0)
    ctx->pc = 0x1c0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 0));
    // 0x1c0a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a5c: 0xc61403e8  lwc1        $f20, 0x3E8($s0)
    ctx->pc = 0x1c0a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0a60: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1C0A60u;
    SET_GPR_U32(ctx, 31, 0x1C0A68u);
    ctx->pc = 0x1C0A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A60u;
            // 0x1c0a64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (runtime->hasFunction(0x1BFCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A68u; }
        if (ctx->pc != 0x1C0A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFCC0_0x1bfcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A68u; }
        if (ctx->pc != 0x1C0A68u) { return; }
    }
    ctx->pc = 0x1C0A68u;
    // 0x1c0a68: 0xc06ff7c  jal         func_1BFDF0
    ctx->pc = 0x1C0A68u;
    SET_GPR_U32(ctx, 31, 0x1C0A70u);
    ctx->pc = 0x1C0A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A68u;
            // 0x1c0a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDF0u;
    if (runtime->hasFunction(0x1BFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A70u; }
        if (ctx->pc != 0x1C0A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFDF0_0x1bfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A70u; }
        if (ctx->pc != 0x1C0A70u) { return; }
    }
    ctx->pc = 0x1C0A70u;
    // 0x1c0a70: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0A70u;
    {
        const bool branch_taken_0x1c0a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a70) {
            ctx->pc = 0x1C0A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A70u;
            // 0x1c0a74: 0xe6140370  swc1        $f20, 0x370($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 880), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A88u;
            goto label_1c0a88;
        }
    }
    ctx->pc = 0x1C0A78u;
    // 0x1c0a78: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1c0a7c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c0a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c0a80: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1c0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1c0a84: 0xe6140370  swc1        $f20, 0x370($s0)
    ctx->pc = 0x1c0a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 880), bits); }
label_1c0a88:
    // 0x1c0a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a8c: 0xc070364  jal         func_1C0D90
    ctx->pc = 0x1C0A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A94u);
    ctx->pc = 0x1C0A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0A8Cu;
            // 0x1c0a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0D90u;
    if (runtime->hasFunction(0x1C0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A94u; }
        if (ctx->pc != 0x1C0A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c0d90_0x1c0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A94u; }
        if (ctx->pc != 0x1C0A94u) { return; }
    }
    ctx->pc = 0x1C0A94u;
    // 0x1c0a94: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c0a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0a98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c0a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0aa0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c0aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0AA4u;
            // 0x1c0aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C09C8u: goto label_1c09c8;
            case 0x1C09F0u: goto label_1c09f0;
            case 0x1C09FCu: goto label_1c09fc;
            case 0x1C0A20u: goto label_1c0a20;
            case 0x1C0A28u: goto label_1c0a28;
            case 0x1C0A38u: goto label_1c0a38;
            case 0x1C0A4Cu: goto label_1c0a4c;
            case 0x1C0A54u: goto label_1c0a54;
            case 0x1C0A88u: goto label_1c0a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0AACu;
    // 0x1c0aac: 0x0  nop
    ctx->pc = 0x1c0aacu;
    // NOP
}
