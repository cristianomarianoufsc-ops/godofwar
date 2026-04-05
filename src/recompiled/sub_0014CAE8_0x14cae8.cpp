#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CAE8
// Address: 0x14cae8 - 0x14cd38
void sub_0014CAE8_0x14cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CAE8_0x14cae8");
#endif

    ctx->pc = 0x14cae8u;

    // 0x14cae8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14caec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14caf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14caf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14caf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14caf8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14cafc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14cb00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14cb04: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x14cb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x14cb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cb0c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x14CB0Cu;
    SET_GPR_U32(ctx, 31, 0x14CB14u);
    ctx->pc = 0x14CB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB0Cu;
            // 0x14cb10: 0x24040660  addiu       $a0, $zero, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB14u; }
        if (ctx->pc != 0x14CB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB14u; }
        if (ctx->pc != 0x14CB14u) { return; }
    }
    ctx->pc = 0x14CB14u;
    // 0x14cb14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb1c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x14cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x14cb20: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x14cb24: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x14cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x14cb28: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x14cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14cb2c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x14cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x14cb30: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x14cb30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb34: 0x0  nop
    ctx->pc = 0x14cb34u;
    // NOP
label_14cb38:
    // 0x14cb38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14cb3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14cb40: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x14cb40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x14cb44: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x14cb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x14cb48: 0x0  nop
    ctx->pc = 0x14cb48u;
    // NOP
    // 0x14cb4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14CB4Cu;
    {
        const bool branch_taken_0x14cb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB4Cu;
            // 0x14cb50: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb4c) {
            ctx->pc = 0x14CB38u;
            runtime->cooperativeGuestYield();
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14CB54u;
    // 0x14cb54: 0xfe200638  sd          $zero, 0x638($s1)
    ctx->pc = 0x14cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1592), GPR_U64(ctx, 0));
    // 0x14cb58: 0xc04f824  jal         func_13E090
    ctx->pc = 0x14CB58u;
    SET_GPR_U32(ctx, 31, 0x14CB60u);
    ctx->pc = 0x14CB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB58u;
            // 0x14cb5c: 0xfe200630  sd          $zero, 0x630($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 1584), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB60u; }
        if (ctx->pc != 0x14CB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB60u; }
        if (ctx->pc != 0x14CB60u) { return; }
    }
    ctx->pc = 0x14CB60u;
    // 0x14cb60: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x14cb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14cb64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14cb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb68: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x14CB68u;
    SET_GPR_U32(ctx, 31, 0x14CB70u);
    ctx->pc = 0x14CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB68u;
            // 0x14cb6c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB70u; }
        if (ctx->pc != 0x14CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB70u; }
        if (ctx->pc != 0x14CB70u) { return; }
    }
    ctx->pc = 0x14CB70u;
    // 0x14cb70: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x14cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x14cb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb78: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14cb7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14cb80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14cb84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14cb88: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x14CB88u;
    SET_GPR_U32(ctx, 31, 0x14CB90u);
    ctx->pc = 0x14CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB88u;
            // 0x14cb8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB90u; }
        if (ctx->pc != 0x14CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB90u; }
        if (ctx->pc != 0x14CB90u) { return; }
    }
    ctx->pc = 0x14CB90u;
    // 0x14cb90: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x14cb90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x14cb94: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x14cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x14cb98: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x14cb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x14cb9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x14cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14cba0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14CBA0u;
    {
        const bool branch_taken_0x14cba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBA0u;
            // 0x14cba4: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cba0) {
            ctx->pc = 0x14CBD0u;
            goto label_14cbd0;
        }
    }
    ctx->pc = 0x14CBA8u;
    // 0x14cba8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14cbac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14cbb0: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x14cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x14cbb4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14cbb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14cbbc: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x14cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x14cbc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14cbc4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x14cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x14cbc8: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x14cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x14cbcc: 0x0  nop
    ctx->pc = 0x14cbccu;
    // NOP
label_14cbd0:
    // 0x14cbd0: 0x2685ed68  addiu       $a1, $s4, -0x1298
    ctx->pc = 0x14cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962536));
    // 0x14cbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14cbdc: 0x3c15002d  lui         $s5, 0x2D
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)45 << 16));
    // 0x14cbe0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14cbe4: 0xae63ed60  sw          $v1, -0x12A0($s3)
    ctx->pc = 0x14cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 3));
    // 0x14cbe8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14cbec: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x14CBECu;
    SET_GPR_U32(ctx, 31, 0x14CBF4u);
    ctx->pc = 0x14CBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBECu;
            // 0x14cbf0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBF4u; }
        if (ctx->pc != 0x14CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBF4u; }
        if (ctx->pc != 0x14CBF4u) { return; }
    }
    ctx->pc = 0x14CBF4u;
    // 0x14cbf4: 0x26a5bb98  addiu       $a1, $s5, -0x4468
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949784));
    // 0x14cbf8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14cbfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14cc00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14cc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14cc08: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x14cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x14cc0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14cc10: 0xc053254  jal         func_14C950
    ctx->pc = 0x14CC10u;
    SET_GPR_U32(ctx, 31, 0x14CC18u);
    ctx->pc = 0x14CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC10u;
            // 0x14cc14: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C950u;
    if (runtime->hasFunction(0x14C950u)) {
        auto targetFn = runtime->lookupFunction(0x14C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC18u; }
        if (ctx->pc != 0x14CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C950_0x14c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC18u; }
        if (ctx->pc != 0x14CC18u) { return; }
    }
    ctx->pc = 0x14CC18u;
    // 0x14cc18: 0xc05021e  jal         func_140878
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x140878u;
    if (runtime->hasFunction(0x140878u)) {
        auto targetFn = runtime->lookupFunction(0x140878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC20u; }
        if (ctx->pc != 0x14CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140878_0x140878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC20u; }
        if (ctx->pc != 0x14CC20u) { return; }
    }
    ctx->pc = 0x14CC20u;
    // 0x14cc20: 0xc04fd92  jal         func_13F648
    ctx->pc = 0x14CC20u;
    SET_GPR_U32(ctx, 31, 0x14CC28u);
    ctx->pc = 0x13F648u;
    if (runtime->hasFunction(0x13F648u)) {
        auto targetFn = runtime->lookupFunction(0x13F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC28u; }
        if (ctx->pc != 0x14CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f648_0x13f6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC28u; }
        if (ctx->pc != 0x14CC28u) { return; }
    }
    ctx->pc = 0x14CC28u;
    // 0x14cc28: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x14cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x14cc2c: 0xc060e1e  jal         func_183878
    ctx->pc = 0x14CC2Cu;
    SET_GPR_U32(ctx, 31, 0x14CC34u);
    ctx->pc = 0x14CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC2Cu;
            // 0x14cc30: 0x24841db8  addiu       $a0, $a0, 0x1DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183878u;
    if (runtime->hasFunction(0x183878u)) {
        auto targetFn = runtime->lookupFunction(0x183878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC34u; }
        if (ctx->pc != 0x14CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183878_0x183948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC34u; }
        if (ctx->pc != 0x14CC34u) { return; }
    }
    ctx->pc = 0x14CC34u;
    // 0x14cc34: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x14cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x14cc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cc3c: 0xac62c7d0  sw          $v0, -0x3830($v1)
    ctx->pc = 0x14cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952912), GPR_U32(ctx, 2));
    // 0x14cc40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc44: 0xc04fdcc  jal         func_13F730
    ctx->pc = 0x14CC44u;
    SET_GPR_U32(ctx, 31, 0x14CC4Cu);
    ctx->pc = 0x14CC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC44u;
            // 0x14cc48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F730u;
    if (runtime->hasFunction(0x13F730u)) {
        auto targetFn = runtime->lookupFunction(0x13F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC4Cu; }
        if (ctx->pc != 0x14CC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F730_0x13f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC4Cu; }
        if (ctx->pc != 0x14CC4Cu) { return; }
    }
    ctx->pc = 0x14CC4Cu;
    // 0x14cc4c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x14cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x14cc50: 0xc060e1e  jal         func_183878
    ctx->pc = 0x14CC50u;
    SET_GPR_U32(ctx, 31, 0x14CC58u);
    ctx->pc = 0x14CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC50u;
            // 0x14cc54: 0x24841dd8  addiu       $a0, $a0, 0x1DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183878u;
    if (runtime->hasFunction(0x183878u)) {
        auto targetFn = runtime->lookupFunction(0x183878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC58u; }
        if (ctx->pc != 0x14CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183878_0x183948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC58u; }
        if (ctx->pc != 0x14CC58u) { return; }
    }
    ctx->pc = 0x14CC58u;
    // 0x14cc58: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14cc5c: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x14cc60: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x14cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x14cc64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14CC64u;
    {
        const bool branch_taken_0x14cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC64u;
            // 0x14cc68: 0x8e62ed60  lw          $v0, -0x12A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc64) {
            ctx->pc = 0x14CC90u;
            goto label_14cc90;
        }
    }
    ctx->pc = 0x14CC6Cu;
    // 0x14cc6c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_14cc70:
    // 0x14cc70: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14cc74: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x14cc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x14cc78: 0x0  nop
    ctx->pc = 0x14cc78u;
    // NOP
    // 0x14cc7c: 0x0  nop
    ctx->pc = 0x14cc7cu;
    // NOP
    // 0x14cc80: 0x0  nop
    ctx->pc = 0x14cc80u;
    // NOP
    // 0x14cc84: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14CC84u;
    {
        const bool branch_taken_0x14cc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cc84) {
            ctx->pc = 0x14CC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC84u;
            // 0x14cc88: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CC70u;
            runtime->cooperativeGuestYield();
            goto label_14cc70;
        }
    }
    ctx->pc = 0x14CC8Cu;
    // 0x14cc8c: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
label_14cc90:
    // 0x14cc90: 0x2685ed68  addiu       $a1, $s4, -0x1298
    ctx->pc = 0x14cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962536));
    // 0x14cc94: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x14cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x14cc98: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x14cc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14cc9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14cca0: 0xae66ed60  sw          $a2, -0x12A0($s3)
    ctx->pc = 0x14cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 6));
    // 0x14cca4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14cca8: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x14cca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x14ccac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ccb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CCB0u;
    {
        const bool branch_taken_0x14ccb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCB0u;
            // 0x14ccb4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccb0) {
            ctx->pc = 0x14CCC8u;
            goto label_14ccc8;
        }
    }
    ctx->pc = 0x14CCB8u;
    // 0x14ccb8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x14ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14ccbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14ccc0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x14CCC0u;
    SET_GPR_U32(ctx, 31, 0x14CCC8u);
    ctx->pc = 0x14CCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCC0u;
            // 0x14ccc4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCC8u; }
        if (ctx->pc != 0x14CCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCC8u; }
        if (ctx->pc != 0x14CCC8u) { return; }
    }
    ctx->pc = 0x14CCC8u;
label_14ccc8:
    // 0x14ccc8: 0x26a3bb98  addiu       $v1, $s5, -0x4468
    ctx->pc = 0x14ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949784));
    // 0x14cccc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x14ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14ccd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14ccd4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14CCD4u;
    {
        const bool branch_taken_0x14ccd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCD4u;
            // 0x14ccd8: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccd4) {
            ctx->pc = 0x14CCF8u;
            goto label_14ccf8;
        }
    }
    ctx->pc = 0x14CCDCu;
    // 0x14ccdc: 0x8e020658  lw          $v0, 0x658($s0)
    ctx->pc = 0x14ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
    // 0x14cce0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14cce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14cce4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x14cce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14cce8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ccec: 0x40f809  jalr        $v0
    ctx->pc = 0x14CCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14CCF4u);
        ctx->pc = 0x14CCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCECu;
            // 0x14ccf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14CCF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CB38u: goto label_14cb38;
            case 0x14CBD0u: goto label_14cbd0;
            case 0x14CC70u: goto label_14cc70;
            case 0x14CC90u: goto label_14cc90;
            case 0x14CCC8u: goto label_14ccc8;
            case 0x14CCF8u: goto label_14ccf8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14CCF4u; }
            if (ctx->pc != 0x14CCF4u) { return; }
        }
        }
    }
    ctx->pc = 0x14CCF4u;
    // 0x14ccf4: 0x0  nop
    ctx->pc = 0x14ccf4u;
    // NOP
label_14ccf8:
    // 0x14ccf8: 0x92420030  lbu         $v0, 0x30($s2)
    ctx->pc = 0x14ccf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x14ccfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14cd00: 0xa2420030  sb          $v0, 0x30($s2)
    ctx->pc = 0x14cd00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x14cd04: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14CD04u;
    SET_GPR_U32(ctx, 31, 0x14CD0Cu);
    ctx->pc = 0x14CD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD04u;
            // 0x14cd08: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD0Cu; }
        if (ctx->pc != 0x14CD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD0Cu; }
        if (ctx->pc != 0x14CD0Cu) { return; }
    }
    ctx->pc = 0x14CD0Cu;
    // 0x14cd0c: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x14cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x14cd10: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14cd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14cd14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14cd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14cd18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14cd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14cd1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14cd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cd20: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14cd20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cd24: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x14cd24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD2Cu;
            // 0x14cd30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CB38u: goto label_14cb38;
            case 0x14CBD0u: goto label_14cbd0;
            case 0x14CC70u: goto label_14cc70;
            case 0x14CC90u: goto label_14cc90;
            case 0x14CCC8u: goto label_14ccc8;
            case 0x14CCF8u: goto label_14ccf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CD34u;
    // 0x14cd34: 0x0  nop
    ctx->pc = 0x14cd34u;
    // NOP
}
