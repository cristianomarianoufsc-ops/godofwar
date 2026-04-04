#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002760F0
// Address: 0x2760f0 - 0x276648
void sub_002760F0_0x2760f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002760F0_0x2760f0");
#endif

    ctx->pc = 0x2760f0u;

    // 0x2760f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2760f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2760f4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x2760f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x2760f8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2760f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2760fc: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x2760fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x276100: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x276100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x276104: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x276104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x276108: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x276108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x27610c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x276110: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x276110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x276114: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x276114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276118: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x276118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27611c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27611cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276120: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x276120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x276124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276128: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x276128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x27612c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x27612cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276130: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x276130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x276134: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x276134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276138: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x276138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x27613c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x27613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x276140: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x276140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x276144: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x276144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x276148: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x276148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x27614c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27614cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x276150: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x276150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x276154: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x276154u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x276158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27615c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x27615cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x276160: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x276160u;
    SET_GPR_U32(ctx, 31, 0x276168u);
    ctx->pc = 0x276164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276160u;
            // 0x276164: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276168u; }
        if (ctx->pc != 0x276168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276168u; }
        if (ctx->pc != 0x276168u) { return; }
    }
    ctx->pc = 0x276168u;
    // 0x276168: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27616c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x27616cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x276170: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x276170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x276174: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x276174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x276178: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27617c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276180: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x276180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x276184: 0xc09da4a  jal         func_276928
    ctx->pc = 0x276184u;
    SET_GPR_U32(ctx, 31, 0x27618Cu);
    ctx->pc = 0x276188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276184u;
            // 0x276188: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276928u;
    if (runtime->hasFunction(0x276928u)) {
        auto targetFn = runtime->lookupFunction(0x276928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27618Cu; }
        if (ctx->pc != 0x27618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276928_0x276928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27618Cu; }
        if (ctx->pc != 0x27618Cu) { return; }
    }
    ctx->pc = 0x27618Cu;
    // 0x27618c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27618cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276190: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x276190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x276194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x276194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x276198: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x276198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x27619c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x27619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2761a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2761a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2761a4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2761a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2761a8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2761a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2761ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2761acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2761b0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2761B0u;
    {
        const bool branch_taken_0x2761b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2761B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761B0u;
            // 0x2761b4: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761b0) {
            ctx->pc = 0x2761C8u;
            goto label_2761c8;
        }
    }
    ctx->pc = 0x2761B8u;
    // 0x2761b8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2761b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2761bc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2761bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2761c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2761C0u;
    {
        const bool branch_taken_0x2761c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761C0u;
            // 0x2761c4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761c0) {
            ctx->pc = 0x2761CCu;
            goto label_2761cc;
        }
    }
    ctx->pc = 0x2761C8u;
label_2761c8:
    // 0x2761c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2761cc:
    // 0x2761cc: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x2761ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x2761d0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x2761d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2761d4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2761d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2761d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2761d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2761dc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2761dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2761e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2761e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2761e4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2761e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2761e8: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x2761e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x2761ec: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2761ECu;
    {
        const bool branch_taken_0x2761ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2761F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761ECu;
            // 0x2761f0: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761ec) {
            ctx->pc = 0x276214u;
            goto label_276214;
        }
    }
    ctx->pc = 0x2761F4u;
    // 0x2761f4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2761f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2761f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2761f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2761fc: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2761FCu;
    SET_GPR_U32(ctx, 31, 0x276204u);
    ctx->pc = 0x276200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2761FCu;
            // 0x276200: 0x24a54640  addiu       $a1, $a1, 0x4640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276204u; }
        if (ctx->pc != 0x276204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276204u; }
        if (ctx->pc != 0x276204u) { return; }
    }
    ctx->pc = 0x276204u;
    // 0x276204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27620c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x27620Cu;
    {
        const bool branch_taken_0x27620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27620Cu;
            // 0x276210: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27620c) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x276214u;
label_276214:
    // 0x276214: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x276214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x276218: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x276218u;
    {
        const bool branch_taken_0x276218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276218u;
            // 0x27621c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276218) {
            ctx->pc = 0x276254u;
            goto label_276254;
        }
    }
    ctx->pc = 0x276220u;
    // 0x276220: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x276220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x276224: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276224u;
    {
        const bool branch_taken_0x276224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276224) {
            ctx->pc = 0x276228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276224u;
            // 0x276228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276244u;
            goto label_276244;
        }
    }
    ctx->pc = 0x27622Cu;
    // 0x27622c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x27622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x276230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276230u;
    {
        const bool branch_taken_0x276230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276230u;
            // 0x276234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276230) {
            ctx->pc = 0x276240u;
            goto label_276240;
        }
    }
    ctx->pc = 0x276238u;
    // 0x276238: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x276238u;
    {
        const bool branch_taken_0x276238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276238u;
            // 0x27623c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276238) {
            ctx->pc = 0x276280u;
            goto label_276280;
        }
    }
    ctx->pc = 0x276240u;
label_276240:
    // 0x276240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276244:
    // 0x276244: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x276244u;
    SET_GPR_U32(ctx, 31, 0x27624Cu);
    ctx->pc = 0x276248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276244u;
            // 0x276248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27624Cu; }
        if (ctx->pc != 0x27624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27624Cu; }
        if (ctx->pc != 0x27624Cu) { return; }
    }
    ctx->pc = 0x27624Cu;
    // 0x27624c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27624Cu;
    {
        const bool branch_taken_0x27624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27624Cu;
            // 0x276250: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27624c) {
            ctx->pc = 0x276280u;
            goto label_276280;
        }
    }
    ctx->pc = 0x276254u;
label_276254:
    // 0x276254: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x276254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x276258: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x276258u;
    {
        const bool branch_taken_0x276258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276258) {
            ctx->pc = 0x27625Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276258u;
            // 0x27625c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276284u;
            goto label_276284;
        }
    }
    ctx->pc = 0x276260u;
    // 0x276260: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x276264: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276264u;
    {
        const bool branch_taken_0x276264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276264u;
            // 0x276268: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276264) {
            ctx->pc = 0x276280u;
            goto label_276280;
        }
    }
    ctx->pc = 0x27626Cu;
    // 0x27626c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x27626cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x276270: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x276270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276274: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x276274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x276278: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x276278u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x27627c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x27627cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_276280:
    // 0x276280: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x276280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_276284:
    // 0x276284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x276284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276288: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x276288u;
    {
        const bool branch_taken_0x276288 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x27628Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276288u;
            // 0x27628c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276288) {
            ctx->pc = 0x2762ACu;
            goto label_2762ac;
        }
    }
    ctx->pc = 0x276290u;
    // 0x276290: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276298: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x276298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x27629c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x27629cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2762a0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x2762a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x2762a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2762A4u;
    {
        const bool branch_taken_0x2762a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762A4u;
            // 0x2762a8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762a4) {
            ctx->pc = 0x2762C0u;
            goto label_2762c0;
        }
    }
    ctx->pc = 0x2762ACu;
label_2762ac:
    // 0x2762ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2762acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2762b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2762b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2762b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2762b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762b8: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x2762b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2762bc: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2762bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_2762c0:
    // 0x2762c0: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x2762c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x2762c4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2762c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2762c8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2762C8u;
    {
        const bool branch_taken_0x2762c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2762CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762C8u;
            // 0x2762cc: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762c8) {
            ctx->pc = 0x2762D8u;
            goto label_2762d8;
        }
    }
    ctx->pc = 0x2762D0u;
    // 0x2762d0: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x2762d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x2762d4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x2762d4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2762d8:
    // 0x2762d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2762dc: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2762DCu;
    {
        const bool branch_taken_0x2762dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2762E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762DCu;
            // 0x2762e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762dc) {
            ctx->pc = 0x276314u;
            goto label_276314;
        }
    }
    ctx->pc = 0x2762E4u;
    // 0x2762e4: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x2762e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x2762e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2762E8u;
    {
        const bool branch_taken_0x2762e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2762ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762E8u;
            // 0x2762ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762e8) {
            ctx->pc = 0x276314u;
            goto label_276314;
        }
    }
    ctx->pc = 0x2762F0u;
    // 0x2762f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2762f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2762f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2762f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2762f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2762F8u;
    {
        const bool branch_taken_0x2762f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762F8u;
            // 0x2762fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762f8) {
            ctx->pc = 0x276310u;
            goto label_276310;
        }
    }
    ctx->pc = 0x276300u;
    // 0x276300: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x276300u;
    SET_GPR_U32(ctx, 31, 0x276308u);
    ctx->pc = 0x276304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276300u;
            // 0x276304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276308u; }
        if (ctx->pc != 0x276308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276308u; }
        if (ctx->pc != 0x276308u) { return; }
    }
    ctx->pc = 0x276308u;
    // 0x276308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x276308u;
    {
        const bool branch_taken_0x276308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276308u;
            // 0x27630c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276308) {
            ctx->pc = 0x276318u;
            goto label_276318;
        }
    }
    ctx->pc = 0x276310u;
label_276310:
    // 0x276310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276314:
    // 0x276314: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x276314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_276318:
    // 0x276318: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x276318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27631c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x276320: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x276320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x276324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276324u;
    {
        const bool branch_taken_0x276324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276324u;
            // 0x276328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276324) {
            ctx->pc = 0x27633Cu;
            goto label_27633c;
        }
    }
    ctx->pc = 0x27632Cu;
    // 0x27632c: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x27632Cu;
    SET_GPR_U32(ctx, 31, 0x276334u);
    ctx->pc = 0x276330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27632Cu;
            // 0x276330: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276334u; }
        if (ctx->pc != 0x276334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276334u; }
        if (ctx->pc != 0x276334u) { return; }
    }
    ctx->pc = 0x276334u;
    // 0x276334: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x276334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x276338: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x276338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27633c:
    // 0x27633c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x27633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x276340: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x276340u;
    {
        const bool branch_taken_0x276340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276340) {
            ctx->pc = 0x276344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276340u;
            // 0x276344: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276364u;
            goto label_276364;
        }
    }
    ctx->pc = 0x276348u;
    // 0x276348: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x276348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27634c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x27634Cu;
    {
        const bool branch_taken_0x27634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27634c) {
            ctx->pc = 0x276350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27634Cu;
            // 0x276350: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2763D4u;
            goto label_2763d4;
        }
    }
    ctx->pc = 0x276354u;
    // 0x276354: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x276354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x276358: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x276358u;
    {
        const bool branch_taken_0x276358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276358) {
            ctx->pc = 0x27635Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276358u;
            // 0x27635c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2763D4u;
            goto label_2763d4;
        }
    }
    ctx->pc = 0x276360u;
    // 0x276360: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x276360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_276364:
    // 0x276364: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276364u;
    {
        const bool branch_taken_0x276364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276364u;
            // 0x276368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276364) {
            ctx->pc = 0x2763ACu;
            goto label_2763ac;
        }
    }
    ctx->pc = 0x27636Cu;
    // 0x27636c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x27636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x276370: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x276370u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x276374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x276374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276378: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x276378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27637c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x27637cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x276380: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x276380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x276384: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x276384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x276388: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x276388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27638c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x27638cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276390: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x276390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x276394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x276394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276398: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x276398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27639c: 0xc09d7d4  jal         func_275F50
    ctx->pc = 0x27639Cu;
    SET_GPR_U32(ctx, 31, 0x2763A4u);
    ctx->pc = 0x2763A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27639Cu;
            // 0x2763a0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275F50u;
    if (runtime->hasFunction(0x275F50u)) {
        auto targetFn = runtime->lookupFunction(0x275F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763A4u; }
        if (ctx->pc != 0x2763A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275F50_0x275f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763A4u; }
        if (ctx->pc != 0x2763A4u) { return; }
    }
    ctx->pc = 0x2763A4u;
    // 0x2763a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2763A4u;
    {
        const bool branch_taken_0x2763a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763A4u;
            // 0x2763a8: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763a4) {
            ctx->pc = 0x2763D4u;
            goto label_2763d4;
        }
    }
    ctx->pc = 0x2763ACu;
label_2763ac:
    // 0x2763ac: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x2763acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x2763b0: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x2763b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2763b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2763b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763b8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2763b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2763bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2763bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2763c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2763c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2763c8: 0xc09d6ca  jal         func_275B28
    ctx->pc = 0x2763C8u;
    SET_GPR_U32(ctx, 31, 0x2763D0u);
    ctx->pc = 0x2763CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2763C8u;
            // 0x2763cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275B28u;
    if (runtime->hasFunction(0x275B28u)) {
        auto targetFn = runtime->lookupFunction(0x275B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763D0u; }
        if (ctx->pc != 0x2763D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275B28_0x275b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2763D0u; }
        if (ctx->pc != 0x2763D0u) { return; }
    }
    ctx->pc = 0x2763D0u;
    // 0x2763d0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x2763d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2763d4:
    // 0x2763d4: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2763D4u;
    {
        const bool branch_taken_0x2763d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2763D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763D4u;
            // 0x2763d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763d4) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x2763DCu;
    // 0x2763dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2763dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2763e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2763e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2763e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2763E4u;
    {
        const bool branch_taken_0x2763e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2763e4) {
            ctx->pc = 0x276460u;
            goto label_276460;
        }
    }
    ctx->pc = 0x2763ECu;
    // 0x2763ec: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x2763ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x2763f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2763F0u;
    {
        const bool branch_taken_0x2763f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763F0u;
            // 0x2763f4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763f0) {
            ctx->pc = 0x276438u;
            goto label_276438;
        }
    }
    ctx->pc = 0x2763F8u;
    // 0x2763f8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x2763f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x2763fc: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x2763fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x276400: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x276400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x276404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x276408: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x276408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x27640c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x27640cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x276410: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x276410u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276414: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x276414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x276418: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x276418u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x27641c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27641cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x276420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x276424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276428: 0xc09d7d4  jal         func_275F50
    ctx->pc = 0x276428u;
    SET_GPR_U32(ctx, 31, 0x276430u);
    ctx->pc = 0x27642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276428u;
            // 0x27642c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275F50u;
    if (runtime->hasFunction(0x275F50u)) {
        auto targetFn = runtime->lookupFunction(0x275F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276430u; }
        if (ctx->pc != 0x276430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275F50_0x275f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276430u; }
        if (ctx->pc != 0x276430u) { return; }
    }
    ctx->pc = 0x276430u;
    // 0x276430: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x276430u;
    {
        const bool branch_taken_0x276430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276430u;
            // 0x276434: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276430) {
            ctx->pc = 0x276460u;
            goto label_276460;
        }
    }
    ctx->pc = 0x276438u;
label_276438:
    // 0x276438: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x276438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x27643c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x27643cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x276440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276444: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x276444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x276448: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x276448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x27644c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27644cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276450: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x276450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276454: 0xc09d6ca  jal         func_275B28
    ctx->pc = 0x276454u;
    SET_GPR_U32(ctx, 31, 0x27645Cu);
    ctx->pc = 0x276458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276454u;
            // 0x276458: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275B28u;
    if (runtime->hasFunction(0x275B28u)) {
        auto targetFn = runtime->lookupFunction(0x275B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27645Cu; }
        if (ctx->pc != 0x27645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275B28_0x275b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27645Cu; }
        if (ctx->pc != 0x27645Cu) { return; }
    }
    ctx->pc = 0x27645Cu;
    // 0x27645c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x27645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_276460:
    // 0x276460: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x276460u;
    {
        const bool branch_taken_0x276460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276460u;
            // 0x276464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276460) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x276468u;
    // 0x276468: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x276468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27646c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x276470: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x276470u;
    {
        const bool branch_taken_0x276470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276470u;
            // 0x276474: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276470) {
            ctx->pc = 0x276494u;
            goto label_276494;
        }
    }
    ctx->pc = 0x276478u;
    // 0x276478: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x276478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x27647c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27647Cu;
    {
        const bool branch_taken_0x27647c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27647Cu;
            // 0x276480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27647c) {
            ctx->pc = 0x276490u;
            goto label_276490;
        }
    }
    ctx->pc = 0x276484u;
    // 0x276484: 0xc09db3c  jal         func_276CF0
    ctx->pc = 0x276484u;
    SET_GPR_U32(ctx, 31, 0x27648Cu);
    ctx->pc = 0x276488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276484u;
            // 0x276488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CF0u;
    if (runtime->hasFunction(0x276CF0u)) {
        auto targetFn = runtime->lookupFunction(0x276CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27648Cu; }
        if (ctx->pc != 0x27648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cf0_0x276cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27648Cu; }
        if (ctx->pc != 0x27648Cu) { return; }
    }
    ctx->pc = 0x27648Cu;
    // 0x27648c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_276490:
    // 0x276490: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x276490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_276494:
    // 0x276494: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x276494u;
    {
        const bool branch_taken_0x276494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276494u;
            // 0x276498: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276494) {
            ctx->pc = 0x276538u;
            goto label_276538;
        }
    }
    ctx->pc = 0x27649Cu;
    // 0x27649c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x27649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2764a0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2764a4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2764a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2764a8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2764a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2764ac: 0xc09df76  jal         func_277DD8
    ctx->pc = 0x2764ACu;
    SET_GPR_U32(ctx, 31, 0x2764B4u);
    ctx->pc = 0x2764B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2764ACu;
            // 0x2764b0: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x277DD8u;
    if (runtime->hasFunction(0x277DD8u)) {
        auto targetFn = runtime->lookupFunction(0x277DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764B4u; }
        if (ctx->pc != 0x2764B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00277DD8_0x277dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764B4u; }
        if (ctx->pc != 0x2764B4u) { return; }
    }
    ctx->pc = 0x2764B4u;
    // 0x2764b4: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x2764B4u;
    SET_GPR_U32(ctx, 31, 0x2764BCu);
    ctx->pc = 0x2764B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2764B4u;
            // 0x2764b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764BCu; }
        if (ctx->pc != 0x2764BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2764BCu; }
        if (ctx->pc != 0x2764BCu) { return; }
    }
    ctx->pc = 0x2764BCu;
    // 0x2764bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2764bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2764c0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x2764c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x2764c4: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x2764c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2764c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2764c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2764cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2764ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2764d0: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x2764d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x2764d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2764d8: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x2764dc: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x2764dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x2764e0: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x2764e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x2764e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2764e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2764e8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2764e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2764ec: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x2764ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x2764f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2764f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2764f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2764f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2764f8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2764f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2764fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2764fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x276500: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x276500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x276504: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x276504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x276508: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x276508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27650c: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x27650Cu;
    {
        const bool branch_taken_0x27650c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x276510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27650Cu;
            // 0x276510: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27650c) {
            ctx->pc = 0x276528u;
            goto label_276528;
        }
    }
    ctx->pc = 0x276514u;
    // 0x276514: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x276514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x276518: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276518u;
    {
        const bool branch_taken_0x276518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27651Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276518u;
            // 0x27651c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276518) {
            ctx->pc = 0x276528u;
            goto label_276528;
        }
    }
    ctx->pc = 0x276520u;
    // 0x276520: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276520u;
    {
        const bool branch_taken_0x276520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x276524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276520u;
            // 0x276524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276520) {
            ctx->pc = 0x276530u;
            goto label_276530;
        }
    }
    ctx->pc = 0x276528u;
label_276528:
    // 0x276528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x276528u;
    {
        const bool branch_taken_0x276528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276528u;
            // 0x27652c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276528) {
            ctx->pc = 0x27654Cu;
            goto label_27654c;
        }
    }
    ctx->pc = 0x276530u;
label_276530:
    // 0x276530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x276530u;
    {
        const bool branch_taken_0x276530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276530u;
            // 0x276534: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276530) {
            ctx->pc = 0x27654Cu;
            goto label_27654c;
        }
    }
    ctx->pc = 0x276538u;
label_276538:
    // 0x276538: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x276538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x27653c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276540: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x276540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x276544: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x276544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x276548: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x276548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_27654c:
    // 0x27654c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x27654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x276550: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276550u;
    {
        const bool branch_taken_0x276550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276550u;
            // 0x276554: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276550) {
            ctx->pc = 0x276560u;
            goto label_276560;
        }
    }
    ctx->pc = 0x276558u;
    // 0x276558: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x276558u;
    {
        const bool branch_taken_0x276558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276558u;
            // 0x27655c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276558) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x276560u;
label_276560:
    // 0x276560: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x276560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x276564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x276564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276568: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x276568u;
    {
        const bool branch_taken_0x276568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276568) {
            ctx->pc = 0x27656Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276568u;
            // 0x27656c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27658Cu;
            goto label_27658c;
        }
    }
    ctx->pc = 0x276570u;
    // 0x276570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276574: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x276574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x276578: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x276578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27657c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276580: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x276580u;
    {
        const bool branch_taken_0x276580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276580) {
            ctx->pc = 0x276584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276580u;
            // 0x276584: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2765B8u;
            goto label_2765b8;
        }
    }
    ctx->pc = 0x276588u;
    // 0x276588: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x276588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_27658c:
    // 0x27658c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27658Cu;
    {
        const bool branch_taken_0x27658c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27658c) {
            ctx->pc = 0x276590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27658Cu;
            // 0x276590: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2765B8u;
            goto label_2765b8;
        }
    }
    ctx->pc = 0x276594u;
    // 0x276594: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x276594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x276598: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x276598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x27659c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x27659cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2765a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2765a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2765a4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2765a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2765a8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2765a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2765ac: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2765acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2765b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2765b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2765b4: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x2765b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_2765b8:
    // 0x2765b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2765b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2765bc: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2765BCu;
    {
        const bool branch_taken_0x2765bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2765C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765BCu;
            // 0x2765c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765bc) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x2765C4u;
    // 0x2765c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2765c8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x2765c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x2765cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2765CCu;
    {
        const bool branch_taken_0x2765cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2765D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765CCu;
            // 0x2765d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765cc) {
            ctx->pc = 0x276618u;
            goto label_276618;
        }
    }
    ctx->pc = 0x2765D4u;
    // 0x2765d4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2765d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2765d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2765d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2765dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2765dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2765e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2765e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2765e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2765e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2765e8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2765ec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2765ECu;
    {
        const bool branch_taken_0x2765ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2765F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765ECu;
            // 0x2765f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765ec) {
            ctx->pc = 0x2765FCu;
            goto label_2765fc;
        }
    }
    ctx->pc = 0x2765F4u;
    // 0x2765f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2765F4u;
    {
        const bool branch_taken_0x2765f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2765F4u;
            // 0x2765f8: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765f4) {
            ctx->pc = 0x276614u;
            goto label_276614;
        }
    }
    ctx->pc = 0x2765FCu;
label_2765fc:
    // 0x2765fc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2765fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x276600: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x276600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x276604: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x276604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x276608: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x276608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27660c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27660cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x276610: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x276610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_276614:
    // 0x276614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276618:
    // 0x276618: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x276618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27661c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x27661cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x276620: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x276620u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x276624: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x276624u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x276628: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x276628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27662c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x27662cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276630: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x276630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276634: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x276634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276638: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x276638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27663c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27663cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276640: 0x3e00008  jr          $ra
    ctx->pc = 0x276640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276640u;
            // 0x276644: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2761C8u: goto label_2761c8;
            case 0x2761CCu: goto label_2761cc;
            case 0x276214u: goto label_276214;
            case 0x276240u: goto label_276240;
            case 0x276244u: goto label_276244;
            case 0x276254u: goto label_276254;
            case 0x276280u: goto label_276280;
            case 0x276284u: goto label_276284;
            case 0x2762ACu: goto label_2762ac;
            case 0x2762C0u: goto label_2762c0;
            case 0x2762D8u: goto label_2762d8;
            case 0x276310u: goto label_276310;
            case 0x276314u: goto label_276314;
            case 0x276318u: goto label_276318;
            case 0x27633Cu: goto label_27633c;
            case 0x276364u: goto label_276364;
            case 0x2763ACu: goto label_2763ac;
            case 0x2763D4u: goto label_2763d4;
            case 0x276438u: goto label_276438;
            case 0x276460u: goto label_276460;
            case 0x276490u: goto label_276490;
            case 0x276494u: goto label_276494;
            case 0x276528u: goto label_276528;
            case 0x276530u: goto label_276530;
            case 0x276538u: goto label_276538;
            case 0x27654Cu: goto label_27654c;
            case 0x276560u: goto label_276560;
            case 0x27658Cu: goto label_27658c;
            case 0x2765B8u: goto label_2765b8;
            case 0x2765FCu: goto label_2765fc;
            case 0x276614u: goto label_276614;
            case 0x276618u: goto label_276618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276648u;
}
