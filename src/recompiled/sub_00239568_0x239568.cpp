#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239568
// Address: 0x239568 - 0x239810
void sub_00239568_0x239568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239568_0x239568");
#endif

    ctx->pc = 0x239568u;

    // 0x239568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23956c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239574: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x239574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239578: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x239578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
    // 0x23957c: 0xc08e330  jal         func_238CC0
    ctx->pc = 0x23957Cu;
    SET_GPR_U32(ctx, 31, 0x239584u);
    ctx->pc = 0x239580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23957Cu;
            // 0x239580: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CC0u;
    if (runtime->hasFunction(0x238CC0u)) {
        auto targetFn = runtime->lookupFunction(0x238CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239584u; }
        if (ctx->pc != 0x239584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CC0_0x238cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239584u; }
        if (ctx->pc != 0x239584u) { return; }
    }
    ctx->pc = 0x239584u;
    // 0x239584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239588: 0x3e00008  jr          $ra
    ctx->pc = 0x239588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239588u;
            // 0x23958c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239730u: goto label_239730;
            case 0x239744u: goto label_239744;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397FCu: goto label_2397fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239590u;
    // 0x239590: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x239590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239594: 0x0  nop
    ctx->pc = 0x239594u;
    // NOP
    // 0x239598: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x239598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23959c: 0x0  nop
    ctx->pc = 0x23959cu;
    // NOP
    // 0x2395a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2395a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2395a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2395a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2395ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2395acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2395b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2395b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2395b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2395b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2395b8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2395bc: 0x8c4700d0  lw          $a3, 0xD0($v0)
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2395c0: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2395c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2395c4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x2395c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2395c8: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x2395c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x2395cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2395ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2395d0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2395d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2395d4: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2395d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x2395d8: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x2395d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x2395dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2395dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2395e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2395e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2395e4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x2395E4u;
    SET_GPR_U32(ctx, 31, 0x2395ECu);
    ctx->pc = 0x2395E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395E4u;
            // 0x2395e8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395ECu; }
        if (ctx->pc != 0x2395ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395ECu; }
        if (ctx->pc != 0x2395ECu) { return; }
    }
    ctx->pc = 0x2395ECu;
    // 0x2395ec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2395f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2395f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395f4: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x2395f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x2395f8: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x2395f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x2395fc: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x2395fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x239600: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x239600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x239604: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x239604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x239608: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x239608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23960c: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x23960cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x239610: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x239610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x239614: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x239614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x239618: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x239618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23961c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x239620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239624: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x239624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x239628: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x239628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23962c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23962cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x239630: 0xc08e222  jal         func_238888
    ctx->pc = 0x239630u;
    SET_GPR_U32(ctx, 31, 0x239638u);
    ctx->pc = 0x239634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239630u;
            // 0x239634: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239638u; }
        if (ctx->pc != 0x239638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239638u; }
        if (ctx->pc != 0x239638u) { return; }
    }
    ctx->pc = 0x239638u;
    // 0x239638: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23963c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239640: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x239640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239644: 0xc08e222  jal         func_238888
    ctx->pc = 0x239644u;
    SET_GPR_U32(ctx, 31, 0x23964Cu);
    ctx->pc = 0x239648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239644u;
            // 0x239648: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23964Cu; }
        if (ctx->pc != 0x23964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23964Cu; }
        if (ctx->pc != 0x23964Cu) { return; }
    }
    ctx->pc = 0x23964Cu;
    // 0x23964c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239650: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x239650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x239654: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x239654u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239658: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x23965c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239660: 0x24840540  addiu       $a0, $a0, 0x540
    ctx->pc = 0x239660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1344));
    // 0x239664: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x239664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239668: 0x30a5ffdf  andi        $a1, $a1, 0xFFDF
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65503);
    // 0x23966c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x23966cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x239670: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x239670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x239674: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x239674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x239678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23967c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x23967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x239680: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x239680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x239684: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x239684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x239688: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x239688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x23968c: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x23968cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x239690: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x239690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x239694: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x239694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x239698: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x239698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23969c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23969cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2396a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2396a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2396a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2396a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2396A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2396ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396A8u;
            // 0x2396ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239730u: goto label_239730;
            case 0x239744u: goto label_239744;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397FCu: goto label_2397fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2396B0u;
    // 0x2396b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2396b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2396b4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x2396b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2396b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2396bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2396bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2396c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2396c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396c4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2396c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2396c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2396cc: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x2396ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2396d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2396d4: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x2396d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x2396d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2396d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2396dc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2396e0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2396e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2396e4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2396e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2396e8: 0x10c50016  beq         $a2, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2396E8u;
    {
        const bool branch_taken_0x2396e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2396ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396E8u;
            // 0x2396ec: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396e8) {
            ctx->pc = 0x239744u;
            goto label_239744;
        }
    }
    ctx->pc = 0x2396F0u;
label_2396f0:
    // 0x2396f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2396f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2396f4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2396f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2396f8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2396fc: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2396fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x239700: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x239700u;
    {
        const bool branch_taken_0x239700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x239704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239700u;
            // 0x239704: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239700) {
            ctx->pc = 0x239730u;
            goto label_239730;
        }
    }
    ctx->pc = 0x239708u;
    // 0x239708: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x239708u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23970c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x23970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x239710: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239714: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23971c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x239720: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x239720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x239724: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x239728: 0x40f809  jalr        $v0
    ctx->pc = 0x239728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239730u);
        ctx->pc = 0x23972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239728u;
            // 0x23972c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239730u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239730u: goto label_239730;
            case 0x239744u: goto label_239744;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397FCu: goto label_2397fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239730u; }
            if (ctx->pc != 0x239730u) { return; }
        }
        }
    }
    ctx->pc = 0x239730u;
label_239730:
    // 0x239730: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x239730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x239734: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x239734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239738: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x239738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23973c: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23973Cu;
    {
        const bool branch_taken_0x23973c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x239740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23973Cu;
            // 0x239740: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23973c) {
            ctx->pc = 0x2396F0u;
            runtime->cooperativeGuestYield();
            goto label_2396f0;
        }
    }
    ctx->pc = 0x239744u;
label_239744:
    // 0x239744: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x239744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23974c: 0x3e00008  jr          $ra
    ctx->pc = 0x23974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23974Cu;
            // 0x239750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239730u: goto label_239730;
            case 0x239744u: goto label_239744;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397FCu: goto label_2397fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239754u;
    // 0x239754: 0x0  nop
    ctx->pc = 0x239754u;
    // NOP
    // 0x239758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23975c: 0x24850048  addiu       $a1, $a0, 0x48
    ctx->pc = 0x23975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x239760: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239768: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x239768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x23976c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23976Cu;
    {
        const bool branch_taken_0x23976c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x239770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23976Cu;
            // 0x239770: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23976c) {
            ctx->pc = 0x239780u;
            goto label_239780;
        }
    }
    ctx->pc = 0x239774u;
    // 0x239774: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x239774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x239778: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x239778u;
    {
        const bool branch_taken_0x239778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239778u;
            // 0x23977c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239778) {
            ctx->pc = 0x239784u;
            goto label_239784;
        }
    }
    ctx->pc = 0x239780u;
label_239780:
    // 0x239780: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239784:
    // 0x239784: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x239784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x239788: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x239788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x23978c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23978cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x239790: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x239794: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x239794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x239798: 0xaca30080  sw          $v1, 0x80($a1)
    ctx->pc = 0x239798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    // 0x23979c: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23979Cu;
    {
        const bool branch_taken_0x23979c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2397A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23979Cu;
            // 0x2397a0: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23979c) {
            ctx->pc = 0x2397FCu;
            goto label_2397fc;
        }
    }
    ctx->pc = 0x2397A4u;
    // 0x2397a4: 0x0  nop
    ctx->pc = 0x2397a4u;
    // NOP
label_2397a8:
    // 0x2397a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2397a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2397ac: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2397acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2397b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2397b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2397b4: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2397b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2397b8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2397B8u;
    {
        const bool branch_taken_0x2397b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2397BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397B8u;
            // 0x2397bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397b8) {
            ctx->pc = 0x2397E8u;
            goto label_2397e8;
        }
    }
    ctx->pc = 0x2397C0u;
    // 0x2397c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2397c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2397c4: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2397c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2397c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2397cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2397ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2397d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2397d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2397d4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2397d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2397d8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2397dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2397DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2397E4u);
        ctx->pc = 0x2397E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397DCu;
            // 0x2397e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2397E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239730u: goto label_239730;
            case 0x239744u: goto label_239744;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397FCu: goto label_2397fc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2397E4u; }
            if (ctx->pc != 0x2397E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2397E4u;
    // 0x2397e4: 0x0  nop
    ctx->pc = 0x2397e4u;
    // NOP
label_2397e8:
    // 0x2397e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2397e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2397ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2397ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2397f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2397f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2397f4: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2397F4u;
    {
        const bool branch_taken_0x2397f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2397F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397F4u;
            // 0x2397f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397f4) {
            ctx->pc = 0x2397A8u;
            runtime->cooperativeGuestYield();
            goto label_2397a8;
        }
    }
    ctx->pc = 0x2397FCu;
label_2397fc:
    // 0x2397fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2397fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239804: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x239804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239808: 0x3e00008  jr          $ra
    ctx->pc = 0x239808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23980Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239808u;
            // 0x23980c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2396F0u: goto label_2396f0;
            case 0x239730u: goto label_239730;
            case 0x239744u: goto label_239744;
            case 0x239780u: goto label_239780;
            case 0x239784u: goto label_239784;
            case 0x2397A8u: goto label_2397a8;
            case 0x2397E8u: goto label_2397e8;
            case 0x2397FCu: goto label_2397fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239810u;
}
