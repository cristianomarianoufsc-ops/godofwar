#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC740
// Address: 0x1cc740 - 0x1ccbc8
void sub_001CC740_0x1cc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC740_0x1cc740");
#endif

    ctx->pc = 0x1cc740u;

    // 0x1cc740: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1cc744: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cc748: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1cc748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1cc74c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1cc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1cc750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc754: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1cc754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1cc758: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc75c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1cc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1cc760: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cc760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc764: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1cc764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1cc768: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1cc768u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc76c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1cc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1cc770: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1cc770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1cc774: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1cc774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1cc778: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1cc778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1cc77c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1cc77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1cc780: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1cc780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1cc784: 0x8e930030  lw          $s3, 0x30($s4)
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1cc788: 0x92830088  lbu         $v1, 0x88($s4)
    ctx->pc = 0x1cc788u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1cc78c: 0x106200fa  beq         $v1, $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x1CC78Cu;
    {
        const bool branch_taken_0x1cc78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC78Cu;
            // 0x1cc790: 0x7fa80090  sq          $t0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc78c) {
            ctx->pc = 0x1CCB78u;
            goto label_1ccb78;
        }
    }
    ctx->pc = 0x1CC794u;
    // 0x1cc794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc798: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1CC798u;
    SET_GPR_U32(ctx, 31, 0x1CC7A0u);
    ctx->pc = 0x1CC79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC798u;
            // 0x1cc79c: 0x70082ca9  por         $a1, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7A0u; }
        if (ctx->pc != 0x1CC7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7A0u; }
        if (ctx->pc != 0x1CC7A0u) { return; }
    }
    ctx->pc = 0x1CC7A0u;
    // 0x1cc7a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc7a8: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x1cc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1cc7ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1cc7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1cc7b0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x1cc7b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x1cc7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc7b8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1cc7bc: 0x2022004  sllv        $a0, $v0, $s0
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x1cc7c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc7c4: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1cc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cc7c8: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1cc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cc7cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1cc7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1cc7d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC7D0u;
    {
        const bool branch_taken_0x1cc7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7D0u;
            // 0x1cc7d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7d0) {
            ctx->pc = 0x1CC7ECu;
            goto label_1cc7ec;
        }
    }
    ctx->pc = 0x1CC7D8u;
    // 0x1cc7d8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1cc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1cc7dc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1cc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cc7e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1cc7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1cc7e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC7E4u;
    {
        const bool branch_taken_0x1cc7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7e4) {
            ctx->pc = 0x1CC7F0u;
            goto label_1cc7f0;
        }
    }
    ctx->pc = 0x1CC7ECu;
label_1cc7ec:
    // 0x1cc7ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc7f0:
    // 0x1cc7f0: 0x14a000d5  bnez        $a1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1CC7F0u;
    {
        const bool branch_taken_0x1cc7f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7F0u;
            // 0x1cc7f4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7f0) {
            ctx->pc = 0x1CCB48u;
            goto label_1ccb48;
        }
    }
    ctx->pc = 0x1CC7F8u;
    // 0x1cc7f8: 0x92860088  lbu         $a2, 0x88($s4)
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1cc7fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cc7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc800: 0x12120014  beq         $s0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CC800u;
    {
        const bool branch_taken_0x1cc800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1CC804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC800u;
            // 0x1cc804: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc800) {
            ctx->pc = 0x1CC854u;
            goto label_1cc854;
        }
    }
    ctx->pc = 0x1CC808u;
    // 0x1cc808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc80c: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC80Cu;
    {
        const bool branch_taken_0x1cc80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC80Cu;
            // 0x1cc810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc80c) {
            ctx->pc = 0x1CC854u;
            goto label_1cc854;
        }
    }
    ctx->pc = 0x1CC814u;
    // 0x1cc814: 0xc082d84  jal         func_20B610
    ctx->pc = 0x1CC814u;
    SET_GPR_U32(ctx, 31, 0x1CC81Cu);
    ctx->pc = 0x1CC818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC814u;
            // 0x1cc818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B610u;
    if (runtime->hasFunction(0x20B610u)) {
        auto targetFn = runtime->lookupFunction(0x20B610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC81Cu; }
        if (ctx->pc != 0x1CC81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B610_0x20b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC81Cu; }
        if (ctx->pc != 0x1CC81Cu) { return; }
    }
    ctx->pc = 0x1CC81Cu;
    // 0x1cc81c: 0x92830088  lbu         $v1, 0x88($s4)
    ctx->pc = 0x1cc81cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1cc820: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1cc820u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc824: 0x2431826  xor         $v1, $s2, $v1
    ctx->pc = 0x1cc824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
    // 0x1cc828: 0x1650000a  bne         $s2, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC828u;
    {
        const bool branch_taken_0x1cc828 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CC82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC828u;
            // 0x1cc82c: 0x3b80b  movn        $s7, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc828) {
            ctx->pc = 0x1CC854u;
            goto label_1cc854;
        }
    }
    ctx->pc = 0x1CC830u;
    // 0x1cc830: 0xa6800076  sh          $zero, 0x76($s4)
    ctx->pc = 0x1cc830u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cc834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc838: 0xc0828e4  jal         func_20A390
    ctx->pc = 0x1CC838u;
    SET_GPR_U32(ctx, 31, 0x1CC840u);
    ctx->pc = 0x1CC83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC838u;
            // 0x1cc83c: 0x7ba50090  lq          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A390u;
    if (runtime->hasFunction(0x20A390u)) {
        auto targetFn = runtime->lookupFunction(0x20A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC840u; }
        if (ctx->pc != 0x1CC840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20a390_0x20a498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC840u; }
        if (ctx->pc != 0x1CC840u) { return; }
    }
    ctx->pc = 0x1CC840u;
    // 0x1cc840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc844: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cc844u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc848: 0xc082bb0  jal         func_20AEC0
    ctx->pc = 0x1CC848u;
    SET_GPR_U32(ctx, 31, 0x1CC850u);
    ctx->pc = 0x1CC84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC848u;
            // 0x1cc84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20AEC0u;
    if (runtime->hasFunction(0x20AEC0u)) {
        auto targetFn = runtime->lookupFunction(0x20AEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC850u; }
        if (ctx->pc != 0x1CC850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020AEC0_0x20aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC850u; }
        if (ctx->pc != 0x1CC850u) { return; }
    }
    ctx->pc = 0x1CC850u;
    // 0x1cc850: 0xa2820088  sb          $v0, 0x88($s4)
    ctx->pc = 0x1cc850u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 2));
label_1cc854:
    // 0x1cc854: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cc858: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1cc858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1cc85c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc860: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1cc860u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cc864: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1cc864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc86c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cc86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cc870: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CC870u;
    {
        const bool branch_taken_0x1cc870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc870) {
            ctx->pc = 0x1CC874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC870u;
            // 0x1cc874: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC878u;
            goto label_1cc878;
        }
    }
    ctx->pc = 0x1CC878u;
label_1cc878:
    // 0x1cc878: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1cc878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1cc87c: 0x1812  mflo        $v1
    ctx->pc = 0x1cc87cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1cc880: 0x2010  mfhi        $a0
    ctx->pc = 0x1cc880u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cc884: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1cc884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1cc888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc88c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc890: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc894: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cc894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cc898: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cc898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cc89c: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x1cc89cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8a0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cc8a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8a4: 0xda250020  lqc2        $vf5, 0x20($s1)
    ctx->pc = 0x1cc8a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cc8a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cc8ac: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x1cc8b0: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1cc8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1cc8b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cc8b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc8b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc8bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CC8BCu;
    {
        const bool branch_taken_0x1cc8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc8bc) {
            ctx->pc = 0x1CC8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC8BCu;
            // 0x1cc8c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8C4u;
            goto label_1cc8c4;
        }
    }
    ctx->pc = 0x1CC8C4u;
label_1cc8c4:
    // 0x1cc8c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc8c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cc8c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cc8cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1cc8ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cc8d0: 0x4be12858  vmulx.xyzw  $vf1, $vf5, $vf1x
    ctx->pc = 0x1cc8d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8d4: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1cc8d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8d8: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1cc8d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cc8dc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1cc8dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cc8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8e4: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1cc8e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc8e8: 0x4be1186a  vmul.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1cc8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8ec: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1cc8ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8f0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1cc8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc8f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cc8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc8f8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1cc8f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1cc8fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cc8fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc900: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cc900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc904: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x1CC904u;
    {
        const bool branch_taken_0x1cc904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc904) {
            ctx->pc = 0x1CC998u;
            goto label_1cc998;
        }
    }
    ctx->pc = 0x1CC90Cu;
    // 0x1cc90c: 0x4be418aa  vmul.xyzw   $vf2, $vf3, $vf4
    ctx->pc = 0x1cc90cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc910: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc914: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc918: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1cc91c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc920: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1cc920u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc924: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cc924u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cc928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc92c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1CC92Cu;
    {
        const bool branch_taken_0x1cc92c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc92c) {
            ctx->pc = 0x1CC998u;
            goto label_1cc998;
        }
    }
    ctx->pc = 0x1CC934u;
    // 0x1cc934: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc938: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x1cc938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x1cc93c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc940: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc944: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x1cc944u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc948: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1cc948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc94c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1cc94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc950: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC998u;
            goto label_1cc998;
        }
    }
    ctx->pc = 0x1CC958u;
    // 0x1cc958: 0x4be518aa  vmul.xyzw   $vf2, $vf3, $vf5
    ctx->pc = 0x1cc958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc95c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc95cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc960: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc964: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1cc964u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc968: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cc968u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc96c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cc96cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc970: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC970u;
    {
        const bool branch_taken_0x1cc970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc970) {
            ctx->pc = 0x1CC998u;
            goto label_1cc998;
        }
    }
    ctx->pc = 0x1CC978u;
    // 0x1cc978: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cc978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc97c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cc97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cc980: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1cc980u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cc984: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cc984u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc988: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1cc988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc98c: 0x0  nop
    ctx->pc = 0x1cc98cu;
    // NOP
    // 0x1cc990: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CC990u;
    {
        const bool branch_taken_0x1cc990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc990) {
            ctx->pc = 0x1CC994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC990u;
            // 0x1cc994: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC998u;
            goto label_1cc998;
        }
    }
    ctx->pc = 0x1CC998u;
label_1cc998:
    // 0x1cc998: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CC998u;
    {
        const bool branch_taken_0x1cc998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC998u;
            // 0x1cc99c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc998) {
            ctx->pc = 0x1CCA7Cu;
            goto label_1cca7c;
        }
    }
    ctx->pc = 0x1CC9A0u;
    // 0x1cc9a0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1cc9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1cc9a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc9a8: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1cc9a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cc9ac: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x1cc9acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc9b0: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1cc9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc9b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CC9B4u;
    {
        const bool branch_taken_0x1cc9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc9b4) {
            ctx->pc = 0x1CC9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9B4u;
            // 0x1cc9b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC9BCu;
            goto label_1cc9bc;
        }
    }
    ctx->pc = 0x1CC9BCu;
label_1cc9bc:
    // 0x1cc9bc: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1cc9bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1cc9c0: 0x1812  mflo        $v1
    ctx->pc = 0x1cc9c0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1cc9c4: 0x2010  mfhi        $a0
    ctx->pc = 0x1cc9c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cc9c8: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1cc9cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc9ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc9d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc9d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc9d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc9d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc9d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cc9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cc9dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1cc9dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1cc9e0: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1cc9e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cc9e4: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1cc9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cc9e8: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1cc9e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cc9ec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cc9f0: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x1cc9f4: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1cc9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cc9f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cc9f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc9fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cca00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCA00u;
    {
        const bool branch_taken_0x1cca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca00) {
            ctx->pc = 0x1CCA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA00u;
            // 0x1cca04: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCA08u;
            goto label_1cca08;
        }
    }
    ctx->pc = 0x1CCA08u;
label_1cca08:
    // 0x1cca08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cca08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cca0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cca0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1cca10: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1cca10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1cca14: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1cca14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1cca18: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1cca18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cca1c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1cca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cca20: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x1cca20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cca24: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x1cca24u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1cca28: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cca2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cca2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca30: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x1cca30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x1cca34: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1cca34u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1cca38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1cca38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cca3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1cca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1cca40: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1cca40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cca44: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1cca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1cca48: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1cca48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1cca4c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1cca4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cca50: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1cca50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cca54: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x1cca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cca58: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1cca58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cca5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cca5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cca60: 0x46000004  c1          0x4
    ctx->pc = 0x1cca60u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cca64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cca64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cca68: 0x0  nop
    ctx->pc = 0x1cca68u;
    // NOP
    // 0x1cca6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCA6Cu;
    {
        const bool branch_taken_0x1cca6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA6Cu;
            // 0x1cca70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca6c) {
            ctx->pc = 0x1CCA78u;
            goto label_1cca78;
        }
    }
    ctx->pc = 0x1CCA74u;
    // 0x1cca74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cca74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cca78:
    // 0x1cca78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cca78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cca7c:
    // 0x1cca7c: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CCA7Cu;
    {
        const bool branch_taken_0x1cca7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA7Cu;
            // 0x1cca80: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca7c) {
            ctx->pc = 0x1CCB38u;
            goto label_1ccb38;
        }
    }
    ctx->pc = 0x1CCA84u;
    // 0x1cca84: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1cca88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cca88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cca8c: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1cca8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cca90: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x1cca90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cca94: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1cca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1cca98: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCA98u;
    {
        const bool branch_taken_0x1cca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca98) {
            ctx->pc = 0x1CCA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA98u;
            // 0x1cca9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCAA0u;
            goto label_1ccaa0;
        }
    }
    ctx->pc = 0x1CCAA0u;
label_1ccaa0:
    // 0x1ccaa0: 0xda220030  lqc2        $vf2, 0x30($s1)
    ctx->pc = 0x1ccaa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ccaa4: 0x1812  mflo        $v1
    ctx->pc = 0x1ccaa4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ccaa8: 0x2010  mfhi        $a0
    ctx->pc = 0x1ccaa8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ccaac: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1ccaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1ccab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccab4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ccab8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccabc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ccabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ccac0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ccac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ccac4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1ccac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ccac8: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1ccac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccacc: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x1ccaccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ccad0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ccad4: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x1ccad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x1ccad8: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1ccad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ccadc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ccadcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ccae4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CCAE4u;
    {
        const bool branch_taken_0x1ccae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccae4) {
            ctx->pc = 0x1CCAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAE4u;
            // 0x1ccae8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCAECu;
            goto label_1ccaec;
        }
    }
    ctx->pc = 0x1CCAECu;
label_1ccaec:
    // 0x1ccaec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccaf0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ccaf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ccaf4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1ccaf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ccaf8: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1ccaf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ccafc: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1ccafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccb00: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ccb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ccb04: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1ccb04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ccb08: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ccb0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1ccb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1ccb10: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x1ccb10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccb14: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1ccb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ccb18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ccb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb1c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1ccb1cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ccb20: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ccb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb24: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1ccb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb28: 0xc073b84  jal         func_1CEE10
    ctx->pc = 0x1CCB28u;
    SET_GPR_U32(ctx, 31, 0x1CCB30u);
    ctx->pc = 0x1CCB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB28u;
            // 0x1ccb2c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CEE10u;
    if (runtime->hasFunction(0x1CEE10u)) {
        auto targetFn = runtime->lookupFunction(0x1CEE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB30u; }
        if (ctx->pc != 0x1CCB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEE10_0x1cee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB30u; }
        if (ctx->pc != 0x1CCB30u) { return; }
    }
    ctx->pc = 0x1CCB30u;
    // 0x1ccb30: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CCB30u;
    {
        const bool branch_taken_0x1ccb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB30u;
            // 0x1ccb34: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb30) {
            ctx->pc = 0x1CCB9Cu;
            goto label_1ccb9c;
        }
    }
    ctx->pc = 0x1CCB38u;
label_1ccb38:
    // 0x1ccb38: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1ccb38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ccb3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CCB3Cu;
    {
        const bool branch_taken_0x1ccb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB3Cu;
            // 0x1ccb40: 0xfaa10000  sqc2        $vf1, 0x0($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb3c) {
            ctx->pc = 0x1CCB98u;
            goto label_1ccb98;
        }
    }
    ctx->pc = 0x1CCB44u;
    // 0x1ccb44: 0x0  nop
    ctx->pc = 0x1ccb44u;
    // NOP
label_1ccb48:
    // 0x1ccb48: 0xa6800076  sh          $zero, 0x76($s4)
    ctx->pc = 0x1ccb48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccb4c: 0xa2820088  sb          $v0, 0x88($s4)
    ctx->pc = 0x1ccb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ccb50: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1ccb50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ccb54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ccb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb58: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1ccb58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ccb5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ccb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb60: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1ccb60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccb64: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ccb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb68: 0xc0731b8  jal         func_1CC6E0
    ctx->pc = 0x1CCB68u;
    SET_GPR_U32(ctx, 31, 0x1CCB70u);
    ctx->pc = 0x1CCB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB68u;
            // 0x1ccb6c: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6E0u;
    if (runtime->hasFunction(0x1CC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB70u; }
        if (ctx->pc != 0x1CCB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC6E0_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB70u; }
        if (ctx->pc != 0x1CCB70u) { return; }
    }
    ctx->pc = 0x1CCB70u;
    // 0x1ccb70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CCB70u;
    {
        const bool branch_taken_0x1ccb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB70u;
            // 0x1ccb74: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb70) {
            ctx->pc = 0x1CCB9Cu;
            goto label_1ccb9c;
        }
    }
    ctx->pc = 0x1CCB78u;
label_1ccb78:
    // 0x1ccb78: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1ccb78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ccb7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ccb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb80: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1ccb80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ccb84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ccb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb88: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1ccb88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ccb8c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ccb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb90: 0xc0731b8  jal         func_1CC6E0
    ctx->pc = 0x1CCB90u;
    SET_GPR_U32(ctx, 31, 0x1CCB98u);
    ctx->pc = 0x1CCB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB90u;
            // 0x1ccb94: 0x48271000  qmfc2.ni    $a3, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6E0u;
    if (runtime->hasFunction(0x1CC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB98u; }
        if (ctx->pc != 0x1CCB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC6E0_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB98u; }
        if (ctx->pc != 0x1CCB98u) { return; }
    }
    ctx->pc = 0x1CCB98u;
label_1ccb98:
    // 0x1ccb98: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1ccb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1ccb9c:
    // 0x1ccb9c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1ccb9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ccba0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1ccba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ccba4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1ccba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ccba8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1ccba8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ccbac: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1ccbacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ccbb0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1ccbb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ccbb4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1ccbb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ccbb8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ccbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ccbbc: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1ccbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ccbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBC0u;
            // 0x1ccbc4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC7ECu: goto label_1cc7ec;
            case 0x1CC7F0u: goto label_1cc7f0;
            case 0x1CC854u: goto label_1cc854;
            case 0x1CC878u: goto label_1cc878;
            case 0x1CC8C4u: goto label_1cc8c4;
            case 0x1CC998u: goto label_1cc998;
            case 0x1CC9BCu: goto label_1cc9bc;
            case 0x1CCA08u: goto label_1cca08;
            case 0x1CCA78u: goto label_1cca78;
            case 0x1CCA7Cu: goto label_1cca7c;
            case 0x1CCAA0u: goto label_1ccaa0;
            case 0x1CCAECu: goto label_1ccaec;
            case 0x1CCB38u: goto label_1ccb38;
            case 0x1CCB48u: goto label_1ccb48;
            case 0x1CCB78u: goto label_1ccb78;
            case 0x1CCB98u: goto label_1ccb98;
            case 0x1CCB9Cu: goto label_1ccb9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CCBC8u;
}
