#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274F10
// Address: 0x274f10 - 0x275398
void sub_00274F10_0x274f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274F10_0x274f10");
#endif

    ctx->pc = 0x274f10u;

    // 0x274f10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x274f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x274f14: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x274f14u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f18: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x274f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x274f1c: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x274f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x274f20: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x274f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x274f24: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x274f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274f28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x274f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x274f2c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x274f2cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f30: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x274f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x274f34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x274f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x274f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x274f3c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x274f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f40: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x274f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x274f44: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x274f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f48: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x274f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x274f4c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x274f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x274f50: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x274f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x274f54: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x274f54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x274f58: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x274f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x274f5c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x274f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274f60: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274f64: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x274f68: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x274f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x274f6c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x274f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x274f70: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x274f70u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x274f74: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x274f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x274f78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274f7c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x274f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x274f80: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x274f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x274f84: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x274f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274f88: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x274f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x274f8c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x274f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x274f90: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x274f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274f94: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x274f94u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x274f98: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x274f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x274f9c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x274f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x274fa0: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x274fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x274fa4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x274fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x274fa8: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x274fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274fac: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x274FACu;
    {
        const bool branch_taken_0x274fac = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x274FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274FACu;
            // 0x274fb0: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fac) {
            ctx->pc = 0x274FC4u;
            goto label_274fc4;
        }
    }
    ctx->pc = 0x274FB4u;
    // 0x274fb4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x274fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x274fb8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x274fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x274fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274FBCu;
    {
        const bool branch_taken_0x274fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274FBCu;
            // 0x274fc0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fbc) {
            ctx->pc = 0x274FCCu;
            goto label_274fcc;
        }
    }
    ctx->pc = 0x274FC4u;
label_274fc4:
    // 0x274fc4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x274fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x274fc8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_274fcc:
    // 0x274fcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x274fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x274fd0: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x274fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274fd4: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x274fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x274fd8: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x274fd8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x274fdc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x274fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x274fe0: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x274fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x274fe4: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x274fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274fe8: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x274fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274fec: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x274fecu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x274ff0: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x274ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x274ff4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x274ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x274ff8: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x274ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x274ffc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x274ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275000: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x275000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x275004: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x275004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x275008: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x275008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x27500c: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x27500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x275010: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x275014: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x275014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x275018: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x275018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x27501c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x275020: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x275020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275024: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x275024u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x275028: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x275028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x27502c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x27502cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x275030: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x275030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275034: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x275034u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x275038: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x275038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x27503c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x27503cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x275040: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x275040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x275044: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x275044u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x275048: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x275048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27504c: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x27504cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x275050: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x275050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x275054: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x275054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x275058: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x275058u;
    {
        const bool branch_taken_0x275058 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x27505Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275058u;
            // 0x27505c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275058) {
            ctx->pc = 0x275098u;
            goto label_275098;
        }
    }
    ctx->pc = 0x275060u;
    // 0x275060: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x275060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x275064: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x275064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x275068: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x275068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27506c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x27506Cu;
    {
        const bool branch_taken_0x27506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27506c) {
            ctx->pc = 0x275070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27506Cu;
            // 0x275070: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2750CCu;
            goto label_2750cc;
        }
    }
    ctx->pc = 0x275074u;
    // 0x275074: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x275078: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x275078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x27507c: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x27507cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x275080: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x275080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275084: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x275084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x275088: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x275088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x27508c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x27508cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x275090: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x275090u;
    {
        const bool branch_taken_0x275090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275090u;
            // 0x275094: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275090) {
            ctx->pc = 0x2750D0u;
            goto label_2750d0;
        }
    }
    ctx->pc = 0x275098u;
label_275098:
    // 0x275098: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x27509c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x27509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2750a0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x2750a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2750a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2750A4u;
    {
        const bool branch_taken_0x2750a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2750a4) {
            ctx->pc = 0x2750A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2750A4u;
            // 0x2750a8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2750CCu;
            goto label_2750cc;
        }
    }
    ctx->pc = 0x2750ACu;
    // 0x2750ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2750acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2750b0: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x2750b4: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x2750b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2750b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2750b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2750bc: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x2750bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2750c0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x2750c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x2750c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2750C4u;
    {
        const bool branch_taken_0x2750c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2750C4u;
            // 0x2750c8: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750c4) {
            ctx->pc = 0x2750D0u;
            goto label_2750d0;
        }
    }
    ctx->pc = 0x2750CCu;
label_2750cc:
    // 0x2750cc: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x2750ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_2750d0:
    // 0x2750d0: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x2750d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x2750d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2750D4u;
    {
        const bool branch_taken_0x2750d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2750D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2750D4u;
            // 0x2750d8: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750d4) {
            ctx->pc = 0x275118u;
            goto label_275118;
        }
    }
    ctx->pc = 0x2750DCu;
    // 0x2750dc: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x2750dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x2750e0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2750e4: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x2750e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x2750e8: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x2750e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2750ec: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x2750ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2750f0: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x2750f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2750f4: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x2750f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2750f8: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x2750f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x2750fc: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x275100: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x275100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275104: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x275108: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x275108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x27510c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x27510cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x275110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x275110u;
    {
        const bool branch_taken_0x275110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275110u;
            // 0x275114: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275110) {
            ctx->pc = 0x27512Cu;
            goto label_27512c;
        }
    }
    ctx->pc = 0x275118u;
label_275118:
    // 0x275118: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x275118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27511c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x275120: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x275124: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x275124u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x275128: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x275128u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_27512c:
    // 0x27512c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x27512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x275130: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x275130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x275134: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x275134u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x275138: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x275138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27513c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27513cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x275140: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x275140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x275144: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x275144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x275148: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x275148u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x27514c: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x27514cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x275150: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x275150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x275154: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x275154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x275158: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x275158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x27515c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x27515cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x275160: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x275160u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x275164: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x275164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x275168: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x275168u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x27516c: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x27516cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x275170: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x275170u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x275174: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x275174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x275178: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x275178u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x27517c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x27517cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x275180: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x275180u;
    {
        const bool branch_taken_0x275180 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x275184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275180u;
            // 0x275184: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275180) {
            ctx->pc = 0x2751A4u;
            goto label_2751a4;
        }
    }
    ctx->pc = 0x275188u;
    // 0x275188: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x275188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x27518c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x27518cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x275190: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x275190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x275194: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x275194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x275198: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x275198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27519c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27519Cu;
    {
        const bool branch_taken_0x27519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27519Cu;
            // 0x2751a0: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27519c) {
            ctx->pc = 0x2751B8u;
            goto label_2751b8;
        }
    }
    ctx->pc = 0x2751A4u;
label_2751a4:
    // 0x2751a4: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x2751a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x2751a8: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x2751a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x2751ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2751acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2751b0: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x2751b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2751b4: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x2751b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2751b8:
    // 0x2751b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2751b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2751bc: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x2751bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x2751c0: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x2751c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x2751c4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2751c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2751c8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2751c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2751cc: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x2751ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2751d0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x2751d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2751d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2751d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2751d8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2751d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2751dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2751dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2751e0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2751e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2751e4: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x2751e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2751e8: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x2751e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x2751ec: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x2751ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2751f0: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2751f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2751f4: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x2751F4u;
    {
        const bool branch_taken_0x2751f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2751F4u;
            // 0x2751f8: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751f4) {
            ctx->pc = 0x275234u;
            goto label_275234;
        }
    }
    ctx->pc = 0x2751FCu;
    // 0x2751fc: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x2751fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x275200: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x275200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x275204: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x275204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x275208: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x275208u;
    {
        const bool branch_taken_0x275208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275208) {
            ctx->pc = 0x27520Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275208u;
            // 0x27520c: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x275268u;
            goto label_275268;
        }
    }
    ctx->pc = 0x275210u;
    // 0x275210: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x275210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x275214: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x275214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x275218: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x275218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x27521c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27521cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x275220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x275224: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x275224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x275228: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x275228u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x27522c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27522Cu;
    {
        const bool branch_taken_0x27522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27522Cu;
            // 0x275230: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27522c) {
            ctx->pc = 0x27526Cu;
            goto label_27526c;
        }
    }
    ctx->pc = 0x275234u;
label_275234:
    // 0x275234: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x275234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x275238: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x275238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x27523c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x27523cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x275240: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x275240u;
    {
        const bool branch_taken_0x275240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275240) {
            ctx->pc = 0x275244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275240u;
            // 0x275244: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x275268u;
            goto label_275268;
        }
    }
    ctx->pc = 0x275248u;
    // 0x275248: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x275248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27524c: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x27524cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x275250: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x275250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x275254: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x275254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275258: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x275258u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x27525c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x27525cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x275260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275260u;
    {
        const bool branch_taken_0x275260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275260u;
            // 0x275264: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275260) {
            ctx->pc = 0x27526Cu;
            goto label_27526c;
        }
    }
    ctx->pc = 0x275268u;
label_275268:
    // 0x275268: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x275268u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_27526c:
    // 0x27526c: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x27526cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x275270: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x275270u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x275274: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x275274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x275278: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x275278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x27527c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275280: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x275284: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x275284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x275288: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x275288u;
    {
        const bool branch_taken_0x275288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275288u;
            // 0x27528c: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275288) {
            ctx->pc = 0x2752B0u;
            goto label_2752b0;
        }
    }
    ctx->pc = 0x275290u;
    // 0x275290: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x275290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x275294: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x275294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x275298: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x275298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x27529c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2752a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2752a4: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x2752a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x2752a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2752A8u;
    {
        const bool branch_taken_0x2752a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2752A8u;
            // 0x2752ac: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752a8) {
            ctx->pc = 0x2752F0u;
            goto label_2752f0;
        }
    }
    ctx->pc = 0x2752B0u;
label_2752b0:
    // 0x2752b0: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x2752b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2752b4: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x2752b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2752b8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2752b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2752bc: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x2752bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x2752c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2752C0u;
    {
        const bool branch_taken_0x2752c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2752C0u;
            // 0x2752c4: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752c0) {
            ctx->pc = 0x2752D4u;
            goto label_2752d4;
        }
    }
    ctx->pc = 0x2752C8u;
    // 0x2752c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2752c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2752cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2752CCu;
    {
        const bool branch_taken_0x2752cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2752CCu;
            // 0x2752d0: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752cc) {
            ctx->pc = 0x2752E0u;
            goto label_2752e0;
        }
    }
    ctx->pc = 0x2752D4u;
label_2752d4:
    // 0x2752d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2752d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2752d8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2752d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2752dc: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x2752dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_2752e0:
    // 0x2752e0: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x2752e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x2752e4: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2752e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x2752e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2752e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2752ec: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x2752ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_2752f0:
    // 0x2752f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2752f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2752f4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2752f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2752f8: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x2752f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x2752fc: 0x24841540  addiu       $a0, $a0, 0x1540
    ctx->pc = 0x2752fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5440));
    // 0x275300: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x275300u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x275304: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x275304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x275308: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x275308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x27530c: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x27530cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x275310: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x275314: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x275314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x275318: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x275318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27531c: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x27531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x275320: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x275320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x275324: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x275324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x275328: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x275328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27532c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x27532cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x275330: 0x24421560  addiu       $v0, $v0, 0x1560
    ctx->pc = 0x275330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5472));
    // 0x275334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x275334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275338: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x275338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x27533c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275340: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x275340u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275348: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x275348u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27534c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x27534cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x275350: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x275350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275354: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x275354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x275358: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x275358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27535c: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x27535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x275360: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x275360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x275364: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x275364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x275368: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x275368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27536c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x275370: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x275370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275374: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x275374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275378: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x275378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27537c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27537cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275380: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x275380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275384: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x275384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275388: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x275388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x27538c: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x27538cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x275390: 0x3e00008  jr          $ra
    ctx->pc = 0x275390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275390u;
            // 0x275394: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274FC4u: goto label_274fc4;
            case 0x274FCCu: goto label_274fcc;
            case 0x275098u: goto label_275098;
            case 0x2750CCu: goto label_2750cc;
            case 0x2750D0u: goto label_2750d0;
            case 0x275118u: goto label_275118;
            case 0x27512Cu: goto label_27512c;
            case 0x2751A4u: goto label_2751a4;
            case 0x2751B8u: goto label_2751b8;
            case 0x275234u: goto label_275234;
            case 0x275268u: goto label_275268;
            case 0x27526Cu: goto label_27526c;
            case 0x2752B0u: goto label_2752b0;
            case 0x2752D4u: goto label_2752d4;
            case 0x2752E0u: goto label_2752e0;
            case 0x2752F0u: goto label_2752f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275398u;
}
