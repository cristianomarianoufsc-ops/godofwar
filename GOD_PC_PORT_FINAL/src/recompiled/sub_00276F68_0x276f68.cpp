#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276F68
// Address: 0x276f68 - 0x277dd8
void sub_00276F68_0x276f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276F68_0x276f68");
#endif

    ctx->pc = 0x276f68u;

    // 0x276f68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x276f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x276f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276f70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x276f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x276f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x276f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276f7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x276f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276f80: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x276f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x276f84: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x276F84u;
    {
        const bool branch_taken_0x276f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276F84u;
            // 0x276f88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f84) {
            ctx->pc = 0x2770D0u;
            goto label_2770d0;
        }
    }
    ctx->pc = 0x276F8Cu;
    // 0x276f8c: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x276f8cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x276f90: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x276f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x276f94: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x276f94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x276f98: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x276f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x276f9c: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x276f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x276fa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x276fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x276fa4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x276fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x276fa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x276fa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x276facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x276fb0: 0x2643a640  addiu       $v1, $s2, -0x59C0
    ctx->pc = 0x276fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944320));
    // 0x276fb4: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x276fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x276fb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x276fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x276fbc: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x276FBCu;
    {
        const bool branch_taken_0x276fbc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x276FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FBCu;
            // 0x276fc0: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fbc) {
            ctx->pc = 0x277058u;
            goto label_277058;
        }
    }
    ctx->pc = 0x276FC4u;
    // 0x276fc4: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x276fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x276fc8: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x276fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x276fcc: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x276fccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x276fd0: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x276fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x276fd4: 0x0  nop
    ctx->pc = 0x276fd4u;
    // NOP
label_276fd8:
    // 0x276fd8: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x276fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x276fdc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x276fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x276fe0: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x276fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x276fe4: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x276fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x276fe8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276fec: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x276fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x276ff0: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x276ff0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x276ff4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x276ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x276ff8: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x276ffc: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x276ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x277000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x277000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x277004: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x277004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x277008: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x27700c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x27700cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x277010: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x277010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x277014: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x277014u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x277018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x277018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27701c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277020: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x277020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x277024: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x277024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x277028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x277028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x27702c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x277030: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x277030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x277034: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x277034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x277038: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x277038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x27703c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x27703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x277040: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x277040u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x277044: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x277044u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x277048: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x277048u;
    {
        const bool branch_taken_0x277048 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x27704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277048u;
            // 0x27704c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277048) {
            ctx->pc = 0x276FD8u;
            runtime->cooperativeGuestYield();
            goto label_276fd8;
        }
    }
    ctx->pc = 0x277050u;
    // 0x277050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277050u;
    {
        const bool branch_taken_0x277050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277050) {
            ctx->pc = 0x27705Cu;
            goto label_27705c;
        }
    }
    ctx->pc = 0x277058u;
label_277058:
    // 0x277058: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x277058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_27705c:
    // 0x27705c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27705Cu;
    SET_GPR_U32(ctx, 31, 0x277064u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277064u; }
        if (ctx->pc != 0x277064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277064u; }
        if (ctx->pc != 0x277064u) { return; }
    }
    ctx->pc = 0x277064u;
    // 0x277064: 0xf  sync
    ctx->pc = 0x277064u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x277068: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x277068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x27706c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x27706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x277070: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x277070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x277074: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x277074u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x277078: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x277078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27707c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x27707cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x277080: 0x264aa640  addiu       $t2, $s2, -0x59C0
    ctx->pc = 0x277080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944320));
    // 0x277084: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x277084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x277088: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x277088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27708c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x27708cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x277090: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x277090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x277094: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x277094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x277098: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x277098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27709c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x27709cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2770a0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x2770a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x2770a4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2770a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2770a8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x2770a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x2770ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2770acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2770b0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x2770b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x2770b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2770B4u;
    {
        const bool branch_taken_0x2770b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770B4u;
            // 0x2770b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770b4) {
            ctx->pc = 0x2770D0u;
            goto label_2770d0;
        }
    }
    ctx->pc = 0x2770BCu;
    // 0x2770bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2770bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2770c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2770c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2770c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2770c8: 0x80a64a0  j           func_299280
    ctx->pc = 0x2770C8u;
    ctx->pc = 0x2770CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2770C8u;
            // 0x2770cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_299280_0x299298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2770D0u;
label_2770d0:
    // 0x2770d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2770d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2770d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2770d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2770d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2770dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2770DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770DCu;
            // 0x2770e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2770E4u;
    // 0x2770e4: 0x0  nop
    ctx->pc = 0x2770e4u;
    // NOP
    // 0x2770e8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2770e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2770ec: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2770ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2770f0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2770f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2770f4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x2770f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2770f8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2770f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2770fc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2770fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277100: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x277100u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277104: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x277104u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x277108: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27710c:
    // 0x27710c: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x27710cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277110: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x277110u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277114: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277114u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277118: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x27711c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x27711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x277120: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x277120u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277124: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277124u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277128: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x277128u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x27712c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x27712cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x277130: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x277130u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x277134: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x277134u;
    {
        const bool branch_taken_0x277134 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277134u;
            // 0x277138: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277134) {
            ctx->pc = 0x27710Cu;
            runtime->cooperativeGuestYield();
            goto label_27710c;
        }
    }
    ctx->pc = 0x27713Cu;
    // 0x27713c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277140: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x277140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x277144: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277148: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x277148u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x27714c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27714Cu;
    {
        const bool branch_taken_0x27714c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27714Cu;
            // 0x277150: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27714c) {
            ctx->pc = 0x27710Cu;
            runtime->cooperativeGuestYield();
            goto label_27710c;
        }
    }
    ctx->pc = 0x277154u;
    // 0x277154: 0x3e00008  jr          $ra
    ctx->pc = 0x277154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27715Cu;
    // 0x27715c: 0x0  nop
    ctx->pc = 0x27715cu;
    // NOP
    // 0x277160: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x277160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277164: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x277164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277168: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x277168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27716c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x27716cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277170: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277174: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x277178: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x277178u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x27717c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x27717cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_277180:
    // 0x277180: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x277180u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277184: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x277184u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_277188:
    // 0x277188: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x277188u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27718c: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x27718cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x277190: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277190u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277194: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x277194u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277198: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x277198u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x27719c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x27719cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x2771a0: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x2771a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x2771a4: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x2771a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x2771a8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x2771a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2771ac: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x2771ACu;
    {
        const bool branch_taken_0x2771ac = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x2771B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771ACu;
            // 0x2771b0: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771ac) {
            ctx->pc = 0x277188u;
            runtime->cooperativeGuestYield();
            goto label_277188;
        }
    }
    ctx->pc = 0x2771B4u;
    // 0x2771b4: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x2771b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2771b8: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x2771b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x2771bc: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x2771bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2771c0: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x2771c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x2771c4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2771C4u;
    {
        const bool branch_taken_0x2771c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2771C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771C4u;
            // 0x2771c8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771c4) {
            ctx->pc = 0x277188u;
            runtime->cooperativeGuestYield();
            goto label_277188;
        }
    }
    ctx->pc = 0x2771CCu;
    // 0x2771cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2771ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2771d0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2771d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2771d4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x2771d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2771d8: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2771d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2771dc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2771dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2771e0: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2771e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x2771e4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2771E4u;
    {
        const bool branch_taken_0x2771e4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x2771E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2771E4u;
            // 0x2771e8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771e4) {
            ctx->pc = 0x277180u;
            runtime->cooperativeGuestYield();
            goto label_277180;
        }
    }
    ctx->pc = 0x2771ECu;
    // 0x2771ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2771ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2771F4u;
    // 0x2771f4: 0x0  nop
    ctx->pc = 0x2771f4u;
    // NOP
    // 0x2771f8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2771f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2771fc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2771fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277200: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277204: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x277204u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277208: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277208u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27720c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277210: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277210u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277214: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277214u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277218: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x277218u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27721c: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x27721cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x277220: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x277220u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277224: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277224u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277228: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x277228u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x27722c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x27722cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277230: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x277230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277234: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x277234u;
    {
        const bool branch_taken_0x277234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x277238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277234u;
            // 0x277238: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277234) {
            ctx->pc = 0x27728Cu;
            goto label_27728c;
        }
    }
    ctx->pc = 0x27723Cu;
label_27723c:
    // 0x27723c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x27723cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x277240: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x277240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x277244: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x277244u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277248: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x277248u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27724c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x27724cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277250: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x277250u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277254: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277254u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277258: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x277258u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x27725c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x27725cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x277260: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x277260u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x277264: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x277264u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277268: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x277268u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x27726c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x27726cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x277270: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x277270u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x277274: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x277274u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x277278: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x277278u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x27727c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x27727cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x277280: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x277280u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x277284: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x277284u;
    {
        const bool branch_taken_0x277284 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277284u;
            // 0x277288: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277284) {
            ctx->pc = 0x27723Cu;
            runtime->cooperativeGuestYield();
            goto label_27723c;
        }
    }
    ctx->pc = 0x27728Cu;
label_27728c:
    // 0x27728c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277290: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x277294: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277298: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x277298u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x27729c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x27729Cu;
    {
        const bool branch_taken_0x27729c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2772A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27729Cu;
            // 0x2772a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27729c) {
            ctx->pc = 0x27723Cu;
            runtime->cooperativeGuestYield();
            goto label_27723c;
        }
    }
    ctx->pc = 0x2772A4u;
    // 0x2772a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2772A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2772ACu;
    // 0x2772ac: 0x0  nop
    ctx->pc = 0x2772acu;
    // NOP
    // 0x2772b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2772b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2772b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2772b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2772bc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2772c0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x2772c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2772c4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x2772c4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2772c8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x2772c8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2772cc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2772ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2772d0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x2772d0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2772d4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x2772d4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_2772d8:
    // 0x2772d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2772d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2772dc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x2772dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2772e0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x2772e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2772e4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x2772e4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2772e8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x2772e8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x2772ec: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x2772ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x2772f0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2772F0u;
    {
        const bool branch_taken_0x2772f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2772F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2772F0u;
            // 0x2772f4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772f0) {
            ctx->pc = 0x277334u;
            goto label_277334;
        }
    }
    ctx->pc = 0x2772F8u;
label_2772f8:
    // 0x2772f8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2772f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2772fc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x2772fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x277300: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277300u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277304: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277304u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277308: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277308u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x27730c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x27730cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277310: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x277310u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277314: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277314u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277318: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x277318u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x27731c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x27731cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277320: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x277320u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x277324: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x277324u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277328: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x277328u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x27732c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x27732Cu;
    {
        const bool branch_taken_0x27732c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27732Cu;
            // 0x277330: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27732c) {
            ctx->pc = 0x2772F8u;
            runtime->cooperativeGuestYield();
            goto label_2772f8;
        }
    }
    ctx->pc = 0x277334u;
label_277334:
    // 0x277334: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x277334u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x277338: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x277338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x27733c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x27733cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277340: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x277340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x277344: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x277344u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x277348: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x277348u;
    {
        const bool branch_taken_0x277348 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x27734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277348u;
            // 0x27734c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277348) {
            ctx->pc = 0x2772F8u;
            runtime->cooperativeGuestYield();
            goto label_2772f8;
        }
    }
    ctx->pc = 0x277350u;
    // 0x277350: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277350u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277354: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277358: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27735c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x27735cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x277360: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x277360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x277364: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x277364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x277368: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x277368u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x27736c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x27736Cu;
    {
        const bool branch_taken_0x27736c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27736Cu;
            // 0x277370: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27736c) {
            ctx->pc = 0x2772D8u;
            runtime->cooperativeGuestYield();
            goto label_2772d8;
        }
    }
    ctx->pc = 0x277374u;
    // 0x277374: 0x3e00008  jr          $ra
    ctx->pc = 0x277374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27737Cu;
    // 0x27737c: 0x0  nop
    ctx->pc = 0x27737cu;
    // NOP
    // 0x277380: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277380u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277384: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277388: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27738c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x27738cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277390: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277390u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277394: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277398: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277398u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27739c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x27739cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2773a0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x2773a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2773a4: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x2773a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2773a8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2773a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2773ac:
    // 0x2773ac: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x2773acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2773b0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x2773b0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2773b4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x2773b4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x2773b8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x2773b8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x2773bc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x2773bcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x2773c0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x2773c0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2773c4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x2773c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2773c8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x2773c8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2773cc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x2773ccu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x2773d0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x2773d0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x2773d4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x2773d4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2773d8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x2773d8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x2773dc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x2773dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x2773e0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x2773e0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x2773e4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x2773e4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x2773e8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x2773e8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x2773ec: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x2773ecu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x2773f0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x2773f0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x2773f4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x2773f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x2773f8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x2773f8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x2773fc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2773fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x277400: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x277400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x277404: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x277404u;
    {
        const bool branch_taken_0x277404 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277404u;
            // 0x277408: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277404) {
            ctx->pc = 0x2773ACu;
            runtime->cooperativeGuestYield();
            goto label_2773ac;
        }
    }
    ctx->pc = 0x27740Cu;
    // 0x27740c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277410: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x277410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x277414: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277418: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x277418u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x27741c: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27741Cu;
    {
        const bool branch_taken_0x27741c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x277420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27741Cu;
            // 0x277420: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27741c) {
            ctx->pc = 0x2773ACu;
            runtime->cooperativeGuestYield();
            goto label_2773ac;
        }
    }
    ctx->pc = 0x277424u;
    // 0x277424: 0x3e00008  jr          $ra
    ctx->pc = 0x277424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27742Cu;
    // 0x27742c: 0x0  nop
    ctx->pc = 0x27742cu;
    // NOP
    // 0x277430: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277434: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277438: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27743c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x27743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277440: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277440u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277444: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277444u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277448: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277448u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x27744c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x27744cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277450: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x277450u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277454: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x277454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_277458:
    // 0x277458: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27745c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_277460:
    // 0x277460: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277460u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277464: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277464u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277468: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277468u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x27746c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x27746cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277470: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x277470u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277474: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x277474u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277478: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277478u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x27747c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x27747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x277480: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x277480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x277484: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277484u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277488: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x277488u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x27748c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x27748cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277490: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x277490u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277494: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x277494u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x277498: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x277498u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x27749c: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x27749cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2774a0: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2774A0u;
    {
        const bool branch_taken_0x2774a0 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2774A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2774A0u;
            // 0x2774a4: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774a0) {
            ctx->pc = 0x277460u;
            runtime->cooperativeGuestYield();
            goto label_277460;
        }
    }
    ctx->pc = 0x2774A8u;
    // 0x2774a8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x2774a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2774ac: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x2774acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2774b0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2774b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2774b4: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x2774b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x2774b8: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2774B8u;
    {
        const bool branch_taken_0x2774b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2774B8u;
            // 0x2774bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774b8) {
            ctx->pc = 0x277460u;
            runtime->cooperativeGuestYield();
            goto label_277460;
        }
    }
    ctx->pc = 0x2774C0u;
    // 0x2774c0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2774c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2774c4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2774c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2774c8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2774c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2774cc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x2774ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x2774d0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2774d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2774d4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2774d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2774d8: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2774D8u;
    {
        const bool branch_taken_0x2774d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2774D8u;
            // 0x2774dc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774d8) {
            ctx->pc = 0x277458u;
            runtime->cooperativeGuestYield();
            goto label_277458;
        }
    }
    ctx->pc = 0x2774E0u;
    // 0x2774e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2774E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2774E8u;
    // 0x2774e8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2774e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2774ec: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2774ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2774f0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2774f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2774f4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x2774f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2774f8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x2774f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2774fc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2774fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277500: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277500u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277504: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277504u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277508: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x277508u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x27750c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x27750cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277510: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x277510u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277514: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x277514u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277518: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277518u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x27751c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x27751cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277520: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x277520u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x277524: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277524u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277528: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x277528u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x27752c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x27752cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277530: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277530u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277534: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x277534u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277538: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x277538u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x27753c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x27753cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x277540: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x277540u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x277544: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x277544u;
    {
        const bool branch_taken_0x277544 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x277548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277544u;
            // 0x277548: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277544) {
            ctx->pc = 0x2775C0u;
            goto label_2775c0;
        }
    }
    ctx->pc = 0x27754Cu;
label_27754c:
    // 0x27754c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x27754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x277550: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x277550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x277554: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x277554u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277558: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x277558u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27755c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x27755cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277560: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x277560u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277564: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x277564u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x277568: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x277568u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x27756c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x27756cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277570: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x277570u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277574: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277574u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277578: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x277578u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x27757c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x27757cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x277580: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x277580u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x277584: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x277584u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x277588: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x277588u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x27758c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x27758cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x277590: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x277590u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x277594: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x277594u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277598: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x277598u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x27759c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x27759cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x2775a0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x2775a0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x2775a4: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x2775a4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x2775a8: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x2775a8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x2775ac: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x2775acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x2775b0: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x2775b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x2775b4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x2775b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x2775b8: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2775B8u;
    {
        const bool branch_taken_0x2775b8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2775BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2775B8u;
            // 0x2775bc: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775b8) {
            ctx->pc = 0x27754Cu;
            runtime->cooperativeGuestYield();
            goto label_27754c;
        }
    }
    ctx->pc = 0x2775C0u;
label_2775c0:
    // 0x2775c0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2775c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2775c4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x2775c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2775c8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2775c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2775cc: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x2775ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x2775d0: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2775D0u;
    {
        const bool branch_taken_0x2775d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2775D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2775D0u;
            // 0x2775d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775d0) {
            ctx->pc = 0x27754Cu;
            runtime->cooperativeGuestYield();
            goto label_27754c;
        }
    }
    ctx->pc = 0x2775D8u;
    // 0x2775d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2775D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2775E0u;
    // 0x2775e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2775e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2775e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2775e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2775e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2775e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2775ec: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x2775ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2775f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x2775f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2775f4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x2775f4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2775f8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x2775f8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x2775fc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x2775fcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x277600: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x277600u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277604: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x277604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277608:
    // 0x277608: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27760c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x27760cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277610: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277610u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277614: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277614u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277618: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277618u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x27761c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x27761cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277620: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x277620u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277624: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x277628: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x277628u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x27762c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x27762cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277630: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x277630u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277634: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277634u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277638: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x277638u;
    {
        const bool branch_taken_0x277638 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x27763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277638u;
            // 0x27763c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277638) {
            ctx->pc = 0x277694u;
            goto label_277694;
        }
    }
    ctx->pc = 0x277640u;
label_277640:
    // 0x277640: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x277640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x277644: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277644u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277648: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277648u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27764c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x27764cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277650: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277650u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277654: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x277654u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277658: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x277658u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x27765c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x27765cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277660: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x277664: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277664u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277668: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x277668u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x27766c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x27766cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277670: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x277670u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277674: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x277674u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x277678: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x277678u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x27767c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x27767cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x277680: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x277680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x277684: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x277684u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x277688: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x277688u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x27768c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27768Cu;
    {
        const bool branch_taken_0x27768c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27768Cu;
            // 0x277690: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27768c) {
            ctx->pc = 0x277640u;
            runtime->cooperativeGuestYield();
            goto label_277640;
        }
    }
    ctx->pc = 0x277694u;
label_277694:
    // 0x277694: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x277694u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x277698: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x277698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x27769c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x27769cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2776a0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x2776a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2776a4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x2776a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2776a8: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2776A8u;
    {
        const bool branch_taken_0x2776a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2776ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2776A8u;
            // 0x2776ac: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776a8) {
            ctx->pc = 0x277640u;
            runtime->cooperativeGuestYield();
            goto label_277640;
        }
    }
    ctx->pc = 0x2776B0u;
    // 0x2776b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2776b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2776b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2776b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2776b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2776b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2776bc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x2776bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x2776c0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2776c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2776c4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2776c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2776c8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x2776c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2776cc: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2776CCu;
    {
        const bool branch_taken_0x2776cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2776D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2776CCu;
            // 0x2776d0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776cc) {
            ctx->pc = 0x277608u;
            runtime->cooperativeGuestYield();
            goto label_277608;
        }
    }
    ctx->pc = 0x2776D4u;
    // 0x2776d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2776D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2776DCu;
    // 0x2776dc: 0x0  nop
    ctx->pc = 0x2776dcu;
    // NOP
    // 0x2776e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2776e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2776e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2776e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2776e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2776ec: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x2776ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2776f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x2776f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2776f4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2776f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2776f8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x2776f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2776fc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2776fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277700: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277700u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_277704:
    // 0x277704: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x277704u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277708: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x277708u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27770c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x27770cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277710: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x277710u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277714: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x277714u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277718: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x277718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x27771c: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x27771cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x277720: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x277720u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x277724: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x277724u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x277728: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277728u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27772c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x27772cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277730: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x277730u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x277734: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x277734u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277738: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x277738u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x27773c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x27773cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277740: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x277740u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x277744: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x277744u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x277748: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277748u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x27774c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x27774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x277750: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x277750u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x277754: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x277754u;
    {
        const bool branch_taken_0x277754 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277754u;
            // 0x277758: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277754) {
            ctx->pc = 0x277704u;
            runtime->cooperativeGuestYield();
            goto label_277704;
        }
    }
    ctx->pc = 0x27775Cu;
    // 0x27775c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277760: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x277760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x277764: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277768: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x277768u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x27776c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x27776Cu;
    {
        const bool branch_taken_0x27776c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x277770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27776Cu;
            // 0x277770: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27776c) {
            ctx->pc = 0x277704u;
            runtime->cooperativeGuestYield();
            goto label_277704;
        }
    }
    ctx->pc = 0x277774u;
    // 0x277774: 0x3e00008  jr          $ra
    ctx->pc = 0x277774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27777Cu;
    // 0x27777c: 0x0  nop
    ctx->pc = 0x27777cu;
    // NOP
    // 0x277780: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277780u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277784: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277788: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27778c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x27778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277790: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277790u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277794: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x277794u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277798: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x277798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x27779c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x27779cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_2777a0:
    // 0x2777a0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x2777a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2777a4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2777a8:
    // 0x2777a8: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x2777a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2777ac: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x2777acu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2777b0: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x2777b0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2777b4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x2777b4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x2777b8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x2777b8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x2777bc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x2777bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x2777c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2777c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2777c4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2777c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2777c8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x2777c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2777cc: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x2777ccu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2777d0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x2777d0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2777d4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x2777d4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x2777d8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x2777d8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x2777dc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x2777dcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2777e0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x2777e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2777e4: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2777E4u;
    {
        const bool branch_taken_0x2777e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2777E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2777E4u;
            // 0x2777e8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777e4) {
            ctx->pc = 0x2777A8u;
            runtime->cooperativeGuestYield();
            goto label_2777a8;
        }
    }
    ctx->pc = 0x2777ECu;
    // 0x2777ec: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x2777ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2777f0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x2777f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2777f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2777f8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x2777f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x2777fc: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2777FCu;
    {
        const bool branch_taken_0x2777fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2777FCu;
            // 0x277800: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777fc) {
            ctx->pc = 0x2777A8u;
            runtime->cooperativeGuestYield();
            goto label_2777a8;
        }
    }
    ctx->pc = 0x277804u;
    // 0x277804: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277808: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x27780c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277810: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x277810u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x277814: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x277814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x277818: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x277818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x27781c: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x27781Cu;
    {
        const bool branch_taken_0x27781c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x277820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27781Cu;
            // 0x277820: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27781c) {
            ctx->pc = 0x2777A0u;
            runtime->cooperativeGuestYield();
            goto label_2777a0;
        }
    }
    ctx->pc = 0x277824u;
    // 0x277824: 0x3e00008  jr          $ra
    ctx->pc = 0x277824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27782Cu;
    // 0x27782c: 0x0  nop
    ctx->pc = 0x27782cu;
    // NOP
    // 0x277830: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277830u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277834: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277838: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27783c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277840: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277840u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277844: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277848: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277848u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27784c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x27784cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277850: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x277850u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277854: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x277854u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277858: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277858u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x27785c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x27785cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277860: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x277860u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x277864: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277864u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277868: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x277868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27786c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x27786Cu;
    {
        const bool branch_taken_0x27786c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x277870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27786Cu;
            // 0x277870: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27786c) {
            ctx->pc = 0x2778ECu;
            goto label_2778ec;
        }
    }
    ctx->pc = 0x277874u;
label_277874:
    // 0x277874: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x277878: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x277878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x27787c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x27787cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277880: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x277880u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277884: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x277884u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277888: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x277888u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x27788c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x27788cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277890: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x277890u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277894: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x277894u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x277898: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x277898u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x27789c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x27789cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2778a0: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x2778a0u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x2778a4: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x2778a4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x2778a8: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x2778a8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x2778ac: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x2778acu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x2778b0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x2778b0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x2778b4: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x2778b4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2778b8: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x2778b8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2778bc: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x2778bcu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x2778c0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x2778c0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x2778c4: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x2778c4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x2778c8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x2778c8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2778cc: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x2778ccu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2778d0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x2778d0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x2778d4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x2778d4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x2778d8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x2778d8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2778dc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x2778dcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x2778e0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x2778e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x2778e4: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2778E4u;
    {
        const bool branch_taken_0x2778e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2778E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2778E4u;
            // 0x2778e8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778e4) {
            ctx->pc = 0x277874u;
            runtime->cooperativeGuestYield();
            goto label_277874;
        }
    }
    ctx->pc = 0x2778ECu;
label_2778ec:
    // 0x2778ec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2778ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2778f0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x2778f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2778f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2778f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2778f8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x2778f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x2778fc: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2778FCu;
    {
        const bool branch_taken_0x2778fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2778FCu;
            // 0x277900: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778fc) {
            ctx->pc = 0x277874u;
            runtime->cooperativeGuestYield();
            goto label_277874;
        }
    }
    ctx->pc = 0x277904u;
    // 0x277904: 0x3e00008  jr          $ra
    ctx->pc = 0x277904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27790Cu;
    // 0x27790c: 0x0  nop
    ctx->pc = 0x27790cu;
    // NOP
    // 0x277910: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277910u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277914: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277918: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27791c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x27791cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277920: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277924: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277924u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277928: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277928u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x27792c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x27792cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277930: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x277934: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277934u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_277938:
    // 0x277938: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27793c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x27793cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277940: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277940u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277944: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277944u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277948: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x277948u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x27794c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x27794cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x277950: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x277950u;
    {
        const bool branch_taken_0x277950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x277954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277950u;
            // 0x277954: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277950) {
            ctx->pc = 0x2779ACu;
            goto label_2779ac;
        }
    }
    ctx->pc = 0x277958u;
label_277958:
    // 0x277958: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x27795c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x27795cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x277960: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277960u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277964: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277964u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277968: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277968u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x27796c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x27796cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277970: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x277970u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277974: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277974u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277978: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x277978u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x27797c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x27797cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277980: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x277980u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x277984: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x277984u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277988: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x277988u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x27798c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x27798cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x277990: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x277990u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277994: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x277994u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x277998: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x277998u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x27799c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x27799cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x2779a0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x2779a0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x2779a4: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2779A4u;
    {
        const bool branch_taken_0x2779a4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2779A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779A4u;
            // 0x2779a8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779a4) {
            ctx->pc = 0x277958u;
            runtime->cooperativeGuestYield();
            goto label_277958;
        }
    }
    ctx->pc = 0x2779ACu;
label_2779ac:
    // 0x2779ac: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x2779acu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x2779b0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x2779b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2779b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2779b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2779b8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x2779b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2779bc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x2779bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2779c0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2779C0u;
    {
        const bool branch_taken_0x2779c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2779C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779C0u;
            // 0x2779c4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779c0) {
            ctx->pc = 0x277958u;
            runtime->cooperativeGuestYield();
            goto label_277958;
        }
    }
    ctx->pc = 0x2779C8u;
    // 0x2779c8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2779c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2779cc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2779ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2779d0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x2779d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2779d4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x2779d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x2779d8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2779d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2779dc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2779dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2779e0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x2779e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2779e4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2779E4u;
    {
        const bool branch_taken_0x2779e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2779E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779E4u;
            // 0x2779e8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779e4) {
            ctx->pc = 0x277938u;
            runtime->cooperativeGuestYield();
            goto label_277938;
        }
    }
    ctx->pc = 0x2779ECu;
    // 0x2779ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2779ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2779F4u;
    // 0x2779f4: 0x0  nop
    ctx->pc = 0x2779f4u;
    // NOP
    // 0x2779f8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x2779f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2779fc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2779fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277a00: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277a04: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x277a04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277a08: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277a08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277a0c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277a10: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277a10u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277a14: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277a14u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277a18: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x277a18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277a1c: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x277a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x277a20: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x277a20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_277a24:
    // 0x277a24: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x277a24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277a28: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x277a28u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277a2c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277a2cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277a30: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x277a30u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277a34: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x277a34u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x277a38: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x277a38u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277a3c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277a3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277a40: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x277a40u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277a44: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277a44u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277a48: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x277a48u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x277a4c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x277a4cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x277a50: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x277a50u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x277a54: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x277a54u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x277a58: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x277a58u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x277a5c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x277a5cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x277a60: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x277a60u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x277a64: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x277a64u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x277a68: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x277a68u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x277a6c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x277a6cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x277a70: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x277a70u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x277a74: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x277a74u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x277a78: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x277a78u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x277a7c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x277a7cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x277a80: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x277a80u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277a84: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x277a84u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x277a88: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x277a88u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x277a8c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x277a8cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x277a90: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x277a90u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277a94: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x277a94u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x277a98: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x277a98u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x277a9c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x277a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x277aa0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x277aa4: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x277AA4u;
    {
        const bool branch_taken_0x277aa4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277AA4u;
            // 0x277aa8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277aa4) {
            ctx->pc = 0x277A24u;
            runtime->cooperativeGuestYield();
            goto label_277a24;
        }
    }
    ctx->pc = 0x277AACu;
    // 0x277aac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x277aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277ab0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x277ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x277ab4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277ab8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x277ab8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x277abc: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x277ABCu;
    {
        const bool branch_taken_0x277abc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x277AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277ABCu;
            // 0x277ac0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277abc) {
            ctx->pc = 0x277A24u;
            runtime->cooperativeGuestYield();
            goto label_277a24;
        }
    }
    ctx->pc = 0x277AC4u;
    // 0x277ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x277AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277ACCu;
    // 0x277acc: 0x0  nop
    ctx->pc = 0x277accu;
    // NOP
    // 0x277ad0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277ad4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277ad8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277adc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x277adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277ae0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277ae4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277ae4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277ae8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277ae8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277aec: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x277aecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277af0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x277af0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277af4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x277af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_277af8:
    // 0x277af8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277afc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x277afcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_277b00:
    // 0x277b00: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277b00u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277b04: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277b04u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277b08: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277b08u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277b0c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277b0cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277b10: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x277b10u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277b14: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x277b14u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277b18: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277b18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277b1c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x277b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x277b20: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x277b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x277b24: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277b24u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277b28: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x277b28u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277b2c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277b2cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277b30: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x277b30u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277b34: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x277b34u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x277b38: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x277b38u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277b3c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x277b3cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x277b40: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x277b40u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x277b44: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x277b44u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277b48: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x277b48u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x277b4c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x277b4cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x277b50: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x277b50u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277b54: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x277b54u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x277b58: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x277B58u;
    {
        const bool branch_taken_0x277b58 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B58u;
            // 0x277b5c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b58) {
            ctx->pc = 0x277B00u;
            runtime->cooperativeGuestYield();
            goto label_277b00;
        }
    }
    ctx->pc = 0x277B60u;
    // 0x277b60: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x277b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x277b64: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x277b68: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277b6c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x277b6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x277b70: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x277B70u;
    {
        const bool branch_taken_0x277b70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B70u;
            // 0x277b74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b70) {
            ctx->pc = 0x277B00u;
            runtime->cooperativeGuestYield();
            goto label_277b00;
        }
    }
    ctx->pc = 0x277B78u;
    // 0x277b78: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277b78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277b7c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277b80: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277b84: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x277b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x277b88: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x277b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x277b8c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x277b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x277b90: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x277B90u;
    {
        const bool branch_taken_0x277b90 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x277B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B90u;
            // 0x277b94: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b90) {
            ctx->pc = 0x277AF8u;
            runtime->cooperativeGuestYield();
            goto label_277af8;
        }
    }
    ctx->pc = 0x277B98u;
    // 0x277b98: 0x3e00008  jr          $ra
    ctx->pc = 0x277B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277BA0u;
    // 0x277ba0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277ba4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277ba8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277bac: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x277bacu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277bb0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277bb4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277bb8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277bb8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277bbc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277bbcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277bc0: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x277bc0u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x277bc4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x277bc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277bc8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x277bc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277bcc: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x277bccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277bd0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277bd0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277bd4: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x277bd4u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277bd8: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x277bd8u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x277bdc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277bdcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277be0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x277be0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277be4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x277be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x277be8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x277be8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277bec: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x277becu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277bf0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x277bf0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x277bf4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x277bf4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x277bf8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x277bf8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x277bfc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x277BFCu;
    {
        const bool branch_taken_0x277bfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277BFCu;
            // 0x277c00: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bfc) {
            ctx->pc = 0x277CA0u;
            goto label_277ca0;
        }
    }
    ctx->pc = 0x277C04u;
label_277c04:
    // 0x277c04: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x277c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x277c08: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x277c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x277c0c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x277c0cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277c10: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x277c10u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277c14: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277c14u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277c18: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x277c18u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x277c1c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x277c1cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x277c20: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x277c20u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277c24: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277c24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277c28: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x277c28u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x277c2c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x277c2cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277c30: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x277c30u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x277c34: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x277c34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x277c38: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x277c38u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x277c3c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x277c3cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x277c40: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x277c40u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x277c44: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x277c44u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x277c48: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x277c48u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x277c4c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x277c4cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277c50: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x277c50u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x277c54: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x277c54u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x277c58: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x277c58u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x277c5c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x277c5cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x277c60: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x277c60u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x277c64: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x277c64u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x277c68: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x277c68u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x277c6c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x277c6cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x277c70: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x277c70u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x277c74: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277c74u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277c78: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277c78u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277c7c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x277c7cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x277c80: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x277c80u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277c84: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x277c84u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x277c88: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x277c88u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277c8c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x277c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x277c90: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x277c90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x277c94: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x277c94u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x277c98: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x277C98u;
    {
        const bool branch_taken_0x277c98 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C98u;
            // 0x277c9c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c98) {
            ctx->pc = 0x277C04u;
            runtime->cooperativeGuestYield();
            goto label_277c04;
        }
    }
    ctx->pc = 0x277CA0u;
label_277ca0:
    // 0x277ca0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x277ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277ca4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x277ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x277ca8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277cac: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x277cacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x277cb0: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x277CB0u;
    {
        const bool branch_taken_0x277cb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277CB0u;
            // 0x277cb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277cb0) {
            ctx->pc = 0x277C04u;
            runtime->cooperativeGuestYield();
            goto label_277c04;
        }
    }
    ctx->pc = 0x277CB8u;
    // 0x277cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x277CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277CC0u;
    // 0x277cc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277cc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277cc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277cc8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277ccc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x277cd0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x277cd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x277cd4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x277cd4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277cd8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x277cd8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x277cdc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x277cdcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x277ce0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x277ce0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277ce4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x277ce4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277ce8:
    // 0x277ce8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x277ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x277cec: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277cecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277cf0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277cf0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277cf4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277cf4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277cf8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277cf8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277cfc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x277cfcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277d00: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x277d00u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277d04: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x277d08: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x277d08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x277d0c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277d0cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277d10: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x277d10u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277d14: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277d14u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277d18: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x277D18u;
    {
        const bool branch_taken_0x277d18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x277D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277D18u;
            // 0x277d1c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d18) {
            ctx->pc = 0x277D8Cu;
            goto label_277d8c;
        }
    }
    ctx->pc = 0x277D20u;
label_277d20:
    // 0x277d20: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x277d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x277d24: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x277d24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x277d28: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x277d28u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277d2c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x277d2cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277d30: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x277d30u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277d34: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x277d34u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277d38: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x277d38u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x277d3c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x277d3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x277d40: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x277d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x277d44: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x277d44u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x277d48: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x277d48u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x277d4c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x277d4cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x277d50: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x277d50u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x277d54: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x277d54u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x277d58: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x277d58u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277d5c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x277d5cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x277d60: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x277d60u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x277d64: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x277d64u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x277d68: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x277d68u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x277d6c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x277d6cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x277d70: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x277d70u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x277d74: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x277d74u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x277d78: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x277d78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x277d7c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x277d7cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x277d80: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x277d80u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x277d84: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x277D84u;
    {
        const bool branch_taken_0x277d84 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x277D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277D84u;
            // 0x277d88: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277d84) {
            ctx->pc = 0x277D20u;
            runtime->cooperativeGuestYield();
            goto label_277d20;
        }
    }
    ctx->pc = 0x277D8Cu;
label_277d8c:
    // 0x277d8c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x277d8cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x277d90: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x277d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x277d94: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x277d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x277d98: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x277d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x277d9c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x277d9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x277da0: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x277DA0u;
    {
        const bool branch_taken_0x277da0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277DA0u;
            // 0x277da4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277da0) {
            ctx->pc = 0x277D20u;
            runtime->cooperativeGuestYield();
            goto label_277d20;
        }
    }
    ctx->pc = 0x277DA8u;
    // 0x277da8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x277da8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x277dac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x277dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x277db0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x277db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x277db4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x277db4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x277db8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x277db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x277dbc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x277dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x277dc0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x277dc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x277dc4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x277DC4u;
    {
        const bool branch_taken_0x277dc4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x277DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277DC4u;
            // 0x277dc8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277dc4) {
            ctx->pc = 0x277CE8u;
            runtime->cooperativeGuestYield();
            goto label_277ce8;
        }
    }
    ctx->pc = 0x277DCCu;
    // 0x277dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x277DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FD8u: goto label_276fd8;
            case 0x277058u: goto label_277058;
            case 0x27705Cu: goto label_27705c;
            case 0x2770D0u: goto label_2770d0;
            case 0x27710Cu: goto label_27710c;
            case 0x277180u: goto label_277180;
            case 0x277188u: goto label_277188;
            case 0x27723Cu: goto label_27723c;
            case 0x27728Cu: goto label_27728c;
            case 0x2772D8u: goto label_2772d8;
            case 0x2772F8u: goto label_2772f8;
            case 0x277334u: goto label_277334;
            case 0x2773ACu: goto label_2773ac;
            case 0x277458u: goto label_277458;
            case 0x277460u: goto label_277460;
            case 0x27754Cu: goto label_27754c;
            case 0x2775C0u: goto label_2775c0;
            case 0x277608u: goto label_277608;
            case 0x277640u: goto label_277640;
            case 0x277694u: goto label_277694;
            case 0x277704u: goto label_277704;
            case 0x2777A0u: goto label_2777a0;
            case 0x2777A8u: goto label_2777a8;
            case 0x277874u: goto label_277874;
            case 0x2778ECu: goto label_2778ec;
            case 0x277938u: goto label_277938;
            case 0x277958u: goto label_277958;
            case 0x2779ACu: goto label_2779ac;
            case 0x277A24u: goto label_277a24;
            case 0x277AF8u: goto label_277af8;
            case 0x277B00u: goto label_277b00;
            case 0x277C04u: goto label_277c04;
            case 0x277CA0u: goto label_277ca0;
            case 0x277CE8u: goto label_277ce8;
            case 0x277D20u: goto label_277d20;
            case 0x277D8Cu: goto label_277d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277DD4u;
    // 0x277dd4: 0x0  nop
    ctx->pc = 0x277dd4u;
    // NOP
}
