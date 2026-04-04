#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002745B8
// Address: 0x2745b8 - 0x274cc0
void sub_002745B8_0x2745b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002745B8_0x2745b8");
#endif

    ctx->pc = 0x2745b8u;

    // 0x2745b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2745b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2745bc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2745bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2745c0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2745c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2745c4: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2745c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2745c8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2745c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745cc: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2745ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2745d0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2745d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745d4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2745d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2745d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2745d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745dc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2745dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2745e0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2745e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745e4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2745e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2745e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2745e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2745ec: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2745ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2745f0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2745f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745f4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2745f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2745f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2745f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745fc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2745fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x274600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x274600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274604: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x274604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x274608: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x274608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x27460c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x27460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x274610: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x274610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274614: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x274614u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x274618: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x274618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x27461c: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x27461Cu;
    {
        const bool branch_taken_0x27461c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x274620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27461Cu;
            // 0x274620: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27461c) {
            ctx->pc = 0x274634u;
            goto label_274634;
        }
    }
    ctx->pc = 0x274624u;
    // 0x274624: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x274624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x274628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27462c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x27462Cu;
    {
        const bool branch_taken_0x27462c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27462Cu;
            // 0x274630: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27462c) {
            ctx->pc = 0x274AA0u;
            goto label_274aa0;
        }
    }
    ctx->pc = 0x274634u;
label_274634:
    // 0x274634: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x274634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x274638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27463c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x27463Cu;
    {
        const bool branch_taken_0x27463c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27463Cu;
            // 0x274640: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27463c) {
            ctx->pc = 0x27484Cu;
            goto label_27484c;
        }
    }
    ctx->pc = 0x274644u;
    // 0x274644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274648: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274648u;
    {
        const bool branch_taken_0x274648 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x274648) {
            ctx->pc = 0x27464Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274648u;
            // 0x27464c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27465Cu;
            goto label_27465c;
        }
    }
    ctx->pc = 0x274650u;
    // 0x274650: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x274650u;
    {
        const bool branch_taken_0x274650 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x274650) {
            ctx->pc = 0x274690u;
            goto label_274690;
        }
    }
    ctx->pc = 0x274658u;
    // 0x274658: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27465c:
    // 0x27465c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274660: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x274660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x274664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274668: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x274668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x27466c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27466cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274670: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x274670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x274674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274678: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x274678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x27467c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x27467cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x274680: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274684: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274688: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x274688u;
    {
        const bool branch_taken_0x274688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274688u;
            // 0x27468c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274688) {
            ctx->pc = 0x274A78u;
            goto label_274a78;
        }
    }
    ctx->pc = 0x274690u;
label_274690:
    // 0x274690: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x274690u;
    {
        const bool branch_taken_0x274690 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x274694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274690u;
            // 0x274694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274690) {
            ctx->pc = 0x27471Cu;
            goto label_27471c;
        }
    }
    ctx->pc = 0x274698u;
    // 0x274698: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x274698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27469c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2746a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2746a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746a4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2746a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2746a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2746a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2746ac: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2746acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2746b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2746b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2746b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2746b8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2746b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2746bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2746bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2746c0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2746c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746c4: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x2746c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x2746c8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2746c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746cc: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x2746CCu;
    SET_GPR_U32(ctx, 31, 0x2746D4u);
    ctx->pc = 0x2746D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2746CCu;
            // 0x2746d0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746D4u; }
        if (ctx->pc != 0x2746D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746D4u; }
        if (ctx->pc != 0x2746D4u) { return; }
    }
    ctx->pc = 0x2746D4u;
    // 0x2746d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2746d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2746d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2746d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746dc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2746dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2746e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2746e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2746e4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2746e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2746e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2746e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2746ec: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x2746ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2746f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2746f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2746f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2746f8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2746fc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2746fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274700: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274700u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274704: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x274704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x274708: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x274708u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27470c: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x27470Cu;
    SET_GPR_U32(ctx, 31, 0x274714u);
    ctx->pc = 0x274710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27470Cu;
            // 0x274710: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274714u; }
        if (ctx->pc != 0x274714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274714u; }
        if (ctx->pc != 0x274714u) { return; }
    }
    ctx->pc = 0x274714u;
    // 0x274714: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x274714u;
    {
        const bool branch_taken_0x274714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274714u;
            // 0x274718: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274714) {
            ctx->pc = 0x274A9Cu;
            goto label_274a9c;
        }
    }
    ctx->pc = 0x27471Cu;
label_27471c:
    // 0x27471c: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x27471Cu;
    {
        const bool branch_taken_0x27471c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x274720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27471Cu;
            // 0x274720: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27471c) {
            ctx->pc = 0x274834u;
            goto label_274834;
        }
    }
    ctx->pc = 0x274724u;
    // 0x274724: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x274728: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x274728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27472c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x27472cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x274730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274734: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x274734u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x274738: 0xc09d10c  jal         func_274430
    ctx->pc = 0x274738u;
    SET_GPR_U32(ctx, 31, 0x274740u);
    ctx->pc = 0x27473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274738u;
            // 0x27473c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274430u;
    if (runtime->hasFunction(0x274430u)) {
        auto targetFn = runtime->lookupFunction(0x274430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274740u; }
        if (ctx->pc != 0x274740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274430_0x2745b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274740u; }
        if (ctx->pc != 0x274740u) { return; }
    }
    ctx->pc = 0x274740u;
    // 0x274740: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x274740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x274744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274748: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x274748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27474c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27474cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274750: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x274750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x274754: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x274758: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x27475c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27475cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274760: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x274760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274768: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x274768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x27476c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x27476cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274770: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x274770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x274774: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274778: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274778u;
    SET_GPR_U32(ctx, 31, 0x274780u);
    ctx->pc = 0x27477Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274778u;
            // 0x27477c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274780u; }
        if (ctx->pc != 0x274780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274780u; }
        if (ctx->pc != 0x274780u) { return; }
    }
    ctx->pc = 0x274780u;
    // 0x274780: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x274780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274788: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x274788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x27478c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274790: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x274790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x274794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274798: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x274798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27479c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27479cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2747a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2747a4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2747a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2747a8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2747a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2747ac: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2747acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747b0: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x2747b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x2747b4: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x2747B4u;
    SET_GPR_U32(ctx, 31, 0x2747BCu);
    ctx->pc = 0x2747B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2747B4u;
            // 0x2747b8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747BCu; }
        if (ctx->pc != 0x2747BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747BCu; }
        if (ctx->pc != 0x2747BCu) { return; }
    }
    ctx->pc = 0x2747BCu;
    // 0x2747bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2747bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2747c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2747c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2747c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2747c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2747c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2747cc: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x2747ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2747d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2747d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2747d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2747d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2747d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2747dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2747dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2747e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2747e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747e4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2747e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2747e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2747e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2747ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2747ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2747f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2747f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747f4: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x2747F4u;
    SET_GPR_U32(ctx, 31, 0x2747FCu);
    ctx->pc = 0x2747F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2747F4u;
            // 0x2747f8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747FCu; }
        if (ctx->pc != 0x2747FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747FCu; }
        if (ctx->pc != 0x2747FCu) { return; }
    }
    ctx->pc = 0x2747FCu;
    // 0x2747fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2747fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x274800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274804: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x274804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x274808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27480c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x27480cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x274810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x274810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274814: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x274814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x274818: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27481c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x274820: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x274820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274824: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x274824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x274828: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27482c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x27482Cu;
    {
        const bool branch_taken_0x27482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27482Cu;
            // 0x274830: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27482c) {
            ctx->pc = 0x274A78u;
            goto label_274a78;
        }
    }
    ctx->pc = 0x274834u;
label_274834:
    // 0x274834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274838: 0x24a54530  addiu       $a1, $a1, 0x4530
    ctx->pc = 0x274838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17712));
    // 0x27483c: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x27483Cu;
    SET_GPR_U32(ctx, 31, 0x274844u);
    ctx->pc = 0x274840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27483Cu;
            // 0x274840: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274844u; }
        if (ctx->pc != 0x274844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274844u; }
        if (ctx->pc != 0x274844u) { return; }
    }
    ctx->pc = 0x274844u;
    // 0x274844: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x274844u;
    {
        const bool branch_taken_0x274844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274844u;
            // 0x274848: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274844) {
            ctx->pc = 0x274A9Cu;
            goto label_274a9c;
        }
    }
    ctx->pc = 0x27484Cu;
label_27484c:
    // 0x27484c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x274850: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x274850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x274854: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x274854u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x274858: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x274858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x27485c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x27485cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274860: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x274860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x274864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x274864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274868: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x274868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x27486c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x27486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x274870: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x274870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x274874: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x274874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x274878: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x274878u;
    {
        const bool branch_taken_0x274878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x27487Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274878u;
            // 0x27487c: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274878) {
            ctx->pc = 0x274898u;
            goto label_274898;
        }
    }
    ctx->pc = 0x274880u;
    // 0x274880: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x274880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x274884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274884u;
    {
        const bool branch_taken_0x274884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274884u;
            // 0x274888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274884) {
            ctx->pc = 0x27489Cu;
            goto label_27489c;
        }
    }
    ctx->pc = 0x27488Cu;
    // 0x27488c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x27488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x274890: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x274890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x274894: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x274894u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_274898:
    // 0x274898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27489c:
    // 0x27489c: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27489Cu;
    {
        const bool branch_taken_0x27489c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x27489c) {
            ctx->pc = 0x2748A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27489Cu;
            // 0x2748a0: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2748B0u;
            goto label_2748b0;
        }
    }
    ctx->pc = 0x2748A4u;
    // 0x2748a4: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2748A4u;
    {
        const bool branch_taken_0x2748a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2748A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748A4u;
            // 0x2748a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748a4) {
            ctx->pc = 0x2748ECu;
            goto label_2748ec;
        }
    }
    ctx->pc = 0x2748ACu;
    // 0x2748ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2748acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2748b0:
    // 0x2748b0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2748b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2748b4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2748b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2748b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2748b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748bc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2748bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2748c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2748c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2748c4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2748c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2748c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2748cc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2748ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2748d0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2748d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2748d4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x2748d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2748d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2748d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748dc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2748dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2748e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2748e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748e4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2748E4u;
    {
        const bool branch_taken_0x2748e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748E4u;
            // 0x2748e8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748e4) {
            ctx->pc = 0x274A6Cu;
            goto label_274a6c;
        }
    }
    ctx->pc = 0x2748ECu;
label_2748ec:
    // 0x2748ec: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2748ECu;
    {
        const bool branch_taken_0x2748ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2748F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748ECu;
            // 0x2748f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748ec) {
            ctx->pc = 0x2749BCu;
            goto label_2749bc;
        }
    }
    ctx->pc = 0x2748F4u;
    // 0x2748f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2748f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2748f8: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x2748f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2748fc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2748fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x274900: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x274900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x274904: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x274904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x274908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x274908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27490c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x274910: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x274910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x274914: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274918: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x274918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27491c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27492c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274934: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x274934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x274938: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x274938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27493c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x27493cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274940: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274940u;
    SET_GPR_U32(ctx, 31, 0x274948u);
    ctx->pc = 0x274944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274940u;
            // 0x274944: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274948u; }
        if (ctx->pc != 0x274948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274948u; }
        if (ctx->pc != 0x274948u) { return; }
    }
    ctx->pc = 0x274948u;
    // 0x274948: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x274948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x27494c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x27494Cu;
    {
        const bool branch_taken_0x27494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x274950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27494Cu;
            // 0x274950: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27494c) {
            ctx->pc = 0x274970u;
            goto label_274970;
        }
    }
    ctx->pc = 0x274954u;
    // 0x274954: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x274954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x274958: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274958u;
    {
        const bool branch_taken_0x274958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274958u;
            // 0x27495c: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274958) {
            ctx->pc = 0x274974u;
            goto label_274974;
        }
    }
    ctx->pc = 0x274960u;
    // 0x274960: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x274960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274964: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x274964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x274968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274968u;
    {
        const bool branch_taken_0x274968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27496Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274968u;
            // 0x27496c: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274968) {
            ctx->pc = 0x274974u;
            goto label_274974;
        }
    }
    ctx->pc = 0x274970u;
label_274970:
    // 0x274970: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_274974:
    // 0x274974: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274978: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x27497c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x27497cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x274980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27498c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x274990: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x274990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x274994: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x274994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274998: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x274998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27499c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x27499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2749a0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2749a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2749a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2749a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749a8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2749a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2749ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2749acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2749b0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2749b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2749B4u;
    {
        const bool branch_taken_0x2749b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749B4u;
            // 0x2749b8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749b4) {
            ctx->pc = 0x274A78u;
            goto label_274a78;
        }
    }
    ctx->pc = 0x2749BCu;
label_2749bc:
    // 0x2749bc: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2749BCu;
    {
        const bool branch_taken_0x2749bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2749C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749BCu;
            // 0x2749c0: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749bc) {
            ctx->pc = 0x274A88u;
            goto label_274a88;
        }
    }
    ctx->pc = 0x2749C4u;
    // 0x2749c4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x2749c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2749c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2749c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2749cc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2749ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2749d0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2749d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749d4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2749d8: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x2749d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x2749dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2749dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2749e0: 0xc09d10c  jal         func_274430
    ctx->pc = 0x2749E0u;
    SET_GPR_U32(ctx, 31, 0x2749E8u);
    ctx->pc = 0x2749E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2749E0u;
            // 0x2749e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274430u;
    if (runtime->hasFunction(0x274430u)) {
        auto targetFn = runtime->lookupFunction(0x274430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2749E8u; }
        if (ctx->pc != 0x2749E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274430_0x2745b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2749E8u; }
        if (ctx->pc != 0x2749E8u) { return; }
    }
    ctx->pc = 0x2749E8u;
    // 0x2749e8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2749e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2749ec: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x2749ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2749f0: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2749f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2749f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2749f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2749f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2749f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2749fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2749fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x274a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a08: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x274a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x274a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a10: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274a1c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x274a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x274a20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x274a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x274a24: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274a24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a28: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274A28u;
    SET_GPR_U32(ctx, 31, 0x274A30u);
    ctx->pc = 0x274A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A28u;
            // 0x274a2c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A30u; }
        if (ctx->pc != 0x274A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A30u; }
        if (ctx->pc != 0x274A30u) { return; }
    }
    ctx->pc = 0x274A30u;
    // 0x274a30: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x274a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x274a34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x274a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274a38: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x274a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x274a3c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x274a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x274a40: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x274a40u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x274a44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x274a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x274a48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x274a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x274a4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x274a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x274a50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x274a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x274a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x274a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x274a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a64: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274a6c:
    // 0x274a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a70: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x274a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x274a74: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274a74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274a78:
    // 0x274a78: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274A78u;
    SET_GPR_U32(ctx, 31, 0x274A80u);
    ctx->pc = 0x274A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A78u;
            // 0x274a7c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A80u; }
        if (ctx->pc != 0x274A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A80u; }
        if (ctx->pc != 0x274A80u) { return; }
    }
    ctx->pc = 0x274A80u;
    // 0x274a80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274A80u;
    {
        const bool branch_taken_0x274a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A80u;
            // 0x274a84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a80) {
            ctx->pc = 0x274A9Cu;
            goto label_274a9c;
        }
    }
    ctx->pc = 0x274A88u;
label_274a88:
    // 0x274a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274a8c: 0x24a54550  addiu       $a1, $a1, 0x4550
    ctx->pc = 0x274a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17744));
    // 0x274a90: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x274A90u;
    SET_GPR_U32(ctx, 31, 0x274A98u);
    ctx->pc = 0x274A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274A90u;
            // 0x274a94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A98u; }
        if (ctx->pc != 0x274A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274A98u; }
        if (ctx->pc != 0x274A98u) { return; }
    }
    ctx->pc = 0x274A98u;
    // 0x274a98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x274a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274a9c:
    // 0x274a9c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x274a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_274aa0:
    // 0x274aa0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x274aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x274aa4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x274AA4u;
    {
        const bool branch_taken_0x274aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AA4u;
            // 0x274aa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aa4) {
            ctx->pc = 0x274C8Cu;
            goto label_274c8c;
        }
    }
    ctx->pc = 0x274AACu;
    // 0x274aac: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x274aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x274ab0: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x274AB0u;
    {
        const bool branch_taken_0x274ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AB0u;
            // 0x274ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ab0) {
            ctx->pc = 0x274B84u;
            goto label_274b84;
        }
    }
    ctx->pc = 0x274AB8u;
    // 0x274ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274abc: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x274ABCu;
    {
        const bool branch_taken_0x274abc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x274AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274ABCu;
            // 0x274ac0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274abc) {
            ctx->pc = 0x274AFCu;
            goto label_274afc;
        }
    }
    ctx->pc = 0x274AC4u;
    // 0x274ac4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x274ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x274ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274acc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x274accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x274ad0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274ad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ad4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x274ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274ad8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x274ad8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274adc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274ae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ae4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x274ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x274ae8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274aec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274af0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274af4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x274AF4u;
    {
        const bool branch_taken_0x274af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AF4u;
            // 0x274af8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274af4) {
            ctx->pc = 0x274B74u;
            goto label_274b74;
        }
    }
    ctx->pc = 0x274AFCu;
label_274afc:
    // 0x274afc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x274afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x274b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b04: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x274b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x274b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b0c: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x274b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x274b10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x274b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x274b14: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x274b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x274b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274b20: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x274b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274b24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x274b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274b28: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b2c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x274b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x274b30: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x274b30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b34: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274B34u;
    SET_GPR_U32(ctx, 31, 0x274B3Cu);
    ctx->pc = 0x274B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B34u;
            // 0x274b38: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B3Cu; }
        if (ctx->pc != 0x274B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B3Cu; }
        if (ctx->pc != 0x274B3Cu) { return; }
    }
    ctx->pc = 0x274B3Cu;
    // 0x274b3c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x274b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x274b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b44: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x274b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x274b48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274b48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x274b4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x274b50: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x274b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x274b54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274b58: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x274b58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b5c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x274b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x274b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274b64: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x274b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x274b68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b6c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x274b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274b70: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x274b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_274b74:
    // 0x274b74: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274B74u;
    SET_GPR_U32(ctx, 31, 0x274B7Cu);
    ctx->pc = 0x274B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B74u;
            // 0x274b78: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B7Cu; }
        if (ctx->pc != 0x274B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B7Cu; }
        if (ctx->pc != 0x274B7Cu) { return; }
    }
    ctx->pc = 0x274B7Cu;
    // 0x274b7c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x274B7Cu;
    {
        const bool branch_taken_0x274b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B7Cu;
            // 0x274b80: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b7c) {
            ctx->pc = 0x274C90u;
            goto label_274c90;
        }
    }
    ctx->pc = 0x274B84u;
label_274b84:
    // 0x274b84: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x274B84u;
    {
        const bool branch_taken_0x274b84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x274B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B84u;
            // 0x274b88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b84) {
            ctx->pc = 0x274BDCu;
            goto label_274bdc;
        }
    }
    ctx->pc = 0x274B8Cu;
    // 0x274b8c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x274b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x274b90: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x274B90u;
    {
        const bool branch_taken_0x274b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b90) {
            ctx->pc = 0x274B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274B90u;
            // 0x274b94: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274B9Cu;
            goto label_274b9c;
        }
    }
    ctx->pc = 0x274B98u;
    // 0x274b98: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x274b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_274b9c:
    // 0x274b9c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x274b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x274ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ba4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x274ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x274ba8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274ba8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x274bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274bb0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x274bb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bb4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bbc: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x274bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x274bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bc4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bcc: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274BCCu;
    SET_GPR_U32(ctx, 31, 0x274BD4u);
    ctx->pc = 0x274BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274BCCu;
            // 0x274bd0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BD4u; }
        if (ctx->pc != 0x274BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BD4u; }
        if (ctx->pc != 0x274BD4u) { return; }
    }
    ctx->pc = 0x274BD4u;
    // 0x274bd4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x274BD4u;
    {
        const bool branch_taken_0x274bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274BD4u;
            // 0x274bd8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bd4) {
            ctx->pc = 0x274C90u;
            goto label_274c90;
        }
    }
    ctx->pc = 0x274BDCu;
label_274bdc:
    // 0x274bdc: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x274BDCu;
    {
        const bool branch_taken_0x274bdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x274BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274BDCu;
            // 0x274be0: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bdc) {
            ctx->pc = 0x274C7Cu;
            goto label_274c7c;
        }
    }
    ctx->pc = 0x274BE4u;
    // 0x274be4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x274be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x274be8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x274BE8u;
    {
        const bool branch_taken_0x274be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274be8) {
            ctx->pc = 0x274BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274BE8u;
            // 0x274bec: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274BF4u;
            goto label_274bf4;
        }
    }
    ctx->pc = 0x274BF0u;
    // 0x274bf0: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x274bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_274bf4:
    // 0x274bf4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x274bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x274bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bfc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x274bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x274c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x274c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x274c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c0c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x274c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x274c10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274c18: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x274c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274c1c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x274c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x274c20: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274c20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c24: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274C24u;
    SET_GPR_U32(ctx, 31, 0x274C2Cu);
    ctx->pc = 0x274C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C24u;
            // 0x274c28: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C2Cu; }
        if (ctx->pc != 0x274C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C2Cu; }
        if (ctx->pc != 0x274C2Cu) { return; }
    }
    ctx->pc = 0x274C2Cu;
    // 0x274c2c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x274c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x274c30: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x274C30u;
    {
        const bool branch_taken_0x274c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c30) {
            ctx->pc = 0x274C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x274C30u;
            // 0x274c34: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x274C3Cu;
            goto label_274c3c;
        }
    }
    ctx->pc = 0x274C38u;
    // 0x274c38: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x274c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_274c3c:
    // 0x274c3c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x274c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x274c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c44: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x274c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x274c48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x274c48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c4c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x274c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x274c50: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x274c50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x274c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x274c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c5c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x274c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x274c60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c64: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x274c68: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x274c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x274c6c: 0xc09d3c4  jal         func_274F10
    ctx->pc = 0x274C6Cu;
    SET_GPR_U32(ctx, 31, 0x274C74u);
    ctx->pc = 0x274C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C6Cu;
            // 0x274c70: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274F10u;
    if (runtime->hasFunction(0x274F10u)) {
        auto targetFn = runtime->lookupFunction(0x274F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C74u; }
        if (ctx->pc != 0x274C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274F10_0x274f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C74u; }
        if (ctx->pc != 0x274C74u) { return; }
    }
    ctx->pc = 0x274C74u;
    // 0x274c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274C74u;
    {
        const bool branch_taken_0x274c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274C74u;
            // 0x274c78: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c74) {
            ctx->pc = 0x274C90u;
            goto label_274c90;
        }
    }
    ctx->pc = 0x274C7Cu;
label_274c7c:
    // 0x274c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c80: 0x24a54570  addiu       $a1, $a1, 0x4570
    ctx->pc = 0x274c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17776));
    // 0x274c84: 0xc09d0fc  jal         func_2743F0
    ctx->pc = 0x274C84u;
    SET_GPR_U32(ctx, 31, 0x274C8Cu);
    ctx->pc = 0x274C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C84u;
            // 0x274c88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2743F0u;
    if (runtime->hasFunction(0x2743F0u)) {
        auto targetFn = runtime->lookupFunction(0x2743F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C8Cu; }
        if (ctx->pc != 0x274C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002743F0_0x2743f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C8Cu; }
        if (ctx->pc != 0x274C8Cu) { return; }
    }
    ctx->pc = 0x274C8Cu;
label_274c8c:
    // 0x274c8c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x274c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_274c90:
    // 0x274c90: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x274c90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x274c94: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x274c94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x274c98: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x274c98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274c9c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x274c9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274ca0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x274ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274ca4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x274ca4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274ca8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x274ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274cac: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x274cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274cb0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x274cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x274CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274CB4u;
            // 0x274cb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274634u: goto label_274634;
            case 0x27465Cu: goto label_27465c;
            case 0x274690u: goto label_274690;
            case 0x27471Cu: goto label_27471c;
            case 0x274834u: goto label_274834;
            case 0x27484Cu: goto label_27484c;
            case 0x274898u: goto label_274898;
            case 0x27489Cu: goto label_27489c;
            case 0x2748B0u: goto label_2748b0;
            case 0x2748ECu: goto label_2748ec;
            case 0x274970u: goto label_274970;
            case 0x274974u: goto label_274974;
            case 0x2749BCu: goto label_2749bc;
            case 0x274A6Cu: goto label_274a6c;
            case 0x274A78u: goto label_274a78;
            case 0x274A88u: goto label_274a88;
            case 0x274A9Cu: goto label_274a9c;
            case 0x274AA0u: goto label_274aa0;
            case 0x274AFCu: goto label_274afc;
            case 0x274B74u: goto label_274b74;
            case 0x274B84u: goto label_274b84;
            case 0x274B9Cu: goto label_274b9c;
            case 0x274BDCu: goto label_274bdc;
            case 0x274BF4u: goto label_274bf4;
            case 0x274C3Cu: goto label_274c3c;
            case 0x274C7Cu: goto label_274c7c;
            case 0x274C8Cu: goto label_274c8c;
            case 0x274C90u: goto label_274c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274CBCu;
    // 0x274cbc: 0x0  nop
    ctx->pc = 0x274cbcu;
    // NOP
}
