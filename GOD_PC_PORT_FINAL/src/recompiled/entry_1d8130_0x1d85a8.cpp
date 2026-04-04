#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1d8130
// Address: 0x1d8130 - 0x1d85a8
void entry_1d8130_0x1d85a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1d8130_0x1d85a8");
#endif

    ctx->pc = 0x1d8130u;

    // 0x1d8130: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d8130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d8134: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1d8134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1d8138: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1d8138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1d813c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8140: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1d8140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1d8144: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d8144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8148: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1d8148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1d814c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d814cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8150: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1d8150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1d8154: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1d8154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8158: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1d8158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1d815c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d8160: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d8160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d8164: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1d8164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1d8168: 0x12800103  beqz        $s4, . + 4 + (0x103 << 2)
    ctx->pc = 0x1D8168u;
    {
        const bool branch_taken_0x1d8168 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8168u;
            // 0x1d816c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8168) {
            ctx->pc = 0x1D8578u;
            goto label_1d8578;
        }
    }
    ctx->pc = 0x1D8170u;
    // 0x1d8170: 0xc0761ae  jal         func_1D86B8
    ctx->pc = 0x1D8170u;
    SET_GPR_U32(ctx, 31, 0x1D8178u);
    ctx->pc = 0x1D86B8u;
    if (runtime->hasFunction(0x1D86B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D86B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8178u; }
        if (ctx->pc != 0x1D8178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d86b8_0x1d8730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8178u; }
        if (ctx->pc != 0x1D8178u) { return; }
    }
    ctx->pc = 0x1D8178u;
    // 0x1d8178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d817c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8180: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x1D8180u;
    SET_GPR_U32(ctx, 31, 0x1D8188u);
    ctx->pc = 0x1D8184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8180u;
            // 0x1d8184: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8188u; }
        if (ctx->pc != 0x1D8188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8188u; }
        if (ctx->pc != 0x1D8188u) { return; }
    }
    ctx->pc = 0x1D8188u;
    // 0x1d8188: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1d8188u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d818c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D818Cu;
    {
        const bool branch_taken_0x1d818c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D818Cu;
            // 0x1d8190: 0x3c150030  lui         $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d818c) {
            ctx->pc = 0x1D81A8u;
            goto label_1d81a8;
        }
    }
    ctx->pc = 0x1D8194u;
    // 0x1d8194: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d8198: 0x162200f8  bne         $s1, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1D8198u;
    {
        const bool branch_taken_0x1d8198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8198u;
            // 0x1d819c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8198) {
            ctx->pc = 0x1D857Cu;
            goto label_1d857c;
        }
    }
    ctx->pc = 0x1D81A0u;
    // 0x1d81a0: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1d81a4: 0x0  nop
    ctx->pc = 0x1d81a4u;
    // NOP
label_1d81a8:
    // 0x1d81a8: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d81ac: 0x26a42cc0  addiu       $a0, $s5, 0x2CC0
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d81b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d81b4: 0x94870082  lhu         $a3, 0x82($a0)
    ctx->pc = 0x1d81b4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x1d81b8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1d81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d81bc: 0x2623fffd  addiu       $v1, $s1, -0x3
    ctx->pc = 0x1d81bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x1d81c0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d81c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81c4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1d81c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d81c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d81c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81cc: 0xa4820082  sh          $v0, 0x82($a0)
    ctx->pc = 0x1d81ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d81d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1d81d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1d81d4: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1d81d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1d81d8: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1D81D8u;
    {
        const bool branch_taken_0x1d81d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81D8u;
            // 0x1d81dc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81d8) {
            ctx->pc = 0x1D847Cu;
            goto label_1d847c;
        }
    }
    ctx->pc = 0x1D81E0u;
    // 0x1d81e0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1d81e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d81e8: 0x24426a70  addiu       $v0, $v0, 0x6A70
    ctx->pc = 0x1d81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27248));
    // 0x1d81ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d81f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d81f4: 0x400008  jr          $v0
    ctx->pc = 0x1D81F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D81FCu: goto label_1d81fc;
            case 0x1D82E8u: goto label_1d82e8;
            case 0x1D83ECu: goto label_1d83ec;
            case 0x1D841Cu: goto label_1d841c;
            case 0x1D8444u: goto label_1d8444;
            case 0x1D847Cu: goto label_1d847c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D81FCu;
label_1d81fc:
    // 0x1d81fc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d8200: 0x26b22cc0  addiu       $s2, $s5, 0x2CC0
    ctx->pc = 0x1d8200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d8204: 0x245628e0  addiu       $s6, $v0, 0x28E0
    ctx->pc = 0x1d8204u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1d8208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d8208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d820c: 0x8ec30044  lw          $v1, 0x44($s6)
    ctx->pc = 0x1d820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x1d8210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d8210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8214: 0x9242007f  lbu         $v0, 0x7F($s2)
    ctx->pc = 0x1d8214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 127)));
    // 0x1d8218: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8218u;
    {
        const bool branch_taken_0x1d8218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8218) {
            ctx->pc = 0x1D821Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8218u;
            // 0x1d821c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8220u;
            goto label_1d8220;
        }
    }
    ctx->pc = 0x1D8220u;
label_1d8220:
    // 0x1d8220: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d8220u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d8224: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x1d8224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d8228: 0xa246007f  sb          $a2, 0x7F($s2)
    ctx->pc = 0x1d8228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 127), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d822c: 0x8812  mflo        $s1
    ctx->pc = 0x1d822cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1d8230: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x1D8230u;
    SET_GPR_U32(ctx, 31, 0x1D8238u);
    ctx->pc = 0x1D8234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8230u;
            // 0x1d8234: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8238u; }
        if (ctx->pc != 0x1D8238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8238u; }
        if (ctx->pc != 0x1D8238u) { return; }
    }
    ctx->pc = 0x1D8238u;
    // 0x1d8238: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d8238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d823c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1d823cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d8240: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8240u;
    {
        const bool branch_taken_0x1d8240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8240) {
            ctx->pc = 0x1D8244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8240u;
            // 0x1d8244: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8248u;
            goto label_1d8248;
        }
    }
    ctx->pc = 0x1D8248u;
label_1d8248:
    // 0x1d8248: 0xa250007f  sb          $s0, 0x7F($s2)
    ctx->pc = 0x1d8248u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 127), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d824c: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x1d824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x1d8250: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1d8250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d8254: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1d8254u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d8258: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8258u;
    {
        const bool branch_taken_0x1d8258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8258) {
            ctx->pc = 0x1D825Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8258u;
            // 0x1d825c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8260u;
            goto label_1d8260;
        }
    }
    ctx->pc = 0x1D8260u;
label_1d8260:
    // 0x1d8260: 0x1812  mflo        $v1
    ctx->pc = 0x1d8260u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d8264: 0x1071001a  beq         $v1, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D8264u;
    {
        const bool branch_taken_0x1d8264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D8268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8264u;
            // 0x1d8268: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8264) {
            ctx->pc = 0x1D82D0u;
            goto label_1d82d0;
        }
    }
    ctx->pc = 0x1D826Cu;
    // 0x1d826c: 0x92420076  lbu         $v0, 0x76($s2)
    ctx->pc = 0x1d826cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 118)));
    // 0x1d8270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8274: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1d8274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d8278: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1d8278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d827c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D827Cu;
    {
        const bool branch_taken_0x1d827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D827Cu;
            // 0x1d8280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d827c) {
            ctx->pc = 0x1D82CCu;
            goto label_1d82cc;
        }
    }
    ctx->pc = 0x1D8284u;
    // 0x1d8284: 0xa2430076  sb          $v1, 0x76($s2)
    ctx->pc = 0x1d8284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d8288: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d8288u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d828c: 0xc077002  jal         func_1DC008
    ctx->pc = 0x1D828Cu;
    SET_GPR_U32(ctx, 31, 0x1D8294u);
    ctx->pc = 0x1D8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D828Cu;
            // 0x1d8290: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC008u;
    if (runtime->hasFunction(0x1DC008u)) {
        auto targetFn = runtime->lookupFunction(0x1DC008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8294u; }
        if (ctx->pc != 0x1D8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1dc008_0x1dc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8294u; }
        if (ctx->pc != 0x1D8294u) { return; }
    }
    ctx->pc = 0x1D8294u;
    // 0x1d8294: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d8298: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x1d8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
    // 0x1d829c: 0xc0782a0  jal         func_1E0A80
    ctx->pc = 0x1D829Cu;
    SET_GPR_U32(ctx, 31, 0x1D82A4u);
    ctx->pc = 0x1D82A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D829Cu;
            // 0x1d82a0: 0xc48c017c  lwc1        $f12, 0x17C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A80u;
    if (runtime->hasFunction(0x1E0A80u)) {
        auto targetFn = runtime->lookupFunction(0x1E0A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A4u; }
        if (ctx->pc != 0x1D82A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0A80_0x1e0a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A4u; }
        if (ctx->pc != 0x1D82A4u) { return; }
    }
    ctx->pc = 0x1D82A4u;
    // 0x1d82a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d82a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d82ac: 0x92440076  lbu         $a0, 0x76($s2)
    ctx->pc = 0x1d82acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 118)));
    // 0x1d82b0: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d82b4: 0xc460017c  lwc1        $f0, 0x17C($v1)
    ctx->pc = 0x1d82b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82b8: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x1d82b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 4));
    // 0x1d82bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d82bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d82c0: 0xae7e01c0  sw          $fp, 0x1C0($s3)
    ctx->pc = 0x1d82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 30));
    // 0x1d82c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d82c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d82c8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d82c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1d82cc:
    // 0x1d82cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d82d0:
    // 0x1d82d0: 0x26a42cc0  addiu       $a0, $s5, 0x2CC0
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d82d4: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d82d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d82dc: 0x9082007f  lbu         $v0, 0x7F($a0)
    ctx->pc = 0x1d82dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1d82e0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1D82E0u;
    {
        const bool branch_taken_0x1d82e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82E0u;
            // 0x1d82e4: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82e0) {
            ctx->pc = 0x1D847Cu;
            goto label_1d847c;
        }
    }
    ctx->pc = 0x1D82E8u;
label_1d82e8:
    // 0x1d82e8: 0x26b22cc0  addiu       $s2, $s5, 0x2CC0
    ctx->pc = 0x1d82e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d82ec: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1d82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1d82f0: 0x245528e0  addiu       $s5, $v0, 0x28E0
    ctx->pc = 0x1d82f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
    // 0x1d82f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d82f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82f8: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x1d82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1d82fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8300: 0x92420080  lbu         $v0, 0x80($s2)
    ctx->pc = 0x1d8300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1d8304: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8304u;
    {
        const bool branch_taken_0x1d8304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8304) {
            ctx->pc = 0x1D8308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8304u;
            // 0x1d8308: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D830Cu;
            goto label_1d830c;
        }
    }
    ctx->pc = 0x1D830Cu;
label_1d830c:
    // 0x1d830c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d830cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d8310: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d8314: 0xa2460080  sb          $a2, 0x80($s2)
    ctx->pc = 0x1d8314u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d8318: 0x8812  mflo        $s1
    ctx->pc = 0x1d8318u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1d831c: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x1D831Cu;
    SET_GPR_U32(ctx, 31, 0x1D8324u);
    ctx->pc = 0x1D8320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D831Cu;
            // 0x1d8320: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8324u; }
        if (ctx->pc != 0x1D8324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8324u; }
        if (ctx->pc != 0x1D8324u) { return; }
    }
    ctx->pc = 0x1D8324u;
    // 0x1d8324: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d8324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8328: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1d8328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d832c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D832Cu;
    {
        const bool branch_taken_0x1d832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d832c) {
            ctx->pc = 0x1D8330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D832Cu;
            // 0x1d8330: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8334u;
            goto label_1d8334;
        }
    }
    ctx->pc = 0x1D8334u;
label_1d8334:
    // 0x1d8334: 0xa2500080  sb          $s0, 0x80($s2)
    ctx->pc = 0x1d8334u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d8338: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1d8338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1d833c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1d833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d8340: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1d8340u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d8344: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8344u;
    {
        const bool branch_taken_0x1d8344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8344) {
            ctx->pc = 0x1D8348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8344u;
            // 0x1d8348: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D834Cu;
            goto label_1d834c;
        }
    }
    ctx->pc = 0x1D834Cu;
label_1d834c:
    // 0x1d834c: 0x1812  mflo        $v1
    ctx->pc = 0x1d834cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d8350: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D8350u;
    {
        const bool branch_taken_0x1d8350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D8354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8350u;
            // 0x1d8354: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8350) {
            ctx->pc = 0x1D83D4u;
            goto label_1d83d4;
        }
    }
    ctx->pc = 0x1D8358u;
    // 0x1d8358: 0x92420077  lbu         $v0, 0x77($s2)
    ctx->pc = 0x1d8358u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 119)));
    // 0x1d835c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8360: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1d8360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d8364: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x1d8364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d8368: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8368u;
    {
        const bool branch_taken_0x1d8368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8368u;
            // 0x1d836c: 0x26a50014  addiu       $a1, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8368) {
            ctx->pc = 0x1D83D0u;
            goto label_1d83d0;
        }
    }
    ctx->pc = 0x1D8370u;
    // 0x1d8370: 0xa2430077  sb          $v1, 0x77($s2)
    ctx->pc = 0x1d8370u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d8374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8378: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1d8378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d837c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d837cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8380: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d8380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d8384: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8388: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x1d8388u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1d838c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d838cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d8390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d8394: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1d8394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d8398: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1d8398u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1d839c: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x1d839cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x1d83a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d83a4: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1d83a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x1d83a8: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d83ac: 0x92420077  lbu         $v0, 0x77($s2)
    ctx->pc = 0x1d83acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 119)));
    // 0x1d83b0: 0xae6401c0  sw          $a0, 0x1C0($s3)
    ctx->pc = 0x1d83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 4));
    // 0x1d83b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d83b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d83bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d83bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d83c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d83c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d83c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d83c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d83c8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1d83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1d83cc: 0x0  nop
    ctx->pc = 0x1d83ccu;
    // NOP
label_1d83d0:
    // 0x1d83d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d83d4:
    // 0x1d83d4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d83d8: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1d83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d83dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d83dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d83e0: 0x90622d40  lbu         $v0, 0x2D40($v1)
    ctx->pc = 0x1d83e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11584)));
    // 0x1d83e4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D83E4u;
    {
        const bool branch_taken_0x1d83e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83E4u;
            // 0x1d83e8: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83e4) {
            ctx->pc = 0x1D847Cu;
            goto label_1d847c;
        }
    }
    ctx->pc = 0x1D83ECu;
label_1d83ec:
    // 0x1d83ec: 0x26a32cc0  addiu       $v1, $s5, 0x2CC0
    ctx->pc = 0x1d83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d83f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d83f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83f4: 0x90620081  lbu         $v0, 0x81($v1)
    ctx->pc = 0x1d83f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
    // 0x1d83f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d83f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83fc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1d83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1d8400: 0xa0620081  sb          $v0, 0x81($v1)
    ctx->pc = 0x1d8400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8404: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x1D8404u;
    SET_GPR_U32(ctx, 31, 0x1D840Cu);
    ctx->pc = 0x1D8408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8404u;
            // 0x1d8408: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D840Cu; }
        if (ctx->pc != 0x1D840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D840Cu; }
        if (ctx->pc != 0x1D840Cu) { return; }
    }
    ctx->pc = 0x1D840Cu;
    // 0x1d840c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1d840cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d8410: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d8410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8414: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8414u;
    {
        const bool branch_taken_0x1d8414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8414u;
            // 0x1d8418: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8414) {
            ctx->pc = 0x1D847Cu;
            goto label_1d847c;
        }
    }
    ctx->pc = 0x1D841Cu;
label_1d841c:
    // 0x1d841c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1d841cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d8420: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1d8420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1d8424: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1d8428: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x1d8428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x1d842c: 0x8ca202dc  lw          $v0, 0x2DC($a1)
    ctx->pc = 0x1d842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 732)));
    // 0x1d8430: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1d8430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1d8434: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d8434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d8438: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d8438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d843c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D843Cu;
    {
        const bool branch_taken_0x1d843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D843Cu;
            // 0x1d8440: 0xaca202dc  sw          $v0, 0x2DC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d843c) {
            ctx->pc = 0x1D847Cu;
            goto label_1d847c;
        }
    }
    ctx->pc = 0x1D8444u;
label_1d8444:
    // 0x1d8444: 0x26a52cc0  addiu       $a1, $s5, 0x2CC0
    ctx->pc = 0x1d8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 11456));
    // 0x1d8448: 0x90a20077  lbu         $v0, 0x77($a1)
    ctx->pc = 0x1d8448u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 119)));
    // 0x1d844c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D844Cu;
    {
        const bool branch_taken_0x1d844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d844c) {
            ctx->pc = 0x1D8450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D844Cu;
            // 0x1d8450: 0x94a20082  lhu         $v0, 0x82($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8474u;
            goto label_1d8474;
        }
    }
    ctx->pc = 0x1D8454u;
    // 0x1d8454: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d8454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d845c: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1d845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d8460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8464: 0xa0a30077  sb          $v1, 0x77($a1)
    ctx->pc = 0x1d8464u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d8468: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1d8468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x1d846c: 0xae6201c0  sw          $v0, 0x1C0($s3)
    ctx->pc = 0x1d846cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 2));
    // 0x1d8470: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x1d8470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
label_1d8474:
    // 0x1d8474: 0x54e20001  bnel        $a3, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8474u;
    {
        const bool branch_taken_0x1d8474 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8474) {
            ctx->pc = 0x1D8478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8474u;
            // 0x1d8478: 0xa0b1007e  sb          $s1, 0x7E($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 126), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D847Cu;
            goto label_1d847c;
        }
    }
    ctx->pc = 0x1D847Cu;
label_1d847c:
    // 0x1d847c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d8480: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1d8480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1d8484: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x1d8484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1d8488: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
    // 0x1d848c: 0x9062007f  lbu         $v0, 0x7F($v1)
    ctx->pc = 0x1d848cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1d8490: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1d8490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1d8494: 0x90620080  lbu         $v0, 0x80($v1)
    ctx->pc = 0x1d8494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1d8498: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1d8498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1d849c: 0x90620081  lbu         $v0, 0x81($v1)
    ctx->pc = 0x1d849cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
    // 0x1d84a0: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x1d84a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x1d84a4: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d84a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d84a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d84a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d84ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d84acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d84b0: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x1d84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x1d84b4: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d84b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d84b8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d84bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d84bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d84c0: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x1d84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x1d84c4: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d84c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d84c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d84c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d84cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d84ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d84d0: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x1d84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x1d84d4: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d84d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d84d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d84d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d84dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d84dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d84e0: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x1d84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x1d84e4: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1d84e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1d84e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d84e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d84ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d84ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d84f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1d84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x1d84f4: 0x90620083  lbu         $v0, 0x83($v1)
    ctx->pc = 0x1d84f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 131)));
    // 0x1d84f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d84f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d84fc: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D84FCu;
    {
        const bool branch_taken_0x1d84fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84FCu;
            // 0x1d8500: 0xac82006c  sw          $v0, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84fc) {
            ctx->pc = 0x1D8578u;
            goto label_1d8578;
        }
    }
    ctx->pc = 0x1D8504u;
    // 0x1d8504: 0x12e00017  beqz        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8504u;
    {
        const bool branch_taken_0x1d8504 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8504u;
            // 0x1d8508: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8504) {
            ctx->pc = 0x1D8564u;
            goto label_1d8564;
        }
    }
    ctx->pc = 0x1D850Cu;
    // 0x1d850c: 0x54c20016  bnel        $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D850Cu;
    {
        const bool branch_taken_0x1d850c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d850c) {
            ctx->pc = 0x1D8510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D850Cu;
            // 0x1d8510: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8568u;
            goto label_1d8568;
        }
    }
    ctx->pc = 0x1D8514u;
    // 0x1d8514: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1d8514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1d8518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d851c: 0x24a547c0  addiu       $a1, $a1, 0x47C0
    ctx->pc = 0x1d851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18368));
    // 0x1d8520: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1D8520u;
    SET_GPR_U32(ctx, 31, 0x1D8528u);
    ctx->pc = 0x1D8524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8520u;
            // 0x1d8524: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8528u; }
        if (ctx->pc != 0x1D8528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8528u; }
        if (ctx->pc != 0x1D8528u) { return; }
    }
    ctx->pc = 0x1D8528u;
    // 0x1d8528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d8528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d852c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1D852Cu;
    SET_GPR_U32(ctx, 31, 0x1D8534u);
    ctx->pc = 0x1D8530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D852Cu;
            // 0x1d8530: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8534u; }
        if (ctx->pc != 0x1D8534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8534u; }
        if (ctx->pc != 0x1D8534u) { return; }
    }
    ctx->pc = 0x1D8534u;
    // 0x1d8534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8534u;
    {
        const bool branch_taken_0x1d8534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8534) {
            ctx->pc = 0x1D8548u;
            goto label_1d8548;
        }
    }
    ctx->pc = 0x1D853Cu;
    // 0x1d853c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d8540: 0x8c500038  lw          $s0, 0x38($v0)
    ctx->pc = 0x1d8540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d8544: 0x0  nop
    ctx->pc = 0x1d8544u;
    // NOP
label_1d8548:
    // 0x1d8548: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d854c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8554: 0xc087372  jal         func_21CDC8
    ctx->pc = 0x1D8554u;
    SET_GPR_U32(ctx, 31, 0x1D855Cu);
    ctx->pc = 0x1D8558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8554u;
            // 0x1d8558: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CDC8u;
    if (runtime->hasFunction(0x21CDC8u)) {
        auto targetFn = runtime->lookupFunction(0x21CDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D855Cu; }
        if (ctx->pc != 0x1D855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CDC8_0x21cdc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D855Cu; }
        if (ctx->pc != 0x1D855Cu) { return; }
    }
    ctx->pc = 0x1D855Cu;
    // 0x1d855c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D855Cu;
    {
        const bool branch_taken_0x1d855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D855Cu;
            // 0x1d8560: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d855c) {
            ctx->pc = 0x1D857Cu;
            goto label_1d857c;
        }
    }
    ctx->pc = 0x1D8564u;
label_1d8564:
    // 0x1d8564: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d8564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d8568:
    // 0x1d8568: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1d8568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d856c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1d856cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8570: 0xc087394  jal         func_21CE50
    ctx->pc = 0x1D8570u;
    SET_GPR_U32(ctx, 31, 0x1D8578u);
    ctx->pc = 0x1D8574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8570u;
            // 0x1d8574: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE50u;
    if (runtime->hasFunction(0x21CE50u)) {
        auto targetFn = runtime->lookupFunction(0x21CE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8578u; }
        if (ctx->pc != 0x1D8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE50_0x21ce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8578u; }
        if (ctx->pc != 0x1D8578u) { return; }
    }
    ctx->pc = 0x1D8578u;
label_1d8578:
    // 0x1d8578: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1d8578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d857c:
    // 0x1d857c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1d857cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d8580: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1d8580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d8584: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1d8584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8588: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1d8588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d858c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d858cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8590: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8590u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8594: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1d8594u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8598: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1d8598u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d859c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d859cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d85a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D85A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D85A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85A0u;
            // 0x1d85a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D81A8u: goto label_1d81a8;
            case 0x1D81FCu: goto label_1d81fc;
            case 0x1D8220u: goto label_1d8220;
            case 0x1D8248u: goto label_1d8248;
            case 0x1D8260u: goto label_1d8260;
            case 0x1D82CCu: goto label_1d82cc;
            case 0x1D82D0u: goto label_1d82d0;
            case 0x1D82E8u: goto label_1d82e8;
            case 0x1D830Cu: goto label_1d830c;
            case 0x1D8334u: goto label_1d8334;
            case 0x1D834Cu: goto label_1d834c;
            case 0x1D83D0u: goto label_1d83d0;
            case 0x1D83D4u: goto label_1d83d4;
            case 0x1D83ECu: goto label_1d83ec;
            case 0x1D841Cu: goto label_1d841c;
            case 0x1D8444u: goto label_1d8444;
            case 0x1D8474u: goto label_1d8474;
            case 0x1D847Cu: goto label_1d847c;
            case 0x1D8548u: goto label_1d8548;
            case 0x1D8564u: goto label_1d8564;
            case 0x1D8568u: goto label_1d8568;
            case 0x1D8578u: goto label_1d8578;
            case 0x1D857Cu: goto label_1d857c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D85A8u;
}
