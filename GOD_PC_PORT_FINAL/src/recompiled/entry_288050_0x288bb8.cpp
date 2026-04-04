#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_288050
// Address: 0x288050 - 0x288bb8
void entry_288050_0x288bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_288050_0x288bb8");
#endif

    ctx->pc = 0x288050u;

    // 0x288050: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x288050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x288054: 0x24cbfffd  addiu       $t3, $a2, -0x3
    ctx->pc = 0x288054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x288058: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x288058u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28805c: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x28805cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x288060: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x288060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x288064: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x288064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x288068: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x288068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x28806c: 0x244258e8  addiu       $v0, $v0, 0x58E8
    ctx->pc = 0x28806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22760));
    // 0x288070: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x288070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
    // 0x288074: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x288074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x288078: 0xffb20290  sd          $s2, 0x290($sp)
    ctx->pc = 0x288078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 18));
    // 0x28807c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288080: 0xffb10280  sd          $s1, 0x280($sp)
    ctx->pc = 0x288080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 17));
    // 0x288084: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x288084u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288088: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x288088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
    // 0x28808c: 0x24feffff  addiu       $fp, $a3, -0x1
    ctx->pc = 0x28808cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x288090: 0xffb702e0  sd          $s7, 0x2E0($sp)
    ctx->pc = 0x288090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 23));
    // 0x288094: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x288094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288098: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x288098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x28809c: 0xffb502c0  sd          $s5, 0x2C0($sp)
    ctx->pc = 0x28809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 21));
    // 0x2880a0: 0xffb302a0  sd          $s3, 0x2A0($sp)
    ctx->pc = 0x2880a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 19));
    // 0x2880a4: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x2880a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x2880a8: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x2880a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x2880ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2880acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2880b0: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x2880b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x2880b4: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x2880b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x2880b8: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x2880b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2880bc: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x2880bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x2880c0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2880C0u;
    {
        const bool branch_taken_0x2880c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2880c0) {
            ctx->pc = 0x2880C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2880C0u;
            // 0x2880c4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2880C8u;
            goto label_2880c8;
        }
    }
    ctx->pc = 0x2880C8u;
label_2880c8:
    // 0x2880c8: 0x5812  mflo        $t3
    ctx->pc = 0x2880c8u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x2880cc: 0xafab0240  sw          $t3, 0x240($sp)
    ctx->pc = 0x2880ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 11));
    // 0x2880d0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2880d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880d4: 0x18b602a  slt         $t4, $t4, $t3
    ctx->pc = 0x2880d4u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2880d8: 0xc100a  movz        $v0, $zero, $t4
    ctx->pc = 0x2880d8u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2880dc: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2880dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x2880e0: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2880e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2880e4: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x2880e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2880e8: 0x7e8823  subu        $s1, $v1, $fp
    ctx->pc = 0x2880e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2880ec: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x2880ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2880f0: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x2880f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2880f4: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2880F4u;
    {
        const bool branch_taken_0x2880f4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2880F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2880F4u;
            // 0x2880f8: 0xafa60248  sw          $a2, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880f4) {
            ctx->pc = 0x288168u;
            goto label_288168;
        }
    }
    ctx->pc = 0x2880FCu;
    // 0x2880fc: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x2880fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x288100: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x288100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x288104: 0x29060003  slti        $a2, $t0, 0x3
    ctx->pc = 0x288104u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x288108: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x288108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
    // 0x28810c: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x28810cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x288110: 0xafa6025c  sw          $a2, 0x25C($sp)
    ctx->pc = 0x288110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 6));
    // 0x288114: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x288114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x288118: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x288118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28811c: 0x0  nop
    ctx->pc = 0x28811cu;
    // NOP
label_288120:
    // 0x288120: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x288120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x288124: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x288124u;
    {
        const bool branch_taken_0x288124 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x288128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288124u;
            // 0x288128: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288124) {
            ctx->pc = 0x288148u;
            goto label_288148;
        }
    }
    ctx->pc = 0x28812Cu;
    // 0x28812c: 0x8fa8023c  lw          $t0, 0x23C($sp)
    ctx->pc = 0x28812cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x288130: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x288130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x288134: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x288138: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x288138u;
    SET_GPR_U32(ctx, 31, 0x288140u);
    ctx->pc = 0x28813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288138u;
            // 0x28813c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288140u; }
        if (ctx->pc != 0x288140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288140u; }
        if (ctx->pc != 0x288140u) { return; }
    }
    ctx->pc = 0x288140u;
    // 0x288140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288140u;
    {
        const bool branch_taken_0x288140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288140u;
            // 0x288144: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288140) {
            ctx->pc = 0x288150u;
            goto label_288150;
        }
    }
    ctx->pc = 0x288148u;
label_288148:
    // 0x288148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x288148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28814c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x28814cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_288150:
    // 0x288150: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x288150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x288154: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x288154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x288158: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x288158u;
    {
        const bool branch_taken_0x288158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288158u;
            // 0x28815c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288158) {
            ctx->pc = 0x288120u;
            runtime->cooperativeGuestYield();
            goto label_288120;
        }
    }
    ctx->pc = 0x288160u;
    // 0x288160: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x288160u;
    {
        const bool branch_taken_0x288160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288160u;
            // 0x288164: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288160) {
            ctx->pc = 0x28818Cu;
            goto label_28818c;
        }
    }
    ctx->pc = 0x288168u;
label_288168:
    // 0x288168: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x288168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x28816c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x28816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x288170: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x288170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x288174: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x288174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x288178: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x288178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
    // 0x28817c: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x28817cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x288180: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x288180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x288184: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x288184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
    // 0x288188: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x288188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_28818c:
    // 0x28818c: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x28818Cu;
    {
        const bool branch_taken_0x28818c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x288190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28818Cu;
            // 0x288190: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28818c) {
            ctx->pc = 0x28822Cu;
            goto label_28822c;
        }
    }
    ctx->pc = 0x288194u;
    // 0x288194: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x288194u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x288198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x288198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28819c: 0x0  nop
    ctx->pc = 0x28819cu;
    // NOP
label_2881a0:
    // 0x2881a0: 0x16e00018  bnez        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x2881A0u;
    {
        const bool branch_taken_0x2881a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2881A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881A0u;
            // 0x2881a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881a0) {
            ctx->pc = 0x288204u;
            goto label_288204;
        }
    }
    ctx->pc = 0x2881A8u;
    // 0x2881a8: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x2881ac: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x2881acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2881b0: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2881b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2881b4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2881b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2881b8:
    // 0x2881b8: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x2881b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x2881bc: 0x8fa80230  lw          $t0, 0x230($sp)
    ctx->pc = 0x2881bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2881c0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2881c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2881c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2881c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2881c8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2881c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2881cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2881ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2881d0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2881d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2881d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2881d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2881d8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2881D8u;
    SET_GPR_U32(ctx, 31, 0x2881E0u);
    ctx->pc = 0x2881DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2881D8u;
            // 0x2881dc: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881E0u; }
        if (ctx->pc != 0x2881E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881E0u; }
        if (ctx->pc != 0x2881E0u) { return; }
    }
    ctx->pc = 0x2881E0u;
    // 0x2881e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2881e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881e4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2881E4u;
    SET_GPR_U32(ctx, 31, 0x2881ECu);
    ctx->pc = 0x2881E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2881E4u;
            // 0x2881e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881ECu; }
        if (ctx->pc != 0x2881ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2881ECu; }
        if (ctx->pc != 0x2881ECu) { return; }
    }
    ctx->pc = 0x2881ECu;
    // 0x2881ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2881ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881f0: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x2881f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2881f4: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2881F4u;
    {
        const bool branch_taken_0x2881f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881F4u;
            // 0x2881f8: 0x8fa20254  lw          $v0, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f4) {
            ctx->pc = 0x2881B8u;
            runtime->cooperativeGuestYield();
            goto label_2881b8;
        }
    }
    ctx->pc = 0x2881FCu;
    // 0x2881fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2881FCu;
    {
        const bool branch_taken_0x2881fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2881FCu;
            // 0x288200: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881fc) {
            ctx->pc = 0x288214u;
            goto label_288214;
        }
    }
    ctx->pc = 0x288204u;
label_288204:
    // 0x288204: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x288204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x288208: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x288208u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28820c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x28820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x288210: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x288210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288214:
    // 0x288214: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x288214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x288218: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x288218u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x28821c: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x28821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x288220: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x288220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x288224: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x288224u;
    {
        const bool branch_taken_0x288224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288224u;
            // 0x288228: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288224) {
            ctx->pc = 0x2881A0u;
            runtime->cooperativeGuestYield();
            goto label_2881a0;
        }
    }
    ctx->pc = 0x28822Cu;
label_28822c:
    // 0x28822c: 0x8fb70244  lw          $s7, 0x244($sp)
    ctx->pc = 0x28822cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_288230:
    // 0x288230: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x288230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x288234: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x288234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x288238: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x288238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28823c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x28823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x288240: 0x1ae00021  blez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x288240u;
    {
        const bool branch_taken_0x288240 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x288244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288240u;
            // 0x288244: 0xdc520000  ld          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288240) {
            ctx->pc = 0x2882C8u;
            goto label_2882c8;
        }
    }
    ctx->pc = 0x288248u;
    // 0x288248: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x288248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x28824c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x28824cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288250: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x288250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x288254: 0x0  nop
    ctx->pc = 0x288254u;
    // NOP
label_288258:
    // 0x288258: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x288258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x28825c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28825cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x288260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288264: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288264u;
    SET_GPR_U32(ctx, 31, 0x28826Cu);
    ctx->pc = 0x288268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288264u;
            // 0x288268: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28826Cu; }
        if (ctx->pc != 0x28826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28826Cu; }
        if (ctx->pc != 0x28826Cu) { return; }
    }
    ctx->pc = 0x28826Cu;
    // 0x28826c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28826cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288270: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x288270u;
    SET_GPR_U32(ctx, 31, 0x288278u);
    ctx->pc = 0x288274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288270u;
            // 0x288274: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288278u; }
        if (ctx->pc != 0x288278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288278u; }
        if (ctx->pc != 0x288278u) { return; }
    }
    ctx->pc = 0x288278u;
    // 0x288278: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x288278u;
    SET_GPR_U32(ctx, 31, 0x288280u);
    ctx->pc = 0x28827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288278u;
            // 0x28827c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288280u; }
        if (ctx->pc != 0x288280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288280u; }
        if (ctx->pc != 0x288280u) { return; }
    }
    ctx->pc = 0x288280u;
    // 0x288280: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288284: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x288284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x288288: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x288288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x28828c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28828Cu;
    SET_GPR_U32(ctx, 31, 0x288294u);
    ctx->pc = 0x288290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28828Cu;
            // 0x288290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288294u; }
        if (ctx->pc != 0x288294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288294u; }
        if (ctx->pc != 0x288294u) { return; }
    }
    ctx->pc = 0x288294u;
    // 0x288294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288298: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288298u;
    SET_GPR_U32(ctx, 31, 0x2882A0u);
    ctx->pc = 0x28829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288298u;
            // 0x28829c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A0u; }
        if (ctx->pc != 0x2882A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A0u; }
        if (ctx->pc != 0x2882A0u) { return; }
    }
    ctx->pc = 0x2882A0u;
    // 0x2882a0: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x2882A0u;
    SET_GPR_U32(ctx, 31, 0x2882A8u);
    ctx->pc = 0x2882A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882A0u;
            // 0x2882a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A8u; }
        if (ctx->pc != 0x2882A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A8u; }
        if (ctx->pc != 0x2882A8u) { return; }
    }
    ctx->pc = 0x2882A8u;
    // 0x2882a8: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x2882a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2882ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2882acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882b0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2882b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2882b4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2882B4u;
    SET_GPR_U32(ctx, 31, 0x2882BCu);
    ctx->pc = 0x2882B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882B4u;
            // 0x2882b8: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882BCu; }
        if (ctx->pc != 0x2882BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882BCu; }
        if (ctx->pc != 0x2882BCu) { return; }
    }
    ctx->pc = 0x2882BCu;
    // 0x2882bc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2882bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2882c0: 0x1e20ffe5  bgtz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2882C0u;
    {
        const bool branch_taken_0x2882c0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2882C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882C0u;
            // 0x2882c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882c0) {
            ctx->pc = 0x288258u;
            runtime->cooperativeGuestYield();
            goto label_288258;
        }
    }
    ctx->pc = 0x2882C8u;
label_2882c8:
    // 0x2882c8: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x2882c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2882cc: 0xc0a23f2  jal         func_288FC8
    ctx->pc = 0x2882CCu;
    SET_GPR_U32(ctx, 31, 0x2882D4u);
    ctx->pc = 0x2882D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882CCu;
            // 0x2882d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288FC8u;
    if (runtime->hasFunction(0x288FC8u)) {
        auto targetFn = runtime->lookupFunction(0x288FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882D4u; }
        if (ctx->pc != 0x2882D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288FC8_0x288fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882D4u; }
        if (ctx->pc != 0x2882D4u) { return; }
    }
    ctx->pc = 0x2882D4u;
    // 0x2882d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2882d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882d8: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2882d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2882dc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2882dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2882e0: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2882E0u;
    SET_GPR_U32(ctx, 31, 0x2882E8u);
    ctx->pc = 0x2882E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882E0u;
            // 0x2882e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882E8u; }
        if (ctx->pc != 0x2882E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882E8u; }
        if (ctx->pc != 0x2882E8u) { return; }
    }
    ctx->pc = 0x2882E8u;
    // 0x2882e8: 0xc0a2372  jal         func_288DC8
    ctx->pc = 0x2882E8u;
    SET_GPR_U32(ctx, 31, 0x2882F0u);
    ctx->pc = 0x2882ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882E8u;
            // 0x2882ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288DC8u;
    if (runtime->hasFunction(0x288DC8u)) {
        auto targetFn = runtime->lookupFunction(0x288DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882F0u; }
        if (ctx->pc != 0x2882F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288DC8_0x288dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882F0u; }
        if (ctx->pc != 0x2882F0u) { return; }
    }
    ctx->pc = 0x2882F0u;
    // 0x2882f0: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x2882f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x2882f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2882f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2882f8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2882F8u;
    SET_GPR_U32(ctx, 31, 0x288300u);
    ctx->pc = 0x2882FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882F8u;
            // 0x2882fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288300u; }
        if (ctx->pc != 0x288300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288300u; }
        if (ctx->pc != 0x288300u) { return; }
    }
    ctx->pc = 0x288300u;
    // 0x288300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288304: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288304u;
    SET_GPR_U32(ctx, 31, 0x28830Cu);
    ctx->pc = 0x288308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288304u;
            // 0x288308: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28830Cu; }
        if (ctx->pc != 0x28830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28830Cu; }
        if (ctx->pc != 0x28830Cu) { return; }
    }
    ctx->pc = 0x28830Cu;
    // 0x28830c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28830cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288310: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x288310u;
    SET_GPR_U32(ctx, 31, 0x288318u);
    ctx->pc = 0x288314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288310u;
            // 0x288314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288318u; }
        if (ctx->pc != 0x288318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288318u; }
        if (ctx->pc != 0x288318u) { return; }
    }
    ctx->pc = 0x288318u;
    // 0x288318: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28831c: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28831Cu;
    SET_GPR_U32(ctx, 31, 0x288324u);
    ctx->pc = 0x288320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28831Cu;
            // 0x288320: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288324u; }
        if (ctx->pc != 0x288324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288324u; }
        if (ctx->pc != 0x288324u) { return; }
    }
    ctx->pc = 0x288324u;
    // 0x288324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288328: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288328u;
    SET_GPR_U32(ctx, 31, 0x288330u);
    ctx->pc = 0x28832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288328u;
            // 0x28832c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288330u; }
        if (ctx->pc != 0x288330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288330u; }
        if (ctx->pc != 0x288330u) { return; }
    }
    ctx->pc = 0x288330u;
    // 0x288330: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x288330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x288334: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x288334u;
    {
        const bool branch_taken_0x288334 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x288338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288334u;
            // 0x288338: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288334) {
            ctx->pc = 0x288380u;
            goto label_288380;
        }
    }
    ctx->pc = 0x28833Cu;
    // 0x28833c: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x28833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x288340: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x288340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x288344: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x288344u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x288348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x288348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28834c: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x28834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288350: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x288354: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x288354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x288358: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x288358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x28835c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x28835cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x288360: 0x62a007  srav        $s4, $v0, $v1
    ctx->pc = 0x288360u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x288364: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x288364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x288368: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x288368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x28836c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28836cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288370: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x288370u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x288374: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x288374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x288378: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x288378u;
    {
        const bool branch_taken_0x288378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288378u;
            // 0x28837c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288378) {
            ctx->pc = 0x2883CCu;
            goto label_2883cc;
        }
    }
    ctx->pc = 0x288380u;
label_288380:
    // 0x288380: 0x8fa80248  lw          $t0, 0x248($sp)
    ctx->pc = 0x288380u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x288384: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288384u;
    {
        const bool branch_taken_0x288384 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x288388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288384u;
            // 0x288388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288384) {
            ctx->pc = 0x2883A8u;
            goto label_2883a8;
        }
    }
    ctx->pc = 0x28838Cu;
    // 0x28838c: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x28838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x288390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x288390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x288394: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x288394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288398: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x288398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28839c: 0x425c3  sra         $a0, $a0, 23
    ctx->pc = 0x28839cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 23));
    // 0x2883a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2883A0u;
    {
        const bool branch_taken_0x2883a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2883A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883A0u;
            // 0x2883a4: 0xafa4024c  sw          $a0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883a0) {
            ctx->pc = 0x2883CCu;
            goto label_2883cc;
        }
    }
    ctx->pc = 0x2883A8u;
label_2883a8:
    // 0x2883a8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x2883a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x2883ac: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2883acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2883b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2883b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883b4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2883B4u;
    SET_GPR_U32(ctx, 31, 0x2883BCu);
    ctx->pc = 0x2883B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2883B4u;
            // 0x2883b8: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2883BCu; }
        if (ctx->pc != 0x2883BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2883BCu; }
        if (ctx->pc != 0x2883BCu) { return; }
    }
    ctx->pc = 0x2883BCu;
    // 0x2883bc: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x2883bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2883c0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2883c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2883c4: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2883c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2883c8: 0xafa3024c  sw          $v1, 0x24C($sp)
    ctx->pc = 0x2883c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
label_2883cc:
    // 0x2883cc: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x2883ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2883d0: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2883D0u;
    {
        const bool branch_taken_0x2883d0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2883D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883D0u;
            // 0x2883d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883d0) {
            ctx->pc = 0x2884C0u;
            goto label_2884c0;
        }
    }
    ctx->pc = 0x2883D8u;
    // 0x2883d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2883d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2883dc: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2883DCu;
    {
        const bool branch_taken_0x2883dc = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2883E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883DCu;
            // 0x2883e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883dc) {
            ctx->pc = 0x288424u;
            goto label_288424;
        }
    }
    ctx->pc = 0x2883E4u;
    // 0x2883e4: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x2883e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x2883e8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2883e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2883ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2883ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2883f0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2883f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883f4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2883f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2883f8:
    // 0x2883f8: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2883F8u;
    {
        const bool branch_taken_0x2883f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2883FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2883F8u;
            // 0x2883fc: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2883f8) {
            ctx->pc = 0x288410u;
            goto label_288410;
        }
    }
    ctx->pc = 0x288400u;
    // 0x288400: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x288400u;
    {
        const bool branch_taken_0x288400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x288404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288400u;
            // 0x288404: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288400) {
            ctx->pc = 0x288418u;
            goto label_288418;
        }
    }
    ctx->pc = 0x288408u;
    // 0x288408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288408u;
    {
        const bool branch_taken_0x288408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288408u;
            // 0x28840c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288408) {
            ctx->pc = 0x288414u;
            goto label_288414;
        }
    }
    ctx->pc = 0x288410u;
label_288410:
    // 0x288410: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x288410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_288414:
    // 0x288414: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_288418:
    // 0x288418: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x288418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28841c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x28841Cu;
    {
        const bool branch_taken_0x28841c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x288420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28841Cu;
            // 0x288420: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28841c) {
            ctx->pc = 0x2883F8u;
            runtime->cooperativeGuestYield();
            goto label_2883f8;
        }
    }
    ctx->pc = 0x288424u;
label_288424:
    // 0x288424: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x288424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x288428: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x288428u;
    {
        const bool branch_taken_0x288428 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288428u;
            // 0x28842c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288428) {
            ctx->pc = 0x288474u;
            goto label_288474;
        }
    }
    ctx->pc = 0x288430u;
    // 0x288430: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288430u;
    {
        const bool branch_taken_0x288430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x288434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288430u;
            // 0x288434: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288430) {
            ctx->pc = 0x288448u;
            goto label_288448;
        }
    }
    ctx->pc = 0x288438u;
    // 0x288438: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288438u;
    {
        const bool branch_taken_0x288438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288438u;
            // 0x28843c: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288438) {
            ctx->pc = 0x288454u;
            goto label_288454;
        }
    }
    ctx->pc = 0x288440u;
    // 0x288440: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x288440u;
    {
        const bool branch_taken_0x288440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288440) {
            ctx->pc = 0x28847Cu;
            goto label_28847c;
        }
    }
    ctx->pc = 0x288448u;
label_288448:
    // 0x288448: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x288448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x28844c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28844Cu;
    {
        const bool branch_taken_0x28844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28844Cu;
            // 0x288450: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28844c) {
            ctx->pc = 0x28845Cu;
            goto label_28845c;
        }
    }
    ctx->pc = 0x288454u;
label_288454:
    // 0x288454: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x288454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x288458: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x288458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_28845c:
    // 0x28845c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28845cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x288460: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x288460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x288464: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x288464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x288468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x288468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28846c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x28846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x288470: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x288470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_288474:
    // 0x288474: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x288474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x288478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x288478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28847c:
    // 0x28847c: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28847Cu;
    {
        const bool branch_taken_0x28847c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x288480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28847Cu;
            // 0x288480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28847c) {
            ctx->pc = 0x2884C0u;
            goto label_2884c0;
        }
    }
    ctx->pc = 0x288484u;
    // 0x288484: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x288484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x288488: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x288488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x28848c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288490: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288490u;
    SET_GPR_U32(ctx, 31, 0x288498u);
    ctx->pc = 0x288494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288490u;
            // 0x288494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288498u; }
        if (ctx->pc != 0x288498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288498u; }
        if (ctx->pc != 0x288498u) { return; }
    }
    ctx->pc = 0x288498u;
    // 0x288498: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x288498u;
    {
        const bool branch_taken_0x288498 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288498u;
            // 0x28849c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288498) {
            ctx->pc = 0x2884BCu;
            goto label_2884bc;
        }
    }
    ctx->pc = 0x2884A0u;
    // 0x2884a0: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x2884a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2884a4: 0xc0a23f2  jal         func_288FC8
    ctx->pc = 0x2884A4u;
    SET_GPR_U32(ctx, 31, 0x2884ACu);
    ctx->pc = 0x2884A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2884A4u;
            // 0x2884a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288FC8u;
    if (runtime->hasFunction(0x288FC8u)) {
        auto targetFn = runtime->lookupFunction(0x288FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884ACu; }
        if (ctx->pc != 0x2884ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288FC8_0x288fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884ACu; }
        if (ctx->pc != 0x2884ACu) { return; }
    }
    ctx->pc = 0x2884ACu;
    // 0x2884ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2884acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884b0: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2884B0u;
    SET_GPR_U32(ctx, 31, 0x2884B8u);
    ctx->pc = 0x2884B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2884B0u;
            // 0x2884b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884B8u; }
        if (ctx->pc != 0x2884B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884B8u; }
        if (ctx->pc != 0x2884B8u) { return; }
    }
    ctx->pc = 0x2884B8u;
    // 0x2884b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2884b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2884bc:
    // 0x2884bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2884bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2884c0:
    // 0x2884c0: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2884C0u;
    SET_GPR_U32(ctx, 31, 0x2884C8u);
    ctx->pc = 0x2884C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2884C0u;
            // 0x2884c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884C8u; }
        if (ctx->pc != 0x2884C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884C8u; }
        if (ctx->pc != 0x2884C8u) { return; }
    }
    ctx->pc = 0x2884C8u;
    // 0x2884c8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2884C8u;
    {
        const bool branch_taken_0x2884c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2884CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884C8u;
            // 0x2884cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884c8) {
            ctx->pc = 0x288644u;
            goto label_288644;
        }
    }
    ctx->pc = 0x2884D0u;
    // 0x2884d0: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x2884d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x2884d4: 0x26f4ffff  addiu       $s4, $s7, -0x1
    ctx->pc = 0x2884d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x2884d8: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x2884d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2884dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2884DCu;
    {
        const bool branch_taken_0x2884dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2884E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884DCu;
            // 0x2884e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884dc) {
            ctx->pc = 0x288510u;
            goto label_288510;
        }
    }
    ctx->pc = 0x2884E4u;
    // 0x2884e4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2884e8: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x2884e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2884ec: 0x0  nop
    ctx->pc = 0x2884ecu;
    // NOP
label_2884f0:
    // 0x2884f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2884f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2884f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2884f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2884f8: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x2884f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x2884fc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2884fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x288500: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x288500u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x288504: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x288504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x288508: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288508u;
    {
        const bool branch_taken_0x288508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288508) {
            ctx->pc = 0x2884F0u;
            runtime->cooperativeGuestYield();
            goto label_2884f0;
        }
    }
    ctx->pc = 0x288510u;
label_288510:
    // 0x288510: 0x1620004c  bnez        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x288510u;
    {
        const bool branch_taken_0x288510 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x288514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288510u;
            // 0x288514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288510) {
            ctx->pc = 0x288644u;
            goto label_288644;
        }
    }
    ctx->pc = 0x288518u;
    // 0x288518: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x288518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x28851c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x28851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x288520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x288520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x288524: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x288524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288528: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x288528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28852c: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x28852Cu;
    {
        const bool branch_taken_0x28852c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28852Cu;
            // 0x288530: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28852c) {
            ctx->pc = 0x288564u;
            goto label_288564;
        }
    }
    ctx->pc = 0x288534u;
    // 0x288534: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x288534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x288538: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x288538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x28853c: 0x0  nop
    ctx->pc = 0x28853cu;
    // NOP
label_288540:
    // 0x288540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x288544: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x288544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x288548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x288548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28854c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x28854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x288550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288554: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x288554u;
    {
        const bool branch_taken_0x288554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x288554) {
            ctx->pc = 0x288540u;
            runtime->cooperativeGuestYield();
            goto label_288540;
        }
    }
    ctx->pc = 0x28855Cu;
    // 0x28855c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28855Cu;
    {
        const bool branch_taken_0x28855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28855Cu;
            // 0x288560: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28855c) {
            ctx->pc = 0x28856Cu;
            goto label_28856c;
        }
    }
    ctx->pc = 0x288564u;
label_288564:
    // 0x288564: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x288564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x288568: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x288568u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_28856c:
    // 0x28856c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28856cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288570: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x288570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x288574: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x288574u;
    {
        const bool branch_taken_0x288574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288574u;
            // 0x288578: 0xafb70250  sw          $s7, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288574) {
            ctx->pc = 0x28863Cu;
            goto label_28863c;
        }
    }
    ctx->pc = 0x28857Cu;
    // 0x28857c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288580: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x288584: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_288588:
    // 0x288588: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x288588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x28858c: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x288590: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x288590u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x288594: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x288594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x288598: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x288598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x28859c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28859cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2885a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2885a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2885a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2885a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2885a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885ac: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x2885ACu;
    SET_GPR_U32(ctx, 31, 0x2885B4u);
    ctx->pc = 0x2885B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2885ACu;
            // 0x2885b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885B4u; }
        if (ctx->pc != 0x2885B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885B4u; }
        if (ctx->pc != 0x2885B4u) { return; }
    }
    ctx->pc = 0x2885B4u;
    // 0x2885b4: 0x16e00017  bnez        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x2885B4u;
    {
        const bool branch_taken_0x2885b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2885B4u;
            // 0x2885b8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885b4) {
            ctx->pc = 0x288614u;
            goto label_288614;
        }
    }
    ctx->pc = 0x2885BCu;
    // 0x2885bc: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2885c0: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x2885c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2885c4: 0x0  nop
    ctx->pc = 0x2885c4u;
    // NOP
label_2885c8:
    // 0x2885c8: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x2885c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2885cc: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x2885ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x2885d0: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2885d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2885d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2885d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2885d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2885d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2885dc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2885dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2885e0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2885e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2885e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2885e8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2885E8u;
    SET_GPR_U32(ctx, 31, 0x2885F0u);
    ctx->pc = 0x2885ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2885E8u;
            // 0x2885ec: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885F0u; }
        if (ctx->pc != 0x2885F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885F0u; }
        if (ctx->pc != 0x2885F0u) { return; }
    }
    ctx->pc = 0x2885F0u;
    // 0x2885f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2885f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885f4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2885F4u;
    SET_GPR_U32(ctx, 31, 0x2885FCu);
    ctx->pc = 0x2885F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2885F4u;
            // 0x2885f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885FCu; }
        if (ctx->pc != 0x2885FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2885FCu; }
        if (ctx->pc != 0x2885FCu) { return; }
    }
    ctx->pc = 0x2885FCu;
    // 0x2885fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2885fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288600: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x288600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x288604: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x288604u;
    {
        const bool branch_taken_0x288604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288604u;
            // 0x288608: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288604) {
            ctx->pc = 0x2885C8u;
            runtime->cooperativeGuestYield();
            goto label_2885c8;
        }
    }
    ctx->pc = 0x28860Cu;
    // 0x28860c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28860Cu;
    {
        const bool branch_taken_0x28860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28860Cu;
            // 0x288610: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28860c) {
            ctx->pc = 0x288624u;
            goto label_288624;
        }
    }
    ctx->pc = 0x288614u;
label_288614:
    // 0x288614: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x288614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x288618: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x288618u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28861c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x28861cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x288620: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x288620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_288624:
    // 0x288624: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x288624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x288628: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x288628u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x28862c: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x28862cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x288630: 0x114102a  slt         $v0, $t0, $s4
    ctx->pc = 0x288630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x288634: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x288634u;
    {
        const bool branch_taken_0x288634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288634u;
            // 0x288638: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288634) {
            ctx->pc = 0x288588u;
            runtime->cooperativeGuestYield();
            goto label_288588;
        }
    }
    ctx->pc = 0x28863Cu;
label_28863c:
    // 0x28863c: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x28863Cu;
    {
        const bool branch_taken_0x28863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28863Cu;
            // 0x288640: 0x8fb70250  lw          $s7, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28863c) {
            ctx->pc = 0x288230u;
            runtime->cooperativeGuestYield();
            goto label_288230;
        }
    }
    ctx->pc = 0x288644u;
label_288644:
    // 0x288644: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x288644u;
    SET_GPR_U32(ctx, 31, 0x28864Cu);
    ctx->pc = 0x288648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288644u;
            // 0x288648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28864Cu; }
        if (ctx->pc != 0x28864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28864Cu; }
        if (ctx->pc != 0x28864Cu) { return; }
    }
    ctx->pc = 0x28864Cu;
    // 0x28864c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28864Cu;
    {
        const bool branch_taken_0x28864c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28864Cu;
            // 0x288650: 0x8fa60248  lw          $a2, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28864c) {
            ctx->pc = 0x2886A8u;
            goto label_2886a8;
        }
    }
    ctx->pc = 0x288654u;
    // 0x288654: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x288654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x288658: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x288658u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x28865c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x28865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x288660: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x288660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x288664: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x288664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x288668: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x288668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x28866c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288670: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x288670u;
    {
        const bool branch_taken_0x288670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288670u;
            // 0x288674: 0x32730007  andi        $s3, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288670) {
            ctx->pc = 0x28876Cu;
            goto label_28876c;
        }
    }
    ctx->pc = 0x288678u;
    // 0x288678: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x288678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x28867c: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x28867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_288680:
    // 0x288680: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x288680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x288684: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x288684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x288688: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x288688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x28868c: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x28868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x288690: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x288690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288694: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x288694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288698: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288698u;
    {
        const bool branch_taken_0x288698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288698u;
            // 0x28869c: 0x8fa30248  lw          $v1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288698) {
            ctx->pc = 0x288680u;
            runtime->cooperativeGuestYield();
            goto label_288680;
        }
    }
    ctx->pc = 0x2886A0u;
    // 0x2886a0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2886A0u;
    {
        const bool branch_taken_0x2886a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2886a0) {
            ctx->pc = 0x288770u;
            goto label_288770;
        }
    }
    ctx->pc = 0x2886A8u;
label_2886a8:
    // 0x2886a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2886a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886ac: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x2886acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x2886b0: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x2886b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x2886b4: 0xc0a23f2  jal         func_288FC8
    ctx->pc = 0x2886B4u;
    SET_GPR_U32(ctx, 31, 0x2886BCu);
    ctx->pc = 0x2886B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886B4u;
            // 0x2886b8: 0x62823  negu        $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288FC8u;
    if (runtime->hasFunction(0x288FC8u)) {
        auto targetFn = runtime->lookupFunction(0x288FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886BCu; }
        if (ctx->pc != 0x2886BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288FC8_0x288fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886BCu; }
        if (ctx->pc != 0x2886BCu) { return; }
    }
    ctx->pc = 0x2886BCu;
    // 0x2886bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2886bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2886c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886c4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x2886C4u;
    SET_GPR_U32(ctx, 31, 0x2886CCu);
    ctx->pc = 0x2886C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886C4u;
            // 0x2886c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886CCu; }
        if (ctx->pc != 0x2886CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886CCu; }
        if (ctx->pc != 0x2886CCu) { return; }
    }
    ctx->pc = 0x2886CCu;
    // 0x2886cc: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2886CCu;
    {
        const bool branch_taken_0x2886cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2886D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886CCu;
            // 0x2886d0: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886cc) {
            ctx->pc = 0x288748u;
            goto label_288748;
        }
    }
    ctx->pc = 0x2886D4u;
    // 0x2886d4: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x2886d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x2886d8: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x2886d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x2886dc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2886dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2886e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2886e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886e4: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x2886e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x2886e8: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x2886e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x2886ec: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2886ECu;
    SET_GPR_U32(ctx, 31, 0x2886F4u);
    ctx->pc = 0x2886F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886ECu;
            // 0x2886f0: 0xafa80248  sw          $t0, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886F4u; }
        if (ctx->pc != 0x2886F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886F4u; }
        if (ctx->pc != 0x2886F4u) { return; }
    }
    ctx->pc = 0x2886F4u;
    // 0x2886f4: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x2886F4u;
    SET_GPR_U32(ctx, 31, 0x2886FCu);
    ctx->pc = 0x2886F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886F4u;
            // 0x2886f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886FCu; }
        if (ctx->pc != 0x2886FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2886FCu; }
        if (ctx->pc != 0x2886FCu) { return; }
    }
    ctx->pc = 0x2886FCu;
    // 0x2886fc: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x2886FCu;
    SET_GPR_U32(ctx, 31, 0x288704u);
    ctx->pc = 0x288700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886FCu;
            // 0x288700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288704u; }
        if (ctx->pc != 0x288704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288704u; }
        if (ctx->pc != 0x288704u) { return; }
    }
    ctx->pc = 0x288704u;
    // 0x288704: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28870c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x28870cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x288710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x288710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288714: 0x3a28821  addu        $s1, $sp, $v0
    ctx->pc = 0x288714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288718: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x288718u;
    SET_GPR_U32(ctx, 31, 0x288720u);
    ctx->pc = 0x28871Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288718u;
            // 0x28871c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288720u; }
        if (ctx->pc != 0x288720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288720u; }
        if (ctx->pc != 0x288720u) { return; }
    }
    ctx->pc = 0x288720u;
    // 0x288720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288724: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288724u;
    SET_GPR_U32(ctx, 31, 0x28872Cu);
    ctx->pc = 0x288728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288724u;
            // 0x288728: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28872Cu; }
        if (ctx->pc != 0x28872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28872Cu; }
        if (ctx->pc != 0x28872Cu) { return; }
    }
    ctx->pc = 0x28872Cu;
    // 0x28872c: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x28872Cu;
    SET_GPR_U32(ctx, 31, 0x288734u);
    ctx->pc = 0x288730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28872Cu;
            // 0x288730: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288734u; }
        if (ctx->pc != 0x288734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288734u; }
        if (ctx->pc != 0x288734u) { return; }
    }
    ctx->pc = 0x288734u;
    // 0x288734: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x288738: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x288738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28873c: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x28873cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x288740: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288740u;
    {
        const bool branch_taken_0x288740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288740u;
            // 0x288744: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288740) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x288748u;
label_288748:
    // 0x288748: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x288748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x28874c: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x28874cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x288750: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x288750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x288754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288758: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x288758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_28875c:
    // 0x28875c: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x28875Cu;
    SET_GPR_U32(ctx, 31, 0x288764u);
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288764u; }
        if (ctx->pc != 0x288764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288764u; }
        if (ctx->pc != 0x288764u) { return; }
    }
    ctx->pc = 0x288764u;
    // 0x288764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288764u;
    {
        const bool branch_taken_0x288764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288764u;
            // 0x288768: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288764) {
            ctx->pc = 0x288770u;
            goto label_288770;
        }
    }
    ctx->pc = 0x28876Cu;
label_28876c:
    // 0x28876c: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x28876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_288770:
    // 0x288770: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x288770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x288774: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x288774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x288778: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x288778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28877c: 0xc0a23f2  jal         func_288FC8
    ctx->pc = 0x28877Cu;
    SET_GPR_U32(ctx, 31, 0x288784u);
    ctx->pc = 0x288780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28877Cu;
            // 0x288780: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288FC8u;
    if (runtime->hasFunction(0x288FC8u)) {
        auto targetFn = runtime->lookupFunction(0x288FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288784u; }
        if (ctx->pc != 0x288784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288FC8_0x288fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288784u; }
        if (ctx->pc != 0x288784u) { return; }
    }
    ctx->pc = 0x288784u;
    // 0x288784: 0x6800015  bltz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x288784u;
    {
        const bool branch_taken_0x288784 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x288788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288784u;
            // 0x288788: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288784) {
            ctx->pc = 0x2887DCu;
            goto label_2887dc;
        }
    }
    ctx->pc = 0x28878Cu;
    // 0x28878c: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x28878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x288790: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x288794: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x288794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x288798: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x288798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28879c: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x28879cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2887a0:
    // 0x2887a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2887a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2887a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2887a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2887a8: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x2887A8u;
    SET_GPR_U32(ctx, 31, 0x2887B0u);
    ctx->pc = 0x2887ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2887A8u;
            // 0x2887ac: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887B0u; }
        if (ctx->pc != 0x2887B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887B0u; }
        if (ctx->pc != 0x2887B0u) { return; }
    }
    ctx->pc = 0x2887B0u;
    // 0x2887b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2887b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887b4: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2887B4u;
    SET_GPR_U32(ctx, 31, 0x2887BCu);
    ctx->pc = 0x2887B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2887B4u;
            // 0x2887b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887BCu; }
        if (ctx->pc != 0x2887BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887BCu; }
        if (ctx->pc != 0x2887BCu) { return; }
    }
    ctx->pc = 0x2887BCu;
    // 0x2887bc: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x2887bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x2887c0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2887c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2887c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2887c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887c8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x2887C8u;
    SET_GPR_U32(ctx, 31, 0x2887D0u);
    ctx->pc = 0x2887CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2887C8u;
            // 0x2887cc: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887D0u; }
        if (ctx->pc != 0x2887D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887D0u; }
        if (ctx->pc != 0x2887D0u) { return; }
    }
    ctx->pc = 0x2887D0u;
    // 0x2887d0: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x2887d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x2887d4: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x2887D4u;
    {
        const bool branch_taken_0x2887d4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2887D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2887D4u;
            // 0x2887d8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887d4) {
            ctx->pc = 0x2887A0u;
            runtime->cooperativeGuestYield();
            goto label_2887a0;
        }
    }
    ctx->pc = 0x2887DCu;
label_2887dc:
    // 0x2887dc: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2887dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887e0: 0x682002c  bltzl       $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x2887E0u;
    {
        const bool branch_taken_0x2887e0 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2887e0) {
            ctx->pc = 0x2887E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2887E0u;
            // 0x2887e4: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288894u;
            goto label_288894;
        }
    }
    ctx->pc = 0x2887E8u;
    // 0x2887e8: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2887e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2887ec: 0x0  nop
    ctx->pc = 0x2887ecu;
    // NOP
label_2887f0:
    // 0x2887f0: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2887f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2887f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2887f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887f8: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2887F8u;
    {
        const bool branch_taken_0x2887f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2887FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2887F8u;
            // 0x2887fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2887f8) {
            ctx->pc = 0x288874u;
            goto label_288874;
        }
    }
    ctx->pc = 0x288800u;
    // 0x288800: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x288800u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x288804: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x288804u;
    {
        const bool branch_taken_0x288804 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x288808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288804u;
            // 0x288808: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288804) {
            ctx->pc = 0x288878u;
            goto label_288878;
        }
    }
    ctx->pc = 0x28880Cu;
    // 0x28880c: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x28880cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x288810: 0x3c1e002c  lui         $fp, 0x2C
    ctx->pc = 0x288810u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)44 << 16));
    // 0x288814: 0x0  nop
    ctx->pc = 0x288814u;
    // NOP
label_288818:
    // 0x288818: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x288818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x28881c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x28881cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x288820: 0x27c258f8  addiu       $v0, $fp, 0x58F8
    ctx->pc = 0x288820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 22776));
    // 0x288824: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x288824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x288828: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x288828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28882c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28882cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x288830: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x288830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x288834: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x288834u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x288838: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x288838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28883c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28883Cu;
    SET_GPR_U32(ctx, 31, 0x288844u);
    ctx->pc = 0x288840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28883Cu;
            // 0x288840: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288844u; }
        if (ctx->pc != 0x288844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288844u; }
        if (ctx->pc != 0x288844u) { return; }
    }
    ctx->pc = 0x288844u;
    // 0x288844: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x288844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288848: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288848u;
    SET_GPR_U32(ctx, 31, 0x288850u);
    ctx->pc = 0x28884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288848u;
            // 0x28884c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288850u; }
        if (ctx->pc != 0x288850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288850u; }
        if (ctx->pc != 0x288850u) { return; }
    }
    ctx->pc = 0x288850u;
    // 0x288850: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x288850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x288854: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288858: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x288858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28885c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28885Cu;
    {
        const bool branch_taken_0x28885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28885Cu;
            // 0x288860: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28885c) {
            ctx->pc = 0x28887Cu;
            goto label_28887c;
        }
    }
    ctx->pc = 0x288864u;
    // 0x288864: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x288864u;
    {
        const bool branch_taken_0x288864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288864u;
            // 0x288868: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288864) {
            ctx->pc = 0x288818u;
            runtime->cooperativeGuestYield();
            goto label_288818;
        }
    }
    ctx->pc = 0x28886Cu;
    // 0x28886c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28886Cu;
    {
        const bool branch_taken_0x28886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28886Cu;
            // 0x288870: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28886c) {
            ctx->pc = 0x288884u;
            goto label_288884;
        }
    }
    ctx->pc = 0x288874u;
label_288874:
    // 0x288874: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x288874u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_288878:
    // 0x288878: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x288878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28887c:
    // 0x28887c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28887cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x288880: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x288880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288884:
    // 0x288884: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x288884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x288888: 0x681ffd9  bgez        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x288888u;
    {
        const bool branch_taken_0x288888 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x28888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288888u;
            // 0x28888c: 0xfc560000  sd          $s6, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288888) {
            ctx->pc = 0x2887F0u;
            runtime->cooperativeGuestYield();
            goto label_2887f0;
        }
    }
    ctx->pc = 0x288890u;
    // 0x288890: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x288890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_288894:
    // 0x288894: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288894u;
    {
        const bool branch_taken_0x288894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288894u;
            // 0x288898: 0x8fa30238  lw          $v1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288894) {
            ctx->pc = 0x2888B4u;
            goto label_2888b4;
        }
    }
    ctx->pc = 0x28889Cu;
    // 0x28889c: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x28889Cu;
    {
        const bool branch_taken_0x28889c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2888A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28889Cu;
            // 0x2888a0: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28889c) {
            ctx->pc = 0x288924u;
            goto label_288924;
        }
    }
    ctx->pc = 0x2888A4u;
    // 0x2888a4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2888A4u;
    {
        const bool branch_taken_0x2888a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888A4u;
            // 0x2888a8: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888a4) {
            ctx->pc = 0x2888CCu;
            goto label_2888cc;
        }
    }
    ctx->pc = 0x2888ACu;
    // 0x2888ac: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2888ACu;
    {
        const bool branch_taken_0x2888ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888ACu;
            // 0x2888b0: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888ac) {
            ctx->pc = 0x288B8Cu;
            goto label_288b8c;
        }
    }
    ctx->pc = 0x2888B4u;
label_2888b4:
    // 0x2888b4: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x2888b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2888b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2888b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2888bc: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2888BCu;
    {
        const bool branch_taken_0x2888bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2888C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888BCu;
            // 0x2888c0: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888bc) {
            ctx->pc = 0x288A00u;
            goto label_288a00;
        }
    }
    ctx->pc = 0x2888C4u;
    // 0x2888c4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2888C4u;
    {
        const bool branch_taken_0x2888c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888C4u;
            // 0x2888c8: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888c4) {
            ctx->pc = 0x288B8Cu;
            goto label_288b8c;
        }
    }
    ctx->pc = 0x2888CCu;
label_2888cc:
    // 0x2888cc: 0x680000a  bltz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2888CCu;
    {
        const bool branch_taken_0x2888cc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2888D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888CCu;
            // 0x2888d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888cc) {
            ctx->pc = 0x2888F8u;
            goto label_2888f8;
        }
    }
    ctx->pc = 0x2888D4u;
    // 0x2888d4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2888d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2888d8:
    // 0x2888d8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2888dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2888dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2888e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2888e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2888e4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2888e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2888e8: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2888E8u;
    SET_GPR_U32(ctx, 31, 0x2888F0u);
    ctx->pc = 0x2888ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2888E8u;
            // 0x2888ec: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2888F0u; }
        if (ctx->pc != 0x2888F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2888F0u; }
        if (ctx->pc != 0x2888F0u) { return; }
    }
    ctx->pc = 0x2888F0u;
    // 0x2888f0: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2888F0u;
    {
        const bool branch_taken_0x2888f0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2888F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2888F0u;
            // 0x2888f4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888f0) {
            ctx->pc = 0x2888D8u;
            runtime->cooperativeGuestYield();
            goto label_2888d8;
        }
    }
    ctx->pc = 0x2888F8u;
label_2888f8:
    // 0x2888f8: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2888f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2888fc: 0xfcb60000  sd          $s6, 0x0($a1)
    ctx->pc = 0x2888fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 22));
    // 0x288900: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x288900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x288904: 0x10c000a0  beqz        $a2, . + 4 + (0xA0 << 2)
    ctx->pc = 0x288904u;
    {
        const bool branch_taken_0x288904 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x288908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288904u;
            // 0x288908: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288904) {
            ctx->pc = 0x288B88u;
            goto label_288b88;
        }
    }
    ctx->pc = 0x28890Cu;
    // 0x28890c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288910: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288910u;
    SET_GPR_U32(ctx, 31, 0x288918u);
    ctx->pc = 0x288914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288910u;
            // 0x288914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288918u; }
        if (ctx->pc != 0x288918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288918u; }
        if (ctx->pc != 0x288918u) { return; }
    }
    ctx->pc = 0x288918u;
    // 0x288918: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x288918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x28891c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x28891Cu;
    {
        const bool branch_taken_0x28891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28891Cu;
            // 0x288920: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28891c) {
            ctx->pc = 0x288B84u;
            goto label_288b84;
        }
    }
    ctx->pc = 0x288924u;
label_288924:
    // 0x288924: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x288924u;
    {
        const bool branch_taken_0x288924 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x288928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288924u;
            // 0x288928: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288924) {
            ctx->pc = 0x288960u;
            goto label_288960;
        }
    }
    ctx->pc = 0x28892Cu;
    // 0x28892c: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x28892cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x288930: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x288930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x288934: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x288934u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
label_288938:
    // 0x288938: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x288938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28893c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288940: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x288940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x288944: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x288944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x288948: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288948u;
    SET_GPR_U32(ctx, 31, 0x288950u);
    ctx->pc = 0x28894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288948u;
            // 0x28894c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288950u; }
        if (ctx->pc != 0x288950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288950u; }
        if (ctx->pc != 0x288950u) { return; }
    }
    ctx->pc = 0x288950u;
    // 0x288950: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x288950u;
    {
        const bool branch_taken_0x288950 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x288954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288950u;
            // 0x288954: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288950) {
            ctx->pc = 0x288938u;
            runtime->cooperativeGuestYield();
            goto label_288938;
        }
    }
    ctx->pc = 0x288958u;
    // 0x288958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x288958u;
    {
        const bool branch_taken_0x288958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288958u;
            // 0x28895c: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288958) {
            ctx->pc = 0x28896Cu;
            goto label_28896c;
        }
    }
    ctx->pc = 0x288960u;
label_288960:
    // 0x288960: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x288960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x288964: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x288964u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x288968: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x288968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_28896c:
    // 0x28896c: 0xfc560000  sd          $s6, 0x0($v0)
    ctx->pc = 0x28896cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
    // 0x288970: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x288970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x288974: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x288974u;
    {
        const bool branch_taken_0x288974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288974u;
            // 0x288978: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288974) {
            ctx->pc = 0x28898Cu;
            goto label_28898c;
        }
    }
    ctx->pc = 0x28897Cu;
    // 0x28897c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28897Cu;
    SET_GPR_U32(ctx, 31, 0x288984u);
    ctx->pc = 0x288980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28897Cu;
            // 0x288980: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288984u; }
        if (ctx->pc != 0x288984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288984u; }
        if (ctx->pc != 0x288984u) { return; }
    }
    ctx->pc = 0x288984u;
    // 0x288984: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x288984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x288988: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x288988u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_28898c:
    // 0x28898c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288990: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288990u;
    SET_GPR_U32(ctx, 31, 0x288998u);
    ctx->pc = 0x288994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288990u;
            // 0x288994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288998u; }
        if (ctx->pc != 0x288998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288998u; }
        if (ctx->pc != 0x288998u) { return; }
    }
    ctx->pc = 0x288998u;
    // 0x288998: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x288998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28899c: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x28899Cu;
    {
        const bool branch_taken_0x28899c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2889A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28899Cu;
            // 0x2889a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28899c) {
            ctx->pc = 0x2889D4u;
            goto label_2889d4;
        }
    }
    ctx->pc = 0x2889A4u;
    // 0x2889a4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2889a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2889a8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2889a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2889ac: 0x0  nop
    ctx->pc = 0x2889acu;
    // NOP
label_2889b0:
    // 0x2889b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2889b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2889b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2889b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2889b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2889bc: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x2889BCu;
    SET_GPR_U32(ctx, 31, 0x2889C4u);
    ctx->pc = 0x2889C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2889BCu;
            // 0x2889c0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2889C4u; }
        if (ctx->pc != 0x2889C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2889C4u; }
        if (ctx->pc != 0x2889C4u) { return; }
    }
    ctx->pc = 0x2889C4u;
    // 0x2889c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2889c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889c8: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x2889c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2889cc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2889CCu;
    {
        const bool branch_taken_0x2889cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889CCu;
            // 0x2889d0: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889cc) {
            ctx->pc = 0x2889B0u;
            runtime->cooperativeGuestYield();
            goto label_2889b0;
        }
    }
    ctx->pc = 0x2889D4u;
label_2889d4:
    // 0x2889d4: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2889d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2889d8: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x2889d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x2889dc: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x2889dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2889e0: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x2889E0u;
    {
        const bool branch_taken_0x2889e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889E0u;
            // 0x2889e4: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889e0) {
            ctx->pc = 0x288B88u;
            goto label_288b88;
        }
    }
    ctx->pc = 0x2889E8u;
    // 0x2889e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2889e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889ec: 0xc0a1254  jal         func_284950
    ctx->pc = 0x2889ECu;
    SET_GPR_U32(ctx, 31, 0x2889F4u);
    ctx->pc = 0x2889F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2889ECu;
            // 0x2889f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2889F4u; }
        if (ctx->pc != 0x2889F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2889F4u; }
        if (ctx->pc != 0x2889F4u) { return; }
    }
    ctx->pc = 0x2889F4u;
    // 0x2889f4: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x2889f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2889f8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2889F8u;
    {
        const bool branch_taken_0x2889f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2889F8u;
            // 0x2889fc: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889f8) {
            ctx->pc = 0x288B84u;
            goto label_288b84;
        }
    }
    ctx->pc = 0x288A00u;
label_288a00:
    // 0x288a00: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x288a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a04: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x288A04u;
    {
        const bool branch_taken_0x288a04 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x288A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A04u;
            // 0x288a08: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a04) {
            ctx->pc = 0x288A6Cu;
            goto label_288a6c;
        }
    }
    ctx->pc = 0x288A0Cu;
    // 0x288a0c: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x288a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_288a10:
    // 0x288a10: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x288a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x288a14: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x288a14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x288a18: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x288a18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288a1c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x288a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x288a20: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x288a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x288a24: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x288a24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288a28: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x288a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x288a2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x288a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a34: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288A34u;
    SET_GPR_U32(ctx, 31, 0x288A3Cu);
    ctx->pc = 0x288A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288A34u;
            // 0x288a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A3Cu; }
        if (ctx->pc != 0x288A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A3Cu; }
        if (ctx->pc != 0x288A3Cu) { return; }
    }
    ctx->pc = 0x288A3Cu;
    // 0x288a3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288a3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a44: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288A44u;
    SET_GPR_U32(ctx, 31, 0x288A4Cu);
    ctx->pc = 0x288A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288A44u;
            // 0x288a48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A4Cu; }
        if (ctx->pc != 0x288A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A4Cu; }
        if (ctx->pc != 0x288A4Cu) { return; }
    }
    ctx->pc = 0x288A4Cu;
    // 0x288a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a50: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288A50u;
    SET_GPR_U32(ctx, 31, 0x288A58u);
    ctx->pc = 0x288A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288A50u;
            // 0x288a54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A58u; }
        if (ctx->pc != 0x288A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288A58u; }
        if (ctx->pc != 0x288A58u) { return; }
    }
    ctx->pc = 0x288A58u;
    // 0x288a58: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x288a58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x288a5c: 0x1e80ffec  bgtz        $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x288A5Cu;
    {
        const bool branch_taken_0x288a5c = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x288A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288A5Cu;
            // 0x288a60: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a5c) {
            ctx->pc = 0x288A10u;
            runtime->cooperativeGuestYield();
            goto label_288a10;
        }
    }
    ctx->pc = 0x288A64u;
    // 0x288a64: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x288a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a68: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x288a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_288a6c:
    // 0x288a6c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x288A6Cu;
    {
        const bool branch_taken_0x288a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288a6c) {
            ctx->pc = 0x288A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x288A6Cu;
            // 0x288a70: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x288AD4u;
            goto label_288ad4;
        }
    }
    ctx->pc = 0x288A74u;
    // 0x288a74: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x288a74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_288a78:
    // 0x288a78: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x288a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x288a7c: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x288a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x288a80: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x288a80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288a84: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x288a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x288a88: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x288a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x288a8c: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x288a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288a90: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x288a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x288a94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x288a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a9c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288A9Cu;
    SET_GPR_U32(ctx, 31, 0x288AA4u);
    ctx->pc = 0x288AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288A9Cu;
            // 0x288aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AA4u; }
        if (ctx->pc != 0x288AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AA4u; }
        if (ctx->pc != 0x288AA4u) { return; }
    }
    ctx->pc = 0x288AA4u;
    // 0x288aa4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288aa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288aac: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288AACu;
    SET_GPR_U32(ctx, 31, 0x288AB4u);
    ctx->pc = 0x288AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288AACu;
            // 0x288ab0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AB4u; }
        if (ctx->pc != 0x288AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AB4u; }
        if (ctx->pc != 0x288AB4u) { return; }
    }
    ctx->pc = 0x288AB4u;
    // 0x288ab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ab8: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288AB8u;
    SET_GPR_U32(ctx, 31, 0x288AC0u);
    ctx->pc = 0x288ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288AB8u;
            // 0x288abc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AC0u; }
        if (ctx->pc != 0x288AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288AC0u; }
        if (ctx->pc != 0x288AC0u) { return; }
    }
    ctx->pc = 0x288AC0u;
    // 0x288ac0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x288ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x288ac4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x288ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288ac8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x288AC8u;
    {
        const bool branch_taken_0x288ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288AC8u;
            // 0x288acc: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ac8) {
            ctx->pc = 0x288A78u;
            runtime->cooperativeGuestYield();
            goto label_288a78;
        }
    }
    ctx->pc = 0x288AD0u;
    // 0x288ad0: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x288ad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_288ad4:
    // 0x288ad4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x288ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288ad8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288AD8u;
    {
        const bool branch_taken_0x288ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288AD8u;
            // 0x288adc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ad8) {
            ctx->pc = 0x288B20u;
            goto label_288b20;
        }
    }
    ctx->pc = 0x288AE0u;
    // 0x288ae0: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x288ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x288ae4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x288ae4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x288ae8: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x288ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x288aec: 0x0  nop
    ctx->pc = 0x288aecu;
    // NOP
label_288af0:
    // 0x288af0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x288af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x288af4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x288af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288af8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x288af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x288afc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x288afcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x288b00: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x288B00u;
    SET_GPR_U32(ctx, 31, 0x288B08u);
    ctx->pc = 0x288B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288B00u;
            // 0x288b04: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B08u; }
        if (ctx->pc != 0x288B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B08u; }
        if (ctx->pc != 0x288B08u) { return; }
    }
    ctx->pc = 0x288B08u;
    // 0x288b08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288b08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b0c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x288b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x288b10: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288B10u;
    {
        const bool branch_taken_0x288b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B10u;
            // 0x288b14: 0x8fa2024c  lw          $v0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b10) {
            ctx->pc = 0x288AF0u;
            runtime->cooperativeGuestYield();
            goto label_288af0;
        }
    }
    ctx->pc = 0x288B18u;
    // 0x288b18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x288B18u;
    {
        const bool branch_taken_0x288b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288b18) {
            ctx->pc = 0x288B2Cu;
            goto label_288b2c;
        }
    }
    ctx->pc = 0x288B20u;
label_288b20:
    // 0x288b20: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x288b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x288b24: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x288b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x288b28: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x288b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_288b2c:
    // 0x288b2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288B2Cu;
    {
        const bool branch_taken_0x288b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B2Cu;
            // 0x288b30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b2c) {
            ctx->pc = 0x288B48u;
            goto label_288b48;
        }
    }
    ctx->pc = 0x288B34u;
    // 0x288b34: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x288b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x288b38: 0xfc760010  sd          $s6, 0x10($v1)
    ctx->pc = 0x288b38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 22));
    // 0x288b3c: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x288b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x288b40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x288B40u;
    {
        const bool branch_taken_0x288b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288B40u;
            // 0x288b44: 0xfc720008  sd          $s2, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b40) {
            ctx->pc = 0x288B84u;
            goto label_288b84;
        }
    }
    ctx->pc = 0x288B48u;
label_288b48:
    // 0x288b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b4c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288B4Cu;
    SET_GPR_U32(ctx, 31, 0x288B54u);
    ctx->pc = 0x288B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288B4Cu;
            // 0x288b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B54u; }
        if (ctx->pc != 0x288B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B54u; }
        if (ctx->pc != 0x288B54u) { return; }
    }
    ctx->pc = 0x288B54u;
    // 0x288b54: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x288b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x288b58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b5c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x288b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x288b60: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288B60u;
    SET_GPR_U32(ctx, 31, 0x288B68u);
    ctx->pc = 0x288B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288B60u;
            // 0x288b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B68u; }
        if (ctx->pc != 0x288B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B68u; }
        if (ctx->pc != 0x288B68u) { return; }
    }
    ctx->pc = 0x288B68u;
    // 0x288b68: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x288b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x288b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b70: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x288b70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x288b74: 0xc0a1254  jal         func_284950
    ctx->pc = 0x288B74u;
    SET_GPR_U32(ctx, 31, 0x288B7Cu);
    ctx->pc = 0x288B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288B74u;
            // 0x288b78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B7Cu; }
        if (ctx->pc != 0x288B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288B7Cu; }
        if (ctx->pc != 0x288B7Cu) { return; }
    }
    ctx->pc = 0x288B7Cu;
    // 0x288b7c: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x288b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x288b80: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x288b80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_288b84:
    // 0x288b84: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x288b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_288b88:
    // 0x288b88: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x288b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_288b8c:
    // 0x288b8c: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x288b8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x288b90: 0xdfb702e0  ld          $s7, 0x2E0($sp)
    ctx->pc = 0x288b90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x288b94: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x288b94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x288b98: 0xdfb502c0  ld          $s5, 0x2C0($sp)
    ctx->pc = 0x288b98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x288b9c: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x288b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x288ba0: 0xdfb302a0  ld          $s3, 0x2A0($sp)
    ctx->pc = 0x288ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x288ba4: 0xdfb20290  ld          $s2, 0x290($sp)
    ctx->pc = 0x288ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x288ba8: 0xdfb10280  ld          $s1, 0x280($sp)
    ctx->pc = 0x288ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x288bac: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x288bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x288bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x288BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288BB0u;
            // 0x288bb4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2880C8u: goto label_2880c8;
            case 0x288120u: goto label_288120;
            case 0x288148u: goto label_288148;
            case 0x288150u: goto label_288150;
            case 0x288168u: goto label_288168;
            case 0x28818Cu: goto label_28818c;
            case 0x2881A0u: goto label_2881a0;
            case 0x2881B8u: goto label_2881b8;
            case 0x288204u: goto label_288204;
            case 0x288214u: goto label_288214;
            case 0x28822Cu: goto label_28822c;
            case 0x288230u: goto label_288230;
            case 0x288258u: goto label_288258;
            case 0x2882C8u: goto label_2882c8;
            case 0x288380u: goto label_288380;
            case 0x2883A8u: goto label_2883a8;
            case 0x2883CCu: goto label_2883cc;
            case 0x2883F8u: goto label_2883f8;
            case 0x288410u: goto label_288410;
            case 0x288414u: goto label_288414;
            case 0x288418u: goto label_288418;
            case 0x288424u: goto label_288424;
            case 0x288448u: goto label_288448;
            case 0x288454u: goto label_288454;
            case 0x28845Cu: goto label_28845c;
            case 0x288474u: goto label_288474;
            case 0x28847Cu: goto label_28847c;
            case 0x2884BCu: goto label_2884bc;
            case 0x2884C0u: goto label_2884c0;
            case 0x2884F0u: goto label_2884f0;
            case 0x288510u: goto label_288510;
            case 0x288540u: goto label_288540;
            case 0x288564u: goto label_288564;
            case 0x28856Cu: goto label_28856c;
            case 0x288588u: goto label_288588;
            case 0x2885C8u: goto label_2885c8;
            case 0x288614u: goto label_288614;
            case 0x288624u: goto label_288624;
            case 0x28863Cu: goto label_28863c;
            case 0x288644u: goto label_288644;
            case 0x288680u: goto label_288680;
            case 0x2886A8u: goto label_2886a8;
            case 0x288748u: goto label_288748;
            case 0x28875Cu: goto label_28875c;
            case 0x28876Cu: goto label_28876c;
            case 0x288770u: goto label_288770;
            case 0x2887A0u: goto label_2887a0;
            case 0x2887DCu: goto label_2887dc;
            case 0x2887F0u: goto label_2887f0;
            case 0x288818u: goto label_288818;
            case 0x288874u: goto label_288874;
            case 0x288878u: goto label_288878;
            case 0x28887Cu: goto label_28887c;
            case 0x288884u: goto label_288884;
            case 0x288894u: goto label_288894;
            case 0x2888B4u: goto label_2888b4;
            case 0x2888CCu: goto label_2888cc;
            case 0x2888D8u: goto label_2888d8;
            case 0x2888F8u: goto label_2888f8;
            case 0x288924u: goto label_288924;
            case 0x288938u: goto label_288938;
            case 0x288960u: goto label_288960;
            case 0x28896Cu: goto label_28896c;
            case 0x28898Cu: goto label_28898c;
            case 0x2889B0u: goto label_2889b0;
            case 0x2889D4u: goto label_2889d4;
            case 0x288A00u: goto label_288a00;
            case 0x288A10u: goto label_288a10;
            case 0x288A6Cu: goto label_288a6c;
            case 0x288A78u: goto label_288a78;
            case 0x288AD4u: goto label_288ad4;
            case 0x288AF0u: goto label_288af0;
            case 0x288B20u: goto label_288b20;
            case 0x288B2Cu: goto label_288b2c;
            case 0x288B48u: goto label_288b48;
            case 0x288B84u: goto label_288b84;
            case 0x288B88u: goto label_288b88;
            case 0x288B8Cu: goto label_288b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x288BB8u;
}
