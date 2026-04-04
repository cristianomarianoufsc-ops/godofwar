#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188688
// Address: 0x188688 - 0x188ca0
void sub_00188688_0x188688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188688_0x188688");
#endif

    ctx->pc = 0x188688u;

    // 0x188688: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18868c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x188690: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x188690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x188694: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x188694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18869c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18869cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1886a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1886a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1886a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1886a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1886ac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1886acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1886b0: 0x8c424cf4  lw          $v0, 0x4CF4($v0)
    ctx->pc = 0x1886b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19700)));
    // 0x1886b4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1886B4u;
    {
        const bool branch_taken_0x1886b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886B4u;
            // 0x1886b8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886b4) {
            ctx->pc = 0x188754u;
            goto label_188754;
        }
    }
    ctx->pc = 0x1886BCu;
    // 0x1886bc: 0xc09b240  jal         func_26C900
    ctx->pc = 0x1886BCu;
    SET_GPR_U32(ctx, 31, 0x1886C4u);
    ctx->pc = 0x26C900u;
    if (runtime->hasFunction(0x26C900u)) {
        auto targetFn = runtime->lookupFunction(0x26C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886C4u; }
        if (ctx->pc != 0x1886C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C900_0x26c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886C4u; }
        if (ctx->pc != 0x1886C4u) { return; }
    }
    ctx->pc = 0x1886C4u;
    // 0x1886c4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1886c8: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x1886c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x1886cc: 0x8c664cec  lw          $a2, 0x4CEC($v1)
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19692)));
    // 0x1886d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1886d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1886d4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1886d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1886d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1886dc: 0x8c654cf0  lw          $a1, 0x4CF0($v1)
    ctx->pc = 0x1886dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19696)));
    // 0x1886e0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1886e4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1886e8: 0x8c644cfc  lw          $a0, 0x4CFC($v1)
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19708)));
    // 0x1886ec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1886ECu;
    {
        const bool branch_taken_0x1886ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1886ec) {
            ctx->pc = 0x1886F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1886ECu;
            // 0x1886f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1886F4u;
            goto label_1886f4;
        }
    }
    ctx->pc = 0x1886F4u;
label_1886f4:
    // 0x1886f4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1886f8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1886f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1886fc: 0x2463fc00  addiu       $v1, $v1, -0x400
    ctx->pc = 0x1886fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x188700: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x188700u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x188704: 0x1810  mfhi        $v1
    ctx->pc = 0x188704u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x188708: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x188708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18870c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188710: 0x24e303ff  addiu       $v1, $a3, 0x3FF
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1023));
    // 0x188714: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x188714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x188718: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x188718u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18871c: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x18871cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x188720: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x188724: 0x33a80  sll         $a3, $v1, 10
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x188728: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x188728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x18872c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18872Cu;
    {
        const bool branch_taken_0x18872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18872Cu;
            // 0x188730: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18872c) {
            ctx->pc = 0x188748u;
            goto label_188748;
        }
    }
    ctx->pc = 0x188734u;
    // 0x188734: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x188734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188738: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x188738u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18873c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18873Cu;
    {
        const bool branch_taken_0x18873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18873Cu;
            // 0x188740: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18873c) {
            ctx->pc = 0x1887A4u;
            goto label_1887a4;
        }
    }
    ctx->pc = 0x188744u;
    // 0x188744: 0x0  nop
    ctx->pc = 0x188744u;
    // NOP
label_188748:
    // 0x188748: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x188748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18874c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18874Cu;
    {
        const bool branch_taken_0x18874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18874Cu;
            // 0x188750: 0xe53823  subu        $a3, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18874c) {
            ctx->pc = 0x1887A4u;
            goto label_1887a4;
        }
    }
    ctx->pc = 0x188754u;
label_188754:
    // 0x188754: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x188758: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18875c: 0x8c424cf0  lw          $v0, 0x4CF0($v0)
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19696)));
    // 0x188760: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x188760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188764: 0x8c634cf8  lw          $v1, 0x4CF8($v1)
    ctx->pc = 0x188764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19704)));
    // 0x188768: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x18876c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18876Cu;
    {
        const bool branch_taken_0x18876c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18876c) {
            ctx->pc = 0x188770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18876Cu;
            // 0x188770: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x188774u;
            goto label_188774;
        }
    }
    ctx->pc = 0x188774u;
label_188774:
    // 0x188774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x188774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188778: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x188778u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x18877c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18877cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188780: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x188780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188784: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x188784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x188788: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x188788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x18878c: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x18878cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x188790: 0x8ca24cec  lw          $v0, 0x4CEC($a1)
    ctx->pc = 0x188790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 19692)));
    // 0x188794: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x188798: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x18879c: 0x3010  mfhi        $a2
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1887a0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1887a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1887a4:
    // 0x1887a4: 0x101282  srl         $v0, $s0, 10
    ctx->pc = 0x1887a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 10));
    // 0x1887a8: 0x28280  sll         $s0, $v0, 10
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1887ac: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1887acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1887b0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1887b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1887b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887B4u;
            // 0x1887b8: 0x2714021  addu        $t0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x1887C8u;
            goto label_1887c8;
        }
    }
    ctx->pc = 0x1887BCu;
    // 0x1887bc: 0x2514823  subu        $t1, $s2, $s1
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1887c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1887C0u;
    {
        const bool branch_taken_0x1887c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1887C0u;
            // 0x1887c4: 0x2095823  subu        $t3, $s0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887c0) {
            ctx->pc = 0x1887D0u;
            goto label_1887d0;
        }
    }
    ctx->pc = 0x1887C8u;
label_1887c8:
    // 0x1887c8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1887c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1887ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1887d0:
    // 0x1887d0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1887d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887d4: 0xc06212c  jal         func_1884B0
    ctx->pc = 0x1887D4u;
    SET_GPR_U32(ctx, 31, 0x1887DCu);
    ctx->pc = 0x1887D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1887D4u;
            // 0x1887d8: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1884B0u;
    if (runtime->hasFunction(0x1884B0u)) {
        auto targetFn = runtime->lookupFunction(0x1884B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887DCu; }
        if (ctx->pc != 0x1887DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001884B0_0x1884b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887DCu; }
        if (ctx->pc != 0x1887DCu) { return; }
    }
    ctx->pc = 0x1887DCu;
    // 0x1887dc: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x1887dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x1887e0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1887e4: 0x8d034cfc  lw          $v1, 0x4CFC($t0)
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19708)));
    // 0x1887e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1887e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887ec: 0x8c844cf0  lw          $a0, 0x4CF0($a0)
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19696)));
    // 0x1887f0: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x1887f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x1887f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1887f8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1887f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1887fc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1887FCu;
    {
        const bool branch_taken_0x1887fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887fc) {
            ctx->pc = 0x188800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1887FCu;
            // 0x188800: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x188804u;
            goto label_188804;
        }
    }
    ctx->pc = 0x188804u;
label_188804:
    // 0x188804: 0x8cc34cf8  lw          $v1, 0x4CF8($a2)
    ctx->pc = 0x188804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19704)));
    // 0x188808: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18880c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188810: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x188810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188818: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x188818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18881c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188820: 0xacc34cf8  sw          $v1, 0x4CF8($a2)
    ctx->pc = 0x188820u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 19704), GPR_U32(ctx, 3));
    // 0x188824: 0x3810  mfhi        $a3
    ctx->pc = 0x188824u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x188828: 0xad074cfc  sw          $a3, 0x4CFC($t0)
    ctx->pc = 0x188828u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 19708), GPR_U32(ctx, 7));
    // 0x18882c: 0x3e00008  jr          $ra
    ctx->pc = 0x18882Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18882Cu;
            // 0x188830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1886F4u: goto label_1886f4;
            case 0x188748u: goto label_188748;
            case 0x188754u: goto label_188754;
            case 0x188774u: goto label_188774;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887D0u: goto label_1887d0;
            case 0x188804u: goto label_188804;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888C8u: goto label_1888c8;
            case 0x188914u: goto label_188914;
            case 0x188958u: goto label_188958;
            case 0x188960u: goto label_188960;
            case 0x188968u: goto label_188968;
            case 0x1889A8u: goto label_1889a8;
            case 0x1889B8u: goto label_1889b8;
            case 0x1889CCu: goto label_1889cc;
            case 0x188A18u: goto label_188a18;
            case 0x188A58u: goto label_188a58;
            case 0x188A60u: goto label_188a60;
            case 0x188A64u: goto label_188a64;
            case 0x188AB8u: goto label_188ab8;
            case 0x188AD4u: goto label_188ad4;
            case 0x188B28u: goto label_188b28;
            case 0x188B5Cu: goto label_188b5c;
            case 0x188B60u: goto label_188b60;
            case 0x188B64u: goto label_188b64;
            case 0x188BC8u: goto label_188bc8;
            case 0x188BD8u: goto label_188bd8;
            case 0x188BECu: goto label_188bec;
            case 0x188C38u: goto label_188c38;
            case 0x188C78u: goto label_188c78;
            case 0x188C80u: goto label_188c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188834u;
    // 0x188834: 0x0  nop
    ctx->pc = 0x188834u;
    // NOP
    // 0x188838: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x188838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x18883c: 0x3e00008  jr          $ra
    ctx->pc = 0x18883Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18883Cu;
            // 0x188840: 0xac40c848  sw          $zero, -0x37B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1886F4u: goto label_1886f4;
            case 0x188748u: goto label_188748;
            case 0x188754u: goto label_188754;
            case 0x188774u: goto label_188774;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887D0u: goto label_1887d0;
            case 0x188804u: goto label_188804;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888C8u: goto label_1888c8;
            case 0x188914u: goto label_188914;
            case 0x188958u: goto label_188958;
            case 0x188960u: goto label_188960;
            case 0x188968u: goto label_188968;
            case 0x1889A8u: goto label_1889a8;
            case 0x1889B8u: goto label_1889b8;
            case 0x1889CCu: goto label_1889cc;
            case 0x188A18u: goto label_188a18;
            case 0x188A58u: goto label_188a58;
            case 0x188A60u: goto label_188a60;
            case 0x188A64u: goto label_188a64;
            case 0x188AB8u: goto label_188ab8;
            case 0x188AD4u: goto label_188ad4;
            case 0x188B28u: goto label_188b28;
            case 0x188B5Cu: goto label_188b5c;
            case 0x188B60u: goto label_188b60;
            case 0x188B64u: goto label_188b64;
            case 0x188BC8u: goto label_188bc8;
            case 0x188BD8u: goto label_188bd8;
            case 0x188BECu: goto label_188bec;
            case 0x188C38u: goto label_188c38;
            case 0x188C78u: goto label_188c78;
            case 0x188C80u: goto label_188c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188844u;
    // 0x188844: 0x0  nop
    ctx->pc = 0x188844u;
    // NOP
    // 0x188848: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x188848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18884c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x188850: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x188850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x188854: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x188854u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x188858: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x188858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18885c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18885cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188860: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x188860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x188864: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x188864u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188868: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x188868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18886c: 0x2650de10  addiu       $s0, $s2, -0x21F0
    ctx->pc = 0x18886cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958608));
    // 0x188870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188874: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x188874u;
    SET_GPR_U32(ctx, 31, 0x18887Cu);
    ctx->pc = 0x188878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188874u;
            // 0x188878: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18887Cu; }
        if (ctx->pc != 0x18887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18887Cu; }
        if (ctx->pc != 0x18887Cu) { return; }
    }
    ctx->pc = 0x18887Cu;
    // 0x18887c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x18887cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x188880: 0x10710011  beq         $v1, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x188880u;
    {
        const bool branch_taken_0x188880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x188884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188880u;
            // 0x188884: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188880) {
            ctx->pc = 0x1888C8u;
            goto label_1888c8;
        }
    }
    ctx->pc = 0x188888u;
    // 0x188888: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188888u;
    {
        const bool branch_taken_0x188888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188888u;
            // 0x18888c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188888) {
            ctx->pc = 0x1888A0u;
            goto label_1888a0;
        }
    }
    ctx->pc = 0x188890u;
    // 0x188890: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188890u;
    {
        const bool branch_taken_0x188890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188890u;
            // 0x188894: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188890) {
            ctx->pc = 0x1888B0u;
            goto label_1888b0;
        }
    }
    ctx->pc = 0x188898u;
    // 0x188898: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x188898u;
    {
        const bool branch_taken_0x188898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188898u;
            // 0x18889c: 0x8c42c848  lw          $v0, -0x37B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188898) {
            ctx->pc = 0x188968u;
            goto label_188968;
        }
    }
    ctx->pc = 0x1888A0u;
label_1888a0:
    // 0x1888a0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1888A0u;
    {
        const bool branch_taken_0x1888a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1888A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888A0u;
            // 0x1888a4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888a0) {
            ctx->pc = 0x188914u;
            goto label_188914;
        }
    }
    ctx->pc = 0x1888A8u;
    // 0x1888a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1888A8u;
    {
        const bool branch_taken_0x1888a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888A8u;
            // 0x1888ac: 0x8c42c848  lw          $v0, -0x37B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888a8) {
            ctx->pc = 0x188968u;
            goto label_188968;
        }
    }
    ctx->pc = 0x1888B0u;
label_1888b0:
    // 0x1888b0: 0x8e43de10  lw          $v1, -0x21F0($s2)
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958608)));
    // 0x1888b4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1888b8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1888B8u;
    {
        const bool branch_taken_0x1888b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1888BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888B8u;
            // 0x1888bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888b8) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x1888C0u;
    // 0x1888c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1888C0u;
    {
        const bool branch_taken_0x1888c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888C0u;
            // 0x1888c4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888c0) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x1888C8u;
label_1888c8:
    // 0x1888c8: 0xc05ebde  jal         func_17AF78
    ctx->pc = 0x1888C8u;
    SET_GPR_U32(ctx, 31, 0x1888D0u);
    ctx->pc = 0x1888CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888C8u;
            // 0x1888cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AF78u;
    if (runtime->hasFunction(0x17AF78u)) {
        auto targetFn = runtime->lookupFunction(0x17AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888D0u; }
        if (ctx->pc != 0x1888D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17af78_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888D0u; }
        if (ctx->pc != 0x1888D0u) { return; }
    }
    ctx->pc = 0x1888D0u;
    // 0x1888d0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1888D0u;
    {
        const bool branch_taken_0x1888d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888D0u;
            // 0x1888d4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888d0) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x1888D8u;
    // 0x1888d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1888dc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1888dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1888e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1888e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1888e4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1888e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1888e8: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1888e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1888ec: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1888ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1888f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1888f4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1888f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1888f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1888f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1888fc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1888fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x188900: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x188900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x188904: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x188904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x188908: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x188908u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18890c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18890Cu;
    {
        const bool branch_taken_0x18890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18890Cu;
            // 0x188910: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18890c) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x188914u;
label_188914:
    // 0x188914: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x188914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x188918: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x188918u;
    {
        const bool branch_taken_0x188918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188918u;
            // 0x18891c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188918) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x188920u;
    // 0x188920: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x188924: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x188924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x188928: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x18892c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x188930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188934: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x188934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x188938: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x188938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x18893c: 0xc05ebf8  jal         func_17AFE0
    ctx->pc = 0x18893Cu;
    SET_GPR_U32(ctx, 31, 0x188944u);
    ctx->pc = 0x188940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18893Cu;
            // 0x188940: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AFE0u;
    if (runtime->hasFunction(0x17AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x17AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188944u; }
        if (ctx->pc != 0x188944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AFE0_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188944u; }
        if (ctx->pc != 0x188944u) { return; }
    }
    ctx->pc = 0x188944u;
    // 0x188944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188944u;
    {
        const bool branch_taken_0x188944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188944u;
            // 0x188948: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188944) {
            ctx->pc = 0x188958u;
            goto label_188958;
        }
    }
    ctx->pc = 0x18894Cu;
    // 0x18894c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18894Cu;
    {
        const bool branch_taken_0x18894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18894Cu;
            // 0x188950: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18894c) {
            ctx->pc = 0x188960u;
            goto label_188960;
        }
    }
    ctx->pc = 0x188954u;
    // 0x188954: 0x0  nop
    ctx->pc = 0x188954u;
    // NOP
label_188958:
    // 0x188958: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x188958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x18895c: 0x0  nop
    ctx->pc = 0x18895cu;
    // NOP
label_188960:
    // 0x188960: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x188960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x188964: 0x8c42c848  lw          $v0, -0x37B8($v0)
    ctx->pc = 0x188964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953032)));
label_188968:
    // 0x188968: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x188968u;
    {
        const bool branch_taken_0x188968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188968u;
            // 0x18896c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188968) {
            ctx->pc = 0x188B60u;
            goto label_188b60;
        }
    }
    ctx->pc = 0x188970u;
    // 0x188970: 0x1a60007c  blez        $s3, . + 4 + (0x7C << 2)
    ctx->pc = 0x188970u;
    {
        const bool branch_taken_0x188970 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188970u;
            // 0x188974: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188970) {
            ctx->pc = 0x188B64u;
            goto label_188b64;
        }
    }
    ctx->pc = 0x188978u;
    // 0x188978: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x188978u;
    SET_GPR_U32(ctx, 31, 0x188980u);
    ctx->pc = 0x18897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188978u;
            // 0x18897c: 0x2650de10  addiu       $s0, $s2, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188980u; }
        if (ctx->pc != 0x188980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188980u; }
        if (ctx->pc != 0x188980u) { return; }
    }
    ctx->pc = 0x188980u;
    // 0x188980: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x188980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x188984: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188988: 0x10710010  beq         $v1, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x188988u;
    {
        const bool branch_taken_0x188988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x18898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188988u;
            // 0x18898c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188988) {
            ctx->pc = 0x1889CCu;
            goto label_1889cc;
        }
    }
    ctx->pc = 0x188990u;
    // 0x188990: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x188990u;
    {
        const bool branch_taken_0x188990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188990) {
            ctx->pc = 0x188994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188990u;
            // 0x188994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1889A8u;
            goto label_1889a8;
        }
    }
    ctx->pc = 0x188998u;
    // 0x188998: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188998u;
            // 0x18899c: 0x8e43de10  lw          $v1, -0x21F0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889B8u;
            goto label_1889b8;
        }
    }
    ctx->pc = 0x1889A0u;
    // 0x1889a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889A0u;
            // 0x1889a4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x188A64u;
            goto label_188a64;
        }
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1889A8u;
    {
        const bool branch_taken_0x1889a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1889a8) {
            ctx->pc = 0x1889ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1889A8u;
            // 0x1889ac: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188A18u;
            goto label_188a18;
        }
    }
    ctx->pc = 0x1889B0u;
    // 0x1889b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1889B0u;
    {
        const bool branch_taken_0x1889b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889B0u;
            // 0x1889b4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889b0) {
            ctx->pc = 0x188A64u;
            goto label_188a64;
        }
    }
    ctx->pc = 0x1889B8u;
label_1889b8:
    // 0x1889b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1889b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1889bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1889BCu;
    {
        const bool branch_taken_0x1889bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1889C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889BCu;
            // 0x1889c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889bc) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x1889C4u;
    // 0x1889c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1889C4u;
    {
        const bool branch_taken_0x1889c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889C4u;
            // 0x1889c8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889c4) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x1889CCu;
label_1889cc:
    // 0x1889cc: 0xc05ebde  jal         func_17AF78
    ctx->pc = 0x1889CCu;
    SET_GPR_U32(ctx, 31, 0x1889D4u);
    ctx->pc = 0x1889D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1889CCu;
            // 0x1889d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AF78u;
    if (runtime->hasFunction(0x17AF78u)) {
        auto targetFn = runtime->lookupFunction(0x17AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889D4u; }
        if (ctx->pc != 0x1889D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17af78_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1889D4u; }
        if (ctx->pc != 0x1889D4u) { return; }
    }
    ctx->pc = 0x1889D4u;
    // 0x1889d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1889D4u;
    {
        const bool branch_taken_0x1889d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1889D4u;
            // 0x1889d8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889d4) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x1889DCu;
    // 0x1889dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1889dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1889e0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1889e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1889e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1889e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1889e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1889e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1889ec: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1889ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1889f0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1889f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1889f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1889f8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1889f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1889fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1889fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x188a00: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x188a00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x188a04: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x188a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x188a08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x188a0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x188a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188a10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x188A10u;
    {
        const bool branch_taken_0x188a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A10u;
            // 0x188a14: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a10) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x188A18u;
label_188a18:
    // 0x188a18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x188A18u;
    {
        const bool branch_taken_0x188a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A18u;
            // 0x188a1c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a18) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x188A20u;
    // 0x188a20: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x188a24: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x188a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x188a28: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x188a28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x188a2c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x188a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a34: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x188a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x188a38: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x188a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x188a3c: 0xc05ebf8  jal         func_17AFE0
    ctx->pc = 0x188A3Cu;
    SET_GPR_U32(ctx, 31, 0x188A44u);
    ctx->pc = 0x188A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188A3Cu;
            // 0x188a40: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AFE0u;
    if (runtime->hasFunction(0x17AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x17AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A44u; }
        if (ctx->pc != 0x188A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AFE0_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188A44u; }
        if (ctx->pc != 0x188A44u) { return; }
    }
    ctx->pc = 0x188A44u;
    // 0x188a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188A44u;
    {
        const bool branch_taken_0x188a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A44u;
            // 0x188a48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a44) {
            ctx->pc = 0x188A58u;
            goto label_188a58;
        }
    }
    ctx->pc = 0x188A4Cu;
    // 0x188a4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188A4Cu;
    {
        const bool branch_taken_0x188a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A4Cu;
            // 0x188a50: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a4c) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x188A54u;
    // 0x188a54: 0x0  nop
    ctx->pc = 0x188a54u;
    // NOP
label_188a58:
    // 0x188a58: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x188a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x188a5c: 0x0  nop
    ctx->pc = 0x188a5cu;
    // NOP
label_188a60:
    // 0x188a60: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x188a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_188a64:
    // 0x188a64: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x188A64u;
    {
        const bool branch_taken_0x188a64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188A64u;
            // 0x188a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a64) {
            ctx->pc = 0x188AB8u;
            goto label_188ab8;
        }
    }
    ctx->pc = 0x188A6Cu;
    // 0x188a6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x188a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x188a70: 0x23380  sll         $a2, $v0, 14
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x188a74: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x188a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188a78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x188a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188a7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x188a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x188a80: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x188a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x188a84: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x188a84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x188a88: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x188a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x188a8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x188a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x188a90: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x188a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x188a94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x188a98: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x188a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x188a9c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x188a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x188aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x188aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x188aa4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x188aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x188aa8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x188aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x188aac: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x188aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x188ab0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x188ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x188ab4: 0x0  nop
    ctx->pc = 0x188ab4u;
    // NOP
label_188ab8:
    // 0x188ab8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188AB8u;
    {
        const bool branch_taken_0x188ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188AB8u;
            // 0x188abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ab8) {
            ctx->pc = 0x188B5Cu;
            goto label_188b5c;
        }
    }
    ctx->pc = 0x188AC0u;
    // 0x188ac0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x188ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ac4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x188ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x188ac8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x188ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x188acc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x188ACCu;
    {
        const bool branch_taken_0x188acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188ACCu;
            // 0x188ad0: 0x24624000  addiu       $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188acc) {
            ctx->pc = 0x188B28u;
            goto label_188b28;
        }
    }
    ctx->pc = 0x188AD4u;
label_188ad4:
    // 0x188ad4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x188ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x188ad8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x188ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x188adc: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x188adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x188ae0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x188ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x188ae4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x188ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x188ae8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x188ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x188aec: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x188aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x188af0: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x188af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x188af4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x188af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188af8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x188af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188afc: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x188afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188b00: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x188b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188b04: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x188b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188b08: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x188b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188b0c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x188b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188b10: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x188b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x188b14: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x188b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x188b18: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x188B18u;
    {
        const bool branch_taken_0x188b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B18u;
            // 0x188b1c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b18) {
            ctx->pc = 0x188AD4u;
            runtime->cooperativeGuestYield();
            goto label_188ad4;
        }
    }
    ctx->pc = 0x188B20u;
    // 0x188b20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x188B20u;
    {
        const bool branch_taken_0x188b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B20u;
            // 0x188b24: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b20) {
            ctx->pc = 0x188B60u;
            goto label_188b60;
        }
    }
    ctx->pc = 0x188B28u;
label_188b28:
    // 0x188b28: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x188b28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188b2c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x188b2cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x188b30: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x188b30u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x188b34: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x188b34u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x188b38: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x188b38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x188b3c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x188b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x188b40: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x188b40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x188b44: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x188b44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x188b48: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x188b4c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x188B4Cu;
    {
        const bool branch_taken_0x188b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B4Cu;
            // 0x188b50: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b4c) {
            ctx->pc = 0x188B28u;
            runtime->cooperativeGuestYield();
            goto label_188b28;
        }
    }
    ctx->pc = 0x188B54u;
    // 0x188b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188B54u;
    {
        const bool branch_taken_0x188b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B54u;
            // 0x188b58: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b54) {
            ctx->pc = 0x188B60u;
            goto label_188b60;
        }
    }
    ctx->pc = 0x188B5Cu;
label_188b5c:
    // 0x188b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188b60:
    // 0x188b60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x188b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_188b64:
    // 0x188b64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x188b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188b68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x188b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188b6c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x188b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188b70: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x188b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188b78: 0x3e00008  jr          $ra
    ctx->pc = 0x188B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B78u;
            // 0x188b7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1886F4u: goto label_1886f4;
            case 0x188748u: goto label_188748;
            case 0x188754u: goto label_188754;
            case 0x188774u: goto label_188774;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887D0u: goto label_1887d0;
            case 0x188804u: goto label_188804;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888C8u: goto label_1888c8;
            case 0x188914u: goto label_188914;
            case 0x188958u: goto label_188958;
            case 0x188960u: goto label_188960;
            case 0x188968u: goto label_188968;
            case 0x1889A8u: goto label_1889a8;
            case 0x1889B8u: goto label_1889b8;
            case 0x1889CCu: goto label_1889cc;
            case 0x188A18u: goto label_188a18;
            case 0x188A58u: goto label_188a58;
            case 0x188A60u: goto label_188a60;
            case 0x188A64u: goto label_188a64;
            case 0x188AB8u: goto label_188ab8;
            case 0x188AD4u: goto label_188ad4;
            case 0x188B28u: goto label_188b28;
            case 0x188B5Cu: goto label_188b5c;
            case 0x188B60u: goto label_188b60;
            case 0x188B64u: goto label_188b64;
            case 0x188BC8u: goto label_188bc8;
            case 0x188BD8u: goto label_188bd8;
            case 0x188BECu: goto label_188bec;
            case 0x188C38u: goto label_188c38;
            case 0x188C78u: goto label_188c78;
            case 0x188C80u: goto label_188c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188B80u;
    // 0x188b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188b84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x188b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x188b88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x188b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x188b8c: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x188b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x188b90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x188b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x188b94: 0x2630de10  addiu       $s0, $s1, -0x21F0
    ctx->pc = 0x188b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958608));
    // 0x188b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188b9c: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x188B9Cu;
    SET_GPR_U32(ctx, 31, 0x188BA4u);
    ctx->pc = 0x188BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188B9Cu;
            // 0x188ba0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BA4u; }
        if (ctx->pc != 0x188BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BA4u; }
        if (ctx->pc != 0x188BA4u) { return; }
    }
    ctx->pc = 0x188BA4u;
    // 0x188ba4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x188ba8: 0x10720010  beq         $v1, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x188BA8u;
    {
        const bool branch_taken_0x188ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x188BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BA8u;
            // 0x188bac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ba8) {
            ctx->pc = 0x188BECu;
            goto label_188bec;
        }
    }
    ctx->pc = 0x188BB0u;
    // 0x188bb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188BB0u;
    {
        const bool branch_taken_0x188bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BB0u;
            // 0x188bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bb0) {
            ctx->pc = 0x188BC8u;
            goto label_188bc8;
        }
    }
    ctx->pc = 0x188BB8u;
    // 0x188bb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188BB8u;
    {
        const bool branch_taken_0x188bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BB8u;
            // 0x188bbc: 0x8e23de10  lw          $v1, -0x21F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bb8) {
            ctx->pc = 0x188BD8u;
            goto label_188bd8;
        }
    }
    ctx->pc = 0x188BC0u;
    // 0x188bc0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x188BC0u;
    {
        const bool branch_taken_0x188bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188bc0) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188BC8u;
label_188bc8:
    // 0x188bc8: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x188BC8u;
    {
        const bool branch_taken_0x188bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188bc8) {
            ctx->pc = 0x188BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188BC8u;
            // 0x188bcc: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188C38u;
            goto label_188c38;
        }
    }
    ctx->pc = 0x188BD0u;
    // 0x188bd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x188BD0u;
    {
        const bool branch_taken_0x188bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188bd0) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188BD8u;
label_188bd8:
    // 0x188bd8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x188bdc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188BDCu;
    {
        const bool branch_taken_0x188bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BDCu;
            // 0x188be0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bdc) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188BE4u;
    // 0x188be4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x188BE4u;
    {
        const bool branch_taken_0x188be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BE4u;
            // 0x188be8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188be4) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188BECu;
label_188bec:
    // 0x188bec: 0xc05ebde  jal         func_17AF78
    ctx->pc = 0x188BECu;
    SET_GPR_U32(ctx, 31, 0x188BF4u);
    ctx->pc = 0x188BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188BECu;
            // 0x188bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AF78u;
    if (runtime->hasFunction(0x17AF78u)) {
        auto targetFn = runtime->lookupFunction(0x17AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BF4u; }
        if (ctx->pc != 0x188BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17af78_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188BF4u; }
        if (ctx->pc != 0x188BF4u) { return; }
    }
    ctx->pc = 0x188BF4u;
    // 0x188bf4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x188BF4u;
    {
        const bool branch_taken_0x188bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BF4u;
            // 0x188bf8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf4) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188BFCu;
    // 0x188bfc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x188c00: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x188c04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188c08: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188c0c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x188c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x188c10: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x188c10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x188c14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x188c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x188c18: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x188c18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x188c1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x188c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x188c20: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x188c24: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x188c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x188c28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x188c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x188c2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x188c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188c30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x188C30u;
    {
        const bool branch_taken_0x188c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C30u;
            // 0x188c34: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c30) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188C38u;
label_188c38:
    // 0x188c38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x188C38u;
    {
        const bool branch_taken_0x188c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C38u;
            // 0x188c3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c38) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188C40u;
    // 0x188c40: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x188c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x188c44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x188c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x188c48: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x188c4c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x188c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x188c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c54: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x188c58: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x188c5c: 0xc05ebf8  jal         func_17AFE0
    ctx->pc = 0x188C5Cu;
    SET_GPR_U32(ctx, 31, 0x188C64u);
    ctx->pc = 0x188C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C5Cu;
            // 0x188c60: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AFE0u;
    if (runtime->hasFunction(0x17AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x17AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C64u; }
        if (ctx->pc != 0x188C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AFE0_0x17afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C64u; }
        if (ctx->pc != 0x188C64u) { return; }
    }
    ctx->pc = 0x188C64u;
    // 0x188c64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188C64u;
    {
        const bool branch_taken_0x188c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C64u;
            // 0x188c68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c64) {
            ctx->pc = 0x188C78u;
            goto label_188c78;
        }
    }
    ctx->pc = 0x188C6Cu;
    // 0x188c6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188C6Cu;
    {
        const bool branch_taken_0x188c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C6Cu;
            // 0x188c70: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c6c) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188C74u;
    // 0x188c74: 0x0  nop
    ctx->pc = 0x188c74u;
    // NOP
label_188c78:
    // 0x188c78: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x188c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x188c7c: 0x0  nop
    ctx->pc = 0x188c7cu;
    // NOP
label_188c80:
    // 0x188c80: 0xc0626de  jal         func_189B78
    ctx->pc = 0x188C80u;
    SET_GPR_U32(ctx, 31, 0x188C88u);
    ctx->pc = 0x189B78u;
    if (runtime->hasFunction(0x189B78u)) {
        auto targetFn = runtime->lookupFunction(0x189B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C88u; }
        if (ctx->pc != 0x188C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189B78_0x189b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C88u; }
        if (ctx->pc != 0x188C88u) { return; }
    }
    ctx->pc = 0x188C88u;
    // 0x188c88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x188c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188c8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188c90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x188c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188c98: 0x3e00008  jr          $ra
    ctx->pc = 0x188C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C98u;
            // 0x188c9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1886F4u: goto label_1886f4;
            case 0x188748u: goto label_188748;
            case 0x188754u: goto label_188754;
            case 0x188774u: goto label_188774;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887D0u: goto label_1887d0;
            case 0x188804u: goto label_188804;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888C8u: goto label_1888c8;
            case 0x188914u: goto label_188914;
            case 0x188958u: goto label_188958;
            case 0x188960u: goto label_188960;
            case 0x188968u: goto label_188968;
            case 0x1889A8u: goto label_1889a8;
            case 0x1889B8u: goto label_1889b8;
            case 0x1889CCu: goto label_1889cc;
            case 0x188A18u: goto label_188a18;
            case 0x188A58u: goto label_188a58;
            case 0x188A60u: goto label_188a60;
            case 0x188A64u: goto label_188a64;
            case 0x188AB8u: goto label_188ab8;
            case 0x188AD4u: goto label_188ad4;
            case 0x188B28u: goto label_188b28;
            case 0x188B5Cu: goto label_188b5c;
            case 0x188B60u: goto label_188b60;
            case 0x188B64u: goto label_188b64;
            case 0x188BC8u: goto label_188bc8;
            case 0x188BD8u: goto label_188bd8;
            case 0x188BECu: goto label_188bec;
            case 0x188C38u: goto label_188c38;
            case 0x188C78u: goto label_188c78;
            case 0x188C80u: goto label_188c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188CA0u;
}
