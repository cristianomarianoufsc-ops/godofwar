#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE620
// Address: 0x1de620 - 0x1de718
void sub_001DE620_0x1de620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE620_0x1de620");
#endif

    ctx->pc = 0x1de620u;

    // 0x1de620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de624: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de634: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de638: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1de638u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1de63c: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x1de640: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1de644: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de64c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1de64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1de650: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE650u;
    {
        const bool branch_taken_0x1de650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE650u;
            // 0x1de654: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de650) {
            ctx->pc = 0x1DE660u;
            goto label_1de660;
        }
    }
    ctx->pc = 0x1DE658u;
    // 0x1de658: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x1de658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1de65c: 0x44400b  movn        $t0, $v0, $a0
    ctx->pc = 0x1de65cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_1de660:
    // 0x1de660: 0xdd0200c0  ld          $v0, 0xC0($t0)
    ctx->pc = 0x1de660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 192)));
    // 0x1de664: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1de664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1de668: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x1de668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x1de66c: 0x250600c0  addiu       $a2, $t0, 0xC0
    ctx->pc = 0x1de66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x1de670: 0x3c07dfff  lui         $a3, 0xDFFF
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x1de674: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1de674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1de678: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1de678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1de67c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1de67cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1de680: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1de680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1de684: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1de684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1de688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1de688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1de68c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1de68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de690: 0xfd0200c0  sd          $v0, 0xC0($t0)
    ctx->pc = 0x1de690u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 192), GPR_U64(ctx, 2));
    // 0x1de694: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1de694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1de698: 0xae0801a8  sw          $t0, 0x1A8($s0)
    ctx->pc = 0x1de698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 8));
    // 0x1de69c: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1de69cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1de6a0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1de6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1de6a4: 0xc05420c  jal         func_150830
    ctx->pc = 0x1DE6A4u;
    SET_GPR_U32(ctx, 31, 0x1DE6ACu);
    ctx->pc = 0x1DE6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6A4u;
            // 0x1de6a8: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6ACu; }
        if (ctx->pc != 0x1DE6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6ACu; }
        if (ctx->pc != 0x1DE6ACu) { return; }
    }
    ctx->pc = 0x1DE6ACu;
    // 0x1de6ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1de6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1de6b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1de6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1de6b4: 0xc077d94  jal         func_1DF650
    ctx->pc = 0x1DE6B4u;
    SET_GPR_U32(ctx, 31, 0x1DE6BCu);
    ctx->pc = 0x1DE6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6B4u;
            // 0x1de6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF650u;
    if (runtime->hasFunction(0x1DF650u)) {
        auto targetFn = runtime->lookupFunction(0x1DF650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6BCu; }
        if (ctx->pc != 0x1DE6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF650_0x1df650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6BCu; }
        if (ctx->pc != 0x1DE6BCu) { return; }
    }
    ctx->pc = 0x1DE6BCu;
    // 0x1de6bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1de6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de6c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1de6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de6c8: 0xe6000170  swc1        $f0, 0x170($s0)
    ctx->pc = 0x1de6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x1de6cc: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x1de6d0: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1de6d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de6dc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1de6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1de6e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE6E0u;
    {
        const bool branch_taken_0x1de6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6E0u;
            // 0x1de6e4: 0x2c620001  sltiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6e0) {
            ctx->pc = 0x1DE700u;
            goto label_1de700;
        }
    }
    ctx->pc = 0x1DE6E8u;
    // 0x1de6e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE6E8u;
    {
        const bool branch_taken_0x1de6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de6e8) {
            ctx->pc = 0x1DE6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6E8u;
            // 0x1de6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE6F8u;
            goto label_1de6f8;
        }
    }
    ctx->pc = 0x1DE6F0u;
    // 0x1de6f0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1de6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1de6f4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1de6f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1de6f8:
    // 0x1de6f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE6F8u;
    {
        const bool branch_taken_0x1de6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6F8u;
            // 0x1de6fc: 0xae0201ac  sw          $v0, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6f8) {
            ctx->pc = 0x1DE704u;
            goto label_1de704;
        }
    }
    ctx->pc = 0x1DE700u;
label_1de700:
    // 0x1de700: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x1de700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_1de704:
    // 0x1de704: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de710: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE710u;
            // 0x1de714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE660u: goto label_1de660;
            case 0x1DE6F8u: goto label_1de6f8;
            case 0x1DE700u: goto label_1de700;
            case 0x1DE704u: goto label_1de704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE718u;
}
