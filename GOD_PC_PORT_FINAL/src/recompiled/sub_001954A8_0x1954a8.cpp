#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001954A8
// Address: 0x1954a8 - 0x195590
void sub_001954A8_0x1954a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001954A8_0x1954a8");
#endif

    ctx->pc = 0x1954a8u;

    // 0x1954a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1954ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1954acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1954b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1954b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1954b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1954b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1954b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1954b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1954bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1954bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1954c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1954c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1954c4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1954c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1954c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1954cc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1954ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1954d0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1954d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1954d4: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x1954d4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1954d8: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1954dc: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x1954dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1954e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1954e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1954e4: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1954e4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1954e8: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1954ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1954ECu;
    {
        const bool branch_taken_0x1954ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954ECu;
            // 0x1954f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954ec) {
            ctx->pc = 0x195504u;
            goto label_195504;
        }
    }
    ctx->pc = 0x1954F4u;
    // 0x1954f4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1954F4u;
    SET_GPR_U32(ctx, 31, 0x1954FCu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954FCu; }
        if (ctx->pc != 0x1954FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954FCu; }
        if (ctx->pc != 0x1954FCu) { return; }
    }
    ctx->pc = 0x1954FCu;
    // 0x1954fc: 0xc049742  jal         func_125D08
    ctx->pc = 0x1954FCu;
    SET_GPR_U32(ctx, 31, 0x195504u);
    ctx->pc = 0x195500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1954FCu;
            // 0x195500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D08u;
    if (runtime->hasFunction(0x125D08u)) {
        auto targetFn = runtime->lookupFunction(0x125D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195504u; }
        if (ctx->pc != 0x195504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D08_0x125d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195504u; }
        if (ctx->pc != 0x195504u) { return; }
    }
    ctx->pc = 0x195504u;
label_195504:
    // 0x195504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195508: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x195508u;
    {
        const bool branch_taken_0x195508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195508u;
            // 0x19550c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195508) {
            ctx->pc = 0x19553Cu;
            goto label_19553c;
        }
    }
    ctx->pc = 0x195510u;
    // 0x195510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195514: 0x8c44e458  lw          $a0, -0x1BA8($v0)
    ctx->pc = 0x195514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960216)));
    // 0x195518: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x195518u;
    SET_GPR_U32(ctx, 31, 0x195520u);
    ctx->pc = 0x19551Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195518u;
            // 0x19551c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195520u; }
        if (ctx->pc != 0x195520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195520u; }
        if (ctx->pc != 0x195520u) { return; }
    }
    ctx->pc = 0x195520u;
    // 0x195520: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x195520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x195524: 0x84480054  lh          $t0, 0x54($v0)
    ctx->pc = 0x195524u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x195528: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x195528u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19552c: 0x2484dfb0  addiu       $a0, $a0, -0x2050
    ctx->pc = 0x19552cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959024));
    // 0x195530: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x195530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x195534: 0xc04965c  jal         func_125970
    ctx->pc = 0x195534u;
    SET_GPR_U32(ctx, 31, 0x19553Cu);
    ctx->pc = 0x195538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195534u;
            // 0x195538: 0x8c470050  lw          $a3, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125970u;
    if (runtime->hasFunction(0x125970u)) {
        auto targetFn = runtime->lookupFunction(0x125970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19553Cu; }
        if (ctx->pc != 0x19553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125970_0x125970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19553Cu; }
        if (ctx->pc != 0x19553Cu) { return; }
    }
    ctx->pc = 0x19553Cu;
label_19553c:
    // 0x19553c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19553cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x195540: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x195544: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x195548: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x195548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x19554c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x195550: 0xa471503c  sh          $s1, 0x503C($v1)
    ctx->pc = 0x195550u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20540), (uint16_t)GPR_U32(ctx, 17));
    // 0x195554: 0xa492503e  sh          $s2, 0x503E($a0)
    ctx->pc = 0x195554u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20542), (uint16_t)GPR_U32(ctx, 18));
    // 0x195558: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x195558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x19555c: 0xa4b05040  sh          $s0, 0x5040($a1)
    ctx->pc = 0x19555cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20544), (uint16_t)GPR_U32(ctx, 16));
    // 0x195560: 0xe4d4c948  swc1        $f20, -0x36B8($a2)
    ctx->pc = 0x195560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953288), bits); }
    // 0x195564: 0xa4535042  sh          $s3, 0x5042($v0)
    ctx->pc = 0x195564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20546), (uint16_t)GPR_U32(ctx, 19));
    // 0x195568: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x195568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19556c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19556cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195574: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x195574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19557c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x19557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195580: 0xace05044  sw          $zero, 0x5044($a3)
    ctx->pc = 0x195580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20548), GPR_U32(ctx, 0));
    // 0x195584: 0x3e00008  jr          $ra
    ctx->pc = 0x195584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195584u;
            // 0x195588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195504u: goto label_195504;
            case 0x19553Cu: goto label_19553c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19558Cu;
    // 0x19558c: 0x0  nop
    ctx->pc = 0x19558cu;
    // NOP
}
