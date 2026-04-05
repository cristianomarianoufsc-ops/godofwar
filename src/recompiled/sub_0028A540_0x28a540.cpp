#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A540
// Address: 0x28a540 - 0x28b050
void sub_0028A540_0x28a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A540_0x28a540");
#endif

    ctx->pc = 0x28a540u;

    // 0x28a540: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x28a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x28a544: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x28a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x28a548: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x28a548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
    // 0x28a54c: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x28a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
    // 0x28a550: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x28a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
    // 0x28a554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28a554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a558: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x28a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
    // 0x28a55c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28a55cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a560: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x28a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
    // 0x28a564: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28a564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a568: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x28a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
    // 0x28a56c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28a56cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a570: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x28a570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
    // 0x28a574: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x28a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
    // 0x28a578: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x28a578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
    // 0x28a57c: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x28a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
    // 0x28a580: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x28a580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x28a584: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x28a584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
    // 0x28a588: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x28a588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
    // 0x28a58c: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x28a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
    // 0x28a590: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x28a590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
    // 0x28a594: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x28a594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x28a598: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x28a598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
    // 0x28a59c: 0x0  nop
    ctx->pc = 0x28a59cu;
    // NOP
label_28a5a0:
    // 0x28a5a0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_28a5a4:
    // 0x28a5a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28a5a8: 0x8c444294  lw          $a0, 0x4294($v0)
    ctx->pc = 0x28a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x28a5ac: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x28a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x28a5b0: 0x8c674a90  lw          $a3, 0x4A90($v1)
    ctx->pc = 0x28a5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19088)));
    // 0x28a5b4: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x28a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x28a5b8: 0xc0a2cc2  jal         func_28B308
    ctx->pc = 0x28A5B8u;
    SET_GPR_U32(ctx, 31, 0x28A5C0u);
    ctx->pc = 0x28A5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5B8u;
            // 0x28a5bc: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B308u;
    if (runtime->hasFunction(0x28B308u)) {
        auto targetFn = runtime->lookupFunction(0x28B308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5C0u; }
        if (ctx->pc != 0x28A5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B308_0x28b308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A5C0u; }
        if (ctx->pc != 0x28A5C0u) { return; }
    }
    ctx->pc = 0x28A5C0u;
    // 0x28a5c0: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x28a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x28a5c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28a5c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5c8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x28a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x28a5cc: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x28a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x28a5d0: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
    ctx->pc = 0x28A5D0u;
    {
        const bool branch_taken_0x28a5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5D0u;
            // 0x28a5d4: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5d0) {
            ctx->pc = 0x28B01Cu;
            goto label_28b01c;
        }
    }
    ctx->pc = 0x28A5D8u;
    // 0x28a5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a5dc: 0x56c20020  bnel        $s6, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28A5DCu;
    {
        const bool branch_taken_0x28a5dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a5dc) {
            ctx->pc = 0x28A5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5DCu;
            // 0x28a5e0: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A660u;
            goto label_28a660;
        }
    }
    ctx->pc = 0x28A5E4u;
    // 0x28a5e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28a5e8: 0x24445a19  addiu       $a0, $v0, 0x5A19
    ctx->pc = 0x28a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23065));
    // 0x28a5ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28a5f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28a5f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a5f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x28a5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x28a5f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28A5F8u;
    {
        const bool branch_taken_0x28a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A5F8u;
            // 0x28a5fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5f8) {
            ctx->pc = 0x28A65Cu;
            goto label_28a65c;
        }
    }
    ctx->pc = 0x28A600u;
    // 0x28a600: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28A600u;
    {
        const bool branch_taken_0x28a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A600u;
            // 0x28a604: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a600) {
            ctx->pc = 0x28A620u;
            goto label_28a620;
        }
    }
    ctx->pc = 0x28A608u;
label_28a608:
    // 0x28a608: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28a60c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28a610: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28a610u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28a618: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x28a618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x28a61c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28a620:
    // 0x28a620: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A620u;
    {
        const bool branch_taken_0x28a620 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28a620) {
            ctx->pc = 0x28A624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A620u;
            // 0x28a624: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A63Cu;
            goto label_28a63c;
        }
    }
    ctx->pc = 0x28A628u;
    // 0x28a628: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28A628u;
    SET_GPR_U32(ctx, 31, 0x28A630u);
    ctx->pc = 0x28A62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A628u;
            // 0x28a62c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A630u; }
        if (ctx->pc != 0x28A630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A630u; }
        if (ctx->pc != 0x28A630u) { return; }
    }
    ctx->pc = 0x28A630u;
    // 0x28a630: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x28A630u;
    {
        const bool branch_taken_0x28a630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A630u;
            // 0x28a634: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a630) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28A638u;
    // 0x28a638: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28a63c:
    // 0x28a63c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28a63cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a640: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28a644: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28a644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a648: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28a64c: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28A64Cu;
    {
        const bool branch_taken_0x28a64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a64c) {
            ctx->pc = 0x28A650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A64Cu;
            // 0x28a650: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A608u;
            runtime->cooperativeGuestYield();
            goto label_28a608;
        }
    }
    ctx->pc = 0x28A654u;
    // 0x28a654: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x28A654u;
    {
        const bool branch_taken_0x28a654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A654u;
            // 0x28a658: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a654) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28A65Cu;
label_28a65c:
    // 0x28a65c: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x28a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_28a660:
    // 0x28a660: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x28a660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x28a664: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28A664u;
    {
        const bool branch_taken_0x28a664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A664u;
            // 0x28a668: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a664) {
            ctx->pc = 0x28A6ACu;
            goto label_28a6ac;
        }
    }
    ctx->pc = 0x28A66Cu;
    // 0x28a66c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28a66cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a670: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28a670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a674:
    // 0x28a674: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x28a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x28a678: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x28a678u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28a680: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x28a680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x28a684: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x28a684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x28a688: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x28A688u;
    {
        const bool branch_taken_0x28a688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A688u;
            // 0x28a68c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a688) {
            ctx->pc = 0x28A858u;
            goto label_28a858;
        }
    }
    ctx->pc = 0x28A690u;
    // 0x28a690: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28a690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28a694: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x28a698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a69c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a6a0: 0x800008  jr          $a0
    ctx->pc = 0x28A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A6A8u: goto label_28a6a8;
            case 0x28A714u: goto label_28a714;
            case 0x28A71Cu: goto label_28a71c;
            case 0x28A724u: goto label_28a724;
            case 0x28A72Cu: goto label_28a72c;
            case 0x28A734u: goto label_28a734;
            case 0x28A748u: goto label_28a748;
            case 0x28A74Cu: goto label_28a74c;
            case 0x28A75Cu: goto label_28a75c;
            case 0x28A774u: goto label_28a774;
            case 0x28A778u: goto label_28a778;
            case 0x28A790u: goto label_28a790;
            case 0x28A7A8u: goto label_28a7a8;
            case 0x28A7B4u: goto label_28a7b4;
            case 0x28A7BCu: goto label_28a7bc;
            case 0x28A7C4u: goto label_28a7c4;
            case 0x28A7E0u: goto label_28a7e0;
            case 0x28A7ECu: goto label_28a7ec;
            case 0x28A808u: goto label_28a808;
            case 0x28A850u: goto label_28a850;
            case 0x28A858u: goto label_28a858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A6A8u;
label_28a6a8:
    // 0x28a6a8: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_28a6ac:
    // 0x28a6ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28a6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6b0: 0x1ac0ffbb  blez        $s6, . + 4 + (-0x45 << 2)
    ctx->pc = 0x28A6B0u;
    {
        const bool branch_taken_0x28a6b0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x28A6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6B0u;
            // 0x28a6b4: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6b0) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28A6B8u;
label_28a6b8:
    // 0x28a6b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28a6bc: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A6BCu;
    {
        const bool branch_taken_0x28a6bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28a6bc) {
            ctx->pc = 0x28A6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6BCu;
            // 0x28a6c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A6D8u;
            goto label_28a6d8;
        }
    }
    ctx->pc = 0x28A6C4u;
    // 0x28a6c4: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28A6C4u;
    SET_GPR_U32(ctx, 31, 0x28A6CCu);
    ctx->pc = 0x28A6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6C4u;
            // 0x28a6c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6CCu; }
        if (ctx->pc != 0x28A6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A6CCu; }
        if (ctx->pc != 0x28A6CCu) { return; }
    }
    ctx->pc = 0x28A6CCu;
    // 0x28a6cc: 0x14400250  bnez        $v0, . + 4 + (0x250 << 2)
    ctx->pc = 0x28A6CCu;
    {
        const bool branch_taken_0x28a6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6CCu;
            // 0x28a6d0: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6cc) {
            ctx->pc = 0x28B010u;
            goto label_28b010;
        }
    }
    ctx->pc = 0x28A6D4u;
    // 0x28a6d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28a6d8:
    // 0x28a6d8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x28a6d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a6dc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28a6dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a6e0: 0x1443024e  bne         $v0, $v1, . + 4 + (0x24E << 2)
    ctx->pc = 0x28A6E0u;
    {
        const bool branch_taken_0x28a6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A6E0u;
            // 0x28a6e4: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6e0) {
            ctx->pc = 0x28B01Cu;
            goto label_28b01c;
        }
    }
    ctx->pc = 0x28A6E8u;
    // 0x28a6e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28a6ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28a6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28a6f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x28a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x28a6f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28a6f8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28a6f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a6fc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28a700: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x28a700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x28a704: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28A704u;
    {
        const bool branch_taken_0x28a704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A704u;
            // 0x28a708: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a704) {
            ctx->pc = 0x28A6B8u;
            runtime->cooperativeGuestYield();
            goto label_28a6b8;
        }
    }
    ctx->pc = 0x28A70Cu;
    // 0x28a70c: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
    ctx->pc = 0x28A70Cu;
    {
        const bool branch_taken_0x28a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A70Cu;
            // 0x28a710: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a70c) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28A714u;
label_28a714:
    // 0x28a714: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x28A714u;
    {
        const bool branch_taken_0x28a714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A714u;
            // 0x28a718: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a714) {
            ctx->pc = 0x28A674u;
            runtime->cooperativeGuestYield();
            goto label_28a674;
        }
    }
    ctx->pc = 0x28A71Cu;
label_28a71c:
    // 0x28a71c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x28A71Cu;
    {
        const bool branch_taken_0x28a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A71Cu;
            // 0x28a720: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a71c) {
            ctx->pc = 0x28A674u;
            runtime->cooperativeGuestYield();
            goto label_28a674;
        }
    }
    ctx->pc = 0x28A724u;
label_28a724:
    // 0x28a724: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x28A724u;
    {
        const bool branch_taken_0x28a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A724u;
            // 0x28a728: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a724) {
            ctx->pc = 0x28A674u;
            runtime->cooperativeGuestYield();
            goto label_28a674;
        }
    }
    ctx->pc = 0x28A72Cu;
label_28a72c:
    // 0x28a72c: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x28A72Cu;
    {
        const bool branch_taken_0x28a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A72Cu;
            // 0x28a730: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a72c) {
            ctx->pc = 0x28A674u;
            runtime->cooperativeGuestYield();
            goto label_28a674;
        }
    }
    ctx->pc = 0x28A734u;
label_28a734:
    // 0x28a734: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a738: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x28a738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28a73c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x28a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28a740: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x28A740u;
    {
        const bool branch_taken_0x28a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A740u;
            // 0x28a744: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a740) {
            ctx->pc = 0x28A674u;
            runtime->cooperativeGuestYield();
            goto label_28a674;
        }
    }
    ctx->pc = 0x28A748u;
label_28a748:
    // 0x28a748: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x28a748u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_28a74c:
    // 0x28a74c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a750: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a754: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28A754u;
    {
        const bool branch_taken_0x28a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A754u;
            // 0x28a758: 0x24421078  addiu       $v0, $v0, 0x1078 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a754) {
            ctx->pc = 0x28A79Cu;
            goto label_28a79c;
        }
    }
    ctx->pc = 0x28A75Cu;
label_28a75c:
    // 0x28a75c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a760: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x28a760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a764: 0x24421078  addiu       $v0, $v0, 0x1078
    ctx->pc = 0x28a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4216));
    // 0x28a768: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x28a768u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a76c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x28A76Cu;
    {
        const bool branch_taken_0x28a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A76Cu;
            // 0x28a770: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a76c) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A774u;
label_28a774:
    // 0x28a774: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x28a774u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_28a778:
    // 0x28a778: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a77c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a780: 0x2442d238  addiu       $v0, $v0, -0x2DC8
    ctx->pc = 0x28a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955576));
    // 0x28a784: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x28a784u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28a788: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x28A788u;
    {
        const bool branch_taken_0x28a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A788u;
            // 0x28a78c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a788) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A790u;
label_28a790:
    // 0x28a790: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a794: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x28a794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a798: 0x2442d238  addiu       $v0, $v0, -0x2DC8
    ctx->pc = 0x28a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955576));
label_28a79c:
    // 0x28a79c: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x28a79cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a7a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28A7A0u;
    {
        const bool branch_taken_0x28a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7A0u;
            // 0x28a7a4: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7a0) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A7A8u;
label_28a7a8:
    // 0x28a7a8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a7ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28A7ACu;
    {
        const bool branch_taken_0x28a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7ACu;
            // 0x28a7b0: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7ac) {
            ctx->pc = 0x28A7F4u;
            goto label_28a7f4;
        }
    }
    ctx->pc = 0x28A7B4u;
label_28a7b4:
    // 0x28a7b4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x28A7B4u;
    {
        const bool branch_taken_0x28a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7B4u;
            // 0x28a7b8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7b4) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A7BCu;
label_28a7bc:
    // 0x28a7bc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28A7BCu;
    {
        const bool branch_taken_0x28a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7BCu;
            // 0x28a7c0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7bc) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A7C4u;
label_28a7c4:
    // 0x28a7c4: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x28a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x28a7c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28a7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7cc: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x28a7ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x28a7d0: 0xc0a2c14  jal         func_28B050
    ctx->pc = 0x28A7D0u;
    SET_GPR_U32(ctx, 31, 0x28A7D8u);
    ctx->pc = 0x28A7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7D0u;
            // 0x28a7d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B050u;
    if (runtime->hasFunction(0x28B050u)) {
        auto targetFn = runtime->lookupFunction(0x28B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7D8u; }
        if (ctx->pc != 0x28A7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28b050_0x28b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A7D8u; }
        if (ctx->pc != 0x28A7D8u) { return; }
    }
    ctx->pc = 0x28A7D8u;
    // 0x28a7d8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28A7D8u;
    {
        const bool branch_taken_0x28a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7D8u;
            // 0x28a7dc: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7d8) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A7E0u;
label_28a7e0:
    // 0x28a7e0: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x28a7e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x28a7e4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x28A7E4u;
    {
        const bool branch_taken_0x28a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A7E4u;
            // 0x28a7e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7e4) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A7ECu;
label_28a7ec:
    // 0x28a7ec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x28a7f0: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x28a7f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_28a7f4:
    // 0x28a7f4: 0x2442d238  addiu       $v0, $v0, -0x2DC8
    ctx->pc = 0x28a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955576));
    // 0x28a7f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a7fc: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x28a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x28a800: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28A800u;
    {
        const bool branch_taken_0x28a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A800u;
            // 0x28a804: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a800) {
            ctx->pc = 0x28A884u;
            goto label_28a884;
        }
    }
    ctx->pc = 0x28A808u;
label_28a808:
    // 0x28a808: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x28a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x28a80c: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
    ctx->pc = 0x28A80Cu;
    {
        const bool branch_taken_0x28a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A80Cu;
            // 0x28a810: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a80c) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28A814u;
    // 0x28a814: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x28a814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x28a818: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A818u;
    {
        const bool branch_taken_0x28a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A818u;
            // 0x28a81c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a818) {
            ctx->pc = 0x28A830u;
            goto label_28a830;
        }
    }
    ctx->pc = 0x28A820u;
    // 0x28a820: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28a820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28a824: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x28a824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28a828: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
    ctx->pc = 0x28A828u;
    {
        const bool branch_taken_0x28a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A828u;
            // 0x28a82c: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a828) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28A830u;
label_28a830:
    // 0x28a830: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A830u;
    {
        const bool branch_taken_0x28a830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A830u;
            // 0x28a834: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a830) {
            ctx->pc = 0x28A844u;
            goto label_28a844;
        }
    }
    ctx->pc = 0x28A838u;
    // 0x28a838: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x28a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28a83c: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
    ctx->pc = 0x28A83Cu;
    {
        const bool branch_taken_0x28a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A83Cu;
            // 0x28a840: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a83c) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28A844u;
label_28a844:
    // 0x28a844: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x28a844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28a848: 0x1000ff55  b           . + 4 + (-0xAB << 2)
    ctx->pc = 0x28A848u;
    {
        const bool branch_taken_0x28a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A848u;
            // 0x28a84c: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a848) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28A850u;
label_28a850:
    // 0x28a850: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x28A850u;
    {
        const bool branch_taken_0x28a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A850u;
            // 0x28a854: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a850) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28A858u;
label_28a858:
    // 0x28a858: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28a85c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x28a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x28a860: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x28a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x28a864: 0x24425a19  addiu       $v0, $v0, 0x5A19
    ctx->pc = 0x28a864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23065));
    // 0x28a868: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28a86c: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x28a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
    // 0x28a870: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28a870u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a874: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x28a874u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a878: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x28a878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a87c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28a87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28a880: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x28a880u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_28a884:
    // 0x28a884: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28a888: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28A888u;
    {
        const bool branch_taken_0x28a888 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28A88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A888u;
            // 0x28a88c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a888) {
            ctx->pc = 0x28A8A4u;
            goto label_28a8a4;
        }
    }
    ctx->pc = 0x28A890u;
    // 0x28a890: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28A890u;
    SET_GPR_U32(ctx, 31, 0x28A898u);
    ctx->pc = 0x28A894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A890u;
            // 0x28a894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A898u; }
        if (ctx->pc != 0x28A898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A898u; }
        if (ctx->pc != 0x28A898u) { return; }
    }
    ctx->pc = 0x28A898u;
    // 0x28a898: 0x144001dd  bnez        $v0, . + 4 + (0x1DD << 2)
    ctx->pc = 0x28A898u;
    {
        const bool branch_taken_0x28a898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A898u;
            // 0x28a89c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a898) {
            ctx->pc = 0x28B010u;
            goto label_28b010;
        }
    }
    ctx->pc = 0x28A8A0u;
    // 0x28a8a0: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x28a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_28a8a4:
    // 0x28a8a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28A8A4u;
    {
        const bool branch_taken_0x28a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8A4u;
            // 0x28a8a8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8a4) {
            ctx->pc = 0x28A924u;
            goto label_28a924;
        }
    }
    ctx->pc = 0x28A8ACu;
    // 0x28a8ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28a8b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28a8b4: 0x24455a19  addiu       $a1, $v0, 0x5A19
    ctx->pc = 0x28a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23065));
    // 0x28a8b8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28a8b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a8bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28a8c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28a8c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a8c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x28a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x28a8c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28A8C8u;
    {
        const bool branch_taken_0x28a8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8C8u;
            // 0x28a8cc: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8c8) {
            ctx->pc = 0x28A924u;
            goto label_28a924;
        }
    }
    ctx->pc = 0x28A8D0u;
    // 0x28a8d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28a8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28a8d8:
    // 0x28a8d8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28a8d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a8dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28a8e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A8E0u;
    {
        const bool branch_taken_0x28a8e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28A8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8E0u;
            // 0x28a8e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8e0) {
            ctx->pc = 0x28A8F4u;
            goto label_28a8f4;
        }
    }
    ctx->pc = 0x28A8E8u;
    // 0x28a8e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x28a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28a8ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28A8ECu;
    {
        const bool branch_taken_0x28a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8ECu;
            // 0x28a8f0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8ec) {
            ctx->pc = 0x28A904u;
            goto label_28a904;
        }
    }
    ctx->pc = 0x28A8F4u;
label_28a8f4:
    // 0x28a8f4: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28A8F4u;
    SET_GPR_U32(ctx, 31, 0x28A8FCu);
    ctx->pc = 0x28A8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8F4u;
            // 0x28a8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A8FCu; }
        if (ctx->pc != 0x28A8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A8FCu; }
        if (ctx->pc != 0x28A8FCu) { return; }
    }
    ctx->pc = 0x28A8FCu;
    // 0x28a8fc: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x28A8FCu;
    {
        const bool branch_taken_0x28a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8FCu;
            // 0x28a900: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8fc) {
            ctx->pc = 0x28B010u;
            goto label_28b010;
        }
    }
    ctx->pc = 0x28A904u;
label_28a904:
    // 0x28a904: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28a908: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28a908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a90c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28a910: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28a910u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a914: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28a914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28a918: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28A918u;
    {
        const bool branch_taken_0x28a918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a918) {
            ctx->pc = 0x28A91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A918u;
            // 0x28a91c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A8D8u;
            runtime->cooperativeGuestYield();
            goto label_28a8d8;
        }
    }
    ctx->pc = 0x28A920u;
    // 0x28a920: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x28a920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_28a924:
    // 0x28a924: 0x1040ff1f  beqz        $v0, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x28A924u;
    {
        const bool branch_taken_0x28a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A924u;
            // 0x28a928: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a924) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28A92Cu;
    // 0x28a92c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28a930: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28a930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28a934: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x28a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x28a938: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a93c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a940: 0x800008  jr          $a0
    ctx->pc = 0x28A940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A948u: goto label_28a948;
            case 0x28A9ECu: goto label_28a9ec;
            case 0x28AAF8u: goto label_28aaf8;
            case 0x28AC04u: goto label_28ac04;
            case 0x28AE3Cu: goto label_28ae3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28A948u;
label_28a948:
    // 0x28a948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a94c: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x28a94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x28a950: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28A950u;
    {
        const bool branch_taken_0x28a950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A950u;
            // 0x28a954: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a950) {
            ctx->pc = 0x28A9BCu;
            goto label_28a9bc;
        }
    }
    ctx->pc = 0x28A958u;
    // 0x28a958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28a958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a95c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28a960:
    // 0x28a960: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x28a960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x28a964: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A964u;
    {
        const bool branch_taken_0x28a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A964u;
            // 0x28a968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a964) {
            ctx->pc = 0x28A99Cu;
            goto label_28a99c;
        }
    }
    ctx->pc = 0x28A96Cu;
    // 0x28a96c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28a970: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28a970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28a974: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x28a978: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28a97c: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28A97Cu;
    SET_GPR_U32(ctx, 31, 0x28A984u);
    ctx->pc = 0x28A980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A97Cu;
            // 0x28a980: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A984u; }
        if (ctx->pc != 0x28A984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A984u; }
        if (ctx->pc != 0x28A984u) { return; }
    }
    ctx->pc = 0x28A984u;
    // 0x28a984: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x28A984u;
    {
        const bool branch_taken_0x28a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a984) {
            ctx->pc = 0x28A988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28A984u;
            // 0x28a988: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28A960u;
            runtime->cooperativeGuestYield();
            goto label_28a960;
        }
    }
    ctx->pc = 0x28A98Cu;
    // 0x28a98c: 0x1220019f  beqz        $s1, . + 4 + (0x19F << 2)
    ctx->pc = 0x28A98Cu;
    {
        const bool branch_taken_0x28a98c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A98Cu;
            // 0x28a990: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a98c) {
            ctx->pc = 0x28B00Cu;
            goto label_28b00c;
        }
    }
    ctx->pc = 0x28A994u;
    // 0x28a994: 0x1000ff03  b           . + 4 + (-0xFD << 2)
    ctx->pc = 0x28A994u;
    {
        const bool branch_taken_0x28a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A994u;
            // 0x28a998: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a994) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28A99Cu;
label_28a99c:
    // 0x28a99c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28a9a0: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x28a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x28a9a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28a9a8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x28a9ac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x28a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x28a9b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x28a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x28a9b4: 0x1000fefa  b           . + 4 + (-0x106 << 2)
    ctx->pc = 0x28A9B4u;
    {
        const bool branch_taken_0x28a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9B4u;
            // 0x28a9b8: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9b4) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28A9BCu;
label_28a9bc:
    // 0x28a9bc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28a9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28a9c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28a9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9c4: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x28a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28a9c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a9cc: 0xc0a492e  jal         func_2924B8
    ctx->pc = 0x28A9CCu;
    SET_GPR_U32(ctx, 31, 0x28A9D4u);
    ctx->pc = 0x28A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9CCu;
            // 0x28a9d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2924B8u;
    if (runtime->hasFunction(0x2924B8u)) {
        auto targetFn = runtime->lookupFunction(0x2924B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9D4u; }
        if (ctx->pc != 0x28A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002924B8_0x2924b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9D4u; }
        if (ctx->pc != 0x28A9D4u) { return; }
    }
    ctx->pc = 0x28A9D4u;
    // 0x28a9d4: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
    ctx->pc = 0x28A9D4u;
    {
        const bool branch_taken_0x28a9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9D4u;
            // 0x28a9d8: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9d4) {
            ctx->pc = 0x28B00Cu;
            goto label_28b00c;
        }
    }
    ctx->pc = 0x28A9DCu;
    // 0x28a9dc: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x28a9dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x28a9e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28a9e4: 0x1000feee  b           . + 4 + (-0x112 << 2)
    ctx->pc = 0x28A9E4u;
    {
        const bool branch_taken_0x28a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9E4u;
            // 0x28a9e8: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9e4) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28A9ECu;
label_28a9ec:
    // 0x28a9ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28a9f0: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x28a9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x28a9f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28a9f8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28A9F8u;
    {
        const bool branch_taken_0x28a9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9F8u;
            // 0x28a9fc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9f8) {
            ctx->pc = 0x28AA68u;
            goto label_28aa68;
        }
    }
    ctx->pc = 0x28AA00u;
    // 0x28aa00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28aa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa04: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x28aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28aa08:
    // 0x28aa08: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x28aa08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28aa0c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x28aa10: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x28aa10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28aa14: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28AA14u;
    {
        const bool branch_taken_0x28aa14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA14u;
            // 0x28aa18: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa14) {
            ctx->pc = 0x28AA58u;
            goto label_28aa58;
        }
    }
    ctx->pc = 0x28AA1Cu;
    // 0x28aa1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28aa20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28aa24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28aa24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28aa28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28aa2c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28aa30: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x28AA30u;
    {
        const bool branch_taken_0x28aa30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA30u;
            // 0x28aa34: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa30) {
            ctx->pc = 0x28AA58u;
            goto label_28aa58;
        }
    }
    ctx->pc = 0x28AA38u;
    // 0x28aa38: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x28AA38u;
    {
        const bool branch_taken_0x28aa38 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x28aa38) {
            ctx->pc = 0x28AA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA38u;
            // 0x28aa3c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AA08u;
            runtime->cooperativeGuestYield();
            goto label_28aa08;
        }
    }
    ctx->pc = 0x28AA40u;
    // 0x28aa40: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28AA40u;
    SET_GPR_U32(ctx, 31, 0x28AA48u);
    ctx->pc = 0x28AA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA40u;
            // 0x28aa44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA48u; }
        if (ctx->pc != 0x28AA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA48u; }
        if (ctx->pc != 0x28AA48u) { return; }
    }
    ctx->pc = 0x28AA48u;
    // 0x28aa48: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28AA48u;
    {
        const bool branch_taken_0x28aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa48) {
            ctx->pc = 0x28AA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA48u;
            // 0x28aa4c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AA08u;
            runtime->cooperativeGuestYield();
            goto label_28aa08;
        }
    }
    ctx->pc = 0x28AA50u;
    // 0x28aa50: 0x1200016f  beqz        $s0, . + 4 + (0x16F << 2)
    ctx->pc = 0x28AA50u;
    {
        const bool branch_taken_0x28aa50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA50u;
            // 0x28aa54: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa50) {
            ctx->pc = 0x28B010u;
            goto label_28b010;
        }
    }
    ctx->pc = 0x28AA58u;
label_28aa58:
    // 0x28aa58: 0x12000170  beqz        $s0, . + 4 + (0x170 << 2)
    ctx->pc = 0x28AA58u;
    {
        const bool branch_taken_0x28aa58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA58u;
            // 0x28aa5c: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa58) {
            ctx->pc = 0x28B01Cu;
            goto label_28b01c;
        }
    }
    ctx->pc = 0x28AA60u;
    // 0x28aa60: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x28AA60u;
    {
        const bool branch_taken_0x28aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA60u;
            // 0x28aa64: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa60) {
            ctx->pc = 0x28A5A4u;
            runtime->cooperativeGuestYield();
            goto label_28a5a4;
        }
    }
    ctx->pc = 0x28AA68u;
label_28aa68:
    // 0x28aa68: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28aa6c: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x28aa6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28aa70: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x28aa70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa74: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x28aa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28aa78:
    // 0x28aa78: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x28aa78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28aa7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x28aa80: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28aa84: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x28AA84u;
    {
        const bool branch_taken_0x28aa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aa84) {
            ctx->pc = 0x28AA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA84u;
            // 0x28aa88: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AADCu;
            goto label_28aadc;
        }
    }
    ctx->pc = 0x28AA8Cu;
    // 0x28aa8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28aa90: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x28aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28aa94: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28aa94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28aa98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28aa9c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28aaa0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x28aaa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28aaa4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x28aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28aaa8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x28aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x28aaac: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x28AAACu;
    {
        const bool branch_taken_0x28aaac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAACu;
            // 0x28aab0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaac) {
            ctx->pc = 0x28AAD8u;
            goto label_28aad8;
        }
    }
    ctx->pc = 0x28AAB4u;
    // 0x28aab4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28aab8: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28AAB8u;
    {
        const bool branch_taken_0x28aab8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28aab8) {
            ctx->pc = 0x28AABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAB8u;
            // 0x28aabc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AA78u;
            runtime->cooperativeGuestYield();
            goto label_28aa78;
        }
    }
    ctx->pc = 0x28AAC0u;
    // 0x28aac0: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28AAC0u;
    SET_GPR_U32(ctx, 31, 0x28AAC8u);
    ctx->pc = 0x28AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAC0u;
            // 0x28aac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAC8u; }
        if (ctx->pc != 0x28AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAC8u; }
        if (ctx->pc != 0x28AAC8u) { return; }
    }
    ctx->pc = 0x28AAC8u;
    // 0x28aac8: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28AAC8u;
    {
        const bool branch_taken_0x28aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aac8) {
            ctx->pc = 0x28AACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAC8u;
            // 0x28aacc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AA78u;
            runtime->cooperativeGuestYield();
            goto label_28aa78;
        }
    }
    ctx->pc = 0x28AAD0u;
    // 0x28aad0: 0x1230014f  beq         $s1, $s0, . + 4 + (0x14F << 2)
    ctx->pc = 0x28AAD0u;
    {
        const bool branch_taken_0x28aad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x28AAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAD0u;
            // 0x28aad4: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aad0) {
            ctx->pc = 0x28B010u;
            goto label_28b010;
        }
    }
    ctx->pc = 0x28AAD8u;
label_28aad8:
    // 0x28aad8: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x28aad8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28aadc:
    // 0x28aadc: 0x12000150  beqz        $s0, . + 4 + (0x150 << 2)
    ctx->pc = 0x28AADCu;
    {
        const bool branch_taken_0x28aadc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AADCu;
            // 0x28aae0: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aadc) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AAE4u;
    // 0x28aae4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x28aae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28aae8: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x28aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x28aaec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28aaf0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28AAF0u;
    {
        const bool branch_taken_0x28aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAF0u;
            // 0x28aaf4: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaf0) {
            ctx->pc = 0x28AB6Cu;
            goto label_28ab6c;
        }
    }
    ctx->pc = 0x28AAF8u;
label_28aaf8:
    // 0x28aaf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28aafc: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x28aafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x28ab00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28ab04: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28AB04u;
    {
        const bool branch_taken_0x28ab04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB04u;
            // 0x28ab08: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab04) {
            ctx->pc = 0x28AB74u;
            goto label_28ab74;
        }
    }
    ctx->pc = 0x28AB0Cu;
    // 0x28ab0c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28ab10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ab10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab14: 0x24515a19  addiu       $s1, $v0, 0x5A19
    ctx->pc = 0x28ab14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23065));
    // 0x28ab18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ab1c: 0x0  nop
    ctx->pc = 0x28ab1cu;
    // NOP
label_28ab20:
    // 0x28ab20: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x28ab20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ab24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x28ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28ab28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28ab28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ab2c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28ab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28ab30: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28AB30u;
    {
        const bool branch_taken_0x28ab30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB30u;
            // 0x28ab34: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab30) {
            ctx->pc = 0x28AB6Cu;
            goto label_28ab6c;
        }
    }
    ctx->pc = 0x28AB38u;
    // 0x28ab38: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28ab3c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28ab40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ab40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28ab44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ab48: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28ab48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28ab4c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AB4Cu;
    {
        const bool branch_taken_0x28ab4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB4Cu;
            // 0x28ab50: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab4c) {
            ctx->pc = 0x28AB6Cu;
            goto label_28ab6c;
        }
    }
    ctx->pc = 0x28AB54u;
    // 0x28ab54: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x28AB54u;
    {
        const bool branch_taken_0x28ab54 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x28ab54) {
            ctx->pc = 0x28AB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB54u;
            // 0x28ab58: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AB20u;
            runtime->cooperativeGuestYield();
            goto label_28ab20;
        }
    }
    ctx->pc = 0x28AB5Cu;
    // 0x28ab5c: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28AB5Cu;
    SET_GPR_U32(ctx, 31, 0x28AB64u);
    ctx->pc = 0x28AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB5Cu;
            // 0x28ab60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB64u; }
        if (ctx->pc != 0x28AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AB64u; }
        if (ctx->pc != 0x28AB64u) { return; }
    }
    ctx->pc = 0x28AB64u;
    // 0x28ab64: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28AB64u;
    {
        const bool branch_taken_0x28ab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ab64) {
            ctx->pc = 0x28AB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB64u;
            // 0x28ab68: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AB20u;
            runtime->cooperativeGuestYield();
            goto label_28ab20;
        }
    }
    ctx->pc = 0x28AB6Cu;
label_28ab6c:
    // 0x28ab6c: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
    ctx->pc = 0x28AB6Cu;
    {
        const bool branch_taken_0x28ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB6Cu;
            // 0x28ab70: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab6c) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28AB74u;
label_28ab74:
    // 0x28ab74: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28ab74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28ab78: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x28ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x28ab7c: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x28ab7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28ab80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28ab84: 0x24565a19  addiu       $s6, $v0, 0x5A19
    ctx->pc = 0x28ab84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 23065));
    // 0x28ab88: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x28ab88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ab8c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x28ab8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab90: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x28ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ab94: 0x0  nop
    ctx->pc = 0x28ab94u;
    // NOP
label_28ab98:
    // 0x28ab98: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x28ab98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ab9c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x28ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28aba0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28aba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28aba4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28aba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28aba8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28ABA8u;
    {
        const bool branch_taken_0x28aba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABA8u;
            // 0x28abac: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aba8) {
            ctx->pc = 0x28ABF0u;
            goto label_28abf0;
        }
    }
    ctx->pc = 0x28ABB0u;
    // 0x28abb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28abb4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28abb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28abb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28abbc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28abc0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x28abc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28abc4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x28abc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28abc8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x28abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x28abcc: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x28ABCCu;
    {
        const bool branch_taken_0x28abcc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABCCu;
            // 0x28abd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abcc) {
            ctx->pc = 0x28ABF0u;
            goto label_28abf0;
        }
    }
    ctx->pc = 0x28ABD4u;
    // 0x28abd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28abd8: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28ABD8u;
    {
        const bool branch_taken_0x28abd8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28abd8) {
            ctx->pc = 0x28ABDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABD8u;
            // 0x28abdc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AB98u;
            runtime->cooperativeGuestYield();
            goto label_28ab98;
        }
    }
    ctx->pc = 0x28ABE0u;
    // 0x28abe0: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28ABE0u;
    SET_GPR_U32(ctx, 31, 0x28ABE8u);
    ctx->pc = 0x28ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABE0u;
            // 0x28abe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ABE8u; }
        if (ctx->pc != 0x28ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ABE8u; }
        if (ctx->pc != 0x28ABE8u) { return; }
    }
    ctx->pc = 0x28ABE8u;
    // 0x28abe8: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28ABE8u;
    {
        const bool branch_taken_0x28abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28abe8) {
            ctx->pc = 0x28ABECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABE8u;
            // 0x28abec: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AB98u;
            runtime->cooperativeGuestYield();
            goto label_28ab98;
        }
    }
    ctx->pc = 0x28ABF0u;
label_28abf0:
    // 0x28abf0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28abf4: 0xafb3026c  sw          $s3, 0x26C($sp)
    ctx->pc = 0x28abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
    // 0x28abf8: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x28abf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x28abfc: 0x1000fe68  b           . + 4 + (-0x198 << 2)
    ctx->pc = 0x28ABFCu;
    {
        const bool branch_taken_0x28abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABFCu;
            // 0x28ac00: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abfc) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28AC04u;
label_28ac04:
    // 0x28ac04: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28ac04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28ac08: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x28ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x28ac0c: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x28ac0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
    // 0x28ac10: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x28ac10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28ac14: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x28ac14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x28ac18: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x28ac18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
    // 0x28ac1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28ac1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28ac20: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
    ctx->pc = 0x28AC20u;
    {
        const bool branch_taken_0x28ac20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC20u;
            // 0x28ac24: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac20) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28AC28u;
    // 0x28ac28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ac2c: 0x0  nop
    ctx->pc = 0x28ac2cu;
    // NOP
label_28ac30:
    // 0x28ac30: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x28ac30u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ac34: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x28ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
    // 0x28ac38: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x28ac38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
    // 0x28ac3c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x28AC3Cu;
    {
        const bool branch_taken_0x28ac3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC3Cu;
            // 0x28ac40: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac3c) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28AC44u;
    // 0x28ac44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ac48: 0x24425d70  addiu       $v0, $v0, 0x5D70
    ctx->pc = 0x28ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23920));
    // 0x28ac4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ac50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ac54: 0x800008  jr          $a0
    ctx->pc = 0x28AC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28AC5Cu: goto label_28ac5c;
            case 0x28AC80u: goto label_28ac80;
            case 0x28ACA0u: goto label_28aca0;
            case 0x28ACC8u: goto label_28acc8;
            case 0x28ACDCu: goto label_28acdc;
            case 0x28ACF0u: goto label_28acf0;
            case 0x28AD50u: goto label_28ad50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28AC5Cu;
label_28ac5c:
    // 0x28ac5c: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AC5Cu;
    {
        const bool branch_taken_0x28ac5c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC5Cu;
            // 0x28ac60: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac5c) {
            ctx->pc = 0x28AC70u;
            goto label_28ac70;
        }
    }
    ctx->pc = 0x28AC64u;
    // 0x28ac64: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x28ac64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28ac68: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x28ac68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
    // 0x28ac6c: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x28ac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_28ac70:
    // 0x28ac70: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28AC70u;
    {
        const bool branch_taken_0x28ac70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC70u;
            // 0x28ac74: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac70) {
            ctx->pc = 0x28AD08u;
            goto label_28ad08;
        }
    }
    ctx->pc = 0x28AC78u;
    // 0x28ac78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28AC78u;
    {
        const bool branch_taken_0x28ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC78u;
            // 0x28ac7c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac78) {
            ctx->pc = 0x28AD08u;
            goto label_28ad08;
        }
    }
    ctx->pc = 0x28AC80u;
label_28ac80:
    // 0x28ac80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28ac84: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x28ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x28ac88: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x28ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
    // 0x28ac8c: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x28ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x28ac90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ac94: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x28ac94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
    // 0x28ac98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28AC98u;
    {
        const bool branch_taken_0x28ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC98u;
            // 0x28ac9c: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac98) {
            ctx->pc = 0x28AD0Cu;
            goto label_28ad0c;
        }
    }
    ctx->pc = 0x28ACA0u;
label_28aca0:
    // 0x28aca0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28aca4: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x28aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x28aca8: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
    // 0x28acac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28acb0: 0x847e0000  lh          $fp, 0x0($v1)
    ctx->pc = 0x28acb0u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28acb4: 0x2bc20009  slti        $v0, $fp, 0x9
    ctx->pc = 0x28acb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x28acb8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28ACB8u;
    {
        const bool branch_taken_0x28acb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACB8u;
            // 0x28acbc: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acb8) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28ACC0u;
    // 0x28acc0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28ACC0u;
    {
        const bool branch_taken_0x28acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACC0u;
            // 0x28acc4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acc0) {
            ctx->pc = 0x28AD0Cu;
            goto label_28ad0c;
        }
    }
    ctx->pc = 0x28ACC8u;
label_28acc8:
    // 0x28acc8: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x28acc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x28accc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28ACCCu;
    {
        const bool branch_taken_0x28accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ACD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACCCu;
            // 0x28acd0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28accc) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28ACD4u;
    // 0x28acd4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28ACD4u;
    {
        const bool branch_taken_0x28acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACD4u;
            // 0x28acd8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acd4) {
            ctx->pc = 0x28AD0Cu;
            goto label_28ad0c;
        }
    }
    ctx->pc = 0x28ACDCu;
label_28acdc:
    // 0x28acdc: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x28acdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x28ace0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28ACE0u;
    {
        const bool branch_taken_0x28ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACE0u;
            // 0x28ace4: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ace0) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28ACE8u;
    // 0x28ace8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28ACE8u;
    {
        const bool branch_taken_0x28ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACE8u;
            // 0x28acec: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ace8) {
            ctx->pc = 0x28AD0Cu;
            goto label_28ad0c;
        }
    }
    ctx->pc = 0x28ACF0u;
label_28acf0:
    // 0x28acf0: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x28acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
    // 0x28acf4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28ACF4u;
    {
        const bool branch_taken_0x28acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACF4u;
            // 0x28acf8: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acf4) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28ACFCu;
    // 0x28acfc: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28ACFCu;
    {
        const bool branch_taken_0x28acfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ACFCu;
            // 0x28ad00: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acfc) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28AD04u;
    // 0x28ad04: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x28ad04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28ad08:
    // 0x28ad08: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x28ad08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_28ad0c:
    // 0x28ad0c: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x28ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28ad10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ad10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28ad14: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28ad18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28ad1c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AD1Cu;
    {
        const bool branch_taken_0x28ad1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28AD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD1Cu;
            // 0x28ad20: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad1c) {
            ctx->pc = 0x28AD34u;
            goto label_28ad34;
        }
    }
    ctx->pc = 0x28AD24u;
    // 0x28ad24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ad28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28ad2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28AD2Cu;
    {
        const bool branch_taken_0x28ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD2Cu;
            // 0x28ad30: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad2c) {
            ctx->pc = 0x28AD44u;
            goto label_28ad44;
        }
    }
    ctx->pc = 0x28AD34u;
label_28ad34:
    // 0x28ad34: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28AD34u;
    SET_GPR_U32(ctx, 31, 0x28AD3Cu);
    ctx->pc = 0x28AD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD34u;
            // 0x28ad38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD3Cu; }
        if (ctx->pc != 0x28AD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD3Cu; }
        if (ctx->pc != 0x28AD3Cu) { return; }
    }
    ctx->pc = 0x28AD3Cu;
    // 0x28ad3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AD3Cu;
    {
        const bool branch_taken_0x28ad3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD3Cu;
            // 0x28ad40: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad3c) {
            ctx->pc = 0x28AD54u;
            goto label_28ad54;
        }
    }
    ctx->pc = 0x28AD44u;
label_28ad44:
    // 0x28ad44: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28ad44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28ad48: 0x5680ffb9  bnel        $s4, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x28AD48u;
    {
        const bool branch_taken_0x28ad48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ad48) {
            ctx->pc = 0x28AD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD48u;
            // 0x28ad4c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AC30u;
            runtime->cooperativeGuestYield();
            goto label_28ac30;
        }
    }
    ctx->pc = 0x28AD50u;
label_28ad50:
    // 0x28ad50: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x28ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_28ad54:
    // 0x28ad54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28AD54u;
    {
        const bool branch_taken_0x28ad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD54u;
            // 0x28ad58: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad54) {
            ctx->pc = 0x28AD78u;
            goto label_28ad78;
        }
    }
    ctx->pc = 0x28AD5Cu;
    // 0x28ad5c: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x28AD5Cu;
    {
        const bool branch_taken_0x28ad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD5Cu;
            // 0x28ad60: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad5c) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AD64u;
    // 0x28ad64: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x28ad64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x28ad68: 0xc0a4974  jal         func_2925D0
    ctx->pc = 0x28AD68u;
    SET_GPR_U32(ctx, 31, 0x28AD70u);
    ctx->pc = 0x28AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD68u;
            // 0x28ad6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2925D0u;
    if (runtime->hasFunction(0x2925D0u)) {
        auto targetFn = runtime->lookupFunction(0x2925D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD70u; }
        if (ctx->pc != 0x28AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002925D0_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AD70u; }
        if (ctx->pc != 0x28AD70u) { return; }
    }
    ctx->pc = 0x28AD70u;
    // 0x28ad70: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x28AD70u;
    {
        const bool branch_taken_0x28ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD70u;
            // 0x28ad74: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad70) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AD78u;
label_28ad78:
    // 0x28ad78: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x28ad7c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x28ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x28ad80: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28AD80u;
    {
        const bool branch_taken_0x28ad80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD80u;
            // 0x28ad84: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad80) {
            ctx->pc = 0x28AD90u;
            goto label_28ad90;
        }
    }
    ctx->pc = 0x28AD88u;
    // 0x28ad88: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AD88u;
    {
        const bool branch_taken_0x28ad88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD88u;
            // 0x28ad8c: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad88) {
            ctx->pc = 0x28ADA4u;
            goto label_28ada4;
        }
    }
    ctx->pc = 0x28AD90u;
label_28ad90:
    // 0x28ad90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28ad94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28ad98: 0xc0a4974  jal         func_2925D0
    ctx->pc = 0x28AD98u;
    SET_GPR_U32(ctx, 31, 0x28ADA0u);
    ctx->pc = 0x28AD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AD98u;
            // 0x28ad9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2925D0u;
    if (runtime->hasFunction(0x2925D0u)) {
        auto targetFn = runtime->lookupFunction(0x2925D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADA0u; }
        if (ctx->pc != 0x28ADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002925D0_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ADA0u; }
        if (ctx->pc != 0x28ADA0u) { return; }
    }
    ctx->pc = 0x28ADA0u;
    // 0x28ada0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x28ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_28ada4:
    // 0x28ada4: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x28ADA4u;
    {
        const bool branch_taken_0x28ada4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADA4u;
            // 0x28ada8: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ada4) {
            ctx->pc = 0x28B004u;
            goto label_28b004;
        }
    }
    ctx->pc = 0x28ADACu;
    // 0x28adac: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x28adacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28adb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28adb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adb8: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x28adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x28adbc: 0x60f809  jalr        $v1
    ctx->pc = 0x28ADBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28ADC4u);
        ctx->pc = 0x28ADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADBCu;
            // 0x28adc0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ADC4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A5A0u: goto label_28a5a0;
            case 0x28A5A4u: goto label_28a5a4;
            case 0x28A608u: goto label_28a608;
            case 0x28A620u: goto label_28a620;
            case 0x28A63Cu: goto label_28a63c;
            case 0x28A65Cu: goto label_28a65c;
            case 0x28A660u: goto label_28a660;
            case 0x28A674u: goto label_28a674;
            case 0x28A6A8u: goto label_28a6a8;
            case 0x28A6ACu: goto label_28a6ac;
            case 0x28A6B8u: goto label_28a6b8;
            case 0x28A6D8u: goto label_28a6d8;
            case 0x28A714u: goto label_28a714;
            case 0x28A71Cu: goto label_28a71c;
            case 0x28A724u: goto label_28a724;
            case 0x28A72Cu: goto label_28a72c;
            case 0x28A734u: goto label_28a734;
            case 0x28A748u: goto label_28a748;
            case 0x28A74Cu: goto label_28a74c;
            case 0x28A75Cu: goto label_28a75c;
            case 0x28A774u: goto label_28a774;
            case 0x28A778u: goto label_28a778;
            case 0x28A790u: goto label_28a790;
            case 0x28A79Cu: goto label_28a79c;
            case 0x28A7A8u: goto label_28a7a8;
            case 0x28A7B4u: goto label_28a7b4;
            case 0x28A7BCu: goto label_28a7bc;
            case 0x28A7C4u: goto label_28a7c4;
            case 0x28A7E0u: goto label_28a7e0;
            case 0x28A7ECu: goto label_28a7ec;
            case 0x28A7F4u: goto label_28a7f4;
            case 0x28A808u: goto label_28a808;
            case 0x28A830u: goto label_28a830;
            case 0x28A844u: goto label_28a844;
            case 0x28A850u: goto label_28a850;
            case 0x28A858u: goto label_28a858;
            case 0x28A884u: goto label_28a884;
            case 0x28A8A4u: goto label_28a8a4;
            case 0x28A8D8u: goto label_28a8d8;
            case 0x28A8F4u: goto label_28a8f4;
            case 0x28A904u: goto label_28a904;
            case 0x28A924u: goto label_28a924;
            case 0x28A948u: goto label_28a948;
            case 0x28A960u: goto label_28a960;
            case 0x28A99Cu: goto label_28a99c;
            case 0x28A9BCu: goto label_28a9bc;
            case 0x28A9ECu: goto label_28a9ec;
            case 0x28AA08u: goto label_28aa08;
            case 0x28AA58u: goto label_28aa58;
            case 0x28AA68u: goto label_28aa68;
            case 0x28AA78u: goto label_28aa78;
            case 0x28AAD8u: goto label_28aad8;
            case 0x28AADCu: goto label_28aadc;
            case 0x28AAF8u: goto label_28aaf8;
            case 0x28AB20u: goto label_28ab20;
            case 0x28AB6Cu: goto label_28ab6c;
            case 0x28AB74u: goto label_28ab74;
            case 0x28AB98u: goto label_28ab98;
            case 0x28ABF0u: goto label_28abf0;
            case 0x28AC04u: goto label_28ac04;
            case 0x28AC30u: goto label_28ac30;
            case 0x28AC5Cu: goto label_28ac5c;
            case 0x28AC70u: goto label_28ac70;
            case 0x28AC80u: goto label_28ac80;
            case 0x28ACA0u: goto label_28aca0;
            case 0x28ACC8u: goto label_28acc8;
            case 0x28ACDCu: goto label_28acdc;
            case 0x28ACF0u: goto label_28acf0;
            case 0x28AD08u: goto label_28ad08;
            case 0x28AD0Cu: goto label_28ad0c;
            case 0x28AD34u: goto label_28ad34;
            case 0x28AD44u: goto label_28ad44;
            case 0x28AD50u: goto label_28ad50;
            case 0x28AD54u: goto label_28ad54;
            case 0x28AD78u: goto label_28ad78;
            case 0x28AD90u: goto label_28ad90;
            case 0x28ADA4u: goto label_28ada4;
            case 0x28ADECu: goto label_28adec;
            case 0x28AE04u: goto label_28ae04;
            case 0x28AE1Cu: goto label_28ae1c;
            case 0x28AE2Cu: goto label_28ae2c;
            case 0x28AE3Cu: goto label_28ae3c;
            case 0x28AE68u: goto label_28ae68;
            case 0x28AE94u: goto label_28ae94;
            case 0x28AEA0u: goto label_28aea0;
            case 0x28AEB4u: goto label_28aeb4;
            case 0x28AEC8u: goto label_28aec8;
            case 0x28AEE0u: goto label_28aee0;
            case 0x28AF08u: goto label_28af08;
            case 0x28AF18u: goto label_28af18;
            case 0x28AF24u: goto label_28af24;
            case 0x28AF28u: goto label_28af28;
            case 0x28AF48u: goto label_28af48;
            case 0x28AF68u: goto label_28af68;
            case 0x28AF94u: goto label_28af94;
            case 0x28AFA0u: goto label_28afa0;
            case 0x28AFD8u: goto label_28afd8;
            case 0x28AFE4u: goto label_28afe4;
            case 0x28AFF4u: goto label_28aff4;
            case 0x28B000u: goto label_28b000;
            case 0x28B004u: goto label_28b004;
            case 0x28B00Cu: goto label_28b00c;
            case 0x28B010u: goto label_28b010;
            case 0x28B01Cu: goto label_28b01c;
            case 0x28B020u: goto label_28b020;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ADC4u; }
            if (ctx->pc != 0x28ADC4u) { return; }
        }
        }
    }
    ctx->pc = 0x28ADC4u;
    // 0x28adc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28adc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adc8: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x28adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x28adcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28ADCCu;
    {
        const bool branch_taken_0x28adcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADCCu;
            // 0x28add0: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adcc) {
            ctx->pc = 0x28ADECu;
            goto label_28adec;
        }
    }
    ctx->pc = 0x28ADD4u;
    // 0x28add4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28add4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28add8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28add8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28addc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28addcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28ade0: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x28ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28ade4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28ADE4u;
    {
        const bool branch_taken_0x28ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADE4u;
            // 0x28ade8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ade4) {
            ctx->pc = 0x28AE2Cu;
            goto label_28ae2c;
        }
    }
    ctx->pc = 0x28ADECu;
label_28adec:
    // 0x28adec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ADECu;
    {
        const bool branch_taken_0x28adec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADECu;
            // 0x28adf0: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adec) {
            ctx->pc = 0x28AE04u;
            goto label_28ae04;
        }
    }
    ctx->pc = 0x28ADF4u;
    // 0x28adf4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28adf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28adf8: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28adfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28ADFCu;
    {
        const bool branch_taken_0x28adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ADFCu;
            // 0x28ae00: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28adfc) {
            ctx->pc = 0x28AE2Cu;
            goto label_28ae2c;
        }
    }
    ctx->pc = 0x28AE04u;
label_28ae04:
    // 0x28ae04: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28ae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28ae08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28AE08u;
    {
        const bool branch_taken_0x28ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE08u;
            // 0x28ae0c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae08) {
            ctx->pc = 0x28AE1Cu;
            goto label_28ae1c;
        }
    }
    ctx->pc = 0x28AE10u;
    // 0x28ae10: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x28ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28ae14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28AE14u;
    {
        const bool branch_taken_0x28ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE14u;
            // 0x28ae18: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae14) {
            ctx->pc = 0x28AE2Cu;
            goto label_28ae2c;
        }
    }
    ctx->pc = 0x28AE1Cu;
label_28ae1c:
    // 0x28ae1c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x28ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28ae20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ae20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ae24: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x28ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28ae28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_28ae2c:
    // 0x28ae2c: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x28ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x28ae30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28ae34: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x28AE34u;
    {
        const bool branch_taken_0x28ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE34u;
            // 0x28ae38: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae34) {
            ctx->pc = 0x28B000u;
            goto label_28b000;
        }
    }
    ctx->pc = 0x28AE3Cu;
label_28ae3c:
    // 0x28ae3c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28ae3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28ae40: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x28ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x28ae44: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x28ae44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
    // 0x28ae48: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x28ae48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28ae4c: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x28ae4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x28ae50: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x28ae50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
    // 0x28ae54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28ae54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28ae58: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x28AE58u;
    {
        const bool branch_taken_0x28ae58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE58u;
            // 0x28ae5c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae58) {
            ctx->pc = 0x28AF24u;
            goto label_28af24;
        }
    }
    ctx->pc = 0x28AE60u;
    // 0x28ae60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28ae64: 0x0  nop
    ctx->pc = 0x28ae64u;
    // NOP
label_28ae68:
    // 0x28ae68: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x28ae68u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ae6c: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x28ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
    // 0x28ae70: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x28ae70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x28ae74: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28AE74u;
    {
        const bool branch_taken_0x28ae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE74u;
            // 0x28ae78: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae74) {
            ctx->pc = 0x28AF24u;
            goto label_28af24;
        }
    }
    ctx->pc = 0x28AE7Cu;
    // 0x28ae7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28ae80: 0x24425eb0  addiu       $v0, $v0, 0x5EB0
    ctx->pc = 0x28ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24240));
    // 0x28ae84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ae88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ae8c: 0x800008  jr          $a0
    ctx->pc = 0x28AE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28AE94u: goto label_28ae94;
            case 0x28AEA0u: goto label_28aea0;
            case 0x28AEB4u: goto label_28aeb4;
            case 0x28AEC8u: goto label_28aec8;
            case 0x28AF24u: goto label_28af24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28AE94u;
label_28ae94:
    // 0x28ae94: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x28ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x28ae98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28AE98u;
    {
        const bool branch_taken_0x28ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AE98u;
            // 0x28ae9c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae98) {
            ctx->pc = 0x28AEE0u;
            goto label_28aee0;
        }
    }
    ctx->pc = 0x28AEA0u;
label_28aea0:
    // 0x28aea0: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x28aea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x28aea4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28AEA4u;
    {
        const bool branch_taken_0x28aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEA4u;
            // 0x28aea8: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aea4) {
            ctx->pc = 0x28AF24u;
            goto label_28af24;
        }
    }
    ctx->pc = 0x28AEACu;
    // 0x28aeac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28AEACu;
    {
        const bool branch_taken_0x28aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEACu;
            // 0x28aeb0: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aeac) {
            ctx->pc = 0x28AEE0u;
            goto label_28aee0;
        }
    }
    ctx->pc = 0x28AEB4u;
label_28aeb4:
    // 0x28aeb4: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x28aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
    // 0x28aeb8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28AEB8u;
    {
        const bool branch_taken_0x28aeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEB8u;
            // 0x28aebc: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aeb8) {
            ctx->pc = 0x28AF24u;
            goto label_28af24;
        }
    }
    ctx->pc = 0x28AEC0u;
    // 0x28aec0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28AEC0u;
    {
        const bool branch_taken_0x28aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEC0u;
            // 0x28aec4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aec0) {
            ctx->pc = 0x28AEE0u;
            goto label_28aee0;
        }
    }
    ctx->pc = 0x28AEC8u;
label_28aec8:
    // 0x28aec8: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x28aec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
    // 0x28aecc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x28aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28aed0: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28AED0u;
    {
        const bool branch_taken_0x28aed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AED0u;
            // 0x28aed4: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aed0) {
            ctx->pc = 0x28AF24u;
            goto label_28af24;
        }
    }
    ctx->pc = 0x28AED8u;
    // 0x28aed8: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x28aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x28aedc: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x28aedcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_28aee0:
    // 0x28aee0: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x28aee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x28aee4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28aee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28aee8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28aeec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28aef0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AEF0u;
    {
        const bool branch_taken_0x28aef0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AEF0u;
            // 0x28aef4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aef0) {
            ctx->pc = 0x28AF08u;
            goto label_28af08;
        }
    }
    ctx->pc = 0x28AEF8u;
    // 0x28aef8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28aefc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28af00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28AF00u;
    {
        const bool branch_taken_0x28af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF00u;
            // 0x28af04: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af00) {
            ctx->pc = 0x28AF18u;
            goto label_28af18;
        }
    }
    ctx->pc = 0x28AF08u;
label_28af08:
    // 0x28af08: 0xc0a2852  jal         func_28A148
    ctx->pc = 0x28AF08u;
    SET_GPR_U32(ctx, 31, 0x28AF10u);
    ctx->pc = 0x28AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF08u;
            // 0x28af0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A148u;
    if (runtime->hasFunction(0x28A148u)) {
        auto targetFn = runtime->lookupFunction(0x28A148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF10u; }
        if (ctx->pc != 0x28AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A148_0x28a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF10u; }
        if (ctx->pc != 0x28AF10u) { return; }
    }
    ctx->pc = 0x28AF10u;
    // 0x28af10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AF10u;
    {
        const bool branch_taken_0x28af10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF10u;
            // 0x28af14: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af10) {
            ctx->pc = 0x28AF28u;
            goto label_28af28;
        }
    }
    ctx->pc = 0x28AF18u;
label_28af18:
    // 0x28af18: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28af18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28af1c: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x28AF1Cu;
    {
        const bool branch_taken_0x28af1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x28af1c) {
            ctx->pc = 0x28AF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF1Cu;
            // 0x28af20: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AE68u;
            runtime->cooperativeGuestYield();
            goto label_28ae68;
        }
    }
    ctx->pc = 0x28AF24u;
label_28af24:
    // 0x28af24: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x28af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_28af28:
    // 0x28af28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28AF28u;
    {
        const bool branch_taken_0x28af28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF28u;
            // 0x28af2c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af28) {
            ctx->pc = 0x28AFA0u;
            goto label_28afa0;
        }
    }
    ctx->pc = 0x28AF30u;
    // 0x28af30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28AF30u;
    {
        const bool branch_taken_0x28af30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF30u;
            // 0x28af34: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af30) {
            ctx->pc = 0x28AF68u;
            goto label_28af68;
        }
    }
    ctx->pc = 0x28AF38u;
    // 0x28af38: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28AF38u;
    {
        const bool branch_taken_0x28af38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF38u;
            // 0x28af3c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af38) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AF40u;
    // 0x28af40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28af40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28af44: 0x0  nop
    ctx->pc = 0x28af44u;
    // NOP
label_28af48:
    // 0x28af48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af4c: 0xc0a4974  jal         func_2925D0
    ctx->pc = 0x28AF4Cu;
    SET_GPR_U32(ctx, 31, 0x28AF54u);
    ctx->pc = 0x28AF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF4Cu;
            // 0x28af50: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2925D0u;
    if (runtime->hasFunction(0x2925D0u)) {
        auto targetFn = runtime->lookupFunction(0x2925D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF54u; }
        if (ctx->pc != 0x28AF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002925D0_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF54u; }
        if (ctx->pc != 0x28AF54u) { return; }
    }
    ctx->pc = 0x28AF54u;
    // 0x28af54: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x28af54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28af58: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28AF58u;
    {
        const bool branch_taken_0x28af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF58u;
            // 0x28af5c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af58) {
            ctx->pc = 0x28AF48u;
            runtime->cooperativeGuestYield();
            goto label_28af48;
        }
    }
    ctx->pc = 0x28AF60u;
    // 0x28af60: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x28AF60u;
    {
        const bool branch_taken_0x28af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF60u;
            // 0x28af64: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af60) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28AF68u;
label_28af68:
    // 0x28af68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28af68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28af6c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x28af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x28af70: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x28af70u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28af74: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AF74u;
    {
        const bool branch_taken_0x28af74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF74u;
            // 0x28af78: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af74) {
            ctx->pc = 0x28AF94u;
            goto label_28af94;
        }
    }
    ctx->pc = 0x28AF7Cu;
    // 0x28af7c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AF7Cu;
    {
        const bool branch_taken_0x28af7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x28AF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF7Cu;
            // 0x28af80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af7c) {
            ctx->pc = 0x28AF94u;
            goto label_28af94;
        }
    }
    ctx->pc = 0x28AF84u;
    // 0x28af84: 0xc0a4974  jal         func_2925D0
    ctx->pc = 0x28AF84u;
    SET_GPR_U32(ctx, 31, 0x28AF8Cu);
    ctx->pc = 0x28AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF84u;
            // 0x28af88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2925D0u;
    if (runtime->hasFunction(0x2925D0u)) {
        auto targetFn = runtime->lookupFunction(0x2925D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF8Cu; }
        if (ctx->pc != 0x28AF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002925D0_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AF8Cu; }
        if (ctx->pc != 0x28AF8Cu) { return; }
    }
    ctx->pc = 0x28AF8Cu;
    // 0x28af8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28af8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28af90: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x28af90u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_28af94:
    // 0x28af94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28af98: 0xc0a4974  jal         func_2925D0
    ctx->pc = 0x28AF98u;
    SET_GPR_U32(ctx, 31, 0x28AFA0u);
    ctx->pc = 0x28AF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AF98u;
            // 0x28af9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2925D0u;
    if (runtime->hasFunction(0x2925D0u)) {
        auto targetFn = runtime->lookupFunction(0x2925D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFA0u; }
        if (ctx->pc != 0x28AFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002925D0_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFA0u; }
        if (ctx->pc != 0x28AFA0u) { return; }
    }
    ctx->pc = 0x28AFA0u;
label_28afa0:
    // 0x28afa0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x28afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x28afa4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28AFA4u;
    {
        const bool branch_taken_0x28afa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFA4u;
            // 0x28afa8: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afa4) {
            ctx->pc = 0x28B004u;
            goto label_28b004;
        }
    }
    ctx->pc = 0x28AFACu;
    // 0x28afac: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x28afacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28afb0: 0xc0a2c54  jal         func_28B150
    ctx->pc = 0x28AFB0u;
    SET_GPR_U32(ctx, 31, 0x28AFB8u);
    ctx->pc = 0x28AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFB0u;
            // 0x28afb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B150u;
    if (runtime->hasFunction(0x28B150u)) {
        auto targetFn = runtime->lookupFunction(0x28B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFB8u; }
        if (ctx->pc != 0x28AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28b150_0x28b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFB8u; }
        if (ctx->pc != 0x28AFB8u) { return; }
    }
    ctx->pc = 0x28AFB8u;
    // 0x28afb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28afb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28afbc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x28afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x28afc0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AFC0u;
    {
        const bool branch_taken_0x28afc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28afc0) {
            ctx->pc = 0x28AFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFC0u;
            // 0x28afc4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28AFD8u;
            goto label_28afd8;
        }
    }
    ctx->pc = 0x28AFC8u;
    // 0x28afc8: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x28afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x28afcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28AFCCu;
    {
        const bool branch_taken_0x28afcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28afcc) {
            ctx->pc = 0x28AFE4u;
            goto label_28afe4;
        }
    }
    ctx->pc = 0x28AFD4u;
    // 0x28afd4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_28afd8:
    // 0x28afd8: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x28afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28afdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28AFDCu;
    {
        const bool branch_taken_0x28afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFDCu;
            // 0x28afe0: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afdc) {
            ctx->pc = 0x28AFF4u;
            goto label_28aff4;
        }
    }
    ctx->pc = 0x28AFE4u;
label_28afe4:
    // 0x28afe4: 0xc0a1454  jal         func_285150
    ctx->pc = 0x28AFE4u;
    SET_GPR_U32(ctx, 31, 0x28AFECu);
    ctx->pc = 0x28AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AFE4u;
            // 0x28afe8: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFECu; }
        if (ctx->pc != 0x28AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285150_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AFECu; }
        if (ctx->pc != 0x28AFECu) { return; }
    }
    ctx->pc = 0x28AFECu;
    // 0x28afec: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x28afecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x28aff0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28aff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_28aff4:
    // 0x28aff4: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x28aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x28aff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28affc: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x28affcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_28b000:
    // 0x28b000: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_28b004:
    // 0x28b004: 0x1000fd66  b           . + 4 + (-0x29A << 2)
    ctx->pc = 0x28B004u;
    {
        const bool branch_taken_0x28b004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B004u;
            // 0x28b008: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b004) {
            ctx->pc = 0x28A5A0u;
            runtime->cooperativeGuestYield();
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28B00Cu;
label_28b00c:
    // 0x28b00c: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x28b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28b010:
    // 0x28b010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b014: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B014u;
    {
        const bool branch_taken_0x28b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B014u;
            // 0x28b018: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b014) {
            ctx->pc = 0x28B020u;
            goto label_28b020;
        }
    }
    ctx->pc = 0x28B01Cu;
label_28b01c:
    // 0x28b01c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x28b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_28b020:
    // 0x28b020: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x28b020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x28b024: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x28b024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x28b028: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x28b028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x28b02c: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x28b02cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x28b030: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x28b030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x28b034: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x28b034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x28b038: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x28b038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x28b03c: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x28b03cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x28b040: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x28b040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x28b044: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x28b044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x28b048: 0x3e00008  jr          $ra
    ctx->pc = 0x28B048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B048u;
            // 0x28b04c: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28A5A0u: goto label_28a5a0;
            case 0x28A5A4u: goto label_28a5a4;
            case 0x28A608u: goto label_28a608;
            case 0x28A620u: goto label_28a620;
            case 0x28A63Cu: goto label_28a63c;
            case 0x28A65Cu: goto label_28a65c;
            case 0x28A660u: goto label_28a660;
            case 0x28A674u: goto label_28a674;
            case 0x28A6A8u: goto label_28a6a8;
            case 0x28A6ACu: goto label_28a6ac;
            case 0x28A6B8u: goto label_28a6b8;
            case 0x28A6D8u: goto label_28a6d8;
            case 0x28A714u: goto label_28a714;
            case 0x28A71Cu: goto label_28a71c;
            case 0x28A724u: goto label_28a724;
            case 0x28A72Cu: goto label_28a72c;
            case 0x28A734u: goto label_28a734;
            case 0x28A748u: goto label_28a748;
            case 0x28A74Cu: goto label_28a74c;
            case 0x28A75Cu: goto label_28a75c;
            case 0x28A774u: goto label_28a774;
            case 0x28A778u: goto label_28a778;
            case 0x28A790u: goto label_28a790;
            case 0x28A79Cu: goto label_28a79c;
            case 0x28A7A8u: goto label_28a7a8;
            case 0x28A7B4u: goto label_28a7b4;
            case 0x28A7BCu: goto label_28a7bc;
            case 0x28A7C4u: goto label_28a7c4;
            case 0x28A7E0u: goto label_28a7e0;
            case 0x28A7ECu: goto label_28a7ec;
            case 0x28A7F4u: goto label_28a7f4;
            case 0x28A808u: goto label_28a808;
            case 0x28A830u: goto label_28a830;
            case 0x28A844u: goto label_28a844;
            case 0x28A850u: goto label_28a850;
            case 0x28A858u: goto label_28a858;
            case 0x28A884u: goto label_28a884;
            case 0x28A8A4u: goto label_28a8a4;
            case 0x28A8D8u: goto label_28a8d8;
            case 0x28A8F4u: goto label_28a8f4;
            case 0x28A904u: goto label_28a904;
            case 0x28A924u: goto label_28a924;
            case 0x28A948u: goto label_28a948;
            case 0x28A960u: goto label_28a960;
            case 0x28A99Cu: goto label_28a99c;
            case 0x28A9BCu: goto label_28a9bc;
            case 0x28A9ECu: goto label_28a9ec;
            case 0x28AA08u: goto label_28aa08;
            case 0x28AA58u: goto label_28aa58;
            case 0x28AA68u: goto label_28aa68;
            case 0x28AA78u: goto label_28aa78;
            case 0x28AAD8u: goto label_28aad8;
            case 0x28AADCu: goto label_28aadc;
            case 0x28AAF8u: goto label_28aaf8;
            case 0x28AB20u: goto label_28ab20;
            case 0x28AB6Cu: goto label_28ab6c;
            case 0x28AB74u: goto label_28ab74;
            case 0x28AB98u: goto label_28ab98;
            case 0x28ABF0u: goto label_28abf0;
            case 0x28AC04u: goto label_28ac04;
            case 0x28AC30u: goto label_28ac30;
            case 0x28AC5Cu: goto label_28ac5c;
            case 0x28AC70u: goto label_28ac70;
            case 0x28AC80u: goto label_28ac80;
            case 0x28ACA0u: goto label_28aca0;
            case 0x28ACC8u: goto label_28acc8;
            case 0x28ACDCu: goto label_28acdc;
            case 0x28ACF0u: goto label_28acf0;
            case 0x28AD08u: goto label_28ad08;
            case 0x28AD0Cu: goto label_28ad0c;
            case 0x28AD34u: goto label_28ad34;
            case 0x28AD44u: goto label_28ad44;
            case 0x28AD50u: goto label_28ad50;
            case 0x28AD54u: goto label_28ad54;
            case 0x28AD78u: goto label_28ad78;
            case 0x28AD90u: goto label_28ad90;
            case 0x28ADA4u: goto label_28ada4;
            case 0x28ADECu: goto label_28adec;
            case 0x28AE04u: goto label_28ae04;
            case 0x28AE1Cu: goto label_28ae1c;
            case 0x28AE2Cu: goto label_28ae2c;
            case 0x28AE3Cu: goto label_28ae3c;
            case 0x28AE68u: goto label_28ae68;
            case 0x28AE94u: goto label_28ae94;
            case 0x28AEA0u: goto label_28aea0;
            case 0x28AEB4u: goto label_28aeb4;
            case 0x28AEC8u: goto label_28aec8;
            case 0x28AEE0u: goto label_28aee0;
            case 0x28AF08u: goto label_28af08;
            case 0x28AF18u: goto label_28af18;
            case 0x28AF24u: goto label_28af24;
            case 0x28AF28u: goto label_28af28;
            case 0x28AF48u: goto label_28af48;
            case 0x28AF68u: goto label_28af68;
            case 0x28AF94u: goto label_28af94;
            case 0x28AFA0u: goto label_28afa0;
            case 0x28AFD8u: goto label_28afd8;
            case 0x28AFE4u: goto label_28afe4;
            case 0x28AFF4u: goto label_28aff4;
            case 0x28B000u: goto label_28b000;
            case 0x28B004u: goto label_28b004;
            case 0x28B00Cu: goto label_28b00c;
            case 0x28B010u: goto label_28b010;
            case 0x28B01Cu: goto label_28b01c;
            case 0x28B020u: goto label_28b020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B050u;
}
