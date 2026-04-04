#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A950
// Address: 0x22a950 - 0x22aac8
void sub_0022A950_0x22a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A950_0x22a950");
#endif

    ctx->pc = 0x22a950u;

    // 0x22a950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22a954: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22a958: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22a95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a960: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22a960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22a964: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22a964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a968: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22a96c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x22a96cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x22a970: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22a974: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22a978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a97c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22a980: 0x8c446eb0  lw          $a0, 0x6EB0($v0)
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28336)));
    // 0x22a984: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x22A984u;
    SET_GPR_U32(ctx, 31, 0x22A98Cu);
    ctx->pc = 0x22A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A984u;
            // 0x22a988: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A98Cu; }
        if (ctx->pc != 0x22A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A98Cu; }
        if (ctx->pc != 0x22A98Cu) { return; }
    }
    ctx->pc = 0x22A98Cu;
    // 0x22a98c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22a98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a990: 0x52600044  beql        $s3, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x22A990u;
    {
        const bool branch_taken_0x22a990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a990) {
            ctx->pc = 0x22A994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A990u;
            // 0x22a994: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AAA4u;
            goto label_22aaa4;
        }
    }
    ctx->pc = 0x22A998u;
    // 0x22a998: 0x826201f8  lb          $v0, 0x1F8($s3)
    ctx->pc = 0x22a998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 504)));
    // 0x22a99c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x22A99Cu;
    {
        const bool branch_taken_0x22a99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A99Cu;
            // 0x22a9a0: 0x267101f8  addiu       $s1, $s3, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a99c) {
            ctx->pc = 0x22AA80u;
            goto label_22aa80;
        }
    }
    ctx->pc = 0x22A9A4u;
    // 0x22a9a4: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a9a8: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a9ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9b0: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22a9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a9b4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x22a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22a9b8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x22A9B8u;
    SET_GPR_U32(ctx, 31, 0x22A9C0u);
    ctx->pc = 0x22A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9B8u;
            // 0x22a9bc: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9C0u; }
        if (ctx->pc != 0x22A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9C0u; }
        if (ctx->pc != 0x22A9C0u) { return; }
    }
    ctx->pc = 0x22A9C0u;
    // 0x22a9c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22A9C0u;
    {
        const bool branch_taken_0x22a9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9C0u;
            // 0x22a9c4: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9c0) {
            ctx->pc = 0x22AA08u;
            goto label_22aa08;
        }
    }
    ctx->pc = 0x22A9C8u;
    // 0x22a9c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a9cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a9ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a9d0: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22a9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22a9d4: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A9D4u;
    SET_GPR_U32(ctx, 31, 0x22A9DCu);
    ctx->pc = 0x22A9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9D4u;
            // 0x22a9d8: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9DCu; }
        if (ctx->pc != 0x22A9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9DCu; }
        if (ctx->pc != 0x22A9DCu) { return; }
    }
    ctx->pc = 0x22A9DCu;
    // 0x22a9dc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a9e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a9e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22a9e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22a9e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22a9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22a9ec: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x22a9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a9f0: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x22a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x22a9f4: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22A9F4u;
    SET_GPR_U32(ctx, 31, 0x22A9FCu);
    ctx->pc = 0x22A9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9F4u;
            // 0x22a9f8: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9FCu; }
        if (ctx->pc != 0x22A9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9FCu; }
        if (ctx->pc != 0x22A9FCu) { return; }
    }
    ctx->pc = 0x22A9FCu;
    // 0x22a9fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22A9FCu;
    {
        const bool branch_taken_0x22a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9FCu;
            // 0x22aa00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9fc) {
            ctx->pc = 0x22AA90u;
            goto label_22aa90;
        }
    }
    ctx->pc = 0x22AA04u;
    // 0x22aa04: 0x0  nop
    ctx->pc = 0x22aa04u;
    // NOP
label_22aa08:
    // 0x22aa08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22aa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa0c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x22aa0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x22aa10: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22aa10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22aa14: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x22aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22aa18: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x22AA18u;
    SET_GPR_U32(ctx, 31, 0x22AA20u);
    ctx->pc = 0x22AA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA18u;
            // 0x22aa1c: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA20u; }
        if (ctx->pc != 0x22AA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA20u; }
        if (ctx->pc != 0x22AA20u) { return; }
    }
    ctx->pc = 0x22AA20u;
    // 0x22aa20: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22AA20u;
    {
        const bool branch_taken_0x22aa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA20u;
            // 0x22aa24: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa20) {
            ctx->pc = 0x22AA60u;
            goto label_22aa60;
        }
    }
    ctx->pc = 0x22AA28u;
    // 0x22aa28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22aa2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22aa2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22aa30: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x22aa30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x22aa34: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22aa34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22aa38: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22AA38u;
    SET_GPR_U32(ctx, 31, 0x22AA40u);
    ctx->pc = 0x22AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA38u;
            // 0x22aa3c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA40u; }
        if (ctx->pc != 0x22AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA40u; }
        if (ctx->pc != 0x22AA40u) { return; }
    }
    ctx->pc = 0x22AA40u;
    // 0x22aa40: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x22aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22aa44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22aa44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22aa48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22aa4c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22aa4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22aa50: 0xc08a6b4  jal         func_229AD0
    ctx->pc = 0x22AA50u;
    SET_GPR_U32(ctx, 31, 0x22AA58u);
    ctx->pc = 0x22AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA50u;
            // 0x22aa54: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    if (runtime->hasFunction(0x229AD0u)) {
        auto targetFn = runtime->lookupFunction(0x229AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA58u; }
        if (ctx->pc != 0x22AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229AD0_0x229ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA58u; }
        if (ctx->pc != 0x22AA58u) { return; }
    }
    ctx->pc = 0x22AA58u;
    // 0x22aa58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22AA58u;
    {
        const bool branch_taken_0x22aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA58u;
            // 0x22aa5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa58) {
            ctx->pc = 0x22AA90u;
            goto label_22aa90;
        }
    }
    ctx->pc = 0x22AA60u;
label_22aa60:
    // 0x22aa60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22aa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22aa64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22aa68: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x22aa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x22aa6c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x22aa6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22aa70: 0xc08a732  jal         func_229CC8
    ctx->pc = 0x22AA70u;
    SET_GPR_U32(ctx, 31, 0x22AA78u);
    ctx->pc = 0x22AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA70u;
            // 0x22aa74: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229CC8u;
    if (runtime->hasFunction(0x229CC8u)) {
        auto targetFn = runtime->lookupFunction(0x229CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA78u; }
        if (ctx->pc != 0x22AA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229CC8_0x229cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA78u; }
        if (ctx->pc != 0x22AA78u) { return; }
    }
    ctx->pc = 0x22AA78u;
    // 0x22aa78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22AA78u;
    {
        const bool branch_taken_0x22aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA78u;
            // 0x22aa7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa78) {
            ctx->pc = 0x22AA90u;
            goto label_22aa90;
        }
    }
    ctx->pc = 0x22AA80u;
label_22aa80:
    // 0x22aa80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22aa80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22aa84: 0xc08a9b0  jal         func_22A6C0
    ctx->pc = 0x22AA84u;
    SET_GPR_U32(ctx, 31, 0x22AA8Cu);
    ctx->pc = 0x22AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA84u;
            // 0x22aa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6C0u;
    if (runtime->hasFunction(0x22A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA8Cu; }
        if (ctx->pc != 0x22AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A6C0_0x22a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA8Cu; }
        if (ctx->pc != 0x22AA8Cu) { return; }
    }
    ctx->pc = 0x22AA8Cu;
    // 0x22aa8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22aa90:
    // 0x22aa90: 0xae1400fc  sw          $s4, 0xFC($s0)
    ctx->pc = 0x22aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 20));
    // 0x22aa94: 0xae1300f8  sw          $s3, 0xF8($s0)
    ctx->pc = 0x22aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 19));
    // 0x22aa98: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x22aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x22aa9c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x22aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x22aaa0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22aaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22aaa4:
    // 0x22aaa4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22aaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22aaa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22aaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aaac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22aaacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aab0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22aab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aab8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22aab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22aabc: 0x3e00008  jr          $ra
    ctx->pc = 0x22AABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AABCu;
            // 0x22aac0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AA08u: goto label_22aa08;
            case 0x22AA60u: goto label_22aa60;
            case 0x22AA80u: goto label_22aa80;
            case 0x22AA90u: goto label_22aa90;
            case 0x22AAA4u: goto label_22aaa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22AAC4u;
    // 0x22aac4: 0x0  nop
    ctx->pc = 0x22aac4u;
    // NOP
}
